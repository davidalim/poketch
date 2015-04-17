#include <pebble.h>
#include <math.h>
#include "battle_brain.h"

  
int apply_damage (Pokemon * defender, Damage damage){
  defender -> hp_taken += damage.hp;
  defender -> attack_taken += damage.attack;
  defender -> defense_taken += damage.defense;
  
  return 0;
}

Damage calculate_attack (Pokemon * attacker, Pokemon * defender, Move * move, int callback) {
  //TODO: throws when PP is no bueno

  int hp_given = 0;
  int attack_given = 0;
  int defense_given = 0;
  //int hp_self = 0;
  //int attack_self = 0;
  //int defense_self = 0;

  float a = attacker -> level;
  float b = (attacker -> attack_base) + (attacker -> attack_ext) - (attacker -> attack_taken);
  float c = move.power;
  float d = (defender -> defense_base) + (defender -> defense_ext) - (defender -> defense_taken);
  //int x = STAB
  float x = 1;
  float y = 1;
  float z = (rand() % 38) + 217;

  int hp_given = (int)((((((((2*a/5 + 2)*b*c)/d)/50 + 2)*x)*y)*z)/255);

  move -> pp -= 1;;
  
  //apply_damage(attacker, new_damage(hp_taken, attack_taken, defense_taken));
  apply_damage(defender, new_damage(hp_taken, attack_taken, defense_taken));
  
  return new_damage(hp_given, attack_given, defense_given);
}