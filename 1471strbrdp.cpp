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
    int n, m; cin>>n>>m;
    vector<int> nums(n),cost(m+1), ava;
    for(int i=0;i<n;i++) cin>>nums[i];
    sort(nums.begin(),nums.end());
    for(int i=1;i<=m;i++) cin>>cost[i], ava.push_back(i);
    int sum=0; reverse(ava.begin(),ava.end());
    for(int i=n-1;i>=0;i--){
        if(ava.size()!=0){
            if(ava[ava.size()-1]<=nums[i]){
                sum+=cost[ava[ava.size()-1]]; ava.pop_back();
            }else{
                sum+=cost[nums[i]];
            }
        }else sum+=cost[nums[i]];
    }
    cout<<sum<<endl;
}

signed main(){
    test
    solve();
}