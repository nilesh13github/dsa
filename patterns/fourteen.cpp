#include <iostream>
#include <vector>
#include <numeric>
using namespace std ;
int main(){

    vector<char> arr(5);
    iota(arr.begin(), arr.end(), 'A');

    for (int i = 0; i <6 ; i++){
        for (int j = 0; j <i; j++){
            cout << arr[j];

        }
        cout << endl;
    }



    return 0;
}