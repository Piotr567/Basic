#include <iostream>

void print()
{
    int liczba_bitow_mantysy_1 = 0;
	float epsilon_maszynowy_1 = 0.5;	//0.5 to 2^-liczba_bitow_mantysy, gdzie liczba_bitow_mantysy = 1
	while (1 + epsilon_maszynowy_1 > 1)
    {
		liczba_bitow_mantysy_1 ++;
		epsilon_maszynowy_1 = epsilon_maszynowy_1 / 2;
	}

	epsilon_maszynowy_1 = epsilon_maszynowy_1 * 2;
    std::cout.precision(7);
	std::cout << epsilon_maszynowy_1 / 2 << " ";

    int liczba_bitow_mantysy_2 = 0;
	double epsilon_maszynowy_2 = 0.5;	//0.5 to 2^-liczba_bitow_mantysy, gdzie liczba_bitow_mantysy = 1
	while (1 + epsilon_maszynowy_2 > 1)
    {
		liczba_bitow_mantysy_2 ++;
		epsilon_maszynowy_2 = epsilon_maszynowy_2 / 2;
	}

	epsilon_maszynowy_2 = epsilon_maszynowy_2 * 2;
    std::cout.precision(7);
	std::cout << epsilon_maszynowy_2 / 2 << " ";

    int liczba_bitow_mantysy_3 = 0;
	long double epsilon_maszynowy_3 = 0.5;	//0.5 to 2^-liczba_bitow_mantysy, gdzie liczba_bitow_mantysy = 1
	while (1 + epsilon_maszynowy_3 > 1)
    {
		liczba_bitow_mantysy_3 ++;
		epsilon_maszynowy_3 = epsilon_maszynowy_3 / 2;
	}

	epsilon_maszynowy_3 = epsilon_maszynowy_3 * 2;
    std::cout.precision(7);
	std::cout << epsilon_maszynowy_3 / 2 << " ";

std::cout << std::endl;
}

int main()
{
    print();
}

