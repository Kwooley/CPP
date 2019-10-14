//		Write a program that calculate the summation of the given N numbers 
//		with removing the minimum and maximum numbers.
//		[example]  N = 5, [2, 1, 5, 10, 7] =  2 + 5 + 7 = 14
//		the function int getsum(int N) needs to get the N user inputs 
//		and then calculate the summation of list with removing the minimum and maximum value.

#include	<iostream>
using	namespace std;

int	getsum(int);
int	main()
{
	int	N;
	int	sum;

	do {
		cout << "Enter your input ( N )\n";
		cin >> N;
		if ( N != -1) {
			sum = getsum(N);
			cout << "The sum is " << sum << endl;	
		}

	} while ( N != -1 ) ;
}
int	getsum(int N)
{
	int 	i;
	int	max, min, num, sum;
	for(i=0; i<N; i++)
	{
		cout << "Enter your " << i+1 << "th number\n";
		cin >> num;
		sum += num;
		if ( i == 0 ) 
			min = max = num;
		if ( min > num )
			min = num;
		if ( max < num)
			max = num;
	}
	sum = sum - min - max;
	return sum;
}
