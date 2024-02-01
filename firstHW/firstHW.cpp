#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {


	// first hw
	int a, b;

	setlocale(LC_ALL, "RU");
	cout << "Введите число: ";

	int num1 = 7;
	int num2 = 23;

	cin >> a;

	if ((a / num1) && (a / num2))
	{
		cout << "Число кратно 7 и 23";
	}
	else
	{
		cout << "Число не кратно";
	}

	//----------------------------------------------------//

	
	int x, y;

	cout << "\nВведите x: ";
	cin >> x;
	cout << "\nВведите y: ";
	cin >> y;

	cout << "X: " << x << "\nY: " << y << endl;

	if ((x != 0) && (y != 0))
	{
		if (x > 0 && y < 0)
		{
			cout << "1 четверть плоскости";
		}

		if (x < 0 && y > 0)
		{
			cout << "2 четверть плоскости";
		}

		if (x < 0 && y < 0)
		{
			cout << "3 четверть плоскости";
		}

		if (x > 0 && y > 0)
		{
			cout << "4 четверть плоскости";
		}
	}
	else
		cout << "\n\nПроизведение координат не должно равнять 0!!!\n\n";


	//----------------------------------------------------------//

	int max;
	int value1;
	int value2;

	cout << "\n\nВведите число: ";
	cin >> max;

	for (int i = 0; i < 1; i++)
	{
		if (max >= 10 && max <= 99)
		{
			value1 = max / 10;
			value2 = max % 10;
			if (value1 > value2)
			{
				cout << value1;
			}
			else
				cout << value2;
		}
	}

	//---------------------------------------------------//

	int numbers1;
	int numb2;

	cout << "\nВведите натуральное число: ";
	cin >> numbers1;

	for (numb2 = 1; numb2 <= numbers1; numb2 *= 10);

	do
	{
		numb2 /= 10;
		cout << numbers1 / numb2 << ", ";
		numbers1 %= numb2;

	} while (numbers1);

	return 0;
}