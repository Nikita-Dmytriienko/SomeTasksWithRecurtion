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
//#include <iostream>

//void recurtion(int number)
//{
//	if (number == 1)
//	{
//		std::cout << number << " ";
//		return;
//	}
//
//		recurtion(number-1);
//		std::cout << number << " ";
//	
//}
//
//int main()
//{
//	int n;
//	std::cout << "Enter Number:";
//	std::cin >> n;
//
//	recurtion(n);
//
//	system("pause>>void");
//	return 0;
//}

//Даны два целых числа A и В (каждое в отдельной строке).
//Выведите все числа от A до B включительно
//в порядке возрастания, если A < B, или в порядке убывания в противном случае.

#include <iostream>

int recurtion(int a, int b);

int main()
{
	int a, b;
	std::cout << "Enter a:";
	std::cin >> a;
	std::cout << "Enter b:";
	std::cin >> b;
	
	recurtion(a, b);


	system("pause>>void");
	return 0;
}

int recurtion(int a, int b)
{   //a=4;b=2;
	if (a > b&&a>=0&&b>=0)
	{
		std::cout << b << " ";
		return;
	}
	//b=5;a=2
	if (b > a && a >= 0 && b >= 0)
	{
		std::cout << a << " ";
		return;
	}
	if(a > b && a >= 0 && b >= 0)
	{
		recurtion(a, b - 1);
		std::cout << b << " ";
	}
	if (b > a && a >= 0 && b >= 0)
	{
		recurtion(a - 1,b);
		std::cout << a << " ";
	}
	
}
