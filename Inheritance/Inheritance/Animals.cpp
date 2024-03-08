#include "Animals.h"
#include <iostream>

void Dog::Voice()
{
	std::cout << "Woof!" << std::endl;
}

void Cat::Voice()
{
	std::cout << "Meow!" << std::endl;
}

void Fox::Voice()
{
	std::cout << "What does the fox say?" << std::endl;
}