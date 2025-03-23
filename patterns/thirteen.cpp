#include <iostream>
#include <vector>
#include <numeric>

using namespace std ;

int main(){

    vector <int> arr(15) ;
    iota(arr.begin(), arr.end(), 1);
    int cap = 0 ;

    for ( int i =0 ; i < 6; i++){

        for (int j = cap; j < cap + i ; j++){
            cout << arr[j]<<" " ;

        }
        cap = cap + i ;
        cout << endl ;


    }


    return 0;
}