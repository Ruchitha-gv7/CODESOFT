#include<iostream>
using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};    
void display_board(){
	cout<<"...... TIC TAC TOE GAME......."<<endl;
	cout<< " "<<endl;
	cout<<"player1(x)"<<endl;
	cout<<"player2(0)"<<endl;
	cout<< " "<<endl;
	
	cout<<"\t     |     |     \n";
	cout<<"\t  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  \n";
	cout<<"\t_____|_____|_____\n";
	cout<<"\t     |     |     \n";
    cout<<"\t  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  \n";
	cout<<"\t_____|_____|_____\n";
	cout<<"\t     |     |     \n";
	cout<<"\t  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  \n";
	cout<<"\t     |     |     \n";
	
}

void player_turn(){
	cout<< " "<<endl;
	int choice;
	cout<<"player1 (X) turn:";
	    cin>>choice;
	switch(choice){
		case 1:
			board[0][0]='X';
			break;
		case 2:
			board[0][1]='X';
			break;
	    case 3:
			board[0][2]='X';
			break;
		default:
			cout<<"invalid choice";
			break;
}
cout<<"player2 (0) turn:";
}
main(){

	display_board();
	player_turn();
	display_board();
	
	
}
	
