#include<iostream>                  //ruttien naptien trong 1 tkhoan ngan hang
using namespace std;
class Taikhoan {
private:
	float sodu = 0;
public:
	/*Taikhoan() {
		sodu = 0;  // co the khai bao nhu nay thay vi dat so du ban dau = 0
	}*/
	void naptien(int s) {
		if (s > 0) {
			sodu += s;
			cout << "Nap thanh cong " << s << " VND" << endl;
		}
		else {
			cout << "So tien k hop le !!" << endl;
		}
	}
	void ruttien(int s) {
		if (s > 0 && s <= sodu) {
			sodu -= s;
			cout << "Rut thanh cong " << s << " VND" << endl;
		}
		else {
			cout << "So tien trong tai khoan hien tai k du !!!" << endl;
		}
	}
	float getsodu() {
		cout << "So du hien tai o trong vi la :";
		return sodu;
	}
};
int main() {
	Taikhoan tk;
	int choice;
	do {
		cout << "1.Nap tien" << endl;
		cout << "2.Rut tien" << endl;
		cout << "3.Xem so du " << endl;
		cout << "4.Thoat" << endl;
		cout << "Lua chon cua ban la :";
		cin >> choice;
		switch (choice) {
		case 1:
			int s;
			cout << "Nhap so tien muon nap :";
			cin >> s;
			tk.naptien(s);
			break;

		case 2:
			cout << "Nhap so tien muon rut :";
			cin >> s;
			tk.ruttien(s);
			break;
		case 3:
			cout << "So du hien tai cua ban la : " << tk.getsodu() << "VND" << endl;
			break;
		case 4:
			cout << "Thoat phien dao dich ";
			break;
		default:
			cout << "Lua chon k hop le !!";
		}
	} while (choice != 4);
	return 0;
}