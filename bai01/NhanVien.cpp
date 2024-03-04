#include"NhanVien.h"
#include<iostream>
using namespace std;

string NhanVien::LayHoTen(string ten)
{
	return HoTen;
}

void NhanVien::GanHoTen(string ten)
{
	HoTen = ten;
}

NhanVien::NhanVien(string HoTen, int SoNgay, string MaSo, string ChucDanh, float HeSoLuong)
{
	this-> HoTen = HoTen;
	this-> SoNgayLamViec = SoNgay;
	this-> MaSo = MaSo;
	this-> ChucDanh = ChucDanh;
	this-> HeSoLuong = HeSoLuong;
}

NhanVien::NhanVien(string HoTen, int SoNgay)
{
	this->HoTen = HoTen;
	this->SoNgayLamViec = SoNgay;
	this->MaSo = to_string(SoNgay) + HoTen;
	
	if (SoNgay >= 0 && SoNgay < 365) {
		ChucDanh = " Nhan Vien";
		HeSoLuong = 1.0;
	}
	if (SoNgay >= 365 && SoNgay < 730) {
		ChucDanh = " Quan Li";
		HeSoLuong = 2.0;
	}
	if (SoNgay >= 730 && SoNgay < 1460) {
		ChucDanh = " Truong Phong ";
		HeSoLuong = 3.0;
	}
	if (SoNgay >= 1460) {
		ChucDanh = "Truong ban quan li";
		HeSoLuong = 4.0;
	}
}

void NhanVien::Xuat()
{
	cout << "HoTen:" << HoTen << endl;
	cout << "So ngay lam viec:" << SoNgayLamViec << endl;
	cout << "Ma so:" << MaSo << endl;
	cout << "Chuc danh :" << ChucDanh  << endl;
	cout << "He so luong:" << HeSoLuong << endl;

}
