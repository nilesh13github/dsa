#include <iostream>
using namespace std ;
int main(){
    for (int i = 1; i <5; i++){
        cout<<string(i-1, ' ')<<string(9-i*2, '*')<<string(i-1, ' ')<<endl;
    }

    return 0;
}