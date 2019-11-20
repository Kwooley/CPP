#include	<iostream>
using namespace std;

int 	stringLength	(const char source[ ]);
void 	stringCopy		(const char source[ ], char destination[ ]);
int 	stringCompare	(const char source[ ], const char destination[ ]);
int 	stringSplit		(const char source[ ], char splitlist[][100], char delimiter);

int		main()
{
	char	mystr[] = "C++,Programming,database,section,05";
	char	dest[100];
	char	splitlist[10][100];
	int		length, cmpresult, cnt;

	// 1) stringLength
	length = stringLength(static_cast<const char *>(mystr));
	cout << "The String Length is " << length << endl;
	
	// 2) stringCopy
	stringCopy(static_cast<const char *>(mystr), dest);
	cout << "String copied: Source : " << mystr << " Destination : " << dest << endl;
	
	// 3) stringCompare
	stringCopy(static_cast<const char *>("C++ Programming Language"), dest);
	cmpresult = stringCompare(static_cast<const char *>(mystr), static_cast<const char *>(dest));
	cout << "The Compare Result: Source= " << mystr << " Dest: " << dest << " Result : "  << cmpresult << endl;
	stringCopy(static_cast<const char *>("C Programming"), dest);
	cmpresult = stringCompare(static_cast<const char *>(mystr), static_cast<const char *>(dest));
	cout << "The Compare Result: Source= " << mystr << " Dest: " << dest << " Result : "  << cmpresult << endl;

	// 4) stringSplit
	cnt = stringSplit(static_cast<const char *>(mystr), splitlist, ',');
	cout << "Split words count " << cnt << endl;
	for(int i=0; i<cnt; i++)
		cout << "Split words " << splitlist[i] << endl;

}
int stringLength(const char source[ ])
{
	return 1;
}
void stringCopy(const char source[ ], char destination[ ])
{
}
int stringCompare(const char source[ ], const char destination[ ])
{
	return -1;
}
int stringSplit(const char source[ ], char destination[ ][100], char delimiter)
{
	return 1;
}








