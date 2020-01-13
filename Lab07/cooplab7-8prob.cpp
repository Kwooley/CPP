#include		<iostream>
#include		<fstream>
#include 		<string>
using	namespace std;

int 		makeNameRecord(string [], string [], int [], string [], int []);
void		printoutallrecords(int, string [], string [], int [], string [], int []);
void		printnamewithA(int, string [], string [], int [], string [], int []);


string		getstatename(string);
string		getgender(string);
int			getyear(string);
string		getname(string);
int			getcount(string);


int		main()
{
	string	state[100];
	string	gender[100];
	int		year[100];
	string	name[100];
	int		count[100];
	int 	cnt;

	cnt = makeNameRecord(state, gender, year, name, count);
	printoutallrecords(cnt, state, gender, year, name, count);
	printnamewithA(cnt, state, gender, year, name, count);

}

int 	makeNameRecord(string state[], string gender[], int year[], string name[], int count[])
{
	int 			cnt=0;

	
	return cnt;
}
void 	printoutallrecords(int cnt, string state[], string gender[], int year[], string name[], int count[])
{
	
}
void 	printnamewithA(int cnt, string state[], string gender[], int year[], string name[], int count[])
{
	
}




string 		getstatename(string str)
{
	int 	pos = str.find(',');
	return 	str.substr(0,pos);
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