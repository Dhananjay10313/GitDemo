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
    int n; cin>>n;
    vector<int> nums(n+1,-1);
    for(int i=1;i<=n;i++) cin>>nums[i];
    set<int> path; map<int,int> mark;
    vector<int> ans(n+1);
    for(int i=1;i<=n;i++){
        if(mark[i]!=1){
            int strt=i; int pos=i; int prv=0;
            do{
                prv=pos;
                path.insert(nums[pos]); mark[nums[pos]]=1;
                pos=nums[pos];
            }while(nums[prv]!=strt);
            for(int i:path){
                ans[i]=path.size();
            }
            path.clear();
        }
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
    cout<<endl;
}

signed main(){
    test
    solve();
}