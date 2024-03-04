#include"phanso.h"
#include<iostream>

using namespace std;

phanso::phanso()
{
	Tu = 0;
	Mau = 1;
}

phanso::phanso(int tu)
{
	Tu = tu;
	Mau = 1;

}
 
phanso::phanso(int tu, int mau)
{
	Tu = tu;
	Mau = mau;
}

phanso::phanso(const phanso& other)//hm sao  chep
{
	Tu = other.Tu;
	Mau = 1;
}

phanso::~phanso()//ham huy
{
	
}
void phanso::xuat()
{
	cout << Tu << "/" << Mau << endl;
}
/*----*/

int phanso::layTuso()
{
	return Tu;
}

int phanso::layMauso()
{
	return Mau;
}

void phanso::ganMauso(int mau)
{
	if (mau == 0)
		return;
	Mau = mau;
}

void phanso::ganTuso(int tu)
{
	Tu = tu;
}