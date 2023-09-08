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
}