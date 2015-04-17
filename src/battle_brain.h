#pragma once
#include "poke.h"
  
int apply_damage (Pokemon * defender, Damage damage);
Damage calculate_attack (Pokemon * attacker, Pokemon * defender, Move * move, int callback);