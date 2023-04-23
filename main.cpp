# include <iostream>
# include <thread>

#include "TicTacToe_Game.h"
#include "Snake_Game.h"

int main() {

    cout << " ===========================================================================\n";
	cout << " ||                                                                       ||\n";
	cout << " ||                 *TICTACTOE  /  SNAKE GAME*                            ||\n";
	cout << " ||                                                                       ||\n";
	cout << " ||                                                                       ||\n";
	cout << " ||                                                                       ||\n";
	cout << " ||                              *Menu*                                   ||\n";
	cout << " ||									  ||\n";
	cout << " ||                         -> 1. Play TicTacToe                          ||\n";
	cout << " ||                         -> 2. Play Snake Game                         ||\n";
	cout << " ||                         -> 3. Exit                                    ||\n";
	cout << " ||				                                          ||\n";
	cout << " ||                                                                       ||\n";
	cout << " ===========================================================================\n";
	
	/**
	* Add code to this file to allow the user to play Tic-tac-toe or the Snake Game
	* The user may play either game by pressing 1 or 2
	**/
	int option;

	cin >> option;

	switch(option)
	{
        case 1:
        //code that was added for TicTacToe Game
        if(option ==1) {
          TicTacToe_Game games;
            games.playGame();
            }else{
            break;
            }

        case 2:
          //code that was added for Snake Game
            if(option ==2) {
            SnakeGame lizard;
              lizard.StartGame();
            }else{
            break;
            }
       
        default:
            cout << "Thanks for Playing!!!" <<endl;
            break;
	}




	return 0;
}
