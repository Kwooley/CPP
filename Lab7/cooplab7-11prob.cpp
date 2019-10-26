// 1. Make a vetor variable and the initial N integer numbers
// 2. Sort Vector
// 3. Insert the user number into the vector 
// 4. Delete the item from the vector by seaching the user value.
// 
#include	<iostream>
#include	<iomanip>
#include 	<cstdlib>
#include	<ctime>
#include 	<vector>
using namespace std;

void	makevector(vector<int> &);
void 	insertvector(vector<int> &, int );
void 	deletevector(vector<int> &, int );

int 	randnum(void);
int 	getinput(void);
void	printvector(vector<int> );

int 		main()
{
	const	int 	SIZE=10;
	int 	usernum;
	vector<int> 	number(SIZE);

	srand(time(NULL));

	makevector(number);
	printvector(number);
	usernum = getinput();
	insertvector(number, usernum);
	printvector(number);
	usernum = getinput();
	printvector(number);
	deletevector(number, usernum);
	printvector(number);
}
void	makevector(vector<int>	&number)
{
}
void 	insertvector(vector<int> &number, int usernum)
{
}
void 	deletevector(vector<int>  &number, int username)
{
}
int 	getinput(void)
{
		int num;
		cout << "Enter your input\n";
		cin >> num;
		return num;
}
int 	randnum(void)
{
	return rand() % 100;
}
void	printvector(vector<int>	number)
{
	for(auto iter=number.begin(); iter != number.end(); iter++)
		cout << setw(5) << *iter;
	cout << endl;
}