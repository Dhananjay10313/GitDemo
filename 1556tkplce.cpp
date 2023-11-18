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
#define inf              LONG_LONG_MAX
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

vector<int> nums(200001); int n; map<int,int> mark;
int find(int pos,int flag){
    for(int i=pos+1;i<n;i++){
        if((nums[i]%2!=flag)&& mark[i]!=1) return i;
    }
    return -1;
}

void solve(){
    cin>>n; nums.clear(); mark.clear();
    for(int i=0;i<n;i++) cin>>nums[i];
    int ans=0, flag=nums[0]%2;
    int cnt=0;
    for(int i=1;i<n;i++){
        if(mark[i]!=1){
            if(flag==nums[i]%2){
                int f=find(i,flag);
                if(f==-1) {cout<<-1<<endl; return;}
                ans+=f-i-cnt; cnt+=1;
                mark[f]=1;
            }
            flag=nums[i]%2;
        }else cnt-=1;
    }
    cout<<ans<<endl;
}

signed main(){
    test
    solve();
}