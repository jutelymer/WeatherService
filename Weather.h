#pragma once
#include <string>

class Weather {
public:
    std::string city;        // �������� ������
    double lon;              // �������
    double lat;              // ������
    double temperature;      // �����������
    std::string weather;     // �������� ������
    double windSpeed;        // �������� �����
    int clouds;              // ����������

    Weather(std::string c, double lo, double la, double t, std::string w, double ws, int cl)
        : city(c), lon(lo), lat(la), temperature(t), weather(w), windSpeed(ws), clouds(cl) {
    }
};