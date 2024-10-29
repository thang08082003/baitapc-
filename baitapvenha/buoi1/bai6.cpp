#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    cin >> a; 
    cin >> b;
     
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if(i %3 == 0){
            cout << i << " ";
        } 
    }  
    return 0;
}