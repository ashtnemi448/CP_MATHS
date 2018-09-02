#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=32;

    for(int i=2;i*i<n;i++)
    {
        if(n%i==0)
            cout<<i<<" "<<n/i<<" ";
    }
}

