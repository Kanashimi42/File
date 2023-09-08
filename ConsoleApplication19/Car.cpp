#include "Car.h"
#include <string.h>
#include <iostream>
using namespace std;
Car::Car()
{
	model = nullptr;
	color = nullptr;
	year = 0;
	price = 0.0;
}

Car::Car(const char* m, const char* c, int y, double p)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

	price = p;
	year = y;
}

Car::~Car()
{
	delete[]model;
	delete[]color;
}

void Car::Input()
{
	char buff[64];
	cout << "Enter model: ";
	cin >> buff;
	if (model != nullptr)
	{
		delete[]model;
	}
	model = new char[strlen(buff) + 1];
	strcpy_s(model, strlen(buff) + 1, buff);
	cout << "Enter color: ";
	for (int i = 0; i < 64; i++)
	{
		buff[i] = 0;
	}
	cin >> buff;
	if (color != nullptr)
	{
		delete[]color;
	}

	color = new char[strlen(buff) + 1];
	strcpy_s(color, strlen(buff) + 1, buff);
	cout << "Enter year: ";
	cin >> year;
	cout << "Enter price: ";
	cin >> price;
}

void Car::Print()
{
	cout << "Model: " << model << "\tColor: " << color << "\tYear: " << year << "\tPrice: " << price << endl;
}

char* Car::Getmodel()
{
	return model;
}

char* Car::Getcolor()
{
	return color;
}

int Car::Getyear()
{
	return year;
}

double Car::Getprice()
{
	return price;
}

void Car::SetModel(const char* m)
{
	if (model != nullptr)
	{
		delete[] model;
	}

	model = new char[strlen(m) + 1];
	strcpy_s(model, strlen(m) + 1, m);
}

void Car::SetColor(const char* c)
{
	if (color != nullptr)
	{
		delete[] color;
	}

	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}

void Car::SetYear(int y)
{
	year = y;
}

void Car::SetPrice(double p)
{
	price = p;
}

