#include<bits/stdc++.h>
using namespace std;
int cnt;

void sn(string s,int n,int index,int l,int r)
{
    if(index>n)
	return;
   
    if(s!="")
    {
	if(stoi(s)>=l &&stoi(s)<=r)
   	{
	    cout<<s<<endl;
	    cnt++;
	}
    }
    int i;
    if(index==0)
        i=1;
    else
        i=0;
    
    for(;i<=9;i++)
    {
        if(index==0)
        {
           s+='0'+i;
           sn(s,n,index+1,l,r); 
	   s.resize(s.size()-1);
        }
        else
        {
            int last = s[s.size()-1]-'0';
            if(last+1<=9)
            {
                s+='0'+last+1;
		//cout<<" s in "<<s<<endl;
                sn(s,n,index+1,l,r); 
	        s.resize(s.size()-1);
            }
            if(last-1>=0)
            {
                s+='0'+last-1;
                sn(s,n,index+1,l,r);
                s.resize(s.size()-1);
            }
            return;
        }    
    }
}

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int l;int r;cnt=0;
	    cin>>l>>r;
            if(l==0)cnt++;
	    sn("",to_string(r).size(),0,l,r);
	    cout<<cnt<<endl;
	 }
	return 0;
}
