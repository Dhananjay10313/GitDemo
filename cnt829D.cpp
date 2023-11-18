// (ASCII) a=97 A=65

#include <bits/stdc++.h>
using namespace std;
#define test              int T;cin>>T;while(T--)
#define int              long long
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define sz(x)             (int)((x).size())
#define fr                firs\t
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
    vector<int> nums(n+1); int cnt=0;
    for(int i=1;i<=n;i++){
        cin>>nums[i];
        if(nums[i]==0) cnt+=1;
    }
    if((n-cnt)%2==1) {cout<<-1<<endl; return;}
    int prv=-2;
    vector<pair<int,int>> pr; int l=1; int flag=0;
    for(int i=1;i<=n;i++){
        if(i==n && nums[i]==0){
            cnt+=1;
            pr.push_back({l,n});
        }
        if(nums[i]==0) {flag=(prv==-2)?1:0; continue;}
        if(prv!=-2){
            if(prv==nums[i]){
                if((i-l)%2==0){
                    cnt+=2;
                    pr.push_back({l,i-2});
                    pr.push_back({i-1,i});
                }
                else{
                    cnt+=1;
                    pr.push_back({l,i});
                }
            }
            else{
                if((i-l)%2==1){
                    cnt+=2;
                    pr.push_back({l,i-1});
                    pr.push_back({i,i});
                }
                else{
                    cnt+=1;
                    pr.push_back({l,i});
                }
            }
            l=i+1;
            prv=-2;
        }else {
            if(flag){
                cnt+=1;
                pr.push_back({l,i-1});
                l=i;
            }
            flag=0;
            prv=nums[i];
        }
    }
    cout<<pr.size()<<endl;
    for(auto i:pr)
        cout<<i.first<<" "<<i.second<<endl;
}

signed main(){
    test
    solve();
}