#include<iostream>
using namespace std;
int main()
{
    int n;
   
    cout<<"Enter number:";
    cin>>n;
    int mid=(n+1)/2;
    if(n%2!=0)
    {
        for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=n;j++)
        {
            if(mid==i or mid==j)
            cout<<"*"<<" ";
        
            else
            cout<<"  ";

        }
        cout<<endl;
    }

    }

    else
    cout<<"invalid input";
    
}