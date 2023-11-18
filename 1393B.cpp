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
    int n, b; cin>>n;
    map<int,int> freq; set<int> mr4, mr2; 
    for(int i=0;i<n;i++){
        cin>>b; freq[b]+=1;
        if(freq[b]>=4) {
            mr4.insert(b);
            mr2.erase(b);
        }
        else if(freq[b]>=2) mr2.insert(b);
    }
    cin>>n; char sgn;
    for(int i=0;i<n;i++){
        cin>>sgn>>b;
        if(sgn=='+'){
            freq[b]+=1;
            if(freq[b]>=4) mr4.insert(b),mr2.erase(b);
            else if(freq[b]>=2) mr2.insert(b);
        }else {
            freq[b]-=1;
            if(freq[b]<4) mr4.erase(b);
            if(freq[b]>=2 && freq[b]<4) mr2.insert(b);
            if(freq[b]<2) mr2.erase(b);
        }
        if(mr4.size()>=2){cout<<"YES"<<endl;}
        else if(mr4.size()==1){
            int m;
            for(auto i:mr4) m=i;
            if(mr2.size()>=2){cout<<"YES"<<endl;}
            else if(mr2.size()==1 && freq[m]>=6){cout<<"YES"<<endl;}
            else if(freq[m]>=8) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else cout<<"NO"<<endl;
    }
}

signed main(){
    // test
    solve();
}