#include <iostream>
using namespace std;
int main(){
    int n, div, i, j;
    cin >> n;
    int a[n];
    div = 0;
    for(i=0; i<=n-1; i++)
        cin >> a[i];
    for(i=0; i<=n-1; i++){
        for(j=1; j*j<=a[i]; j++)
            if(a[i]%j==0)
                if(a[i]/j==j)
                    div++;
                else
                    div=div+2;
    if(div==2)
        cout << a[i] << " este prim" << endl;
        div=0;
    }
    return 0;
}