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
// n is represented by n= p+(2*q);
int main()
{

    for(int i=0;i<=1000000;i++)prime[i]=true;
    sieve();

    int n=15;

    for(int q=1;q<n/2;q++)
    {
        int p=n-2*q;
        if(prime[p]==true)
        {
            cout<<p<<" "<<2*q<<endl;;
        }
    }

}
