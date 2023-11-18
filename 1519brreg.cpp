#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int               long long
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr                first
#define sc                second
#define minf              LONG_LONG_MIN
#define inf              LONG_LONG_MAX
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define mem1(x, arr)           memset((arr),x,sizeof((arr)))
#define pVec(v)           for(auto e:v)cout<<e<<" ";cout<<"\n"
const int MOD = 1e9 + 7;
const int N = 1e5 + 7;
 
void init_code() {
#ifndef ONLINE_JUDGE
	freopen("inputf.txt", "r", stdin);
	freopen("outputf.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int t,n,b,a[200001];
long long s[200001],d[200001];
vector<int>v[200001];

void solve(){
    fill(d,d+n+1,0);
    for(int i=1;i<=n;i++)cin>>a[i],v[i].clear();
    for(int i=1;i<=n;i++)cin>>b,v[a[i]].push_back(b);
    for(int i=1;i<=n;i++){
        sort(v[i].rbegin(),v[i].rend());
        int k=v[i].size();
        for(int j=1;j<=k;j++)s[j]=s[j-1]+v[i][j-1];
        for(int j=1;j<=k;j++)d[j]+=s[k-k%j];
    }
    for(int i=1;i<=n;i++)cout<<d[i]<<" ";
}


signed main(){
    test
    solve();
}