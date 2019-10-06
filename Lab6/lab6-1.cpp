#include	<iostream>
using namespace std;

int inputValidate(int, int);
void getListprime(int, int);

int	main()
{
	int	begin, end;
	int res;

	cout << "Enter your two inputs\n";
	cin >> begin >> end;

	res = inputValidate(begin, end);
	if (!res)
		exit(0);

	getListprime(begin, end);
}
