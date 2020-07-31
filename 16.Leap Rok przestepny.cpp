#include <iostream>

bool leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return true;
    }
    else
    {
       return false;
    }
}

int main()
{
    std::cout << std::boolalpha << leap(2000) << std::endl;
}
