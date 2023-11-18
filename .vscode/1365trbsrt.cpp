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
    int n; cin>>n; set<int> nw;
    vector<int> nums(n), val(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    for(int i=0;i<n;i++) cin>>val[i], nw.insert(val[i]);
    int prv=nums[0]; int flag=1;
    for(int i=1;i<n;i++) {if(nums[i]<prv) flag=0; prv=nums[i];}
    if(flag||nw.size()>1){
        cout<<"Yes"<<endl; return;
    }
    else cout<<"No"<<endl;
}

signed main(){
    test
    solve();
}