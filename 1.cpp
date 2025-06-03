#include <iostream>
using namespace std;
int main() {
    int n, ma=0, nr=0, sum = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        nr++;
        sum += a[i];
    }
    ma=sum / nr;
    cout << ma << endl;
return 0;
}