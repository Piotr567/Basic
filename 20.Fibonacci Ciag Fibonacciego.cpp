#include <iostream>

void fibonacci (int n)
{
    int value [1000];
    value[0] = 0;
    value[1] = 1;
    for (int index = 2; index < n; index = index + 1)
    {
        value[index]= value[index - 1] + value[index - 2];

    }
    for (int index = 0; index < n; index = index + 1)
    {
        std::cout << value[index] << " ";
    }
}

int main()
{
    int n;
    std::cin >> n;
    fibonacci (n);
}
