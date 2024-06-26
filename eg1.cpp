#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={10,13,5,2};
    sort(arr,arr+4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(binary_search(arr,arr+4,13)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}