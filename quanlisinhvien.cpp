#include<iostream>
#include<string>
using namespace std;
struct Sinhvien {
	string maSV;
	string ten;
	int tuoi;
	double diem;
};
int main() {
	int n;
	cout << "Nhap so sinh vien :";
	cin >> n;
	cin.ignore();
	Sinhvien ds[100];
	for (int i = 0; i < n; i++) {
		cout << "nhap ma sv cho sinh vien thu " << i << endl;
		getline(cin, ds[i].maSV);
		cout << "Nhap ten cho sinh vien thu ";
		getline(cin, ds[i].ten);
		cout << "nhap tuoi cua sinh vien thu ";
		cin >> ds[i].tuoi;
		cout << "Nhap diem cua sinh vien thu ";
		cin >> ds[i].ten;
		cin.ignore();
	}

	for (int i = 0; i < n; i++) {
		cout << "Ma sinh vien cua sinh vien thu " << i << "la :" << ds[i].maSV << endl;
		cout << "ten sinh vien thu " << i << "la :" << ds[i].ten << endl;
		cout << "tuoi cua sinh vien thu " << i << "la :" << ds[i].tuoi << endl;
		cout << "diem cua sinh vien thu " << i << "la : " << ds[i].diem << endl;
	}

	return 0;
}