#include <iostream>
using namespace std;

int main() {
    int a;
    
    cin >> a; 
     
    int sum = 0;
    for (int i = 0; i <= a; i++) {
        if(i %2 == 1){
            sum += i;
            } 
    }
    cout<<sum<<endl;
    return 0;
}