//		Let us sketch the following program.
//		Make the stub and driver functions for the following pseudo code 
//			( no need to implement the detail function body)
//			
//		get the number of students numStudents(<=10) with input validation.
//		get the student's name and 3 scores
//		print the student's name and scores with the ascending order.
//			call sortscore(int &, int &, int &)  to change the values with ascending order.
//		print the student's score summation and average.
//			call  getsum(int, int, int) and getavg(int) to calculate the sum and average.


#include	<iostream>
using	namespace std;

void	getnumstu(int &);
void	getrecord(string &, int &, int &, int &);
void	printrecord(string , int &, int &, int &);
void	sortscore(int &, int &, int &);
void	printsumavg(int, int, int);
int	getsum(int, int, int);
float	getavg(int);

int	main()
{
	int	num=3;
	int	i;
	int	score1, score2, score3;
	string	stuname;

	getnumstu(num);
	for(i=0; i<num; i++)
	{
		getrecord(stuname, score1, score2, score3);
		printrecord(stuname, score1, score2, score3);
		printsumavg(score1, score2, score3);
	}
}
