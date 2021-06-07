#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]+arr[j] == k){
				cout<<"true";
				return 0;
			}
		}
	}
	cout<<"false";
	return 0;
}
