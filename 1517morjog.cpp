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

struct Interval {
    int val, pos;
};
  
// Compares two intervals
// according to starting times.
bool compareInterval(Interval i1, Interval i2)
{
    return (i1.val < i2.val);
}

void solve(){
    int n, m; cin>>n>>m;
    vector<Interval> nums(m);
    vector<vector<int>> inp(n,vector<int>(m,0)), op(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>inp[i][j];
        }
        sort(inp[i].begin(),inp[i].end());
    }
    for(int i=0;i<m;i++) { op[0][i]=nums[i].val=inp[0][i], nums[i].pos=i;}
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            op[i][nums[m-1-j].pos]=inp[i][j];
            nums[m-1-j].val=min(nums[m-1-j].val,inp[i][j]);
        }
        sort(nums.begin(),nums.end(),compareInterval);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<op[i][j]<<" ";
        cout<<"\n";
    }
}

signed main(){
    test
    solve();
}