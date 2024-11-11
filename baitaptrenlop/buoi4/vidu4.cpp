#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct NhanVien {
    char ma[20];       
    char hoten[50];    
    float hs;        
    long lcb;          
    long pc;           
};

void NhapNV() {
    ofstream f("NhanVien.dat", ios::binary); 
    for (int i = 0; i < 10; i++) { 
        NhanVien nv;
        
       
        cin >> nv.ma;
        cin.ignore();

     
        cin.getline(nv.hoten, 50);
        
        
        cin >> nv.hs >> nv.lcb >> nv.pc;

        f.write(reinterpret_cast<char*>(&nv), sizeof(NhanVien));
    }
    f.close(); 
}

void DocNV() {
    ifstream f("NhanVien.dat", ios::binary);
   
    NhanVien nvm;
    while (f.read(reinterpret_cast<char*>(&nvm), sizeof(NhanVien))) { 
        cout << nvm.ma << " " << nvm.hoten << " : " << (nvm.lcb * nvm.hs + nvm.pc) << endl;
    }
    f.close(); 
}

int main() {
    NhapNV(); 
    DocNV(); 
    return 0;
}