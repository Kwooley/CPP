// Character 2D Array

#include	<iostream>
using namespace std;

int	main()
{
	char 	cstrarray[5][10] = { "C++", 
								 "Python",
								 "Java",
								 "JSP",
								 "Html"};
	for(int	i=0; i<5; i++)
		cout << cstrarray[i] << endl;
	

	for(int	i=0; i<5; i++){
		for(int j=0;cstrarray[i][j] != '\0'; j++)
		//for(int j=0;j<10; j++)   // Wrong. 
			cout << cstrarray[i][j];
		cout << endl;
	}
}