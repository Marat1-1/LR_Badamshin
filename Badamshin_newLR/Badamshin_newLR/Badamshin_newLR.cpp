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



// Создание трубы
Pipe CreatePipe()
{
	Pipe p;
	p.id = 0;
	cout << "Введи диаметр трубы: ";
	cin >> p.diameter;
	return p;
};

void PrintPipe(Pipe& p)
{
	cout << "id - " << p.id << endl
		<< "диаметр - " << p.diameter;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Pipe pipe = CreatePipe();
	PrintPipe(pipe);
};