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
    int n, m; cin>>n;
    vector<int> nums(n);
    int one=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(nums[i]==1) one+=1;
    }
    sort(nums.begin(),nums.end());
    if(one<=1) {cout<<one<<endl;return;}
    for(int i=one;i>=1;i--){
        int j=lower_bound(nums.begin(),nums.end(),i)-nums.begin();
        if(j==n) j-=1;
        else if(nums[j]!=i) j-=1;
        int flag=1; int x=-1;
        for(int lvl=i;lvl>=1;lvl--){
            if(nums[j]<lvl || nums[j]==1) j-=1;
            else {while(j>=0 && nums[j]>=lvl) j-=1;}
            if(j+1<=x) flag=0;
            x+=1;
        }
        if(flag){
            cout<<i<<endl; return;
        }
    }
}

signed main(){
    test
    solve();
}