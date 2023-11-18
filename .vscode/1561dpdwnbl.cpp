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

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

void solve(){
    int n,sum=0,p; cin>>n;
    int k; vector<pair<int,int>> nums(n);
    for(int i=0;i<n;i++){
        cin>>k; sum=INT_MIN;
        for(int i=0;i<k;i++){
            cin>>p;
            sum=max(sum,p-i);
        }
        nums[i].first=k;
        nums[i].second=sum;
    }
    sort(nums.begin(),nums.end(),sortbysec);
    int l=0, r=1e18, mid,ans=INT_MAX;
    while(l<=r){
        mid=l+(r-l)/2; int m=mid;
        int flag=1;
        for(int i=0;i<n;i++){
            if(nums[i].second>=mid){
                flag=0;
                break;
            }
            mid+=nums[i].first;
        }
        if(flag) {ans=min(ans,m); r=m-1;}
        else l=m+1;
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}