#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");
	int days;
	double distance = 1.5;
	cout << "Введіть кількість днів в які черепаха рухалась:" << endl;
	cin >> days;
	if (days < 0)
	{
		cout << "Кількість днів не може бути менше нуля.";
		return 0;
	}
	for (days >= 0; days--; distance += 0.20);
	{
		cout << distance << "м.";
	}
}