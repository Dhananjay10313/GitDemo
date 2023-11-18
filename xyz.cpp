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

bool compB(vector<int> a,vector<int> b){
    if(a[0]<b[0]) return true;
    if(a[0]>b[0]) return false;
    if(a[2]<b[2]) return true;
    return false;
}

int find(int n,vector<int> nums){
    for(int i=1;i<=n;i++){
        if(nums[i-1]==n) return i;
    }
}


int n, x, y;
int solve(int n){

    map<int,pair<int,int>> mp;
    
    int sum=0;

    vector<int> nums;

    for(int i=0;i<n;i++){
        cin>>y;
        sum=0;
        for(int j=0;j<y;j++){
            cin>>x;
            nums.push_back(x);
            sum+=x;
        }

        for(int j=0;j<y;j++){
            if(mp.find(sum-nums[j])!=mp.end() && mp[sum-nums[j]].first!=i){
                cout<<"YES"<<endl;
                cout<<mp[sum-nums[j]].first+1<<" "<<mp[sum-nums[j]].second+1<<endl;
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
            else mp[sum-nums[j]]=make_pair(i,j);
        }
        nums.clear();
    }

    cout<<"NO"<<endl;
    
    return 0;
}


signed main(){
    cin>>n;
    solve(n);
}