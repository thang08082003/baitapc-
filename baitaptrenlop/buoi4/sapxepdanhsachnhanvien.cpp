#include <bits/stdc++.h>

using namespace std;

struct NhanVien {
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHD;
    int ngay, thang, nam;
    int maNV;
};

string chuanHoaMaNV(int ma) {
    stringstream ss;
    ss << setw(5) << setfill('0') << ma;
    return ss.str();
}

void nhap(NhanVien &nv) {
    static int count = 0;
    if (count == 0) cin.ignore();
    getline(cin, nv.hoTen);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKyHD);
    nv.thang = stoi(nv.ngaySinh.substr(0, 2));
    nv.ngay = stoi(nv.ngaySinh.substr(3, 2));
    nv.nam = stoi(nv.ngaySinh.substr(6, 4));
    nv.maNV = ++count;
}

bool soSanhNgaySinh(const NhanVien &a, const NhanVien &b) {
    if (a.nam != b.nam) return a.nam < b.nam;
    if (a.thang != b.thang) return a.thang < b.thang;
    return a.ngay < b.ngay;
}
void sapxep(NhanVien ds[], int N) {
    sort(ds, ds + N, soSanhNgaySinh);
}

void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << chuanHoaMaNV(ds[i].maNV) << " " << ds[i].hoTen << " "
             << ds[i].gioiTinh << " " << ds[i].ngaySinh << " "
             << ds[i].diaChi << " " << ds[i].maSoThue << " "
             << ds[i].ngayKyHD << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}