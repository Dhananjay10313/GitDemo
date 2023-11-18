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
    return (a.first < b.first);
}


void solve(){
    int n; cin>>n;
    vector<int> nums(n); vector<pair<int,int>> ans;
    map<int,int> mp; int pos=n-1;
    int eve=0, odd=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(nums[i]%2==0) eve+=1;
        else odd+=1;
    }
    if(eve==0){
        cout<<n-1<<endl;
        for(int i=n-2;i>=0;i--){
            cout<<i+1<<" "<<n<<endl;
        }
    }
    else if(odd==0){
        cout<<n-1<<endl;
        for(int i=n-2;i>=0;i--){
            cout<<i+1<<" "<<n<<endl;
        }
    }
    else if(nums[0]%2==0){
        int mn=INT_MAX; map<int,int> pp; int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]%2==0){
                if(nums[i]<mn){
                    mp[i]=1; mn=nums[i]; pos=i; cnt+=1;
                }
                else {
                    pair<int,int> pr;
                    pr.first=i;
                    pr.second=pos;
                    ans.push_back(pr); pp[i]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(pp[i]==1) continue;
            else if(mp[i]==1) pos=i;
            else{
                pair<int,int> pr;
                pr.first=pos;
                pr.second=i;
                ans.push_back(pr);
            }
        }
        cout<<n-cnt<<endl;
        sort(ans.begin(),ans.end(),sortbysec);
        for(auto i:ans){
            cout<<i.first+1<<" "<<i.second+1<<endl;
        }
    }
    else {
        int mn=INT_MAX; map<int,int> pp; int cnt=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]%2==1){
                if(nums[i]<mn){
                    mp[i]=1; mn=nums[i]; pos=i; cnt+=1;
                }
                else {
                    pair<int,int> pr;
                    pr.first=i;
                    pr.second=pos;
                    ans.push_back(pr); pp[i]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(pp[i]==1) continue;
            else if(mp[i]==1) pos=i;
            else{
                pair<int,int> pr;
                pr.first=pos;
                pr.second=i;
                ans.push_back(pr);
            }
        }
        cout<<n-cnt<<endl;
        sort(ans.begin(),ans.end(),sortbysec);
        for(auto i:ans){
            cout<<i.first+1<<" "<<i.second+1<<endl;
        }
    }
}

signed main(){
    test
    solve();
}