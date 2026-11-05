/**
 * @file SmartDevice.cpp
 * @brief Реализация класса SmartDevice.
 */
#include "SmartDevice.h"

SmartDevice::SmartDevice(const std::string& name) : name(name), on(false) {}
using namespace std;

SmartDevice::SmartDevice(const string& name) : name(name), on(false) {}
SmartDevice::SmartDevice(const SmartDevice& other) : name(other.name), on(other.on) {}
SmartDevice& SmartDevice::operator=(const SmartDevice& other) {
    if (this != &other) {
@@ -9,9 +15,10 @@ SmartDevice& SmartDevice::operator=(const SmartDevice& other) {
    }
    return *this;
}

SmartDevice::~SmartDevice() = default;
bool SmartDevice::isOn() const { return on; }

std::ostream& operator<<(std::ostream& out, const SmartDevice& device) {
ostream& operator<<(ostream& out, const SmartDevice& device) {
    return out << device.name << ": " << device.getStatus();
}