// Chapter 11. Structured Data
// Enumerated Data Types
// Programming Lab 11-4
// lab11-4.cpp

#include	<iostream>
#include	<fstream>
#include	<string>
using namespace std;

const	int 	MAXSIZE=1000;
struct Namerecords {
	string	stname;
	string 	sex;
	int 	year;
	string 	name;
	int 	count;
};

int		makingNameRecords(Namerecords []);
void	printNameRecords(Namerecords [], int);

string	getstatename(string);
string	getgender(string);
int		getyear(string);
string	getname(string);
int		getcount(string);


int main()
{
	int				numofRecords = 0;
	Namerecords 	nr[MAXSIZE];

	numofRecords = makingNameRecords(nr);
	printNameRecords(nr, numofRecords);

}
int		makingNameRecords(Namerecords nr[])
{
	int			cnt=0;
	
	return cnt;
}
void 		printNameRecords(Namerecords nr[], int numofRecords)
{
	
}
string 		getstatename(string str)
{
	return 	str.substr(0,2);
}
string 		getgender(string str)
{
	int 	pos = str.find(',');
	return 	str.substr(pos+1, 1);
}
int 		getyear(string str)
{
	int		startpos, pos;
	int		yearlen=4;
	int		year;
	startpos = 0;
	for(int i=0; i<2; i++) {
		pos = str.find(',',startpos);
		startpos = pos+1;
	}
	year = stoi(str.substr(pos+1, yearlen));
	return year;

}
string 		getname(string str)
{	
	int		startpos, pos, endpos;
	startpos = 0;
	for(int i=0; i<3; i++) {
		pos = str.find(',',startpos);
		startpos = pos+1;
	}
	endpos = str.find(',', startpos);
	return str.substr(startpos, endpos-startpos);

}
int 		getcount(string str)
{
	int		startpos, pos, count;
	
	startpos = 0;
	for(int i=0; i<4; i++) {
		pos = str.find(',',startpos);
		startpos = pos+1;
	}
	count = stoi(str.substr(startpos, str.length()));
	return count;

}





