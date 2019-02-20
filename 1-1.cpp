#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    //int a,b;
    //scanf("%d%d",&a,&b);
    //printf("%d %d",a,b);
    
    //int n;
    //cin>>n;
    //cout <<n<<"hello"<<endl;
    
    
   // for(unsigned char i=0;i<255;i++)
   // {
   //     printf("%d %c %x\n",i,i,i);
   //     if (i%10==0)
   //     {
   //         //printf("\n");
   //     }
   // }
   
//    int i;
//    char c;
//    double d;
//    cin >> i >> c >> d;
//    cout << i <<" "<<c<<" "<<d<<endl;
//

// unsigned int a=0xfffffffe;
// printf("%x %u\n",a,a);
// printf("%x %u\n",a+1,a+1);
// printf("%x %u\n",a+2,a+2);

//int i;
//for(i=0;i<26;i++)
//{
//    cout<<char('a'+i)<<"\t"<<char('A'+i)<<endl;
//}


//int num;
//int factorial;
//int sum=0;
//cin>>num;
//for(int i=1;i<=num;i++)
//{
//    factorial=1;
//    for(int j=1;j<=i;j++)
//    {
//        factorial*=j;
//    }
//    sum+=factorial;
//    cout<<factorial<<" ";
//}
//cout<<endl;
//cout<<sum<<endl;
//
//

//    int n;
//    cin>>n;
//    bool prime=false;
//    int count=0;
//    for(int i=2;i<n;i++)
//    {
//        prime=false;
//        for(int k=2;k<i;k++)
//        {
//            if(i%k==0)
//            {
//                prime=true;
//                break;
//            }
//        }
//        if(!prime)
//        {
//            cout<<i<<" ";
//            count++;
//        }    
//    }
//    cout<<"\n"<<count<<endl;
//    


//    int n;
//    //cin>>n;
//    n=1;
//    string weekday[]={"Monday","Tuesday"};
//    cout<<weekday[n-1]<<endl;
//
//    if(strcmp("Hello","Hello")==0)
//    {
//        cout<<"same"<<endl;
//    }
//
    
    int * pa;
    int a=0x1BCD;
    pa=&a;
    printf("\n%x %d\n",a,a);
    char *pc;
    pc=(char*)pa;

    printf("%x %x\n",*pc,*(pc+1));

    return 0;

}
