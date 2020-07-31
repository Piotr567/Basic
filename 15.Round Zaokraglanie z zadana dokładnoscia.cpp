#include<iostream>
#include<cmath>

double round(double number, int number_of_digits_after_the_decimal_point)
{
     number=number*pow(10,number_of_digits_after_the_decimal_point);
     if(number-0.5 <= floor(number))
     {
     number = floor(number);
     }
     else
     {
     number = ceil(number);
     }
    return number = number/pow(10,number_of_digits_after_the_decimal_point);
}

int main()
{
std::cout << round(3.14159, 3) << std::endl;
}
