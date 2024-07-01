#include <bits/stdc++.h>
using namespace std;
void rotate(int a[],int n,int k){
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=b[(i+k)%n] ;
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    rotate(a,5,2);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


}
