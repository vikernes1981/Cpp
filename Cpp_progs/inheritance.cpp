/*
 * inheritance.cpp
 *
 * Copyright 2018 penjo <penjo@vik3rn35>
 *
 * Mporoun dyo classes na kanoun inherit apo thn idia base class?
 * Apo oti fainetai yparxei conflict ( example if include Colibri and Kotopoulo == crash)
 */


#include <iostream>
#include <string>
#include "animali.cpp"
#include "dolphin.cpp"
//#include "Birds.cpp"
//#include "penguin.cpp"
//#include "Colibri.cpp"
//#include "Kotopoulo.cpp"
//#include "Kota.cpp"
using namespace std;

int main()
{
	Dolphin d;
	Animali a;
	a.color();
	d.color();
	/*
	Birds b;
	Kota k;
	Kotopoulo ko;
	Colibri c;
	Penguin p;
	cout<<"Birds : base\n";
	b.fly();
	b.voice();
	b.koutsoulies();
	cout<<"\nKota : base:2\n";
	k.fly();
	k.voice();
	k.koutsoulies();
	k.rooster();
	cout<<"\nKotopoulo : base:2:3\n";
	ko.fly();
	ko.voice();
	ko.koutsoulies();
	ko.mama();
	ko.rooster();
	cout<<"\nColibri : base:2:3:4\n";
	c.fly();
	c.koutsoulies();
	cout<<"\nPenguin : base:2:3:4:5\n";
	p.fly();
	p.koutsoulies();
	*/
	return 0;
}
