#include<bits/stdc++.h>
using namespace std;

int largestSum(int arr[],int n){
    int incl = arr[0];
    int excl = 0;
    int excl_new;
    for(int i=1;i<n;i++){
        // excluding current element
        excl_new = incl > excl ? incl : excl;
        // including current element
        incl = excl + arr[i];
        excl = excl_new;
    }
    return (incl > excl ? incl : excl);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"largest sum is "<<largestSum(a,n);
    return 0;

}