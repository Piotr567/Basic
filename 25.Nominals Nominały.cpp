#include<iostream>

void nominals(int nominal)
{
    if(nominal > 0)
    {
        int kwota = 1;
        while (kwota < nominal)
        {
            for(int index = 0; index < nominal; index ++)
            {
                if (index == 1 || index == 2 || index == 5)
                {
                    std::cout << index * kwota << " ";
                }
            }
            kwota = kwota * 10;
        }
    }
}




int main()
{
    int nominal;
    std::cin >> nominal;
    nominals(nominal);
}
