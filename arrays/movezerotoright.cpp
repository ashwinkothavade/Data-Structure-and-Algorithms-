#include <bits/stdc++.h>
using namespace std;
void movezerotoright(int a[], int n)
{
    int j;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
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
    movezerotoright(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
}
