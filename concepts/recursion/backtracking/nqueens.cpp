#include <iostream>
using namespace std;


bool posCheck(int board[][10],int N,int i,int j) {

	int x = i;
	int y = j;

	//Left Diagonal Check
	while(x >=0 && y >= 0) {
		if(board[x][y] == 1) {
			return false;
		}
		x--;
		y--;
	}

	//Right Diagonal Check
	x= i;
	y= j;

	while(x >= 0 && y < N) {
		if(board[x][y] == 1) {
			return false;
		}
		x--;
		y++;
	}

	//Vertical check
	x = i;
	y = j;

	for(int row = 0;row<i;row++) {
		if(board[row][j] == 1) {
			return false;
		}
	}


	return true;
}



bool place(int board[][10],int N,int i) {
	//base case
	if(i == N) {
		//Print board
		for(int j = 0;j<i;j++) {
			for(int k = 0;k<i;k++) {
				if(board[j][k] == 0) cout<<"_"<<" ";
				else cout<<"Q"<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false; //By doing return false you can get all possible configurations.
	}

	//rec case
	for(int j = 0;j<N;j++) {
	
	bool queenPos = posCheck(board,N,i,j);
	if(queenPos) {
		board[i][j] = 1;
		bool nextQueenPlaced = place(board,N,i+1); //If nextQueenPlaced returns false we will go back to previous row and carry on from left j from there on

		if(nextQueenPlaced) {
			return true ; //This is for the position before i+1 - means queen position for row before i + 1 (i) is correct. 
		}else {
			//Queen could not be placed in the next row so we need to backtrack to previous row
			//Then change the position of the queen.
			//Backtracking - Assumption is wrong
			board[i][j] = 0; //Assumption is false. 
		}
	}


}
//Tried for all positions in the current row but could not place any queens at all
//Return false to the previous row.
return false;





}

int main() {
	int board[10][10] = {0};
	int N = 4;

	place(board,N,0);
}