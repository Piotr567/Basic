#include<iostream>

void sum(int n)
{
    double value = 0;
    for (int index = 1; index <= n; index ++)
    {
        int k = index;
        double counter = (-1);
        for (double index = 1; index <= (k + 1) - 1; index ++)
        {
            counter = (-1) * counter;
        }
        double denominator = (2 * k - 1);
        double number = 4 * (counter / denominator);
        value = value + number;
    }
    std::cout << value << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    sum(n);

}
