//#include <iostream>
//
//
//void printNumbers(int n) {
//    if (n == 1) {
//        std::cout << n << " ";
//        return;
//    }
//
//    printNumbers(n - 1);
//    std::cout << n << " ";
//}
//
//int main() {
//    int n;
//    std::cout << "Введите натуральное число n: ";
//    std::cin >> n;
//
//    if (n <= 0) {
//        std::cout << "Число должно быть натуральным." << std::endl;
//        return 1;
//    }
//
//    std::cout << "Числа от 1 до " << n << ": ";
//    printNumbers(n);
//    std::cout << std::endl;
//
//	system("pause>>void");
//	return 0;
//}
#include <iostream>

void recurtion(int number)
{
	if (number == 1)
	{
		std::cout << number << " ";
		return;
	}

		recurtion(number-1);
		std::cout << number << " ";
	
}

int main()
{
	int n;
	std::cout << "Enter Number:";
	std::cin >> n;

	recurtion(n);

	system("pause>>void");
	return 0;
}
