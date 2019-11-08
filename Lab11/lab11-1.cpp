// Chapter 11. Structured Data.
// 
// Programming Lab 11- 1 
// lab11-1.cpp

#include	<iostream>
#include	<fstream>
using namespace	std;

const	int 	NUMCOURSE=2;
struct Student
{
	int	id;
	string	name;
	int 	score[NUMCOURSE];	
	int		sum;
	int		avg;
};

void	printout(const Student &);

int	main()
{
	ifstream	ifso;
	Student	s[100];
	int		i=0, j;

	ifso.open("students.txt");
	if(ifso){
		while( ifso >> s[i].id >> s[i].name) {
			j = 0; s[i].sum = 0;
			while((j < NUMCOURSE) && (ifso >> s[i].score[j])){
				s[i].sum += s[i].score[j];
				j++;
			}
			s[i].avg = s[i].sum / NUMCOURSE;
			printout(s[i]);
			i++;
		}
	}
}
void	printout(const Student &s)
{
	cout << s. id << "\t" << s.name << "\t"
		<< s.score[0] << "\t" << s.score[1] << 
		"\tsum:" << s.sum << "\taverage: "<< s.avg << endl;

}