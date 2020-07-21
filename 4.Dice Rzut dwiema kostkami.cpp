#include<cstdlib>
#include<ctime>
#include<iostream>

void dice (int first, int second)
{
    srand(time(NULL));
    first = (std::rand() % 6) + 1;
    second = (std::rand() % 6) + 1;
    int sum = first + second;
    std::cout << first << " " << second << " " << sum << std::endl;
}

int main()
{
    int first;
    int second;
    dice (first, second);
    return 0;
}
