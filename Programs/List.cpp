#include <bits/stdc++.h>
using namespace std;
void display(list<int> &items)
{
    for (auto item : items)
    {
        cout << item << " ";
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
    list<int> l;
    l.push_back(1);
    l.push_back(6);
    l.push_back(4);
    l.push_back(9);
    l.push_back(5);
    display(l);
    l.sort();
    
    
    display(l);

    return 0;
}