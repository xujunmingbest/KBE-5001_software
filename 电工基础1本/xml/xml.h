#pragma once
#include <stdio.h>  
#include "tinyxml.h"  
#include <iostream>  
#include <cstring>  
using namespace std;

struct ConfigXml {
	string DesMac;
	string RepeaterPort;
	string RepeaterIp;
	string SerialHandle;
	string SerialControlSource;
	string GradeIp;
	string GradePort;
};


extern ConfigXml configXml;
bool writeXmlConfigFile(ConfigXml &configXml);
bool readXmlConfigFile(ConfigXml &configXml);