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

void solve(){
    int k,x; cin>>k>>x;
    int l=1, r=2*k-1, mid, emote, b=INT_MIN;
    while(l<=r){
        mid=l+(r-l)/2;
        mid-=1;
        if(mid<k){
            emote=((double(mid)/2)*(2+mid-1));
        }
        else {
            int m=mid-k;
            emote=(((double)(m)/2)*(2*(k-1)+1-m))+((double(k)/2)*(2+k-1));
        }
        if(emote>=x) r=mid;
        else {b=max(b,mid+1), l=mid+2;}
    }
    cout<<b<<endl;
}

signed main(){
    test
    solve();
}