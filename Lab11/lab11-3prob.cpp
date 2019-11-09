// Chapter 11. Structured Data
// Programming Lab 11-3
// lab11-3.cpp

#include	<iostream>
#include	<fstream>
#include	<string>
using namespace std;

const	int 	NUMCOURSE=2;
struct Scores {
	int	score[NUMCOURSE];
	int	sum;
	int	avg;
};
struct Students
{
	int		id;
	string	name;
	Scores	screcord;
};

int		makingstructarray(Students []); // return value : the number of struct array
void	printrecord(const Students [], int, int);
void	findusername(Students [],int, string);

int main()
{
	int			numofRecords=0;
	Students	s[50];
	string	username;

	numofRecords = makingstructarray(s);
	cout << "Total number of stdents records is " << numofRecords << endl;
	printrecord(s, 0, numofRecords-1);

	cout << "Enter user name to find in Students's records\n";
	cin	>> username;
	findusername(s, numofRecords, username);

}
int	makingstructarray(Students s[])
{

	int			idx=0;
	return idx;
}
void	findusername(Students s[], int numofRecords, string username)
{
	int pos=0;
	cout << "Matched Records with " << username << endl;
	for(int i=0; i<numofRecords;i++){
		pos = s[i].name.find(username);
		if (pos>0)
			printrecord(s, i, i);
	}

}

void	printrecord(const Students s[], int from, int to)
{
	for(int i=from; i<=to; i++){
		cout << s[i].id << "\t" << s[i].name << "\t"
			<< s[i].screcord.score[0] << "\t" << s[i].screcord.score[1] << 
			"\tsum:" << s[i].screcord.sum << "\taverage: "<< s[i].screcord.avg << endl;
	}

}