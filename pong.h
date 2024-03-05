#ifndef PONG
#define PONG

#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define LENGTH 80
#define WIDTH 25
#define RACKET_POSITION 13
#define BALL_POSITION_X (LENGTH / 2)
#define BALL_POSITION_Y (WIDTH / 2 + WIDTH % 2)

void init_field(int score_1, int score_2, int ball_x, int ball_y, int racket_1,
                int racket_2);
int move_racket_1(char temp, int racket_1);
int move_racket_2(char temp, int racket_2);
int random_vector();
void screen_preparation();
void score_printer(int score_1);

#endif