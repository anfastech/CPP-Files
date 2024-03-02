#include <iostream>
using namespace std;
int main(){
    // (A-1) to 2
    int n,i, flag=0;
    cout << "Enter n : ";
    cin >> n ;
    // Process 
    for(i=n-1; i>=2; i--){
       if((n%i)==0){
        flag++;
        break;
       }
    }

    if( flag > 0){
        cout << n << " is Not Prime ";
    } else {
        cout << n << " is Prime " ;
    }

    return 0;
}