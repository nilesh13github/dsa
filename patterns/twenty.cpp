#include <iostream>
using namespace std ;
int main(){

    for (int i = 0; i < 5; i++){

        cout << string(i, '*') << string(10-(i*2 + 2), ' ') << string(i, '*') << endl;
    }
    for (int j = 3; j >= 0; j--){

        cout << string(j, '*') << string(10-(j*2 + 2), ' ') << string(j, '*') << endl;
    }

    return 0;
}