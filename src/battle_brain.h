#pragma once
#include "poke.h"
  
uint8_t apply_damage (Pokemon * defender, Damage damage);
Damage calculate_attack (Pokemon * attacker, Pokemon * defender, Move * move, uint8_t callback);