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
void	equalfold(int [], int [],  int);


const	int		SIZE = 100;

int		main()
{
		int		mask[SIZE];
		int		number[SIZE];
		int		equal[SIZE];
		int		last;

		last = makearray(number);
		printout(number, last);

		swapfold(number, last);
		printout(number, last);

		sumfold(number, last);
		printout(number, ceil(last/2.0));

		last = makearray(number);
		printout(number, last);
		
		equalfold(number, equal, last);
		printout(equal, ceil(last/2.0));
}

void	swapfold(int number[], int last)
{
		for(int i=0; i<last/2; i++) {
			swap(number[i], number[last-i-1]);
		}
		// for(int i=0, j=last-1; i<j; i++, j--) {  // Works same. but use two variables.
		// 	swap(number[i], number[j]);
		// }
}
void	sumfold(int number[], int last)
{
		for(int i=0; i<last/2; i++)
			number[i] += number[last-i-1];
}
void	equalfold(int number[], int equal[], int last)
{
		int i;
		for(i=0; i<last/2; i++)
			equal[i] = (number[i] == number[last-i-1])? 1 : 0 ;
		if (last % 2 )
			equal[i] = 0;
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