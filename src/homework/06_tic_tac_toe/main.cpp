#include "tic_tac_toe.h"
#include <iostream>

int main() {
    std::string first_player;
    int position;
    char play_again;

    do {
        TicTacToe game;

        std::cout << "Enter first player (X or O): ";
        std::cin >> first_player;

        while (first_player != "X" && first_player != "O") {
            std::cout << "Invalid input. Enter X or O: ";
            std::cin >> first_player;
        }

        game.start_game(first_player);

        while (!game.game_over()) {
            game.display_board();
            std::cout << "Player " << game.get_player() << ", enter position (1-9): ";
            std::cin >> position;

            while (position < 1 || position > 9) {
                std::cout << "Invalid position. Try again: ";
                std::cin >> position;
            }

            game.mark_board(position);
        }

        game.display_board();
        std::cout << "Game over! The board is full.\n";

        std::cout << "Play again? (y/n): ";
        std::cin >> play_again;

    } while (play_again == 'y' || play_again == 'Y');

    return 0;
}
