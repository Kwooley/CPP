//
//
//
//
//

#include	<iostream>
#include	<iomanip>
using namespace	std;

double nthpowerp(int);
double nthpowern(int);
void   printout(double);

int     main()
{
        int     n;
	double	result;
        cout << "Enter your input\n";
        cin >> n;

      	if ( n > 0)
		result = nthpowerp(n);
      	else if ( n<0)
		result = nthpowern(n);
	else
		result  = 1 ;
        printout(result);
}
