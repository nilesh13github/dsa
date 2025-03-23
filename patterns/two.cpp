#include <iostream>
using namespace std ;
int main(){

    for (int i =1; i<= 5; i++){

        cout<<string(5-i, ' ')<<string(2*i-1, '*')<<string(5-i, ' ')<<endl;

    };
    return 0;
}