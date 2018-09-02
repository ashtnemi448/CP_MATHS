#include<bits/stdc++.h>
using namespace std;
bool prime[1000000];

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

void ans(int n)
{
    int f=0;
    for(int i=2;i<n;i++)
    {
        if(prime[i]!=true)continue;
       // cout<<i<<endl;
        int diff=n-i;
        if(prime[diff]==true)
        {
            f=1;
            int min1=min(diff,i);
            int max1=max(diff,i);
            cout<<min1<<"  "<<max1<<endl;;break;
            return;
        }
    }
    if(f==0)
        cout<<"-1"<<endl;
}

int main()
{
    for(int i=0;i<=1000000;i++)prime[i]=true;
    sieve();
   // cout<<prime[11]<<endl;
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       if(n==3)
       {
           cout<<"-1"<<endl;continue;
       }
       if(n==1)
       {
           cout<<"-1"<<endl;continue;
       }
        if(n==2)
       {
           cout<<"-1"<<endl;continue;
       }
       ans(n);
   }

    return 0;
}
