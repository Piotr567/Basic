#include<iostream>
#include<cmath>

void nominals(int nominal)
{
    if(nominal > 0)
    {
        int number = log10 (nominal);
        for (int k = 0;  k <= number - 1; k ++)
        {
            for(int index = 0; index < nominal; index ++)
            {
                if (index == 1 || index == 2 || index == 5)
                {
                    std::cout << index * pow(10, k) << " ";
                }
            }
        }
    }
}




int main()
{
    int nominal;
    std::cin >> nominal;
    nominals(nominal);
}
