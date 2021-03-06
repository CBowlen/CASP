/*  
 *  CASP_Plugin.h
 *  Defines the base class for a Plugin Module
 *  
 *  Created: 3/24/2017 by Ryan Tedeschi
 */ 

#ifndef CASP_PLUGIN_H
#define CASP_PLUGIN_H

#include <algorithm>
#include <string>
#include <unordered_map>
#include "../Markup/Markup.h"

using namespace std;

class CASP_Plugin {
    public:
        // TODO change void to some module return datatype
        virtual void Execute(Markup*, string*, int) = 0;
        // Markup data, function args, function arg count
};

// extern unordered_map<string, CASP_Plugin*> plugins;
string RegisterPlugin(string, CASP_Plugin*);
CASP_Plugin* GetModule(string);
bool ModuleExists(string);

#endif