#include<bits/stdc++.h>
using namespace std;

bool myCompare(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}

int main(){
    int arr[]={10,16,7,14,5,3,12,9}; 
    vector < pair<int,int> > v;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
    /* Alternate way to initialize Vector
       pair<int,int> p;
       p.first=arr[i];
       p.second=i;
       v.pushback({p.first,p.second}); */
    // temp pair using make_pair()
     v.push_back(make_pair(arr[i],i));   
    } 
    sort(v.begin(),v.end(),myCompare);
    
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++){    
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
}







