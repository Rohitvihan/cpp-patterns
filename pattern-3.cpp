#to print pattern:-
                    1
                    12
                    123
                    1234
                    12345
#include<bits/stdc++.h>
using namespace std;
void pattern_3(int n)
{

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
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
    pattern_3(n);
    return 0;
}
