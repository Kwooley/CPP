// Cooperative Programming Lab 10-5
// The Class string and it's member functions.

#include	<iostream>
#include	<string>
using namespace std;

int	findpattern(string, string);
int	findnumchars(string);

int	main()
{
	string	txt("BACDGABCDAZ");
	string 	pat("ABCD");
	int		result;

	cout << "Text : " << txt << endl;
	cout << "Pattern : " << pat << endl;

	result = findpattern(txt, pat);
	result = findnumchars(txt);
}

int	findpattern(string txt, string pat)
{
	int ret=0;
	return ret;
}
int	findnumchars(string txt)
{
	int	uniquecnt=0;
	return uniquecnt;
}





