#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int>v={12,3,234,132};
    vector<int>::iterator i=v.begin();
    cout<<(*i)<<" ";
    i++;
    cout<<(*i)<<" ";
    i=v.end();
    i--;
    cout<<(*i)<<" ";

    i=v.begin();
    i=next(i,2);
    cout<<(*i)<<" ";
    i=prev(i,2);
    cout<<(*i)<<" ";
    advance(i,3);
    cout<<(*i)<<" ";

}