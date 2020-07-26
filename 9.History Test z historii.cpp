#include<iostream>

void history(int answer)
{
    int point = 0;
    std::cout << "foundation of rome" << std::endl;
    std::cin >> answer;
    if (answer != -753)
     {
          std::cout <<"false"<< std::endl;
     }
     else
     {
          std::cout << "true" << std::endl;
          point++;
     }

    std::cout << "discovery of america" << std::endl;
    std::cin >> answer;
    if (answer != 1492)
     {
          std::cout << "false" << std::endl;
     }
     else
     {
          std::cout << "true" << std::endl;
          point++;
     }

    std::cout << "first airplane flight" << std::endl;
    std::cin >> answer;
    if (answer != 1903)
     {
          std::cout << "false" << std::endl;
     }
     else
     {
          std::cout << "true" << std::endl;
          point++;
     }

    std::cout << point << std::endl;
}

int main()
{
    int answer;
    history(answer);
}
