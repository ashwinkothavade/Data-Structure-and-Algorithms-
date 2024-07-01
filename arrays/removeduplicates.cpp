#include <bits/stdc++.h>
using namespace std;
int removeduplicates(int a[], int n)
{   int j=0;
    for (int i = j+1; i < n; i++)
    {
        if (a[i]!=a[j]){
            j++;
            a[j]=a[i];
        }
    }return j+1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k=removeduplicates(a,n);
    for(int i = 0; i < k; i++){
        cout<<a[i]<<" ";
    }
}