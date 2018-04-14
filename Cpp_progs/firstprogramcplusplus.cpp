/*
 * firstprogramcplusplus.cpp
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

int main()
{
/*	int age1,age2;
	string name1,name2,win;
	
	cout << "Give first name :";
	cin>>name1;
	cout<<"Give first age :";
	cin>>age1;
	cout<<"Give second name and age :";
	cin>>name2>>age2;
	
	win = (age1 > age2) ? name1 : name2;
	cout<<"The oldest man is : "<<win<<"\n";


	int a[3][2];
	int sum,max,col,row;
	float mo;
	
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 2;j++)
		{
			cout<<"Give a number : ";
			cin>>a[i][j];
			sum += a[i][j];
			if(i == 0 && j == 0)
			{
				max = a[i][j];
				col = j;
				row = i;
			}
			if(a[i][j] > max)
			{
				max = a[i][j];
				col = j;
				row = i;
			}
		}
	}
	
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 2;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
	mo = (float)sum / 6;
	
	cout<<"Mesos oros is : "<<mo<<"\n";
	cout << "Max is :"<<max<<" Col is :"<<col<<" and Row is : "<<row;
*/
	
	string hotels[5];
	int income[5][5], sum, count = 1, max,position,max2,col,row;
	
		for(int i = 0;i < 5;i++)
		{
			sum = 0;
			cout<<"Give name of hotel "<<count<<" :";
			cin>>hotels[i];
			cout<<"\n";
			count++;
			for(int j = 0;j < 5;j++)
			{
				cout<<"Give income of current month : ";
				cin>>income[i][j];
				if(i == 0 && j == 0)
				{
					max2 = 0;
					col = 0;
					row = 0;
				}
				
				sum += income[i][j];
			}
			if(i == 0)
			{
				max = sum;
				position = i;
			}
			if(sum > max)
			{
				max = sum;
			}
			cout<<hotels[i]<<" total income : "<<sum<<"\n";
		}
		cout<<"Max sum income of "<<hotels[position]<<" is "<<max<<"\n";
	
	return 0;
}

