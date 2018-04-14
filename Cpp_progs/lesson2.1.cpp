/*
 * lesson2.1.cpp
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
#include <string>
using namespace std;

class Dms
{
	public:
		Dms()
		{
			cout<<"Hello World!\n";
			name = "";
			age = 0;
			height = 0;
		}
		Dms(string s, int a, float b)
		{
			cout<<"Hello World!\n";
			name = s;
			age = a;
			height = b;
		}
		
		~Dms()
		{
			cout<<"DIE Mofo!"<<"\n";
		}
		string fat() const
		{
			return (2 * age > 25) ? "Fat" : "Thin";
		}
		string getName() const
		{
			return name;
		}
		int getAge() const
		{
			return age;
		}
		float getHeight() const
		{
			return height;
		}
		void setName(string n)
		{
			name  = n;
		}
		void setAge(int a)
		{
			age = a;
		}
		void setHeight(float b)
		{
			height = b;
		}
	private:
		string name;
		int age;
		float height;
};

int main()
{
	string name;
	int age;
	float height;
	
	cout<<"Give name please : "<<"\n";
	cin>>name;
	cout<<"Give age please : "<<"\n";
	cin>>age;
	cout<<"Give height please : "<<"\n";
	cin>>height;
	
	Dms pel1(name,age,height);
	cout<<pel1.getName()<<"\n";
	Dms pel2;
	pel2.setName(name);
	pel2.setAge(age);
	pel2.setHeight(height);
	
	cout<<pel2.getName()<<"\n";
	cout<<pel2.fat()<<"\n";
	
	return 0;
}

