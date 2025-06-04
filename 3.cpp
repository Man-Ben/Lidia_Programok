#include <iostream>
using namespace std;
int main(){
    int n, div=0, i, j, k=0;
    cin >> n;
    int a[n];
    int b[n];
    for(i=0; i<=n-1; i++)
        cin >> a[i];
    for(i=0; i<=n-1; i++){
        div=0;
        for(j=1; j*j<=a[i]; j++){
            if(a[i]%j==0){
                if(a[i]/j==j)
                    div++;
                else
                    div+=2;
            }
            if(div>2)
            b[k++]=a[i];
        }
    }
    int min=b[0];
    for(i=0; i<=k-1; i++){
        if(b[i]<min)
            min=b[i];
    }
    cout << min << endl;    
    return 0;
}