#pragma once
#include"phanso.h"
 
class phanso
{
private:
	int Tu;
	int Mau;
public:
	phanso();
	phanso(int tu);
	phanso(int tu, int mau);
	phanso(const phanso& other);
	
	~phanso();
	void xuat();

	int layMauso();
	int layTuso();
	void ganMauso(int mau);
	void ganTuso(int tu);
};