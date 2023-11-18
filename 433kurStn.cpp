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
    vector<int> nums(n+1), prefix(n+1,0); int a;
    for(int i=1;i<=n;i++){
        cin>>a; nums[i]=a;
        prefix[i]=a+prefix[i-1];
    }
    sort(nums.begin(),nums.end());
    for(int i=1;i<=n;i++) nums[i]+=nums[i-1];
    int q; cin>>q;
    while(q--){
        int a,l,r; cin>>a>>l>>r;
        if(a==1){
            cout<<prefix[r]-prefix[l-1]<<endl;
        }else cout<<nums[r]-nums[l-1]<<endl;
    }
}

signed main(){
    // test
    solve();
}