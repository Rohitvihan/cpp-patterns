
to print pattern:-
                    12345
                    1234
                    123
                    12
                    1
#include<bits/stdc++.h>
using namespace std;
void pattern_5(int n)
{
    int var=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<j;
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

