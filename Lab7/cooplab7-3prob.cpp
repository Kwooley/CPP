#include	<iostream>
#include	<ctime>
#include	<cstdlib>
#include 	<cmath>
#include	<iomanip>
using	namespace	std;

int		makearray(int []);
void	printout(int [], int);

void	swapfold(int [], int);
void	sumfold(int [], int);
void	equalfold(int [], int);


const	int		SIZE = 100;

int		main()
{
		int		mask[SIZE];
		int		number[SIZE];
		int		last;

		last = makearray(number);
		printout(number, last);

		swapfold(number, last);
		printout(number, last);

		sumfold(number, last);
		printout(number, ceil(last/2.0));

		last = makearray(number);
		printout(number, last);

		equalfold(number, last);
		printout(number, ceil(last/2.0));
}

void	swapfold(int number[], int last)
{
		
}
void	sumfold(int number[], int last)
{
}
void	equalfold(int number[], int last)
{
}

int	 	makearray(int	number[])
{
		int		last;
		srand(time(NULL));
		do {
			last = rand() % 20 ;
		} while (last < 10);

		for(int i=0; i<last; i++)
			number[i] = rand() % 10;
		return last;
}
void	printout(int number[], int last)
{
	for(int i=0;i<last; i++)
		cout << setw(5) << number[i] ;
	cout << endl;
}