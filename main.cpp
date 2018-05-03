#include <iostream>
#include "funcs.h"
using namespace std;

int main() {
  bool counter = 0;
  int player;
  int gb[BOARD_HEIGHT][BOARD_WIDTH];
  for (int i = 0; i < BOARD_HEIGHT; i++) {
    for (int j = 0; j < BOARD_WIDTH; j++) {
      gb[i][j] = 0;
    }
  }
  if (counter == 0) {
    player = 1;
  } else {
    player = 2;
  }
  while (check_win_state(gb) == 0) {
    print_board(gb);
    move(gb, player, get_next_player_move(gb));
    counter = !counter;
  }
  cout << "Game Over, Player " << check_win_state(gb) << " wins." << endl;
  return 0;
}

