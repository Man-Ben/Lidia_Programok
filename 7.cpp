#include <iostream>
using namespace std;
int main(){
    int n, nr=0, i;
    cin >> n;
    int a[n];
    for(i=0; i<=n-1; i++)
        cin >> a[i];
    for(i=0; i<=n-1; i++)
        if(a[i]%2==0 && a[i+1]%2!=0 || a[i]%2!=0 && a[i+1]%2==0)
            nr++;
    if(nr==n)
        cout << "Da";
    else 
        cout << "Nu";
    return 0;
}