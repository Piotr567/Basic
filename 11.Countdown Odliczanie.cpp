#include<iostream>

void countdown (int liczba)
{
          if (liczba==10)
      {
        std::cout<<"ten nine eight seven six five four three two one zero start" << std::endl;
      }
      else if(liczba==9)
      {
        std::cout<<"nine eight seven six five four three two one zero start" << std::endl;
      }
      else if(liczba==8)
      {
        std::cout<<"eight seven six five four three two one zero start" << std::endl;
      }
      else if(liczba==7)
      {
        std::cout<<"seven six five four three two one zero start" << std::endl;
      }
      else if(liczba==6)
      {
        std::cout<<"six five four three two one zero start" << std::endl;
      }
      else if(liczba==5)
      {
        std::cout<<"five four three two one zero start" << std::endl;
      }
      else if(liczba==4)
      {
        std::cout<<"four three two one zero start" << std::endl;
      }
      else if(liczba==3)
      {
        std::cout<<"three two one zero start" << std::endl;
      }
      else if(liczba==2)
      {
        std::cout<<"two one zero start" << std::endl;
      }
      else if(liczba==1)
      {
        std::cout<<"one zero start" << std::endl;
      }
      else if(liczba==0)
      {
        std::cout<<"zero start" << std::endl;
      }
      else if(liczba>10)
      {
        std::cout<<"stop" << std::endl;
      }
}
 int main()
 {
      int liczba;
      std::cin >> liczba;
      countdown (liczba);
 }
