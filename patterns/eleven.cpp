#include <iostream>
using namespace std ;
int main(){
string start_ev= "0", start_od = "1", val = "";
    for (int i = 1; i<=5; i++){

        if (i%2 != 0){
            val = start_od + val ;
        }
        else{
            val = start_ev + val ;
        }
        cout << val << endl ;



        }
}