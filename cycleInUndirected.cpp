#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> g;
vector<int> vis;
int ans;

void isCycle( int start ,int parent )
{
	vis[start]=1;
	for(int i=0;i<g[start].size();i++)
	{
		if(g[start][i]>0)
		{
			cout<<start<<" "<<i<<endl;
			if(vis[i]==1 && i !=parent )
				{cout<<"here"<<endl;ans=1;return;}

			if(vis[i]==1 && i == parent )
		 		{cout<<"there"<<endl;continue;;}
			isCycle(i,start);
		}	
	}
	return ;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		g.clear();
		ans=0;
		vis.clear();
		int n;
		int m;
		cin>>n>>m;
		vis.resize(n+1,0);
		g.resize(n,vector<int>(m,0));
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cin>>g[i][j];

		}
		isCycle(0,-1);
		cout<<ans<<endl;
	}
	return 0;	
}
