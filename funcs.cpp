int check_vertical_win(int gb, int columns
#include <iostream>
#include "funcs.h"
using namespace std;

void print_board(const int gb[BOARD_HEIGHT][BOARD_WIDTH]) {
  for (int i = BOARD_HEIGHT - 1; i >= 0; i--) {
    for (int j = 0; j < BOARD_WIDTH; j++) {
      std::cout << gb[i][j] << ' ';
    }
    std::cout << '\n';
  }
}
int choose_next_move(const int gb[BOARD_HEIGHT][BOARD_WIDTH], int p) {
  return 0;
}
int get_next_player_move(const int gb[BOARD_HEIGHT][BOARD_WIDTH]) {
  int column;

  std::cout << "Which column do you want to place your piece?" << '\n';
  std::cin >> column;

  while (column < 1 || column > BOARD_WIDTH || gb[0][column - 1] != 0) {
    std::cout << "Invalid column, choose again." << '\n';
    std::cin >> column;
  }
  return column; // Human readable column, not 0 indexed.
}
void move(int gb[BOARD_HEIGHT][BOARD_WIDTH], int player, int column) {
  for (int i = BOARD_HEIGHT - 1; i >= 0; i--) {
    if (gb[i][column - 1] == 0) {
      gb[i][column - 1] = player;
      return;
    }
  }
}
int check_win_state(const int gb[BOARD_HEIGHT][BOARD_WIDTH]) { return 0; }
