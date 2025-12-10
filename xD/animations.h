#pragma once
#include "includes.h"
#include "field.h"

class Animation {
public:
	// заполнение
	void anim0(Field& f) {
		for (int y = 10; y >= 0; y--)
		{
			if (y % 2)
			{
				for (int x = 10; x >= 0; x--)
				{
					f.field[y][x] = '*';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
			}
			else
			{
				for (int x = 0; x <= 10; x++)
				{
					f.field[y][x] = '*';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
			}
		}
	//конец 1 анимации
	}

	// смайлик
	void anim1(Field& f) {
	
		for (int y = 10; y >= 0; y--)
		{

			for (int x = 0; x <= 10; x++)
			{
				if ((y == 0 or y == 10) && (x == 3 or x == 4 or x == 5 or x == 6 or x == 7))
				{
					f.field[y][x] = '#';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((y == 9 or y == 1) && (x == 2 or x == 8))
				{
					f.field[y][x] = '#';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((y == 8 or y == 2) && (x == 1 or x == 9))
				{
					f.field[y][x] = '#';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((y == 7 or y == 6 or y == 5 or y == 4 or y == 3) && (x == 0 or x == 10))
				{
					f.field[y][x] = '#';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((y == 7 or y == 4) && (x == 3 or x == 7))
				{
					f.field[y][x] = '#';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((y == 3) && (x == 4 or x == 5 or x == 6))
				{
					f.field[y][x] = '#';
					system("cls");
					f.RenderField();
					Sleep(100);
				}

			}


		}
	}

	// сердечко
	void anim2(Field& f) { 
		for (int y = 10; y >= 0; y--)
		{
			for (int x = 0; x <= 10; x++)
			{
				if ((y == 9) && (x == 2 or x == 3 or x == 7 or x == 8))
				{
					f.field[y][x] = '@';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((y == 8) && (x == 1 or x == 4 or x == 6 or x == 9))
				{
					f.field[y][x] = '@';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((y == 7) && (x == 0 or x == 5 or x == 10))
				{
					f.field[y][x] = '@';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((y == 6) && (x == 0 or x == 10))
				{
					f.field[y][x] = '@';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((y == 5) && (x == 1 or x == 9) or (y == 4) && (x == 2 or x == 8) or (y == 3) && (x == 3 or x == 7) or (y == 2) && (x == 4 or x == 6) or (y == 1) && (x == 5))
				{
					f.field[y][x] = '@';
					system("cls");
					f.RenderField();
					Sleep(100);
				}


			}
			
			
		}
	}

	// шахматная доска
	void anim3(Field& f) {
		for (int y = 10; y >= 0; y--)
		{
			for (int x = 0; x <= 10; x++)
			{
				if ((x % 2 != 0) && (y % 2 != 0))
				{
					f.field[y][x] = '@';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				if ((x % 2 == 0) && (y % 2 == 0))
				{
					f.field[y][x] = '@';
					system("cls");
					f.RenderField();
					Sleep(100);
				}

				
			}



		}
	}

	// лого windows
	void anim4(Field& f) {
		for (int y = 10; y >= 0; y--) {
			
			for (int x = 0; x <= 10; x++)
			{
				if ((y == 10 or y == 0 or y == 5))
				{
					f.field[y][x] = '-';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				else if ((x == 0 or x == 10 or x == 5))
				{
					f.field[y][x] = '|';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				
			}

		}
	}

	// клетка
	void anim5(Field& f) {
		for (int y = 10; y >= 0; y--) {

			for (int x = 0; x <= 10; x++)
			{
				if (y == 2 or y == 5 or y == 8)
				{
					f.field[y][x] = '_';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				if (x % 2 != 0)
				{
					f.field[y][x] = '|';
					system("cls");
					f.RenderField();
					Sleep(100);
				}
				
			}

		}
	}
};