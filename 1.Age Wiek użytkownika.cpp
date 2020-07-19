#include<iostream>

void user_age (int current_year, int user_year_of_birth)
{
    std::cout << current_year - user_year_of_birth << std::endl;
}

int main ()
{
    int current_year;
    int user_year_of_birth;
    std::cin >>  current_year >> user_year_of_birth;
    user_age(current_year, user_year_of_birth);
    return 0;
}
