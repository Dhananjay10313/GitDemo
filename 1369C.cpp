// (ASCII) a=97 A=65

#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int              long long
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
    int n, k; cin>>n>>k;
    vector<int> nums(n),wgh(k);
    rep(i,0,n){
        cin>>nums[i];
    }
    int z=0;
    rep(i,0,k){
        cin>>wgh[i];
        wgh[i]-=1;
        if(wgh[i]==0) z+=1;
    }
    sort(nums.begin(),nums.end());
    sort(wgh.begin(),wgh.end(),greater<int>());
    int ans=0;
    for(int i=n-1;i>=n-k;i--){
        if(z) ans+=nums[i], --z;
        ans+=nums[i];
    }
    int j=0;
    for(int i=0;i<k;i++){
        if(wgh[i]==0) break;
        else ans+=nums[j];
        j+=wgh[i];
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}