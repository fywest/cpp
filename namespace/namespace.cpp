#include<iostream>
using namespace::std;
namespace One{
	int M=200;
	int inf=10;
}
namespace Two{
	int x;
	int inf=100;
}

int main(int argc,char ** argv){
	using Two::x;
	cout<<x<<endl;
	x=-100;
	One::inf*=1;
	cout<<One::inf<<endl;
	cout<<One::M<<endl;
	Two::inf*=2;
	cout<<Two::inf<<endl;
	cout<<x<<endl;
	return 0;

}
