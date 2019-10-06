#include	<iostream>
#include	<iomanip>
using namespace	std;

void	swap(int &, int &);
void	swap(int &, int &, int &);
void	swap(int &, int &, int &, int &);
void	getinput(int &);
void	getinput(int &, int &);
void	getinput(int &, int &, int &);
void	getinput(int &, int &, int &, int &);

int	main()
{
	int 	num;
	int	val1, val2, val3, val4;

	do {
		getinput(num);   	// num must be in [2,3,4 or -1]
		switch(num) {
			case	2:
				getinput(val1, val2);
				cout << "Input  Valus : " << setw(5) << val1 << setw(5) << val2 << endl;
				swap(val1,val2);
				cout << "Swapped Valus : " << setw(5) << val1 << setw(5) << val2 << endl;
				break;
			case 	3:
				getinput(val1, val2, val3);
				cout << "Input  Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3<< endl;
				swap(val1,val2, val3);
				cout << "Swapped Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3<< endl;
				break;
			case 	4:
				getinput(val1, val2, val3, val4);
				cout << "Input  Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << setw(5) << val4 << endl;
				swap(val1,val2, val3, val4);
				cout << "Swapped Valus : " << setw(5) << val1 << setw(5) << val2 << setw(5) << val3 << setw(5) << val4 << endl;
				break;
			default :
				break;
		}
	} while ( num != -1);
}
