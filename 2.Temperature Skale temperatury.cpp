#include<iostream>

void temperature (double Kelvin)
{
    double Celsius = Kelvin - 273.15;
    double Rankin = (9 * Kelvin)/5;
    double Reaumur = (4 * Celsius)/5;
    std::cout << Celsius << " " << Rankin << " " << Reaumur << std::endl;
}

int main()
{
    double Kelvin;
    std::cin >> Kelvin;
    temperature (Kelvin);
    return 0;
}
