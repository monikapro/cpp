#include<iostream>
using namespace std;
int main()
{
    int a[]={2,5,7,6,3,9,5,4,3,8};
    int sum=0;
    for(int i=0;i<=9;i++)
    sum=sum+a[i];
    cout<<"sum is"<<sum;
    cout<<"endl";
    return 0;
}