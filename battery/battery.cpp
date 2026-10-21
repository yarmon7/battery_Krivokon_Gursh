#include "battery.h"

#include <iostream>

Battery::Battery()
    : cell_count(4)
    , voltage(0.0)
    , capacity_mAh(5000.0)
    , consumed_capacity_mAh(0.0)
{
}

Battery::Battery(int cells)
    : cell_count(cells)
    , voltage(0.0)
    , capacity_mAh(5000.0)
    , consumed_capacity_mAh(0.0)
{
    if (cell_count < 1) {
        cell_count = 1;
    }
}

Battery::Battery(int cells, double initial_voltage, double capacity)
    : cell_count(cells)
    , voltage(initial_voltage)
    , capacity_mAh(capacity)
    , consumed_capacity_mAh(0.0)
{
    if (cell_count < 1) {
        cell_count = 1;
    }
    if (capacity_mAh < 0.0) {
        capacity_mAh = 0.0;
    }
}

double Battery::get_percentage() const
{
    const double min_voltage = 3.0 * cell_count;
    const double max_voltage = 4.2 * cell_count;
    double result = (voltage - min_voltage) / (max_voltage - min_voltage) * 100.0;

    if (result < 0.0) {
        result = 0.0;
    }
    if (result > 100.0) {
        result = 100.0;
    }
    return result;
}

bool Battery::is_low() const
{
    return get_percentage() < 20.0;
}

void Battery::set_voltage(double new_voltage)
{
    if (new_voltage < 0.0) {
        std::cout << "Invalid voltage\n";
        return;
    }
    voltage = new_voltage;
}

void Battery::print_info() const
{
    std::cout << "Cells: " << cell_count << '\n';
    std::cout << "Voltage: " << voltage << " V\n";
    std::cout << "Capacity: " << capacity_mAh << " mAh\n";
    std::cout << "Charge: " << get_percentage() << "%\n";
    std::cout << "Status: " << (is_low() ? "LOW" : "NORMAL") << '\n';
}

void Battery::consume(double value)
{
    if (value <= 0.0) {
        return;
    }

    consumed_capacity_mAh += value;
    if (consumed_capacity_mAh > capacity_mAh) {
        consumed_capacity_mAh = capacity_mAh;
    }

    std::cout << "Remaining capacity: " << get_remaining_capacity() << " mAh\n";
}

double Battery::get_remaining_capacity() const
{
    return capacity_mAh - consumed_capacity_mAh;
}

double Battery::get_remaining_percentage() const
{
    if (capacity_mAh == 0.0) {
        return 0.0;
    }
    return get_remaining_capacity() / capacity_mAh * 100.0;
}
