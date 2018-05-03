#pragma once
#include <iostream>
using namespace std;

const int BOARD_WIDTH = 7;
const int BOARD_HEIGHT = 6;

void print_board(const int gb[BOARD_HEIGHT][BOARD_WIDTH]);
int choose_next_move(const int gb[BOARD_HEIGHT][BOARD_WIDTH], int p);
int get_next_player_move(const int gb[BOARD_HEIGHT][BOARD_WIDTH]);
void move(int gb[BOARD_HEIGHT][BOARD_WIDTH], int player, int column);
int check_win_state(const int gb[BOARD_HEIGHT][BOARD_WIDTH]);
