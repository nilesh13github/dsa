#include <iostream>
#include <vector>
#include <variant>
#include <any>
using namespace std ;
int main(){


    vector<variant<int, string>> arr(8, " ");

    for (int i =1; i <=  4; i++){

        arr[i-1] = i ;
        arr [8-i] = i ;
        
        for (const auto& val : arr) {
            if (holds_alternative<int>(val) ){

                cout << get<int>(val) ;

            }
            else {
                cout << get<string>(val) ;
            }   
        }
        cout << endl ;

    }


    return 0 ;
}