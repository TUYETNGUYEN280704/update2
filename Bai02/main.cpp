#include"phanso.h"

void main()
{
	phanso a, b(5), c(2, 3);
	a.xuat();
	b.xuat();
	c.xuat();

	phanso d(c);
	//d.xuat();
	d.ganMauso(5);
	d.xuat();
////
	phanso e(c);
	e.ganTuso(5);
	e.xuat();
	/*
	c.layTuso();
	c.layMauso();
	*/
	
}