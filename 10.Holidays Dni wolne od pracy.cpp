#include<iostream>

void holidays (int month, int day)
{
    if(month==1 && day==1)
    {
        std::cout << "New Year" << std::endl;
    }
    else if(month==1 && day==6)
    {
        std::cout << "Three Kings" << std::endl;
    }
    else if(month==5 && day==1)
    {
        std::cout << "Labour Day" << std::endl;
    }
    else if(month==5 && day==3)
    {
        std::cout << "Constitution Day May 3" << std::endl;
    }
    else if(month==8 && day==15)
    {
        std::cout << "Armed Forces Day" << std::endl;
    }
    else if(month==11 && day==1)
    {
        std::cout << "All the Saints" << std::endl;
    }
    else if(month==11 && day==11)
    {
        std::cout << "Independence Day" << std::endl;
    }
    else if(month==12 && day==25)
    {
        std::cout << "Christmas" << std::endl;
    }
    else if(month==12 && day==26)
    {
        std::cout << "Christmas" << std::endl;
    }
    else
    {
    std::cout << "Ordinary Day" << std::endl;
    }
}

int main()
{
    int month;
    int day;
    std::cin >> month >> day;
    holidays (month, day);
}
