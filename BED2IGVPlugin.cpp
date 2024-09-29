#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BED2IGVPlugin.h"

void BED2IGVPlugin::input(std::string file) {
 inputfile = file;
}

void BED2IGVPlugin::run() {}

void BED2IGVPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "bedToIgv -i";
myCommand += " ";
myCommand += inputfile + " >& "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<BED2IGVPlugin> BED2IGVPluginProxy = PluginProxy<BED2IGVPlugin>("BED2IGV", PluginManager::getInstance());
