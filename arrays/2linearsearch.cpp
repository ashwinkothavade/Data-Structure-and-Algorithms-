#include <bits/stdc++.h>
using namespace std;
int linearsearch(int a[],int n,int t){
    for(int i=0;i<n;i++){
        if(a[i]==t){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<linearsearch(a,n,6);
    


}
