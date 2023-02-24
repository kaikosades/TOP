#include<iostream>
using std::cin;
using std::cout;
using std::endl;
//#define TASK_0
//#define TASK_1
//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6
//#define TASK_7 // Для запуска кода закомментировать 17 строчку тк язык не переключается обратно.
//#define TASK_8

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер фигуры:"; cin >> n;
#ifdef TASK_0
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif

#ifdef TASK_1
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j != i; j++)
		{
			cout << "*";
		}
		cout << endl;
		
	}
#endif

#ifdef TASK_2
	for (int i = 0; i <= n-1; i++)
	{
		for (int j = 0; j != n-i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif

#ifdef TASK_3
	for (int i = 0; i <= n - 1; i++)
	{
		int y = 0;
		while (y != i)
		{
			cout << " ";
			y++;
		}
		for (int j = 0; j != n - i; j++)
		{
			
			cout << "*";
		}
		cout << endl;
	}
#endif

#ifdef TASK_4
	for (int i = 1; i <= n; i++)
	{
		int y = 0;
		while (y != n- i)
		{
			cout << " ";
			y++;
		}
		for (int j = 0; j != i; j++)
		{
			cout << "*";
		}
		cout << endl;

	}
#endif

#ifdef TASK_5
	for (int i = 0; i < n; i++)
	{
		int y = 0;
		while (y != n - i)
		{
			cout << " ";
			y++;
		}
		cout << "/";
		for (int j = 0; j != i; j++)
		{
			cout << "  ";
		}
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		int y = 0;
		while (y != i+1)
		{
			cout << " ";
			y++;
		}
		cout << "\\";
		for (int j = 0; j !=n - i - 1; j++)
		{
			cout << "  ";
		}
		cout << "/";
		cout << endl;
	}
#endif

#ifdef TASK_6
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0)
				cout << "+";
			else
				cout << "-";
		}
		cout << endl;
	}
#endif

#ifdef TASK_7
	setlocale(LC_ALL, ".886");

	char ugol_left_up = 218;
	char ugol_left_down = 192;
	char white = 219;
	char gorizont = 196;
	char ugol_right_up = 191;
	char ugol_right_down = 217;
	char vertical = 179;
	cout << "\n" << "\t" << ugol_left_up;
	for (int i = 0; i < n * 2; i++)
	{
		cout << gorizont;
	}
	cout << ugol_right_up;
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		int y = 0;
		y++;
		cout << "\t" << vertical;
		for (int j = 0; j < n * 3; j = j + 3)
		{
			if ((i + j) % 2 == 0)
			{
				cout << white << white;
			}
			else
			{
				cout << "  ";
			}
		}
		cout << vertical;
		cout << endl;
	}
	cout << "\t" << ugol_left_down;
	for (int i = 0; i < n * 2; i++)
	{
		cout << gorizont;
	}
	cout << ugol_right_down;

#endif

#ifdef TASK_8

	for (int i = 0; i < n; i++)
	{
		int y = 0;
		while (y != 5)
		{
			y++;
			for (int j = 0; j < n*3; j = j+3)
				{
					if ((i + j) % 2 == 0)
					{
						cout << "* * * * *";
					}
					else
						{
						cout << "         ";
					}
				}
			cout << endl;
		}
		//cout << endl;
	}

#endif

}