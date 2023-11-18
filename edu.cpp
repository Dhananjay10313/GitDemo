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
    int m; cin>>m;
    string s1, s2; cin>>s1>>s2;
    int dir; int i=0;
    while(i<m && (s1[i]==s2[i]))  i+=1;
    if(i==m){cout<<"YES"<<endl;return;}
    else{
        if(s1[i]=='W') dir=0;
        else dir=1;
        for(int j=i+1;j<m;j++){
            if(dir==1 && s1[j]=='W'){cout<<"NO"<<endl;return;}
            else if(dir==0 && s2[j]=='W'){cout<<"NO"<<endl;return;}
            else{
                if(s1[j]==s2[j]){
                    if(dir==1) dir=0;
                    else dir=1;
                }
                else if(s1[j]=='W') dir=0;
                else dir=1;
            }
        }
        cout<<"YES"<<endl;
    }
}

signed main(){
    test
    solve();
}