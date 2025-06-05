#include <iostream>
using namespace std;
int main(){
    int n, nr, i;
    cin >> n;
    int a[n];
    nr=0;
    for(i=0; i<=n-1; i++)
        cin >> a[i];
    for(i=0; i<=n-1; i++)
        if(a[i]>=0 && a[i+1]<0 || a[i]<0 && a[i+1]>=0)
            nr++;
    if(nr==n)
        cout << "Da";
    else 
        cout << "Nu";
}