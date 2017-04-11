#include <iostream>

int main()
{
	int lastNumber = 0, secondLastNumber = 0,  total = 0, timesToRun = 0;
	if (lastNumber == 0)
	{
		lastNumber = 1;
		secondLastNumber = 1;
		total = 0;
	}

	//Let the user decide how much to enter..
	std::cout << "How many digits of fibonacci's number would you like?" << std::endl;
	std::cin >> timesToRun;
	while (!std::cin) {
		//Clean input (:
		std::cout << "Error, input invalid.  " << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> timesToRun;
	}


	for (int i = 0; i < timesToRun; i++)
	{
		//1 + 1 + 2 + 3 + 5 + ...
		lastNumber = lastNumber;
		secondLastNumber = lastNumber + secondLastNumber;
		total = secondLastNumber + lastNumber;
		lastNumber = total;
		std::cout << secondLastNumber << " ; " << lastNumber;
	}

	std::cout << std::endl;
	system("pause");
    return 0;
}