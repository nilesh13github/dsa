#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i < 5; i++){
        cout << string(5-i, '*') << string(i*2, ' ') << string(5-i, '*') << endl;
    }
    for (int j = 4; j >=0; j--){
        cout << string(5-j, '*') << string(j*2, ' ') << string(5-j, '*') << endl;
    }

    return 0;

}