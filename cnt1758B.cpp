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
    int n; int x;
    cin>>n>>x;
    if(n%x==0 && x!=1){
        vector<int> factors;
        for(int i=x+1;i<=n;i++){
            if(n%i==0){
                factors.push_back(i);
            }
        }
        cout<<x<<" ";
        for(int i=2;i<=n-1;i++){
            if(i==x){
                int nn=factors.size();
                for(int i=0;i<nn;i++){
                    if(factors[i]>x && factors[i]%x==0){
                        x=factors[i]; //factors.erase(factors.begin()+i);
                        break;
                    }
                    //factors.erase(factors.begin()+i);
                }
                cout<<x<<" ";
            }
            else cout<<i<<" ";
        }
        cout<<1<<endl;
    }
    else if(x==1){
        for(int i=1;i<=n;i++) cout<<i<<" ";
        cout<<endl;
    }
    else cout<<-1<<endl;
}

signed main(){
    test
    solve();
}