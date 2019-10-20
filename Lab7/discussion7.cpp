#include			<iostream>
#include			<iomanip>
using 	namespace	std;
const int			SIZE=10, W=5;

void	printArray(int []);
void	printArray2(int []);
void	printArray3(int []);

int		main()
{
	int			numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

	printArray(numbers);
	printArray2(numbers);
	printArray3(numbers);
}
void	printArray(int numbers[])
{
	for (int i=0; i<SIZE; i++)
		cout << setw(W) << numbers[i];
	cout << endl;
}

void	printArray2(int num[])
{
		cout << num << endl;
		cout << (num+1) << endl;
		cout << (num+9) << endl;
		cout << (num+10) << endl;

		cout << *(num+1) << endl;
		cout << *(num+2) << endl;
}

void	printArray3(int num[])
{
	for(int i=0; i<SIZE; i++)
		cout << setw(W)<< *(num+i) << endl;
}
