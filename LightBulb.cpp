/**
 * @file LightBulb.cpp
 * @brief Реализация класса LightBulb.
 */
#include "LightBulb.h"
#include <sstream>
#include <stdexcept>

LightBulb::LightBulb(const std::string& name, double power, int brightness,
                     const std::string& color)
    : PoweredDevice(name, power), brightness(0), color(color) {
using namespace std;

LightBulb::LightBulb(const string& name, double power, int brightness, const string& color): PoweredDevice(name, power), brightness(0), color(color) {
    setBrightness(brightness);
}
LightBulb::LightBulb(const LightBulb& other)
    : PoweredDevice(other), brightness(other.brightness), color(other.color) {}

LightBulb::LightBulb(const LightBulb& other): PoweredDevice(other), brightness(other.brightness), color(other.color) {}
LightBulb& LightBulb::operator=(const LightBulb& other) {
    if (this != &other) {
        PoweredDevice::operator=(other);
@@ -17,20 +21,27 @@ LightBulb& LightBulb::operator=(const LightBulb& other) {
    }
    return *this;
}

void LightBulb::setBrightness(int value) {
    if (value < 0 || value > 100)
        throw std::invalid_argument("Brightness must be between 0 and 100");
    if (value < 0 || value > 100) {
        throw invalid_argument("Brightness must be between 0 and 100");
    }
    const bool wasOn = on;
    if (wasOn) turnOff();
    if (wasOn) {
        turnOff();
    }
    brightness = value;
    if (wasOn) turnOn();
    if (wasOn) {
        turnOn();
    }
}

double LightBulb::getPowerUsage() const {
    return PoweredDevice::getPowerUsage() * (brightness / 100.0);
}
std::string LightBulb::getStatus() const {
    std::ostringstream out;
    out << "LightBulb " << (on ? "ON" : "OFF") << ", " << powerConsumption
        << " W, brightness=" << brightness << ", color=" << color;

string LightBulb::getStatus() const {
    ostringstream out;
    out << "LightBulb " << (on ? "ON" : "OFF") << ", " << powerConsumption << " W, brightness=" << brightness << ", color=" << color;
    return out.str();
}