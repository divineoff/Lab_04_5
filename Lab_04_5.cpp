#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		if ((-R <= x && x <= 0 && y <= x && y >= -R) ||
			(x * x + y * y <= R * R && y >= 0))
		{
			cout << "-------" << endl;
			cout << "|" << setw(3) << "yes" << setw(3) << "|" << endl;
			cout << "-------" << endl;
		}
		else
		{
			cout << "-------" << endl;
			cout << "|" << setw(3) << "no" << setw(3) << "|" << endl;
			cout << "-------" << endl;
		}
	}
	R = 1.0 + 9.0 * rand() / RAND_MAX;
	cout << endl << fixed;
	cout << "Random points in the area" << endl;
	cout << "------------------------------" << endl;
	cout << "|" << setw(12) << "R" << setw(17) << " |" << endl;
	cout << "|" << setw(15) << R << setw(14) << " |" << endl;
	cout << "------------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(6) << " |"
		<< setw(5) << "y" << setw(5) << " |"
		<< setw(6) << "Result" << " |" << endl;
	cout << "------------------------------" << endl;
	for (int i = 0; i < 10; i++)
	{
		x = (-R) + (2 * R) * rand() / RAND_MAX;
		y = (-R) + (2 * R) * rand() / RAND_MAX;
		if ((-R <= x && x <= 0 && y <= x && y >= -R) ||
			(x * x + y * y <= R * R && y >= 0))
			cout << "|" << setw(8) << setprecision(4) << x << " " << " |"
			<< setw(8) << setprecision(4) << y << " " << "|" << "yes" << setw(5) << "|" << endl;
		else
			cout << "|" << setw(8) << setprecision(4) << x << " " << " |"
			<< setw(8) << setprecision(4) << y << " " << "|" << "no" << setw(6) << "|" << endl;
	}
	cout << "------------------------------" << endl;
	return 0;
}