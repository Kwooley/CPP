#include	<iostream>
#include	<iomanip>
using namespace	std;

void	getinput(int &, int &, int &);
void	maxmin(int, int, int, int &, int &);

int	main()
{
	int 	num1, num2, num3;	
	int	max, min;
	getinput(num1, num2, num3);
	cout << " Your input " << setw(5) << num1 << setw(5) << num2 <<setw(5) <<  num3 << endl;
	maxmin(num1, num2, num3, max, min);
	cout << " Max, Min and Max-Min" << setw(5) << max << setw(5) << min <<setw(5) <<  max-min << endl;

}
