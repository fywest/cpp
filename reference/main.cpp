#include <iostream>
using namespace::std;


void foo(int val)
{
	val=10;
}

void bar(int& val)
{
	val = 10;
}

void zoo(int* pval)
{
	*pval = 10;
}
int main(int argc,char *argv[])
{

	int a=1;
	int b=1;
	int c=1;

	int intOne=0;
	int& r_int_One=intOne;
	
	foo(a);
	bar(b);
	zoo(&c);
	cout<<a<<" "<<b<<" "<<c<<endl;

	
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
