
to print pattern:-
                    *****
                    ****
                    ***
                    **
                    *
#include<bits/stdc++.h>
using namespace std;
void pattern_5(int n)
{

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    pattern_5(n);
    return 0;
}

