#include <iostream>
using namespace std;
int main(){
    int n, min=0, max=0;
    cin >> n;
    int a[n];
    for(int i=0; i<=n-1; i++){
        cin >> a[i];
        if(i==0){
            min=a[i];
            max=a[i];
        } else {
            if(a[i]<min) 
                min=a[i];
            if(a[i]>max) 
                max=a[i];
        }
    }
    cout << min << " " << max << endl;
    return 0;
}