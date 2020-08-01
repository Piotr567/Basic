#include<iostream>

double lesser (double first_number, double second_number)
{
    return (first_number < second_number ? first_number : second_number);
}

int main()
{
    std::cout << lesser(3.12, 2.13) << std::endl;
}
