#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans[n];
	for(int i=0;i<n;i++){
		ans[i]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i != j){
				ans[i]=ans[i]*a[j];
			}
			
		}
	}
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
}
