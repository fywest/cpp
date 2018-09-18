#include <iostream>
using namespace::std;

int main(int argc,char *argv[])
{
	int intOne=0;
	int& r_int_One=intOne;
	
	intOne=5;

	cout<<intOne<<endl;
	cout<<r_int_One<<endl;

	r_int_One=7;
	
	cout<<intOne<<endl;
	cout<<r_int_One<<endl;

	cout<<&(intOne)<<endl;
	cout<<&(r_int_One)<<endl;

	return 0;
}
