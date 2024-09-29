#ifndef BED2IGVPLUGIN_H
#define BED2IGVPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class BED2IGVPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "BED2IGV";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
