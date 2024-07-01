#include <bits/stdc++.h>
using namespace std;
int slargest(int a[],int n){
    int max=a[0];
    int b;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            b=i;
        }
    }
    a[b]=-1;
    max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    

    return max;
}
int ssmallest(int a[],int n){
    int min=INT_MAX;
    int b;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            b=i;
        }
    }
    a[b]=INT_MAX;
    min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }

    
    
    return min;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<ssmallest(a,n);


}
