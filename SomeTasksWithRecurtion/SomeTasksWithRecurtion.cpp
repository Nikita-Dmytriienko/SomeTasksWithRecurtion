#include <iostream>


int recurtion(int number);

int main()
{
	std::cout << recurtion(6);


	system("pause>>void");
	return 0;
}

int recurtion(int number)
{
	int i = 1;
	if (i == number)
		return number;
	else std::cout << i+recurtion(number) << std::endl;
}