#include<cstdlib>
#include<ctime>
#include<iostream>

void section(int n)
{
    std::srand(std::time(nullptr));
    double* table = new double[n];

    int sum = 0.;
    int temp;
    if (n > 0)
    {
        if (sum != 1)
        {
            for (int index = 0; index < n; index ++)
            {
                temp = std::rand()/n;
                table[index] = temp;
                sum += temp;
            }
            for (int index = 0; index < n; index ++)
            {
                table[index] = table[index] / sum;
                std::cout << table[index] << " ";
            }
        }
    }

}




int main()
{
    int n;
    std::cin >> n;
    section(n);
}
