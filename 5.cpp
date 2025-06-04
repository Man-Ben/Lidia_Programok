#include <iostream>
using namespace std;
int main(){
    int n, i, da=0;
    cin >> n;
    int a[n];
    for(i=0; i<=n-1; i++)
        cin >> a[i];
    for(i=0; i<=n-1; i++)
        if(a[i-1]>=a[i])
            da++;
    if(da==n)
        cout << "Da, sirul este ordonat descrescator";
    if(da!=n)
        cout << "Nu, sirul nu este ordonat descrescator";
    return 0;
}