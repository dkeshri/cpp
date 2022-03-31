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
    int arr[6];

    int size =  sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    for(int i=0;i<6;++i){
        cin>>arr[i];
    }
    for(int data : arr){
        cout<< data <<" ";
    }

    return 0;
}