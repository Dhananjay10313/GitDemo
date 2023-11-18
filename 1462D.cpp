// (ASCII) a=97 A=65

#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int              long long
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr                firs\t
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
    int n, b; cin>>n; int sum=0;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>b; sum+=b;
        nums[i]=b;
    }
    int sm=0; int cnt; int ans=n-1;
    for(int i=n-1;i>=0;i--){
        sm+=nums[i]; int flag=0;
        if(sum%sm==0){
            int sum1=0, prv=-1; 
            flag=0, cnt=n-1-i;
            for(int j=0;j<i;j++){
                sum1+=nums[j];
                if(sum1==sm){
                    cnt+=j-prv-1; sum1=0, prv=j; flag=1;
                }
                else if(sum1>sm){flag=0;break;}
                else flag=0;
            }
        }
        if(flag) ans=min(ans,cnt);
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}