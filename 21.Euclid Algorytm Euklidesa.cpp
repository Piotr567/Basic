#include<iostream>

void euclid(int first_number, int second_number)
{
    while(second_number)
    {
        int value = first_number % second_number;
        first_number = second_number;
        second_number = value;
    }
    std::cout << first_number << std::endl;
}

int main()
{
    int first_number;
    int second_number;
    std::cin >> first_number >> second_number;
    euclid(first_number, second_number);
}
