#include <bits/stdc++.h>
using namespace std;
void display(vector<pair<int,string>> &v)
{
    for (int i=0;i<v.size();++i)
    {
        cout << v[i].first << v[i].second << " ";
    }
    cout<<"\n";
}
int main()
{
    int n;
    vector<pair<int,string>> v;
    v.push_back({1,"deepak"});
    v.push_back({2,"shubham"});
    v.push_back({6,"soun"});
    vector<pair<int,string>> :: iterator itr;
    itr = v.begin();

    itr = itr +1;
    pair<int,string> test = *itr;
    
    v.insert(itr,{10,"new Ite"});
    cout<<(*itr++).first << (*itr++).second <<" ";
    //display(v);

    return 0;
}