#include<iostream>
#include<cmath>

double geometric(double a0, double q, double n)
{
    double an;
    an = a0*pow(q, n);
    return an;
}


int main()
{
    std::cout << geometric(8., -0.5, 3) << std::endl;
}
