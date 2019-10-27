//
//

#include		<iostream>
#include		<cstring>
using	namespace std;

int		main()
{
	char	name[10];

	cout << "Enter your name \n";
	cin >> name;

	cout << "Your name : " << name << endl;
	cin.ignore();

	cout << "Enter your name again\n";
	cin.getline(name, 10);
	cout << "Your name : " << name << endl;
}