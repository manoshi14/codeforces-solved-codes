
#include<bits/stdc++.h>
using namespace std;
int main()
{int n,arr[1000],i,sum=0;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>arr[i];
    sum=sum+arr[i];

}
if(sum>=1)
    cout<<"HARD"<<endl;
else
    cout<<"EASY"<<endl;













}
