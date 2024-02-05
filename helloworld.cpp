#include <iostream>
#include <string>

int main()
{
	std::string name;

	std::cout << "Welcome to the library!" << std::endl;
	std::cout << "========================================================" << std::endl;

	std::cout << "You've found yourself in the middle of the library. " << std::endl;	
	std::cout << "There's an old computer in the corner of the room you decide to turn on." << std::endl;
	std::cout << "*The machine beeps and buzzes*" << std::endl;
	std::cout << "You look at the screen and suddenly see: " << std::endl;

	std::cout << "Hi my name is ABBY" << std::endl;
	std::cout << "What is your name?" << std::endl;

	std::cin >> name;

	std::cout << "Hi, " << name << "!" << std::endl;

	std::cout << "What does ABBY stand for you ask?" << std::endl;
	std::cout << "It stands for Advanced Baby Babbling...I forgot the rest!" << std::endl;
	std::cout << "Maybe you can help me find it... it's been so long" << std::endl;
}
