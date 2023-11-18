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
    int n,l,r; cin>>n>>l>>r;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    sort(nums.begin(),nums.end());
    int ans=0;
    for(int i=0;i<n;i++){
        int lw=lower_bound(nums.begin()+i+1,nums.end(),l-nums[i])-nums.begin(); 
        int hg=upper_bound(nums.begin()+i+1,nums.end(),r-nums[i])-nums.begin();
        ans+=hg-lw;
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}