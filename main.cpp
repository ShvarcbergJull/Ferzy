#include <iostream>
#include <fstream>
#include <locale.h>
#include "func.h"

using namespace std;

void writePair(ofstream& out, Kord q1, Kord q2)
{
	char qv1 = (q1.x - 1) + 'a';
	char qv2 = (q2.x - 1) + 'a';
	out << qv1 << q1.y << '-' << qv2 << q2.y << endl;
}

int main(void)
{
	void writePair(ofstream& out, Kord q1, Kord q2);
	setlocale(LC_ALL, "Russian");
	Kord* q = new Kord[8];

	if (!readQueens("C:/Users/PC/Desktop/visual studio 2015/Ferze/Ferze/in.txt", q))
	{
		cout << "Не удалось прочитать координаты" << endl;
		return -1;
	}

	ofstream out("C:/Users/PC/Desktop/visual studio 2015/Ferze/Ferze/out.txt");
	if (!out.is_open())
	{
		cout << "Не удалось создать выходной файл" << endl;
		return -2;
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 8; j++)
		{
			if (isThreaten(q[i], q[j]))
				writePair(out, q[i], q[j]);
		}
	}
	system("pause");
	return 0;
}
