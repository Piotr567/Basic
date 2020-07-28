#include<iostream>

 int main()
 {
      int countdown;
      std::cin >> countdown;
      switch (countdown)
      {
        case 11:
        {
            std::cout<<"stop" << std::endl;
            break;
        }
        case 10:
        {
            std::cout<<"ten nine eight seven six five four three two one zero start" << std::endl;
            break;
        }
        case 9:
        {
            std::cout<<"nine eight seven six five four three two one zero start" << std::endl;
            break;
        }
        case 8:
        {
            std::cout<<"eight seven six five four three two one zero start" << std::endl;
            break;
        }
        case 7:
        {
            std::cout<<"seven six five four three two one zero start" << std::endl;
            break;
        }
        case 6:
        {
            std::cout<<"six five four three two one zero start" << std::endl;
            break;
        }
        case 5:
        {
            std::cout<<"five four three two one zero start" << std::endl;
            break;
        }
        case 4:
        {
            std::cout<<"four three two one zero start" << std::endl;
            break;
        }
        case 3:
        {
            std::cout<<"three two one zero start" << std::endl;
            break;
        }
        case 2:
        {
            std::cout<<"two one zero start" << std::endl;
            break;
        }
        case 1:
        {
            std::cout<<"one zero start" << std::endl;
            break;
        }
        case 0:
        {
            std::cout<<"zero start" << std::endl;
            break;
        }
      }
 }
