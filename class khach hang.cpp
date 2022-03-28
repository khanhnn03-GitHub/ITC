#include<iostream>
using namespace std;
class KhachHang {
private:
	int d, m, y;
	char ten[30];
	char cmnd[15];
	char hokhau[50];
public:
	void nhap() {
		cout << "\nNhap ten: ";
		cin.getline(ten, 30);
		cin.ignore();
		cout << "nhap ngay sinh: ";
		cin >> d;
		cout << "nhap thang sinh: ";
		cin >> m;
		cout << "nhap nam sinh: ";
		cin >> y;
		fflush(stdin);
		cout << "nhap so cmnd: ";
		cin.getline(cmnd, 10);
		cout << "nhap ho khau: ";
		cin.getline(hokhau, 50);
	}
	void xuat() {
		cout<< "\nTen " << ten <<endl; 
		cout<< "\nNgay thang nam sinh " << d << "/" << "/" << m << "/" << y <<endl; 
		cout<< "\nSo cmnd " << cmnd <<endl; 
		cout<< "\nHo khau " << hokhau << endl;
	}
	void sapxep(KhachHang a[], int n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (a[i].m < a[j].m)
				{
					swap(a[i], a[j]);
				}
			}
		}
	}
	void ds(KhachHang a[], int n) {
		int dem = 0;
		for (int i = 0; i < n; i++) {
			if (a[i].m % 12 == 0)
				dem++;
		}
		cout << "co " << dem << "khach hang sinh thang 12" << endl;
	}
};
int main()
{
	int n;
	cout << "nhap so luong khach hang: ";
	cin >> n;
	fflush(stdin);
	KhachHang a[100];
	cout << "nhap thong tin khach hang ";
	fflush(stdin);
	for (int i = 0; i < n; i++) {
		a[i].nhap();
	}
	for (int i = 0; i < n; i++) {
		cout << "khach hang thu " << i + 1 <<": " << endl;
		a[i].xuat();
	}
	for (int i = 0; i < n; i++) {
		cout << "sap xep theo ten tang dan\n";
		a[i].sapxep(a, n);
		a[i].xuat();
		a[i].ds(a, n);
		a[i].xuat();
	}

	return 0;
}
