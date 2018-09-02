#include<bits/stdc++.h>
using namespace std;
bool prime[10000000000];
void sieve()
{
    for(int i=2;i*i<=1000000;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<1000000;j+=i)
                prime[j]=false;
        }
    }
}

int main()
{
    for(int i=0;i<=1000000;i++)prime[i]=true;
    sieve();

    cout<<prime[11];
}
