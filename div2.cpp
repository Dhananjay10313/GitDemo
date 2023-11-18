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
    vector<pair<int,int>> nums(n);
    int mx=-1;
    for(int i=0;i<n;i++) cin>>nums[i].first, mx=max(mx,nums[i].first), nums[i].first-=k;
    for(int i=0;i<n;i++) cin>>nums[i].second;
    sort(nums.begin(),nums.end(),sortbysec);
    int atk=k;
    for(int i=0;i<n;i++){
        int w=0, d=ceil(double(k)/nums[i].second);
        int h=nums[i].first; int p=nums[i].second;
        while(w<=d && h>0){
            w+=ceil(h/k);
            int r;
            r=(h%k)?(k-h%k):0;
            h=ceil(h/k)*p-r;
        }
        if(h<=0){
            k-=((double(w)/2)*(2*k+(w-1)*p));
        }
        else {cout<<"NO"<<endl; return;}
    }
    cout<<"YES"<<endl;
}

signed main(){
    test
    solve();
}