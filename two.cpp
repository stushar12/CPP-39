#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=9;
int arr[n]={1,1,1,1,1,1,1,1,1};
int count=0;
int maximum=0;
for(int i=0;i<n;i++)
{
if(arr[i]==0)
{
maximum=max(maximum,count);
count=0;
}
else
{
    count++;
}
}
maximum=max(maximum,count);
cout<<maximum;
}