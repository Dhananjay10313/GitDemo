// (ASCII) a=97 A=65

#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
// #define int               long long
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
    int m, s; cin>>m>>s;
    if(m==1 && s==0) {cout<<0<<" "<<0<<endl; return;}
    if(s<=9*m && s>=1){
        int sm=s-1; vector<int> nm1;
        while(sm>9){
            nm1.push_back(9); sm-=9;
        }
        nm1.push_back(sm);
        reverse(nm1.begin(),nm1.end()); string num="";
        if(nm1.size()==m){
            nm1[0]++;
            for(int i=0;i<nm1.size();i++){
                num+=to_string(nm1[i]);
            }
        }
        else{
            num='1'; int k=m-1-nm1.size();
            while(k--) num+='0';
            for(int i=0;i<nm1.size();i++){
                num+=to_string(nm1[i]);
            }
        }
        cout<<num<<" "; num="";
        sm=s; nm1.clear();
        while(sm>9){
            nm1.push_back(9); sm-=9;
        }
        nm1.push_back(sm);
        for(int i=0;i<nm1.size();i++){
            num+=to_string(nm1[i]);
        }
        int n=m-nm1.size(); 
        while(n--) num+='0';
        cout<<num<<endl;
    }
    else cout<<-1<<" "<<-1<<endl;
}

signed main(){
    // test
    solve();
}