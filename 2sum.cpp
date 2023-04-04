#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]==0){
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        }
        else if(a[i]+a[j]>0){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"END";
    return 0;

}