#include<iostream>
#include<cstdlib>
#include<ctime>

void pi(int points)
{
  std::srand(std::time(nullptr));
  double x;
  double y;
  int value = 0;
  for(int index = 1; index <= points; index ++)
     {
    x = rand() / double(RAND_MAX);
    y = rand() / double(RAND_MAX);
    if(x * x + y * y <= 1)
          {
               value ++;
          }
     }
  double PI =4.* value / points;
  std::cout << PI << std::endl;
}


int main()
{
  int points;
  std::cin >> points;
  pi(points);
}
