#include	<iostream>
using	namespace	std;

void	myfunction(void);
int	main()
{
	myfunction();
	myfunction();
}
void	myfunction()
{
	static	int i=0, number=10;

	i++;
	number += 10;
	cout << i << "called" << number << endl;
}
