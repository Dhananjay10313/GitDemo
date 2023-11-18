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
    int n, m ,k; cin>>n>>m>>k;
    string a,b; cin>>a,b;
    string ans;
    sort(a.begin(),a.end()), sort(b.begin(),b.end());
    reverse(a.begin(),a.end()), reverse(b.begin(),b.end());
    int last;
    if(a.back()<=b.back()){
        last=0;
        ans+=a.back(); a.pop_back();
    }
    else{
        last=1;
        ans+=b.back(); b.pop_back();
    }
    int cons=1;
    while(!a.empty() && !b.empty()){
        if(a.back()<=b.back()){
            if(last==0){
                if(cons==k){
                    ans+=b.back(); b.pop_back(); last=1;
                    cons=1;
                }
                else{
                    last=0; cons+=1;
                    ans+=a.back(); a.pop_back();
                }
            }
            else{
                last=0; cons=1;
                ans+=a.back(); a.pop_back();
            }
        }
        else {
            if(last==1){
                if(cons==k){
                    ans+=a.back(); a.pop_back(); last=0;
                    cons=1;
                }
                else{
                    last=1; cons+=1;
                    ans+=b.back(); b.pop_back();
                }
            }
            else{
                last=1; cons=1;
                ans+=b.back(); b.pop_back();
            }
        }
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}       
