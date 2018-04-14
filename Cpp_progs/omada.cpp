/*
 * omada.cpp
 * 
 * Copyright 01/03/2018 penjo <penjo@vik3rn35>
 */


#include <iostream>
#include <random>
using namespace std;

int main()
{
	int teamMates = 20;
	int omada[teamMates][teamMates],count,votes;
	int max,position = 0,best,selfvote = 0;
	
	//  Fills the 2D list with random 1's and 0's
	for(int i = 0;i < teamMates;i++)
	{
		count = 0;
		for(int j = 0;j < teamMates;j++)
		{
			omada[i][j] = rand() % 2;
			if(omada[i][j] == 1)
			{
				count++;
			}
			
			// if there more than 3 1's in row fill the rest of row with 0's
			if(count > 3)
			{
				omada[i][j] = 0;
			}
		}
	}
	
	// counts votes for everyone and finds who has the most
	for(int i = 0;i < teamMates;i++)
	{
		votes = 0;
		for(int j = 0;j < teamMates;j++)
		{
			if(i == 0 && j == 0)
			{
				max = votes;
			}
			
			if(omada[j][i] == 1)
			{
				votes++;
			}
		}
		
		if(omada[i][i] == 1)
		{
			selfvote++;
		}
		if(votes > max)
		{
			max = votes;
			best = position + 1;
		}
		cout<<"Votes for player "<<position + 1<<" are "<<votes<<"\n";
		position++;
	}
	
	cout<<"Player "<<best<<" has most votes : "<<max<<"\n";
	cout<<selfvote<<" players have voted themselves!\n\n";
	
	for(int i = 0;i < teamMates;i++)
	{
		for(int j = 0;j < teamMates;j++)
		{
			cout<<omada[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

