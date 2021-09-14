#include "pch.h"
#include <iostream>

using namespace std;


struct Pipe
{
	int id;
	int diameter;
	double length;
	bool repair;
};

struct CompressorStation
{

};

int main()
{
	setlocale(LC_ALL, "Russian");
	Pipe p;
	p.id = 0;
	cout << "Введи диаметр трубы: ";
	cin >> p.diameter;
	cout << "id - " << p.id << endl
		<< "диаметр - " << p.diameter;
}
