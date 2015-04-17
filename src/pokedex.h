#pragma once
#include "poke.h"

#define NUM_POKES 4
#define NUM_MOVES 4

Move movelist[NUM_MOVES];   //NEED THESE?
Pokemon pokelist[NUM_POKES];

Pokemon get_poke(int num);
Move get_move(int num);