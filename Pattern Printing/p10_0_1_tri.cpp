#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            // my mind

            // if(i%2!=0)
            // {
            //     if(j%2!=0)
            //     cout<<1<<" ";
            //     else
            //     cout<<0<<" ";
            // }

            // if(i%2==0)
            // {
            //     if(j%2!=0)
            //     cout<<0<<" ";
            //     else
            //     cout<<1<<" ";
            // }

            // sir mind

            if ((i + j) % 2 == 0)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
}