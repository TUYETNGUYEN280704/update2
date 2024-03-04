#pragma once
#include"NhanVien.h"
#include<iostream>
#include<string>
using namespace std;

class NhanVien
{
private:
	string HoTen, MaSo, ChucDanh;
	int SoNgayLamViec;
	//string MaSo;
	//string ChucDanh;
	float HeSoLuong;
public:
	string LayHoTen(string ten);
	void GanHoTen(string ten);
	
	NhanVien(string HoTen, int SoNgay, string MaSo, string ChucDanh, float HeSoLuong);
	
	NhanVien(string HoTen, int SoNgay);

	void Xuat();

};


