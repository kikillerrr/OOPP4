/**
 * @file Thermostat.h
 * @brief Объявление класса Thermostat.
 */
#pragma once
#include "PoweredDevice.h"

using namespace std;

/**
 * @brief Умный термостат с температурой и режимом.
 * @details Использует стандартную мощность PoweredDevice::getPowerUsage().
 */
class Thermostat : public PoweredDevice {
    double temperature;
    std::string mode;
    double temperature; ///< Заданная температура в градусах Цельсия.
    string mode; ///< Название режима термостата.
public:
    Thermostat(const std::string& name, double power, double temperature, const std::string& mode);
    /**
     * @brief Создаёт выключенный термостат.
     * @param name Имя термостата.
     * @param power Мощность в ваттах.
     * @param temperature Заданная температура в градусах Цельсия.
     * @param mode Название режима.
     * @throws invalid_argument Если мощность недопустима.
     */
    Thermostat(const string& name, double power, double temperature, const string& mode);
    /**
     * @brief Создаёт независимую копию состояния и параметров.
     * @param other Копируемый объект.
     */
    Thermostat(const Thermostat& other);
    /**
     * @brief Присваивает состояние и параметры другого объекта.
     * @param other Объект-источник.
     * @return Ссылка на текущий объект.
     * @details Самоприсваивание сохраняет объект без изменений.
     */
    Thermostat& operator=(const Thermostat& other);
    /**
     * @brief Изменяет заданную температуру.
     * @param value Температура в градусах Цельсия.
     */
    void setTemperature(double value);
    std::string getStatus() const override;
    /**
     * @brief Формирует строку с типом, состоянием и параметрами устройства.
     * @return Строка состояния.
     */
    string getStatus() const override;
};