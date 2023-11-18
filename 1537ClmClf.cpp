#include<bits/stdc++.h>
using namespace std;
long long T,n,ad,k;
long long q[200009];
int main(){
	cin>>T;
	while(T--){
		cin>>n,k=1e9+9;
		for(int i=1;i<=n;i++)cin>>q[i];
		sort(q+1,q+1+n);
		for(int i=2;i<=n;i++)if(q[i]-q[i-1]<k)ad=i,k=q[i]-q[i-1];
		cout<<q[ad-1]<<" ";
		for(int i=ad+1;i<=n;i++)cout<<q[i]<<" ";
		for(int i=1;i<ad-1;i++)cout<<q[i]<<" ";
		cout<<q[ad]<<endl;
	}
	return 0;
}