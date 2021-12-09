#include <iostream>
#include <Windows.h>
#include "c_Smartphone.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	c_Smartphone smartphone("Samsung", "Galaxy 21", 8.7,"IPS",64);
	c_Smartphone smartphone1(smartphone);
	smartphone.print();
	smartphone1.setModel("Galaxy 21 Ultra");
	smartphone1.print();
}