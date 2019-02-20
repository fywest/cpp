#include<iostream>

using namespace std;

//int n=4;
//int& setValue(){return n;}

class A
{
    int i;
    public:
        void Hello()
        {
            cout<<"Hello"<<endl;
        }
};

int main()
{
    //setValue()=40;
    //cout<<n<<endl;

//    void swap(int & a,int & b);
//    int a=3,b=4;
//    int& aa=a;
//    int& bb=b;
//    swap(aa,bb);
//    cout<<a<<" "<<b<<endl;

    A *p=NULL;
    p->Hello();
    return 0;

}

//void swap(int & a,int & b)
//{
//
//    int temp;
//    temp=a;
//    a=b;
//    b=temp;
//}
