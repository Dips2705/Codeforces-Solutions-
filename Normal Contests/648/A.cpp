#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define int         long long int
#define vi           vector<int>
#define pii          pair<int,int>
#define vpp          vector<pii>
#define mii          map<int,int>
#define pb           push_back
#define endl        '\n'
#define rep(i,a,bb)  for(int i=a;i<bb;i++)
#define ff           first
#define ss           second
#define fast         ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test         int T;cin>>T;while(T--)
#define __sort(v)    sort(v.begin(),v.end())
#define __rsort(v)   sort(v.rbegin(),v.rend())
#define setbits(x)   __builtin_popcount(x)
#define zrobits(x)   __builtin_ctzint(x)
const int inf = 5 * (1e+8);
const int mod = 1e+9 + 7;
#define ll long long
vector<int> adj[500005];
vector<int> visited(500005, 0);
vector<int> t(500005, 0);
int flag = 1;
void nothing()
{

}
void dfs(int src)
{
	visited[src] = 1;
	
	vi v;
	for(auto i:adj[src])
		v.pb(t[i]);

	__sort(v);

	int mini = 1;
	for(auto i:v)
	{
		
		if(mini==i)
			mini++;
	}
	if(t[src]!=mini)
	{
		flag = 0;
	}
}

int modpow(int x,int y,int p=mod){  
	ll res = 1;    x = x % p;
	if (x == 0) return 0;
	while (y > 0){  
		if (y & 1)  
			res = (res%p*x%p) % p;  
		y = y>>1;
		x = (x*x) % p;  }  
		return res;  }
		int modinv(ll n , ll p=mod){
			return modpow(n,p-2,p);
		}

		void addEdge(vector<int> adj[], int u, int v) 
		{ 
			adj[u].push_back(v); 
			adj[v].push_back(u); 
		}
		void printGraph(vector<int> adj[], int V) 
		{ 
			for (int v = 0; v < V; ++v) 
			{ 
				cout << "\n Adjacency list of vertex "
				<< v << "\n head "; 
				for (auto x : adj[v]) 
					cout << "-> " << x; 
				printf("\n"); 
			} 
		}

		void solve()
		{
			int n,m;
			cin>>n>>m;

			int a[n][m];
			rep(i,0,n)
			rep(j,0,m)
			cin>>a[i][j];
			int count = 0;
			nothing();
			rep(i,0,n)
			{
				rep(j,0,m)
				{
					int f=100;
					int g=100;
					rep(k,0,n)
					{
						if(a[k][j]==1)
						{
							f = 0;
			nothing();
							break;
						}
					}
					rep(l, 0, m)
					{
						if(a[i][l]==1)
						{
							g=0;
			nothing();
							break;
						}
					}
					if(f!=0&&g!=0)
					{
						count++;
						a[i][j] = 1;
			nothing();
					}
				}
			}

			if(count%2)
				cout<<"Ashish"<<endl;
			else
				cout<<"Vivek"<<endl;
		}
		int32_t main()
		{
			fast;
			test {
				solve();
			}
			return 0;
		}