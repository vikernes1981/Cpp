/*
 * lesson2.cpp
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
#include <vector>
using namespace std;

void fillVector(vector<int>& x)
{
	int a = 0;
	do
	{
		cout<<"Give a number : "<<"\n";
		cin>>a;
		x.push_back(a);
	}while(a > 0);
}

void printVector(vector<int>& x)
{
	for(unsigned int i = 0;i < x.size();i++)
	{
		cout<<"New Vector Numbers : "<<x[i]<<"\n";
	}
}

int main()
{
	vector<int> num;
	vector<int> num2;
	
	fillVector(num2);
	printVector(num2);
/*	
	num.push_back(5);
	num.push_back(6);
	num.push_back(7);
	num.push_back(8);
	num.push_back(9);
	
	for(unsigned int i = 0;i < num.size();i++)
	{
		cout<<"Vector # "<<num.at(i)<<"\n";
	}
	cout<<"\n";
	// num.insert(position we want our number to be, number we want to insert)
	// num.begin = gets indexer at begin then we add the positions we want to insert out num.
	num.insert(num.begin()+3,5);
	
	for(unsigned int i = 0;i < num.size();i++)
	{
		cout<<"Vector # "<<num.at(i)<<"\n";
	}
	cout<<"\n";
	num.erase(num.begin() + 2);	
	
	for(unsigned int i = 0;i < num.size();i++)
	{
		cout<<"\nVector # "<<num.at(i)<<"\n";
	}
	
	num.clear();
	if(num.empty())
	{
		cout<<"Nothing";
	}
*/
	return 0;
}

