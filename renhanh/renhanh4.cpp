#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cin>> a;
    cin>> b;
    if(a != 0 && b != 0){
        cout <<"a and b is not equal to 0"<< endl;

    }else if(a == 0 && b != 0){
        cout <<"a is equal to 0 and b not"<< endl;
    }else if(a != 0 && b == 0){
        cout <<"a is not equal to 0 and b is equal to 0"<< endl;
    }else {
        cout <<"a and b is equal to 0"<< endl;
    }
    return 0;
}