#include<bits/stdc++.h>
#define ll long long int
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
void repeat(int n){
    int a[n];
    unordered_map<int,int> m1;
    rep(i,n){
        cin>>a[i];
        m1[a[i]]++;
    }
    unordered_map<int, int>::iterator itr;
    for (itr = m1.begin(); itr != m1.end(); ++itr){
        if(itr->second>1)
        cout<<itr->second<<" ";
    }
}
void NOTrepeat(int n){
    int a[n];
    unordered_map<int,int> m1;
    rep(i,n+1){
        cin>>a[i];
        m1[a[i]]++;
    }