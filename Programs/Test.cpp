#include<bits/stdc++.h>
using namespace std;
int secondLargestNum(int arr[],int size){
    int secondLargestNum = -1;

    sort(arr,arr+size);
    for(int i=size-1;i>=1;i--){
        if(arr[i]!=arr[i-1]){
            secondLargestNum = arr[i-1];
            break;
        }   
    }
    return secondLargestNum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;++i)
        cin>>arr[i];
    cout<<secondLargestNum(arr,n);
    return 0;
}