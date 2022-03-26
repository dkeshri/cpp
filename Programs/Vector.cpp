#include <bits/stdc++.h>
using namespace std;
void display(vector<pair<int,string>> &v)
{
    for (auto data : v)
    {
        cout << data.first<<" " << data.second << " ";
    }
    cout<<"\n";
}
void displayByIterator(vector<pair<int,string>> v){
    vector<pair<int,string>> :: iterator itr;
    itr = v.begin();
    for(itr = v.begin();itr!=v.end();++itr){
        cout<<(*itr).first <<" "<<(*itr).second;
        
    }
    cout<<"\n";

}
void sort(vector<pair<int,string>> &v){
    sort(v.begin(),v.end());
}
void sortDesc(vector<pair<int,string>> &v){
    sort(v.begin(),v.end(),greater<pair<int,string>>());
}
void insertAtPos(vector<pair<int,string>> &v,int pos,pair<int,string> data){
    vector<pair<int,string>> :: iterator itr;
    itr = v.begin();
    advance(itr,pos);
    v.insert(itr,data);
}
int main()
{
    int n;
    vector<pair<int,string>> v;
    v.push_back({1,"deepak"});
    v.push_back({7,"shubham"});
    v.push_back({6,"soun"});
    
    insertAtPos(v,1,{9,"nikita"});
    display(v);
    return 0;
}