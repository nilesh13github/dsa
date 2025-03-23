#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main(){

    vector <char> alpha_arr(5);
    iota(alpha_arr.begin(), alpha_arr.end(), 'A') ;

    for (int i = 0; i < 5; i++){
        for (int j = 5 -(i+1); j<=4; j++){
            cout << alpha_arr[j] ;
        }

        cout << endl;
        
    }

    return 0;

}
