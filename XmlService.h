#pragma once
#include "Service.h"
#include "pugixml-1.13/src/pugixml.hpp"
#include "pugixml-1.13/src/pugixml.cpp"

using namespace std;
using namespace pugi;

class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};
