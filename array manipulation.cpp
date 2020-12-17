/* to sort even positions in descending and odd placed in ascending order*/




#include<bits/stdc++.h>
using namespace std;
 
void array_manipulation()
{
int n;cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
vector<int>v1;
int c=0,d=n-1;
 
for(int i=0;i<n;i++)
if(i%2==0)
v1.push_back(a[c++]);
else
v1.push_back(a[(d--)]);
 
for(int i=0;i<n;i++)
cout<<v1[i]<<" ";
cout<<endl;
}
 
int main()
{
int t;cin>>t;
for(int i=1;i<=t;i++)
array_manipulation();
return 0;    
