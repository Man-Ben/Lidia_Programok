#include <iostream>
using namespace std;
int main(){
    int n, sum=0, i, p=1;
    float ma, nr=0;
    cin >> n;
    int a[n];
    for(i=0; i<=n-1; i++)
        cin >> a[i];
    cout << "Elementele pare, pe pozitii impare sunt: ";
    for(i=0; i<=n-1; i++)
        if(a[i]%2==0 && i%2!=0){
            nr++;
            cout << a[i] << " ";
        }    
    cout << endl;
    cout << "Numarul de elemente pare, pe pozitii impare este: " << nr << endl;
    nr=0;
    for(i=0; i<=n-1; i++){
        if(a[i]%2==0 && a[i]>=0)
            nr++;
    }
    cout << "Numarul de elemente pare, pozitive este: " << nr << endl;
        for(i=0; i<=n-1; i++)
            if(a[i]<0)
                p=p*a[i];
    cout << "Produsul elementelor negative este: " << p << endl;
    nr=0;
    for(i=0; i<=n-1; i++)
            if(a[i]>=0){
                sum=sum+a[i];
                nr++;
            }
        ma=sum/nr;
    cout << "Media aritmetica a elementelor pozitive este: " << ma << endl;
 }
