 // Find the sub string in the original string

#include	<iostream>
using	namespace	std;

int		finduserstring(char [], int, char[], int);
int		main()
{
	int		cstrlen, userlen, position;
	char 	cstr[] = "Chocolate";
	char	userstr[100];

	cstrlen = sizeof(cstr);
	cout << cstrlen << " The given String length\n";
	cout << cstr << endl;
	cout << "Enter the string to find\n";
	cin.getline(userstr,100);
	userlen = cin.gcount();
	cout << userlen << " User String length\n";
	
	position = finduserstring(cstr, cstrlen, userstr, userlen);
	if ( position != -1)
		cout << "Found your string at :" << position << endl;
	else
		cout << "Not found\n";

}
int		finduserstring(char cstr[],int cstrlen, char  userstr[], int userlen)
{
	int		j, pos=-1;

	for(int	i=0; i<cstrlen-userlen+1; i++) {
		if ( cstr[i] == userstr[0]) {
			for(j=1; j<userlen-1; j++) {
				if ( cstr[i+j] != userstr[j] )
					break;
			}
			if (j == userlen-1) {
				pos = i;
				return pos;
			}
		}
	}
	return pos;
}