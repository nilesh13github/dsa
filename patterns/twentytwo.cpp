#include <iostream>
#include <vector>
using namespace std;


void printer( const vector<int>& arr){
        for (const auto&val: arr){
            cout << val;
        }
        cout << endl;

}

int main(){

    vector <int> int_arr(7, 4);
    
    for (int i = 0; i < 4; i++){

        for (int j = i; j <=6-i; j++ ){

            int_arr[j] = 4-i ;

        }
        printer(int_arr);


    }
    for (int x = 2; x <= 4; x++){
        for (int y = -x + 4; y <= x+1; y++ ){
            int_arr[y] = x;
        }

        printer(int_arr);    
    }

    



    return  0;
}