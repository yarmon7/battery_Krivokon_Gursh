#ifndef BATTERY_H
#define BATTERY_H

class Battery
{
public:
    Battery();
    Battery(int cells);
    Battery(int cells, double initial_voltage, double capacity);

    double get_percentage() const;
    bool is_low() const;
    void set_voltage(double new_voltage);
    void print_info() const;

    void consume(double value);
    double get_remaining_capacity() const;
    double get_remaining_percentage() const;

private:
    int cell_count;
    double voltage;
    double capacity_mAh;
    double consumed_capacity_mAh;
};

#endif // BATTERY_H
