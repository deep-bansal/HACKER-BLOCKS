#include <bits/stdc++.h> 
#include <iostream> 
using namespace std; 
bool canPlace(int mat[][9],int i,int j,int n,int number)
{
	for(int x = 0; x < n; x++)
	{// row and column
		if(mat[x][j] == number || mat[i][x] == number)
		{
			return false;
		}
	}
	int rn = sqrt(n);
	int sx = (i/rn)*rn;
	int sy = (j/rn)*rn;
	for (int x = sx; x < sx+rn ; ++x)
	{
		for (int y = sy; y < sy+rn; ++y)
	{
			if(mat[x][y] == number)
			{
				return false;
			}
		}
	}
	return  true;
}

bool sudokuSolver(int mat[][9],int i,int j,int n)
{
	if (i == n)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	if(j == n)
	{
		return sudokuSolver(mat,i+1,0,n);
	}
	if(mat[i][j] != 0)
	{
		return sudokuSolver(mat,i,j+1,n);
	}

	for (int num = 1; num <= 9; ++num)
	{
		if(canPlace(mat,i,j,n,num))
		{
			mat[i][j] = num;

			bool couldWeSolve = sudokuSolver(mat,i,j+1,n);
			if(couldWeSolve)
			{
				return true;
			}
		}
		
	}
	mat[i][j] = 0;
	return false;

	


}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int mat [9][9];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>mat[i][j];
		}
	}
	sudokuSolver(mat,0,0,n);

	return 0;
}