#include <iostream>
using namespace std;
int main() {
    const int m=5,n=3;
    int a[m][n];
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<4;++i){
        for(int j=0;j<3;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }    
    return 0;
}