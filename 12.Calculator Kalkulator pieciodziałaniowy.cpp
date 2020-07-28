#include<iostream>
#include<cmath>

 int main()
 {
      int operation;
      double first_argument;
      double second_argument;
      std::cin >> operation;
      switch (operation)
      {
        case 1:
        {
            std::cin >> first_argument >> second_argument;
            std::cout << first_argument + second_argument << std::endl;
            break;
        }
        case 2:
        {
            std::cin >> first_argument >> second_argument;
            std::cout << first_argument - second_argument << std::endl;
            break;
        }
        case 3:
        {
            std::cin >> first_argument >> second_argument;
            std::cout << first_argument * second_argument << std::endl;
            break;
        }
        case 4:
        {
            std::cin >> first_argument >> second_argument;
            std::cout << first_argument / second_argument << std::endl;
            break;
        }
        case 5:
        {
            std::cin >> first_argument;
            std::cout << sqrt(first_argument) << std::endl;
            break;
        }
      }
 }
