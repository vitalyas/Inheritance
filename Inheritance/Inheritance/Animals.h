#pragma once
class BaseAnimal
{
public:
	virtual void Voice() = 0;
};

class Dog : public BaseAnimal
{
public:
	void Voice() override;
};

class Cat : public BaseAnimal
{
public:
	void Voice() override;
};

class Fox : public BaseAnimal
{
public:
	void Voice() override;
};