#include<iostream>
#include<string>
using namespace std;
	int main()
{
	int row;
	int column;
	int counter =0;
	int end = 0;
	const int size = 3;
	int count = 0;
	char twoarray[size][size] = 	{{'*','*','*'},		//[0][0],[0][1],[0][2]
			       		{'*','*','*'},		//[1][0],[1][1],[1][2]
			       		{'*','*','*'}}; 	//[2][0],[2][1],[2][2]
			       
	cout << "### TIC TAC TOE GAME ###\n";

	//output tictactoe
	cout << twoarray[0][0] << " " << twoarray[0][1] << " " <<twoarray[0][2] << endl;
	cout << twoarray[1][0] << " " << twoarray[1][1] << " " <<twoarray[1][2] << endl;
	cout << twoarray[2][0] << " " << twoarray[2][1] << " " <<twoarray[2][2] << endl;

	while (end == 0 && counter != 9)
	{
		if (end == 0)
		{
		
		
			//Player 1
			cout << "Player 1: Enter your move in the format <row> <column>: ";
			cin  >> row >> column;
			row--;
			column--;
			while (row < 0 || row > 2)
			{
			cout << "Player 1: Enter your move in the format <row> <column>: ";
			cin  >> row >> column;
			row--;
			column--;	
			}
			while (twoarray[row][column] == 'X' || twoarray[row][column] == 'O')
			{
			cout << "Player 1: Enter your move in the format <row> <column>: ";
			cin  >> row >> column;
			row--;
			column--;
			}
			counter++;	
			twoarray[row][column] = 'X';
	//output tictactoe
	cout << twoarray[0][0] << " " << twoarray[0][1] << " " <<twoarray[0][2] << endl;
	cout << twoarray[1][0] << " " << twoarray[1][1] << " " <<twoarray[1][2] << endl;
	cout << twoarray[2][0] << " " << twoarray[2][1] << " " <<twoarray[2][2] << endl;
			
	//Player 1 Conditions
	//horizontal win
	if (twoarray[0][0] == 'X' && twoarray[0][1] == 'X' && twoarray[0][2] == 'X')
	{
	cout << "player 1 wins\n";
	end =1;
	}

	if (twoarray[1][0] == 'X' && twoarray[1][1] == 'X' && twoarray[1][2] == 'X')
	{
	cout << "player 1 wins\n";
	end =1;
	}

	if (twoarray[2][0] == 'X' && twoarray[2][1] == 'X' && twoarray[2][2] == 'X')
	{
	cout << "player 1 wins\n";
	end =1;
	}

	//vertical win
	if (twoarray[0][0] == 'X' && twoarray[1][0] == 'X' && twoarray[2][0] == 'X')
	{
	cout << "player 1 wins\n";
	end =1;
	}

	if (twoarray[0][1] == 'X' && twoarray[1][1] == 'X' && twoarray[2][1] == 'X')
	{
	cout << "player 1 wins\n";
	end =1;
	}

	if (twoarray[0][2] == 'X' && twoarray[1][2] == 'X' && twoarray[2][2] == 'X')
	{
	cout << "player 1 wins\n";
	end =1;
	}

	//diagonal win
	if (twoarray[0][0] == 'X' && twoarray[1][1] == 'X' && twoarray[2][2] == 'X')
	{
	cout << "player 1 wins\n";
	end =1;
	}

	if (twoarray[2][0] == 'X' && twoarray[1][1] == 'X' && twoarray[0][2] == 'X')
	{
	cout << "player 1 wins\n";
	end =1;
	}
			
			//Player 2
			if (end == 0)
			if (counter < 9)
			{
			
			cout << "Player 2: Enter your move in the format <row> <column>: ";
			cin  >> row >> column;
			row--;
			column--;
			while (row < 0 || row > 2)
			{
			cout << "Player 2: Enter your move in the format <row> <column>: ";
			cin  >> row >> column;
			row--;
			column--;	
			}
			while (twoarray[row][column] == 'X' || twoarray[row][column] == 'O')
			{
			cout << "Player 2: Enter your move in the format <row> <column>: ";
			cin  >> row >> column;
			row--;
			column--;
			}
			counter++;
			twoarray[row][column] = 'O';
	//output tictactoe
	cout << twoarray[0][0] << " " << twoarray[0][1] << " " <<twoarray[0][2] << endl;
	cout << twoarray[1][0] << " " << twoarray[1][1] << " " <<twoarray[1][2] << endl;
	cout << twoarray[2][0] << " " << twoarray[2][1] << " " <<twoarray[2][2] << endl;
			
			}
	//Player 2 Conditions
	//horizontal win
	if (twoarray[0][0] == 'O' && twoarray[0][1] == 'O' && twoarray[0][2] == 'O')
	{
	cout << "player 2 wins\n";
	end =1;
	}

	if (twoarray[1][0] == 'O' && twoarray[1][1] == 'O' && twoarray[1][2] == 'O')
	{
	cout << "player 2 wins\n";
	end =1;
	}

	if (twoarray[2][0] == 'O' && twoarray[2][1] == 'O' && twoarray[2][2] == 'O')
	{
	cout << "player 2 wins\n";
	end =1;
	}

	//vertical win
	if (twoarray[0][0] == 'O' && twoarray[1][0] == 'O' && twoarray[2][0] == 'O')
	{
	cout << "player 2 wins\n";
	end =1;
	}

	if (twoarray[0][1] == 'O' && twoarray[1][1] == 'O' && twoarray[2][1] == 'O')
	{
	cout << "player 2 wins\n";
	end =1;
	}

	if (twoarray[0][2] == 'O' && twoarray[1][2] == 'O' && twoarray[2][2] == 'O')
	{
	cout << "player 2 wins\n";
	end =1;
	}

	//diagonal win
	if (twoarray[0][0] == 'O' && twoarray[1][1] == 'O' && twoarray[2][2] == 'O')
	{
	cout << "player 2 wins\n";
	end =1;
	}

	if (twoarray[2][0] == 'O' && twoarray[1][1] == 'O' && twoarray[0][2] == 'O')
	{
	cout << "player 2 wins\n";
	end =1;
	}
	if (counter == 9 && end == 0) 
{
	cout << "Looks like a tie!\n";
}
	}
		}	
		
	

}
