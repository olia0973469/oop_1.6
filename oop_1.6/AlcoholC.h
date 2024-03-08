//////////////////////////////////////////////////////////////////////////////
// AlcoholC.h
// заголовний файл Ц визначенн€ класу
#pragma once
#include <string>
using namespace std;
class AlcoholCTest;
class AlcoholC
{
private:
	double volume;
	friend class AlcoholCTest;
	class Liquid
	{
	private:
		string name;
		double density;
	public:
		string getName() const { return name; }
		double getDensity() const { return density; }
		void setName(string name) { this->name = name; }
		void setDensity(double density) { this->density = density; }
		void Init(string name, double density);
		void Display() const;
		void Read();
	};
	Liquid liquid;
public:
	double getVolume() const { return volume; }
	AlcoholC::Liquid getLiquid() const { return liquid; }
	void setVolume(double volume) { this->volume = volume; }
	void setLiquid(AlcoholC::Liquid liquid) { this->liquid = liquid; }
	void Init(double volume, AlcoholC::Liquid liquid);
	void Display() const;
	void Read();
};
