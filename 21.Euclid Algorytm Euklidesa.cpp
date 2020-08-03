#include<iostream>

void euclid(int first_number, int second_number)
{
    while(first_number)
    {
        int value = second_number % first_number;
        second_number = first_number;
        first_number = value;
    }
    std::cout << second_number << std::endl;
}

int main()
{
    int first_number;
    int second_number;
    std::cin >> first_number >> second_number;
    euclid(first_number, second_number);
}
