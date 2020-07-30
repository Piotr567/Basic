#include<iostream>

int sign (int value)
{
  if (value < 0)
  {
      return -1;
  }
  if (value > 0)
  {
      return 1;
  }
  if (value == 0)
  {
      return 0;
  }
  return 0;
}

int main()
{
    std::cout << sign(-15) << std::endl;
}
