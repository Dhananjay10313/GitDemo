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
    string a, b; cin>>a>>b;
    int l=0, r=n-1, flag=0; int cnt=0; vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(!flag){
            // cout<<r<<" ";
            if(cnt%2==0){
                if(b[i]==a[r]) r-=1;
                else {
                    if(a[r]==a[l]){
                        ans.push_back(i+1); l+=1; flag=1;
                    }
                    else {
                        ans.push_back(1); ans.push_back(i+1); l+=1; flag=1;
                    }
                    cnt+=1;
                }
            }
            else{
                if(b[i]!=a[r]) r-=1;
                else {
                    if(a[r]==a[l]){
                        ans.push_back(i+1); l+=1; flag=1;
                    }
                    else {
                        ans.push_back(1); ans.push_back(i+1); l+=1; flag=1;
                    }
                    cnt+=1;
                }
            }
        }
        else{
            // cout<<l<<" ";
            if(cnt%2==0){
                if(b[i]==a[l]) l+=1;
                else {
                    if(a[r]==a[l]){
                        ans.push_back(i+1); r-=1; flag=0;
                    }
                    else {
                        ans.push_back(1); ans.push_back(i+1); r-=1; flag=0;
                    }
                    cnt+=1;
                }
            }
            else{
                if(b[i]!=a[l]) l+=1;
                else {
                    if(a[r]==a[l]){
                        ans.push_back(i+1); r-=1; flag=0;
                    }
                    else {
                        ans.push_back(1); ans.push_back(i+1); r-=1; flag=0;
                    }
                    cnt+=1;
                }
            }
        }
    }
    cout<<ans.size()<<" ";
    for(int i: ans) cout<<i<<" ";
}

signed main(){
    test
    solve();
}