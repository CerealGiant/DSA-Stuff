#include <iostream>
using namespace std;

bool ratInMaze(char maze[][10],int soln[][10], int i, int j,int m,int n) {
	//base case
	if(i == m-1 && j == n-1) {
		soln[i][j] = 1;
		//Print path
		for(int i =0;i<m;i++) {
			for(int j =0;j<n;j++) {
				cout<<soln[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}

	//rec case
	//1. Rat cannot go outside grid
	if(i > m || j > n) {
		return false;
	}

	//2. Rat cannot go into regions marked 'X'
	if(soln[i][j] == 'X') {
		return false;
	}

	//Rest we will assume that solution goes through that cell
	soln[i][j] = 1;

	bool rightSuccess = ratInMaze(maze,soln,i,j+1,m,n);
	bool leftSuccess = ratInMaze(maze,soln,i+1,j,m,n);

	//After both right and left success have run, we will probably get a path through

	//Backtracking for other solutions
	soln[i][j] = 0; //Resetting

	if(rightSuccess||leftSuccess) {
		return true;
	}	

	return false;


}

int main() {
	char maze[10][10] {
		"0000",
		"00X0",
		"000X",
		"0X00"
	};

	//Board is default 0.
	int soln[10][10] = {0};

	bool ans = ratInMaze(maze,soln,0,0,4,4);

	if(ans) cout<<"No Path"<<endl;
}