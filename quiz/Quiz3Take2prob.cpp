// Quiz 3 The 2nd Take
// 

#include	<iostream>
#include	<iomanip>
using 	namespace std;

const	int	SIZE=10;

void	printout(int [], int);
int 	insertone(int [], int, int);
int 	deleteone(int [], int, int);
int 	main()
{
	
	int		numbers[SIZE] = {5, 20, 25, 35, 40};
	int		numelm = 5;
	int 	usernum;

	// Take the user input 
	printout(numbers, numelm);

	cout << "Enter your number to insert to the array\n";
	cin >> usernum;
	numelm = insertone(numbers, numelm, usernum);
	cout << "After insertion \n";
	printout(numbers, numelm);

	cout << "Enter your number to delete\n";
	cin >> usernum;
	numelm = deleteone(numbers, numelm, usernum);
	printout(numbers, numelm);

}
void	printout(int numbers[], int numelm)
{	
	// print out all the contents of array numbers
	for(int i=0; i<numelm; i++)
		cout << setw(5) << numbers[i];
	cout << endl;
}
int 	insertone(int numbers[], int numelm, int usernum)
{
	return	numelm;
}
int 	deleteone(int 	numbers[], int numelm, int usernum)
{
	return numelm;
}