#pragma once
#include "includes.h"

class Field {
public:

	char field[11][11];

	void resetField() {

		for (int i = 0; i <= 10; i++) {
			for (int j = 0; j <= 10; j++) {
				field[i][j] = ' ';
			}
		}

	}


	void RenderField() {
		cout << "\tY";
		for (int y = 10; y >= 0; y--)
		{
			cout << "\n     " << y << "\t";
			for (int x = 0; x <= 10; x++)
			{
				cout << field[y][x] << " ";
			}
		}
		cout << "X\n\t";
		
		for (int i = 0; i <= 10; i++)
		{
			cout << i << " ";
		}

	}

};