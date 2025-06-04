#include <iostream>
using namespace std;
int main(){
    int n, min=0, max=0;
    cin >> n;
    int a[n];
    for(int i=0; i<=n-1; i++)
        cin >> a[i];
    min=a[0];
    max=a[0];
    for(int i=0; i<=n-1; i++){
            if(a[i]<min) 
                min=a[i];
            if(a[i]>max) 
                max=a[i];
    }
    cout << "Minimul din sirul a: " << min << " Maximul din sirul a: " << max << endl;
    return 0;
}