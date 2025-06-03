#include <iostream>
using namespace std;
int main(){
    int n, max=0, nr=0, i, j;
    cin >> n;
    int a[n];
    for(i=0; i<=n-1; i++)
        cin >> a[i];
for(j=0; j<=n-1; j++){
    i=1;
    if(i*i<=a[j]){
        while(a[j]%i==0){
            if(a[j]/i!=i)
                nr+=2;
            if(a[j]/i==i)
                nr++;
        }
        i++;
    }
}
    cout << max << endl;
    return 0;
}