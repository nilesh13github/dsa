#include <iostream>
using namespace std ;
int main(){
    for (int i = 1; i<10 ; i++){

        if (i<=5){
            cout<<string(i, '*')<<endl;
        } else{
            cout<<string((-i+10), '*')<<endl;
        }
    }

    return 0 ;
}