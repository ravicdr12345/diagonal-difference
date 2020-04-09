#include<iostream>
using namespace std;  
int main()
{
    int i,j,k,sum1=0,sum2=0;
    int n;
    cin>>n;
    int m=n-1;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){
        cin>>a[i][j];
        }
    }     
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(i==j){
            sum1=sum1+a[i][j];
        }
    }
}
for(i=0;i<n;i++){
    k=m-i;
    sum2=sum2+a[i][k];
}
int deep=(sum1-sum2);
if(deep<0){
    deep=-deep;
    cout<<deep;
}
else cout<<deep;




}


