#pragma once
#include "poke.h"
#include "pokemon.h"
  
#define NUM_POKES 4
#define NUM_MOVES 4
  
typedef struct {
  Pokemon pokes[NUM_POKES];
  Move moves[NUM_MOVES];
} Pokedex;

Pokedex init_pokedex();