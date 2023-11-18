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
    int n; cin>>n;
    vector<int> nums(n); int sum=0;
    for(int i=0;i<n;i++) {cin>>nums[i]; sum+=nums[i];}
    sort(nums.begin(),nums.end());
    int m; cin>>m;
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
		int p = lower_bound(nums.begin()+2,nums.end()+n,x)-nums.begin();
		cout<<min(max(0ll, x-nums[p])+max(0ll, y+nums[p]-sum), max(0ll, x-nums[p-1])+max(0ll, y+nums[p-1]-sum))<<endl;
    }
}

signed main(){
    // test
    solve();
}