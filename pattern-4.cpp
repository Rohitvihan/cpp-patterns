to print pattern:-
                    0
                    11
                    222
                    3333
                    44444
#include<bits/stdc++.h>
using namespace std;
void pattern_4(int n)
{

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    pattern_4(n);
    return 0;
}
