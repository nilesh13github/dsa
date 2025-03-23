#include <iostream>
using namespace std;


string reverseBits(long n) {
    
    string binary = "";
    while (n > 0){
        binary = binary + (n%2 == 0 ? "0":"1");
        n /=2;
    }

    return binary ;
    
    
}

int main(){

    long num;
    cin>>num;

    string x = reverseBits(num);
    cout<<x<<endl;


    return 0;
}