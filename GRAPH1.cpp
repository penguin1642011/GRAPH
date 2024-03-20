#include<bits/stdc++.h>
/*
        penguin yes cop code
        https://codeforces.com/profile/Tuanhaiphong2
*/
using namespace std;
#define x1 o1
#define x2 o2
#define y1 o3
#define y2 o4
#define ll long long
#define fi first
#define se second
#define MOD 1000000007
const int MAXN = 4e5+7;
vector<ll> topo;
static ll in[1000];
ll dx[8] = {-1,0,0,1,-1,-1,1,1};
ll dy[8] = {0,-1,1,0,-1,1,-1,1};
static ll Hash,ans,base = 131,k,n,a[MAXN],m,b[MAXN],dp[MAXN];
static ll o1,o2,o3,o4,depth[MAXN];
vector<ll> g[MAXN];
bool visited[MAXN];
void dfs(ll u){
    visited[u] = true;
    for (auto v : g[u])
    if (!visited[v]){
        depth[v] = depth[u]+1;
        visited[v] = true;
        dfs(v);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("ROBOT.INP","r",stdin);
    //freopen("ROBOT.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,index,note,cnt,u,v;
    string ss,stt,sss,str,st,s;
    cin >> n;
    for (i = 1;i <= n-1;i++){
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1);
    for (i = 2;i <= n;i++)
    cout << depth[i] << '\n';
    return (0^0)&(200+10);
}
/*
  4 9 2 4
1 0 0 0 0
9 0 1 1 1
7 0 1 1 1
3 0 1 1 1
4 0 1 1 2
5 6
-2 3 2 3 3
-2 1 3 7 10
 T

 6 2
6 9 7 1 8 3
5 8 8 1 4 1
  21 12 5 9 3
   13 6 5 1
*/
