#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    float nr=0, ma=0;
    cin >> n;
    int a[n];
    for(int i=0; i<=n-1; i++){
        cin >> a[i];
        nr++;
        sum+=a[i];
    }
    ma=sum/nr;
    cout << ma << endl;
return 0;
}