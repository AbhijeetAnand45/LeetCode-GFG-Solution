#include<bits/stdc++.h>
using namespace std;
// bool checkSorted(int input[])
// {
//   int length = sizeof(input)/sizeof(int);
// 	if(length<=1)
// 	{
// 		return true;
// 	}
// 	int smallinput[length-1];
// 	for(int i=1;i<length;i++)
// 	{
// 		smallinput[i-1]=input[i];
// 	}
// 	bool smallans=checkSorted(smallinput);
// 	if(!smallans)
// 	{
// 		return false;
// 	}
// 	else
// 	{
// 		if(input[0]<input[1])
// 		{
// 			return true;
// 		}
// 		else
// 		{
// 			return false;
// 		}
// 	}
// }

bool checkSorted(int input[]) {
    int len = sizeof(input)/sizeof(int);

    for(int i=1;i<len;i++){
        if(input[i]<input[i-1]) {
            return false;
        }
    }
    return true;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<checkSorted(arr)<<endl;
	// bool ans=checkSorted(arr);
	// cout<<ans;
}