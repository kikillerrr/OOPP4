/**
 * @file Thermostat.cpp
 * @brief Реализация класса Thermostat.
 */
#include "Thermostat.h"
#include <sstream>

Thermostat::Thermostat(const std::string& name, double power, double temperature,
                       const std::string& mode)
    : PoweredDevice(name, power), temperature(temperature), mode(mode) {}
Thermostat::Thermostat(const Thermostat& other)
    : PoweredDevice(other), temperature(other.temperature), mode(other.mode) {}
using namespace std;

Thermostat::Thermostat(const string& name, double power, double temperature, const string& mode): PoweredDevice(name, power), temperature(temperature), mode(mode) {}
Thermostat::Thermostat(const Thermostat& other): PoweredDevice(other), temperature(other.temperature), mode(other.mode) {}
Thermostat& Thermostat::operator=(const Thermostat& other) {
    if (this != &other) {
        PoweredDevice::operator=(other);
@@ -14,10 +17,10 @@ Thermostat& Thermostat::operator=(const Thermostat& other) {
    }
    return *this;
}

void Thermostat::setTemperature(double value) { temperature = value; }
std::string Thermostat::getStatus() const {
    std::ostringstream out;
    out << "Thermostat " << (on ? "ON" : "OFF") << ", " << powerConsumption
        << " W, temperature=" << temperature << ", mode=" << mode;
string Thermostat::getStatus() const {
    ostringstream out;
    out << "Thermostat " << (on ? "ON" : "OFF") << ", " << powerConsumption << " W, temperature=" << temperature << ", mode=" << mode;
    return out.str();
}