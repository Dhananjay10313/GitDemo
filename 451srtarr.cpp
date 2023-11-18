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
    int n; cin>>n;
    vector<int> nums(n); map<int,int> frPos;
    int st=-1, end=-1, flag=0;
    cin>>nums[0];
    for(int i=1;i<n;i++){
        cin>>nums[i];
        if(flag==0 && nums[i]<nums[i-1]){
            flag=1; st=frPos[nums[i-1]];
        }
        else if(flag==1){
            if(end==-1 && nums[i]>nums[i-1])
                end=i-1;
            else if(end!=-1 && nums[i]<nums[i-1]){
                cout<<"no"<<endl; return;
            }
        }
        if(frPos.find(nums[i])==frPos.end()){
            frPos[nums[i]]=i;
        }
    }
    if(st==-1){
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else if(end==-1){
        if(st!=0 && nums[n-1]>=nums[st-1]){
            cout<<"yes"<<endl; cout<<st+1<<" "<<n<<endl;
        }
        else if(st==0) {
            cout<<"yes"<<endl; cout<<st+1<<" "<<n<<endl;
        }else cout<<"no"<<endl;
    }
    else{
        if(st!=0 && nums[end]>=nums[st-1] && nums[st]<=nums[end+1]){
            cout<<"yes"<<endl;
            cout<<st+1<<" "<<end+1<<endl;
        }
        else if(st==0 && nums[st]<=nums[end+1]){
            cout<<"yes"<<endl;
            cout<<st+1<<" "<<end+1<<endl;
        }
        else cout<<"no"<<endl;
    }
}

signed main(){
    // test
    solve();
}