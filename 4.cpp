#include <iostream>
using namespace std;
int main(){
    int n, max=0, nr=0;
    cin >> n;
    int a[n];
    for(int i=0; i<=n-1; i++)
        cin >> a[i];
        max=a[0];
    for(int i=0; i<=n-1; i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]==max)
            nr++;
    }
    cout << "Maximul din sirul a este: " << max << " Si apare de " << nr << " ori"<< endl;
    return 0;
}