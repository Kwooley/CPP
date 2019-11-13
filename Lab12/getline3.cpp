// Chapter 12. Advanced File Operations
// 

#include	<iostream>
#include 	<fstream>
#include	<sstream>
#include	<string>
using  namespace	std;

const	int 	MAXSIZE=1000;
struct Namerecords {
	string	stname;
	string 	sex;
	int 	year;
	string 	name;
	int 	count;
};

void 	printNameRecords(Namerecords [], int);

int		main()
{
	ifstream	ifso;
	Namerecords nr[MAXSIZE];
	string 		buf, field;
	int			i=0, fcnt=0;
	stringstream ss;

	ifso.open("cany.txt", fstream::in);
	if (!ifso){
		cout << "Open Error\n";
		exit(0);
	}

	while( (i<100) && (ifso >> buf)) {
		ss << buf;
		while(getline(ss, field, ',')) {
			switch(fcnt){
				case 0:
						nr[i].stname = field;
						break;
				case 1:
						nr[i].sex = field;
						break;
				case 2:
						nr[i].year = stoi(field);
						break;
				case 3:
						nr[i].name = field;
						break;
				case 4:
						nr[i].count = stoi(field);
						break;
			}
			fcnt = ++fcnt % 5;
		}
		i++;
		ss.clear();
	}

	printNameRecords(nr, 100);
}
void 		printNameRecords(Namerecords nr[], int numofRecords)
{
	for(int i=0; i<numofRecords; i++){
		cout << setw(5) << nr[i].stname << "\t";
		cout << setw(3) << nr[i].sex << "\t";
		cout << setw(5) << nr[i].year << "\t";
		cout << setw(10) << nr[i].name << "\t\t";
		cout << setw(5) << nr[i].count << endl;
	}
}