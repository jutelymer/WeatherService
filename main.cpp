#include "JsonService.h"
#include "XmlService.h"  // ��������� �� feature-xml

int main() {
    JsonService js;
    Weather w1 = js.getWeather("weather.json");

    XmlService xs;  // ��������� �� feature-xml
    Weather w2 = xs.getWeather("weather.xml");  // ��������� �� feature-xml

    return 0;
}