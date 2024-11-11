#include<iostream>
#include<fstream>
using namespace std;

struct NhanVien{
    string ma,hoten;
    float hs;
    long lcb, pc;
};

void NhapNV(){
        NhanVien nv;
        cin >> nv.ma;
        cin.ignore();
        getline(cin, nv.hoten);
        cin>> nv.hs >> nv.lcb>>nv.pc;
        ofstream f("NhanVien.txt");
        f<< nv.ma <<"\n"<< nv.hoten<<"\n"<<nv.lcb<<"\n"<< nv.pc;
        f.close();

}

void DocNV(){
        ifstream f("NhanVien.txt");
        NhanVien nvm;
        f>> nvm.ma;
         f.ignore();
        getline(f, nvm.hoten);
      
        f>> nvm.hs>>nvm.lcb>>nvm.pc;
        f.close();
        cout<<nvm.ma<<" "<<nvm.hoten<<" :"<<nvm.lcb*nvm.hs*nvm.pc;
}


int main(){
    // NhapNV();
    DocNV();
    return 0;
}