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

void solve(){
    long long n,w,c=1,l=0;
    cin>>n>>w;
    long long a[n];
    multiset<int>s;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        s.insert(a[i]);
    }
    l=w;
    while(!s.empty()){
        auto it=s.upper_bound(l);
        if(it!=s.begin()){
            it--;
            int x=*it;
            l-=x;
            s.erase(it);
        }
        else{
            l=w; c++;
        }
    }
    cout<<c<<endl;
}

signed main(){
    test
    solve();
}