#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,sum=0,digit=0;
    cin>>num;

    while(num!=0)
    {
        digit=num%10;
        num=num/10;
        sum=sum+pow(digit,3)
    }

    if(sum==num)
    {
        cout<<"Armstrong"<<endl;
    }
    else{

        cout<<"Non Armstrong"<<endl;
    }
    return 0;
}
