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


int mn(string s){
    string b="";
    for(int i=2;i<4;i++){
        b+=s[i];
    }
    return stoi(b);
}

int hr(string s){
    string b="";
    for(int i=0;i<2;i++){
        b+=s[i];
    }
    return stoi(b);
}

bool isPal(string s){
    if(s[0]==s[3]){
        if(s[1]==s[2]) return true;
        return false;
    }
    return false;
}

void solve(){
    string tm; cin>>tm;
    int min; cin>>min;
    string cmp;
    for(int i=0;i<5;i++){
        if(i==2) continue;
        cmp+=tm[i];
    }
    string cmp1=""; int cnt=0;
    // if(isPal(cmp)) cnt+=1; int j=0;
    do{
        int h=hr(cmp), m=mn(cmp); int mm=m; 
        m=(m+min%60)%60; h=(h+ min/60 + (mm+min%60)/60)%24;
        if(h<10){
            cmp="0"+to_string(h);
        }
        else if(h>=10){
            cmp=to_string(h);
        }
        if(m<10){
            cmp+="0"+to_string(m);
        }
        else if(m>=10){
            cmp+=to_string(m);
        }
        if(isPal(cmp)){
            cnt+=1;
        }
        cmp1="";
        for(int i=0;i<2;i++){
            cmp1+=cmp[i];
        }
        cmp1+=":";
        for(int i=2;i<4;i++) cmp1+=cmp[i];
        // j+=1;cout<<cmp1<<endl;
    }
    while(tm!=cmp1);
    cout<<cnt<<endl;
}

signed main(){
    test
    solve();
}