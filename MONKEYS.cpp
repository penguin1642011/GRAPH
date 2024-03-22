
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
static ll Hash,ans,base = 131,k,n,a[MAXN],m,b[MAXN],g[1007][1007],o1,o2,o3,o4;
bool visited[1007][1007];
ll dfs(ll i,ll j){
    if (g[i][j]==0)return 0;
    ll sum = g[i][j];
    g[i][j] = 0;
    for (ll k = 0;k < 4;k++){
        ll l = i+dx[k];
        ll r = j+dy[k];
        if (l>=1&&l<=n&&r>=1&&r<=m&&g[l][r]==1)sum+=dfs(l,r);
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //freopen("BAI4.INP","r",stdin);
    //freopen("BAI4.OUT","w",stdout);
    static ll tt,xx,y,x,z,yy,d,j,l,r,lo,rr,i,res,index,note,cnt,u,v;
    string ss,stt,sss,str,st,s;
    cin >> n >> m >> u >> v;
    for (i = 1;i <= n;i++){
        for (j = 1;j <= m;j++)
        cin >> g[i][j];
    }
    cout << dfs(u,v);
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


1 2 3 2 4 5 2 4
1 2 0 2 1 2 2 1
*/
