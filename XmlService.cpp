#include "XmlService.h"
#include "pugixml.hpp"

using namespace pugi;

Weather XmlService::getWeather(std::string s) {
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());
    if (!result)
        throw std::exception("������ �������� XML");

    xml_node node = doc.child("current");
    std::string city = node.child("city").attribute("name").as_string();
    double lon = node.child("city").child("coord").attribute("lon").as_double();
    double lat = node.child("city").child("coord").attribute("lat").as_double();
    double temperature = node.child("temperature").attribute("value").as_double();
    std::string weather = node.child("weather").attribute("value").as_string();
    double windSpeed = node.child("wind").child("speed").attribute("value").as_double();
    int clouds = node.child("clouds").attribute("value").as_int();

    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}