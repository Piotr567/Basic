#include<iostream>

void Body_Mass_Index (double BMI)
{
    if (BMI <= 18.5)
    {
        std::cout << "underweight" << std::endl;
    }
    if (BMI > 18.5 && BMI <= 25)
    {
        std::cout << "normal" << std::endl;
    }
    if (BMI > 25 && BMI <= 30)
    {
        std::cout << "overweight" << std::endl;
    }
    if (BMI > 30)
    {
        std::cout << "obese" << std::endl;
    }
}


int main()
{
    double mass;
    double growth;
    double BMI;
    std::cin >> mass >> growth;
    BMI = mass/((growth/100) * (growth/100));
    Body_Mass_Index (BMI);

}
