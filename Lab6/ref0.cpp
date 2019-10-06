#include	<iostream>
using namespace	std;

int	main()
{
	int 	num = 10;
	int	num2 = 100;
	int	&ref = num;
	
	cout << num << "num \n";

	ref = 20;
	cout << num << "  " << ref << " num, ref \n";

	ref = num2;
	cout << num << "  " << ref << " num, ref \n";

}
