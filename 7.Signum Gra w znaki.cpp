#include<cstdlib>
#include<ctime>
#include<iostream>

int sign(int computer_sign)
{
    std::srand(std::time(nullptr));
    computer_sign = (std::rand() % 10) - 5;
    if (computer_sign < 0) return -1;
    if (computer_sign > 0) return 1;
    return 1;

}
void signum(int user_sign, int computer_sign)
{
    std::cout << std::boolalpha << (user_sign * sign(computer_sign) > 0) << std::endl;
}

int main()
{
    int user_sign;
    int computer_sign;
    sign(computer_sign);
    std::cin >> user_sign;
    std::cout << sign(computer_sign) << std::endl;
    signum(user_sign, computer_sign);
}
