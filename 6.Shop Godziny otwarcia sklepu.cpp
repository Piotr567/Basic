#include <iostream>

void shop (int hour, int minute)
{
    hour = hour * 100;
    int time = hour + minute;
    std::cout << std::boolalpha << (time >= 1030 && time < 1830) << std::endl;
}

int main()
{
    int hour;
    int minute;
    std::cin >> hour >> minute;
    shop (hour, minute);
}
