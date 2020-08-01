#include<iostream>

bool implication(bool p, bool q)
{
    if(p == false && q == false)
    {
        return true;
    }
    if(p == false && q == true)
    {
        return true;
    }
    if(p == true && q == false)
    {
        return false;
    }
    if(p == true && q == true)
    {
        return true;
    }
    return 0;
}


int main()
{
    std::cout << std::boolalpha << implication(true, false) << std::endl;
}
