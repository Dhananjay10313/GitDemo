// (ASCII) a=97 A=65
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
const int mod = 1e9 + 7;
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

int fact[N];

int Power(int a, int b) {
    int result = 1; a %= mod;
    while (b) {if (b % 2 == 1) result *= a; a *= a; a %= mod; result %= mod; b /= 2; }
    return result;
}

int factorial(int n) {
    fact[0] = 1;
    for (int i = 1; i < n; i++) { fact[i] = i * fact[i - 1]; fact[i] %= mod; }
    return fact[n];
}

int Mod_Inv(int a) {
    a %= mod; a = Power(a, mod - 2); return a;
}

int nCr(int n, int r)
{
    if (n < r) return 0;
    int ans = fact[n]; ans %= mod;
    ans *= Mod_Inv(fact[r]); ans %= mod;
    ans *= Mod_Inv(fact[n - r]); ans %= mod;
    return ans;
}

bool compPP(pair<int,int> p1,pair<int,int> p2){
    if(p1.first<p2.first) return false;
    else if(p1.first>p2.first) return true;
    return p1.second<p2.second;
}

int n, x;
void solve(){
    cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }

    int sum=0, prv;
    vector<pair<int,int>> ans;
    for(int i=n-1;i>=0;i--){
        if(nums[i]<0){
            if(sum!=0) ans.push_back({i,prv});
            sum+=nums[i];
            nums[i]=sum;
            prv=i;
        }
    }

    vector<int> ck; sum=0;
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            if(abs(nums[i])<=sum) break;
            ck.push_back(i);
        }
        else sum+=nums[i];
    }

    prv=-1, sum=0;
    for(int i=0;i<n;i++){
        if(nums[i]>=0) {
            sum+=nums[i];
            if(prv!=-1) ans.push_back({i,prv});
            prv=i;
        }
        else if(sum>=abs(nums[i])){
            ans.push_back({i,prv}), ans.push_back({i,prv});
            prv=i;
        }
    }

    int j=0, cnt=0;
    while(j<ck.size()){
        if(cnt!=ck[j]){
            ans.push_back({cnt,ck[j]});
        }
        else j+=1;
        cnt+=1;
    }

    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i.first+1<<" "<<i.second+1<<endl;
}
signed main(){
    test
    solve();
}