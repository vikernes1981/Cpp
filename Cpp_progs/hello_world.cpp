/*
 * hello_world.cpp
 * 
 * Copyright 2017 penjo <penjo@vik3rn35>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;

int main()
{
	int x;
//	int *xp = &x;
	cout << "Give x value : " << endl;
	cin >> x;
	while(x != 10)
	{
		cout << "Try again!\n";
		cin >> x; 
	}
	cout << "Hello World!!\n";
//	cout << x << endl;
//	cout << xp << endl;
//	cout << *xp << endl;
	
	return 0;
}

