#include <iostream>
#include "Car.h"
using namespace std;
int main()
{
	Car a("Audi A5", "White", 2021, 24000);
	char* model = a.Getmodel();
	cout << model << endl;
	Car b("BMW", "Black", 2020, 14000);
	b.Print();
	b.Input();
	b.Print();
	cout << "Testing setters" << endl;
	b.SetModel("Audi A5");
	b.SetColor("White");
	b.SetPrice(24000);
	b.SetYear(2021);
	b.Print();
}