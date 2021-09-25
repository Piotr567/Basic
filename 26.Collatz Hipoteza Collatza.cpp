#include<iostream>

void print(int liczba)
{
    while(liczba > 1)
    {
        if(liczba % 2 == 0)
        {
            liczba = liczba / 2;
            std::cout << liczba << " ";
        }
        else
        {
            liczba = liczba * 3 + 1;
            std::cout << liczba << " ";
        }
    }
}

int main()
{
    int liczba;
    std::cin >> liczba;
    std::cout << liczba << " ";
    print(liczba);
}
