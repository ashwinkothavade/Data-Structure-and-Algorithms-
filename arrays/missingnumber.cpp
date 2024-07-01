#include <bits/stdc++.h>
using namespace std;
int missing(int A[],int n){
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=n;i++){
        xor1=xor1^i;
    }
    for(int i=1;i<=n-1;i++){
        xor2=xor2^A[i];
    }
    return xor1^xor2;
}
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    int prefix[n]={0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefix[i]=a[i]+prefix[i-1];

    }
    int sum=(a[n]*(a[n]+1))/2;
    // cout<<abs(prefix[n]-sum)<<endl;
    cout<<missing(a,n);
}
//another method of finding the missing number is using xor operator 
