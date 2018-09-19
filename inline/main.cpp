#include <iostream>
#include <stdio.h>

using namespace::std;

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define square(x) ((x)*(x))

inline bool isnumber(char ch)
{
	return ((ch>='0') && (ch<='9'));
}

inline int max(int a,int b)
{
	return a > b ? a : b;
}

int main(int argc,char *argv[])
{
	char c;

	int a = 55,b = 4;
	int e = square(2+3);

	cout << e << endl;
	int cc = max(a++,b);
	cout << cc << endl;

	int d = MAX(a++,b);

	cout << d << endl;
	cout << a << endl;
	

	while((c=cin.get()) != 'q')
	{
		if(isnumber(c))
		{
			cout << "You enter a digit" <<endl;
		}else{
			
			cout << "You enter a non-digit" <<endl;
		
		}
	}
	return 0;
}
