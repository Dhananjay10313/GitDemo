// (ASCII) a=97 A=65
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
#define inf               LONG_LONG_MAX
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
bool isPerfectSquare(int x)
{
    if (x >= 0)
    {
        int sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

bool sortbysec(const pair<int,int> &a,
            const pair<int,int> &b)
{
    return (a.second < b.second);
}
void solve(){
    int n, q; cin>>n>>q;
    map<int,int> row, col;
    set<int> r, c;
    for(int i=1;i<=n+1;i++) r.insert(i), c.insert(i);
    for(int i=0;i<q;i++){
        int t; cin>>t;
        if(t==1){
            int x, y; cin>>x>>y;
            if(row[x]==0) r.erase(x);
            if(col[y]==0) c.erase(y);
            row[x]+=1, col[y]+=1;
        }
        else if(t==2){
            int x, y; cin>>x>>y;
            row[x]-=1, col[y]-=1;
            if(row[x]==0) r.insert(x);
            if(col[y]==0) c.insert(y);
        }
        else {
            int x1, y1, x2, y2; cin>>x1>>y1>>x2>>y2;
            auto val=lower_bound(r.begin(),r.end(),x1);
            if(x2<*val){
                cout<<"YES"<<endl;
            }
            else {
                auto val=lower_bound(c.begin(),c.end(),y1);
                if(y2<*val){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
        }
    }
}
signed main(){
    solve();
}