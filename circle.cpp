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
const int mod = 1e9 + 7;
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

int fact[N];

int Power(int a, int b) {
    int result = 1; a %= mod;
    while (b) {if (b % 2 == 1) result *= a; a *= a; a %= mod; result %= mod; b /= 2; }
    return result;
}

int factorial(int n) {
    fact[0] = 1;
    for (int i = 1; i < n; i++) { fact[i] = i * fact[i - 1]; fact[i] %= mod; }
    return fact[n];
}

int Mod_Inv(int a) {
    a %= mod; a = Power(a, mod - 2); return a;
}

int nCr(int n, int r)
{
    if (n < r) return 0;
    int ans = fact[n]; ans %= mod;
    ans *= Mod_Inv(fact[r]); ans %= mod;
    ans *= Mod_Inv(fact[n - r]); ans %= mod;
    return ans;
}

bool compPP(pair<int,int> p1,pair<int,int> p2){
    if(p1.first<p2.first) return false;
    else if(p1.first>p2.first) return true;
    return p1.second<p2.second;
}

bool compB(vector<int> a,vector<int> b){
    if(a[0]<b[0]) return true;
    if(a[0]>b[0]) return false;
    if(a[2]<b[2]) return true;
    return false;
}

int stringToInt(const std::string& str) {
    int result = 0;
    int sign = 1;
    int i = 0;

    // Check for a sign character (+ or -)
   

    for (; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            // Handle invalid characters or non-digits in the string
            return 0; // Return 0 to indicate an error
        }
    }

    return result * sign;
}




string cal(int x1, int r1, int x2, int r2){
    cout<<x1<<" "<<r1<<" ";
    if(x1==x2) return "Concentric";
    else if(r1<r2 && x2-r2<x1-r1){
        return "Disjoint-Inside";
    }
    else if(r1>r2 && x1+r1>x2+r2){
        return "Disjoint-Inside";
    }
    else if(x1+r1>x2-r2){
        return "Intersecting";
    }
    
    return "Disjoint-Outside";
}



int n, x;
vector<string> solve(int n, vector<string> nums){
    
    vector<int> inp;

    vector<string> answer;

    for(auto str:nums){
        str=str+" ";
        string mk="";
        for(int i=0;i<str.size();i++){
            if(str[i]==' ' && mk!="0"){
                inp.push_back(stringToInt(mk));
                mk="";
            }
            else if(str[i]==' ' && mk=="0") mk="";
            else mk+=str[i];
        }

        cout<<cal(inp[0],inp[1],inp[2],inp[3]);
        inp.clear();
    }

}









signed main(){
    // test
    solve(1,{"3 0 10 3 0 4"});
}