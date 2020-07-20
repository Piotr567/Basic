#include<iostream>
#include<cmath>

void barometric (double p, double T)
{
    double R = 8.3144598;
    double u = 0.0289644;
    double g = 9.80665;
    double p0 = 1013.25;
    double h = -(R * T) / (u * g) * log(p / p0);
    std::cout << h << std::endl;
}

int main()
{
    double p;
    double T;
    std::cin >> p >> T;
    barometric(p, T);
}
