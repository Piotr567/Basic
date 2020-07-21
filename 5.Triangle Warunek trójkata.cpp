#include<iostream>

void triangle (int a, int b, int c)
{
    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }

}

int main()
{
    int a;
    int b;
    int c;
    std::cin >> a >> b >> c;
    triangle (a, b, c);
}
