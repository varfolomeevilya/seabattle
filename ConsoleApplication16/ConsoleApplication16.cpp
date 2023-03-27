// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

const int N = 10;
int my_map[N][N] = { 0 };
int comp_map[N][N]= { 0 };
int x, y;
void setup() 
{
	srand(time(0));
	for (int i = 0; i < 4; i++) 
	{
		x = rand() % N;
		y = rand() % N;
		comp_map[x][y] = 2;
	}

}
void draw() 
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (my_map[i][j]==0)
			{
				cout << "-";
			}
			else
			{
				cout << my_map[i][j];
			}
				
		}
		cout << endl;
		
	}
	cout << endl;

	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			if (comp_map[i][j]==0) 
			{
				cout << "-";
			}
			else 
			{
				cout << comp_map[i][j];
			}
		}
		cout << endl;
	}
}
void logic() 
{
	while (true) 
	{
		cout << "Введите координаты вражеского корабля  по оси X" << endl;
		cin >> x;
		cout << "Введите координаты вражеского корабля по оси Y" << endl;
		cin >> y;
		if (comp_map[x][y] == 9) 
		{
			cout << "Попал" << endl;
			comp_map[x][y] = 0;
			bool detect = false;
			for (int i = 0; i < N; i++) 
			{
				for (int j = 0; j < N; j++) 
				{
					if (comp_map[x][y] = 8) 
					{
						detect = true;
				    }
			    }
			}
			if (detect == false) 
			{
				cout << "Вы победили!!!" << endl;
			}
			cout << detect;
		}
		else 
		{
			cout << "Промах." << endl;
			
		}
    }
}
void input()
{
	cout << "Введите координаты вражеского корабля  по оси X" << endl;
	cin >> x;
	cout << "Введите координаты вражеского корабля по оси Y" << endl;
	cin >> y; 
	if (comp_map[x][y] == 9)
	{
		cout << "Попал" << endl;
		comp_map[x][y] = 0;
		bool detect = false;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (comp_map[x][y] = 8)
				{
					detect = true;
				}
			}
		}
		if (detect == false)
		{
			cout << "Вы победили!!!" << endl;
		}
		cout << detect;
	}
	else
	{
		cout << "Промах." << endl;
		
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	setup();
	draw();
	logic();
	const int N = 10;
	int map[N][N] = {0};
	int x, y;
	int menu = 0;
	for (int i = 0; i < 5; i++) 
	{
		x = rand() % N;
		y = rand() % N;
		map[x][y] = 2;
	}
	
	for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			cout << map[i][j];
		}
		cout << endl;
	}
	while (true) 
	{
		cout << "Введите координаты цели" << endl;
		cin >> x;
		cin >> y;
		if (map[x][y]=0) 
		{
			cout << "Попал" << endl;
			map[x][y];
		}
		else 
		{
			cout << "Промах" << endl;
		}
	}
	cout << endl;
	return 0;

}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
