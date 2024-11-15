#include <iostream>

using namespace std;


void initialize_board(char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}
	}
}

void print_board(char board[3][3]) {
	cout << "--------------" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "| ";
		for (int j = 0; j < 3; j++) {
			cout << board[i][j] << " | ";
		}
		cout << endl;
		cout << "--------------" << endl;
	}
}

char check_winner(char board[3][3]) {
	//check rows and cols
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}

		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}

	//check diagonal
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
		return board[0][0];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
		return board[0][2];
	}

	return ' ';
}

bool is_draw(char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (board[i][j] != ' ') {
				return false;
			}
		}
	}

	return true;
}

void play_game() {
	char board[3][3];
	initialize_board(board);

	char current_player = 'X';
	int row, col;

	while (true) {
		print_board(board);

		cout << "Player " << current_player << " give your coordinates: ";
		cin >> row >> col;

		if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
			cout << "Invalid move." << endl;;
			continue;
		}

		board[row][col] = current_player;

		// check winner?
		char winner = check_winner(board);
		if (winner != ' ') {
			cout << "Player " << winner << " wins!" << endl;
			break;
		}

		// is draw?
		if (is_draw(board)) {
			cout << "It's a draw!" << endl;
			break;
		}

		current_player = (current_player == 'X') ? 'O' : 'X';
	}
}

int main() {
	// Tic-Tac-Toe

	play_game();

	
	return 0;
}
