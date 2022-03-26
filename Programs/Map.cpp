#include <bits/stdc++.h>
using namespace std;
void display(map<int,string> &items)
{
    for (auto item : items)
    {
        cout << item.first <<" "<<item.second;
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
    map<int,string> l;
    l[1] = "deepak";
    l[9] = "shubham";
    l[4] = "pradeep";
    l[5] = "nikita";
    l[10] = "nikita";

    auto a = l.end();
    cout<<(*a).first <<(*a).second;
    //display(l);

    return 0;
}