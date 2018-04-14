/*
 * lesson2.2.cpp
 * 
 * Copyright 2018 penjo <penjo@vik3rn35>
 * 
 * 
 * 
 */


#include <iostream>
#include <string>
using namespace std;

class Rect
{
	public:
		Rect()
		{
			a = 0;
			b = 0;
		}
		Rect(int x, int y)
		{
			a = x;
			b = y;
		}
		~Rect()
		{
			cout<<"Destroyer of the Worlds\n";
		}
		int perimeter()
		{
			return (a == 0 && b == 0)? 0 : (2*a)+(2*b);
		}
		int emvadon()
		{
			return a*b;
		}
		string square()
		{
			return (a == b) ? "Square\n": "Rectangle\n";
		}
		void setA(int x)
		{
			a = x;
		}
		void setB(int y)
		{
			b = y;
		}
		int getA()
		{
			return a;
		}
		int getB()
		{
			return b;
		}
	private:
		int a;
		int b;
};

class Rent
{
	public:
		Rent()
		{
			name = "";
			va = ' ';
			bdate = 0;
			jdate = 0;
		}
		Rent(string a, int b, int c, char d)
		{
			name = a;
			bdate = b;
			jdate = c;
			va = d;
		}
		~Rent()
		{
			cout<<"You suck!!!\n";
		}
		void setName(string a)
		{
			name = a;
		}
		void setBdate(int b)
		{
			bdate = b;
		}
		void setJdate(int c)
		{
			jdate = c;
		}
		void setVa(char d)
		{
			va = d;
		}
		string getName() const
		{
			return name;
		}
		int getBdate() const
		{
			return bdate;
		}
		int getJdate() const
		{
			return jdate;
		}
		char getVa() const
		{
			return va;
		}
		int calc() const
		{
			return (va == 'y')? bdate * 2 + jdate :  bdate * 2 + jdate * 1000;
		}
	private:
		string name;
		int bdate;
		int jdate;
		char va;
};

int main()
{
	int bdate, jdate;
	char va;
	string name;
	
	cout<<"Give name : "<<"\n";
	cin>>name;
	do
	{
		cout<<"Give Job date : "<<"\n";
		cin>>jdate;
	}while(jdate <= 0);
	
	do
	{
		cout<<"Give birth date : "<<"\n";
		cin>>bdate;
	}while(bdate <= 0);
	
	do
	{
		cout<<"Give Y or N : "<<"\n";
		cin>>va;
	}while(va != 'y' && va != 'n');
	
	Rent kyrioulis;

	kyrioulis.setName(name);
	kyrioulis.setBdate(bdate);
	kyrioulis.setJdate(jdate);
	kyrioulis.setVa(va);	
	
	Rent kyrioulis1(name,bdate,jdate,va);
	
	cout<<kyrioulis1.getName()<<"\n";
	cout<<kyrioulis1.getBdate()<<"\n";
	cout<<kyrioulis1.getJdate()<<"\n";
	cout<<kyrioulis1.getVa()<<"\n";
	cout<<kyrioulis1.calc()<<"\n";
	
	
	
/*	
	int a,b;
	
	cout<<"Give number please: "<<"\n";
	cin>>a;
	cout<<"Give another number please : "<<"\n";
	cin>>b;
	
	Rect orthon1;
	orthon1.setA(a);
	orthon1.setB(b);
	cout<<"Perimeter is : "<<orthon1.perimeter()<<"\n";
	cout<<"orthon1.emvadon()"<<"\n";
	cout<<orthon1.square()<<"\n";
	*/ 
	return 0;
}

