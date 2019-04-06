#pragma once

#include <iostream>

class Food 
{
public:
	virtual void display() = 0;
	virtual ~Food(){}
};

class Apple : public Food
{
public:
	void display()
	{
		std::cout << "Apple class \n";
	}
	virtual ~Apple(){}
};

class Banana : public Food
{
public:
	void display()
	{
		std::cout << "Banana class \n";
	}
	virtual ~Banana() {}
};

class Cherry : public Food
{
public:
	void display()
	{
		std::cout << "Cherry class \n";
	}
	virtual ~Cherry() {}
};

