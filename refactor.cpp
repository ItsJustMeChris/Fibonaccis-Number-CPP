#include <iostream>

int fibonacci(int);
int main()
{
	int number = 0;

	for (int i = 0; i < 100 ; i++)
	{
		//1 + 1 + 2 + 3 + 5 + ...
		std::cout << fibonacci(i) << " ; ";
	}

	std::cout << std::endl;
	system("pause");
    return 0;
}

int fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return fibonacci(n - 1) + fibonacci(n - 2);

}