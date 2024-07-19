#include<bits/stdc++.h>;
using namespace std; 
 
using namespace std;
 
int main()
{
    int x , y , z; 
    cin>>x>>y>>z; 
    vector<int>a;
    a.push_back(x); 
    a.push_back(y); 
    a.push_back(z); 
    sort(a.begin(), a.end()); 
    int t= a[1]-a[0]; 
    int u= a[2]-a[1] ; 
    cout<<t+u; 
 
    return 0;
}