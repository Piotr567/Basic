#include <iostream>

int number;
int value = 1;
void factorial()
{
for (int index = 1; index <= number; index ++)
     {
     value = value * index;
     }
}
int main ()
{
    std::cin >> number;
    factorial();
    std::cout << value << std::endl;
}
