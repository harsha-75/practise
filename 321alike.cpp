#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
    bool flag=true;
    int max=-1;
    while(n>0)
    {
        int k=n%10;
        if(k>max)
        {
           max=k;
        }
        else
        {
           flag=false;
           break;
        }
        n=n/10;
    }
    if(flag)
    {
       cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }
}