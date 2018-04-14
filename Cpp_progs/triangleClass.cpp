
/*
 * triangleClass.cpp
 * 
 * Copyright 2018 penjo <penjo@vik3rn35>
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
#include <cmath>
using namespace std;

class Triangle
{
	public:
		Triangle()
		{
			cout<<"MPOREI NA MHN TO EXW ME TA MATHIMATIKA ALLA DOULEYEI :P"<<"\n";
			a = 0;
			b = 0;
			c = 0;
			u = 0;
		}
		Triangle(int x, int y, int z, int v)
		{
			cout<<"MPOREI NA MHN TO EXW ME TA MATHIMATIKA ALLA DOULEYEI :P"<<"\n";
			a = x;
			b = y;
			c = z;
			u = v;
		}
		~Triangle()
		{
			cout<<"EXTERMINATE"<<"\n";
		}
		int perimeter()
		{
			return a + b + c;
		}
		double emvadon()
		{
			double x;
			if(a > b && a > c)
			{
				x = a;
			}
			else if(b > a && b > c)
			{
				x = b;
			}
			else
			{
				x = c;
			}
			return x * u / 2;
		}
		void typeOfTriangle()
		{
			if(a != b && a != c && b != c)
			{
				cout<<"Skalhno"<<"\n";
			}
			else if(a == b || a == c || b == c)
			{
				cout<<"Isoskeles"<<"\n";
			}
			else if(a == b && a == c && b == c)
			{
				cout<<"Isopleyro"<<"\n";
			}
		}
		void orthogwnio()
		{
			if(pow(a,2) + pow(b,2) == pow(c,2) || pow(c,2) + pow(b,2) == pow(a,2) || pow(c,2) + pow(a,2) == pow(b,2))
			{
				cout<<"Orthogwnio"<<"\n";
			}
			else
			{
				cout<<"Not Orthogwnio"<<"\n";
			}
		}
		void setAlpha(int x)
		{
			a = x;
		}
		void setBeta(int y)
		{
			b = y;
		}
		void setGamma(int z)
		{
			c = z;
		}
		void setYpsilon(int v)
		{
			u = v;
		}
		int getAlpha() const
		{
			return a;
		}
		int getBeta() const
		{
			return b;
		}
		int getGamma() const
		{
			return c;
		}
		int getYpsilon() const
		{
			return u;
		}
	private:
		int a,b,c,u;
};


int main()
{
	int a = 3, b = 4, c = 5, d = 10;
	
	Triangle x(a,b,c,d);
	cout<<"Emvadon is : "<<x.emvadon()<<"\n";
	cout<<"Perimeter is : "<<x.perimeter()<<"\n";
	x.typeOfTriangle();
	x.orthogwnio();
	
	Triangle x1;
	x1.setAlpha(a);
	x1.setBeta(b);
	x1.setGamma(c);
	x1.setYpsilon(d);
	cout<<x1.getAlpha()<<"\n";
	cout<<x1.getBeta()<<"\n";
	cout<<x1.getGamma()<<"\n";
	cout<<x1.getYpsilon()<<"\n";
	return 0;
}

