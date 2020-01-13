#include		<iostream>
#include		<iomanip>
#include		<vector>
using namespace	std;

int	main()
{
	vector<int> 	number (3);

	for(int i=0; i < number.size(); i++) {
		cout << "Enter your number. \n";
		cin	>> number[i];
	}

	for(int &val : number) {
		cout << "Enter your number.\n";
		cin >> val;
	}
	for(int val : number) {
		cout << val << endl;
	}

	number.pop_back();
	cout << "The size of vector number5 :" << number.size() << endl;

	number.clear();
	cout << "The size of vector number5 :" << number.size() << endl;

	if ( number.empty())
		cout << "The vector number is empty\n";	
}

	
