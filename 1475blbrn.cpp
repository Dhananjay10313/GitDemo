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
#define mem1(x, arr)           memset((arr),x,sizeof((arr))
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
    int a,b,k; cin>>a>>b>>k;
    int bo[k], gi[k], cnt1[a+1]={0}, cnt2[b+1]={0};
    for(int i=0;i<k;i++){
        cin>>bo[i]; cnt1[bo[i]]+=1;
    }
    for(int i=0;i<k;i++){
        cin>>gi[i]; cnt2[gi[i]]+=1;
    }
    int cnt=0;
    for(int i=0;i<k;i++){
        cnt+=k-(cnt1[bo[i]]+cnt2[gi[i]])+1;
    }
    cout<<cnt/2<<endl;
}

signed main(){
    test
    solve();
}