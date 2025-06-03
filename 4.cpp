#include <iostream>
using namespace std;
int main(){
    int n, max=0, nr=0;
    cin >> n;
    int a[n];
    for(int i=0; i<=n-1; i++){
        cin >> a[i];
        if(i==0){
            max=a[i];
        }
        if(a[i]>max)
            max=a[i];
        if(a[i]==max)
            nr++;
    }
    cout << max << " " << nr << endl;
    return 0;
}