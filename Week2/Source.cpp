#include <iostream>

void menu();
void task1();
void task2();

void exercise4();
void clearCin();

int main()
{
	//menu();
	exercise4();

	//std::cout << "Something";
	//system("pause");
	//std::cout << "Something more";


	return 0;
}

void menu()
{
	int choice{};
	std::cout << "Welcome, please choose on of the options below:\n";
	std::cout << "1: task1\n";
	std::cout << "2: task2\n\n";

	std::cout << "Your choice: ";
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		task1();
		break;
	case 2:
		task2();
		break;

	default:
		std::cout << "Invalid input\n";
		break;
	}
}

void task1()
{
	std::cout << "Task 1 is called\n";
}

void task2()
{
	std::cout << "Task 2 is called\n";
}

void clearCin()
{
	std::cin.clear();
	std::cin.ignore(32767, '\n');
}

void exercise4()
{
	int numberToGuess{};
	int guess{};
	bool correctGuess{ false };
	std::cout << "Please enter the number to guess: ";
	std::cin >> numberToGuess;
	clearCin();

	do
	{
		std::cout << "Enter a guess: ";
		std::cin >> guess;
		system("cls");
		clearCin();

		if (guess < numberToGuess)
		{
			std::cout << "You entered a number that is too low\n";
		}
		else if (guess > numberToGuess)
		{
			std::cout << "You entered a number that is too high\n";
		}
		else if (guess == numberToGuess)
		{
			std::cout << "CORRECT!!!!!";
			correctGuess = true;
		}
	} while (correctGuess == false);
}

