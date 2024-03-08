#include <iostream>
#include "Animals.h"
#include <vector>

int main()
{
	std::vector<BaseAnimal*> animals = { new Dog(), new Cat(), new Fox() };

	for (const auto& animal : animals)
	{
		animal->Voice();
	}

	animals.clear();
}
