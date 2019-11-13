// Chapter 12. Advanced File Operations
// getline2.cpp

#include	<iostream>
#include	<fstream>

using namespace std;

int		main()
{
	ifstream	ifso;
	//char 		readline=[256];
	string		readline;

	ifso.open("cany.txt", ifstream::in);
	if (! ifso ) {
		cout << "Open Error \n";
		exit(0);
	}

	getline(ifso, readline, ',');
	cout << readline << endl;
	getline(ifso, readline, ',');
	cout << readline << endl;
	getline(ifso, readline, ',');
	cout << readline << endl;
	getline(ifso, readline, ',');
	cout << readline << endl;
	getline(ifso, readline, ',');  // At this time, read string until the ',' in the next line.
	cout << readline << endl; 		// read 256 and CA in the next line.

	ifso.close();
}