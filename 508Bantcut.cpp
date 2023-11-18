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

string mkINT(vector<int> &nums){
    string s="";
    for(int i=0;i<nums.size();i++){
        s+=to_string(nums[i]);
    }
    return s;
}

void solve(){
    string n; cin>>n;
    vector<int> nums; int eve=0;
    for(int i=0;i<n.size();i++){
        nums.push_back(int(n[i])-48);
        if(nums[i]%2==0) eve=1;
    }
    if(eve==0){cout<<-1<<endl; return;}
    int pos=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]%2==0 && nums[i]<nums[nums.size()-1]){
            int b=nums[nums.size()-1]; 
            nums[nums.size()-1]=nums[i]; nums[i]=b;
            cout<<mkINT(nums)<<endl;
            return;
        }else if(nums[i]%2==0) pos=i;
    }
    int b=nums[nums.size()-1]; 
    nums[nums.size()-1]=nums[pos]; nums[pos]=b;
    cout<<mkINT(nums)<<endl; 
    return;
}

signed main(){
    // test
    solve();
}