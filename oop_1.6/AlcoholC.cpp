//////////////////////////////////////////////////////////////////////////////
// AlcoholC.cpp
// файл реалізації – реалізація методів класу
#include "AlcoholC.h"
#include <iostream>

using namespace std;

void AlcoholC::Init(double volume, AlcoholC::Liquid liquid)
{
	setVolume(volume);
	setLiquid(liquid);
}

void AlcoholC::Display() const
{
	cout << endl;
	cout << "liquid = " << endl;
	liquid.Display(); // використовуємо делегування
	cout << "volume = " << volume << endl;
}

void AlcoholC::Read()
{
	double volume;
	AlcoholC::Liquid m;
	cout << endl;
	cout << "Liquid = ? " << endl;
	m.Read(); // використовуємо делегування
	cout << "volume = ? "; cin >> volume;
	Init(volume, m);
}

void AlcoholC::Liquid::Init(string name, double density)
{
	setName(name);
	setDensity(density);
}

void AlcoholC::Liquid::Display() const
{
	cout << endl;
	cout << "name = " << name << endl;
	cout << "density = " << density << endl;
}

void AlcoholC::Liquid::Read()
{
	string name;
	double density;
	cout << endl;
	cout << "name = ? "; cin >> name;
	cout << "density = ? "; cin >> density;
	Init(name, density);
}
