#include<iostream>
using namespace std;
int main()
{
    int n,m=1;
   
    cout<<"Enter number:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<m++<<" ";
            
        }
        cout<<endl;
    }
}