
#include "XmlService.h"
#include <iostream>
#include "JsonService.h"

int main()
{
    
    JsonService js;
    Weather w = js.getWeather("weather.json");
    std::cout << w;



    XmlService xs;
    Weather s = xs.getWeather("weather.xml");
    cout << s;

}

