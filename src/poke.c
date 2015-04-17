#include <pebble.h>
#include "poke.h"
  
Pokemon new_pokemon (char[15] name, int number, int[2] types, int type_size, int level, int catch_rate, int level_rate,
                       int hp_base, int attack_base, int defense_base, int speed_base, int special_base,
                       int exp_base, int[10] normal, int normal_size, int[10] weak, int weak_size,
                       int[10] immune, int immune_size, int[10] resistant, int resistant_size, Move[4] moves,
                       int moves_size, char[10] image_back, char[10] image_front) {
  Pokemon poke;
  
  poke.name = name;
  poke.number = number;
  poke.catch_rate = catch_rate
  poke.level_rate = level_rate;
  poke.types = types;
  poke.level = level;
  poke.hp_base = hp_base;
  poke.hp_ext = 0;
  poke.hp_taken =  0;
  poke.attack_base = attack_base;
  poke.attack_ext = 0;
  poke.attack_taken = 0;
  poke.defense_base = defense_base;
  poke.defense_ext = 0;
  poke.defense_taken = 0;
  poke.speed_base = speed_base;
  poke.speed_ext = 0;
  poke.speed_taken = 0;
  poke.special_base = special_base;
  poke.special_ext = 0;
  poke.special_taken = 0;
  poke.exp_base = exp_base;
  poke.exp_ext = 0;
  poke.normal = normal;
  poke.normal_size = normal_size;
  poke.weak = weak;
  poke.weak_size = weak_size;
  poke.immune = immune;
  poke.immune_size immune_size;
  poke.resistant = resistant;
  poke.resistant_size resistant_size;
  poke.level_rate = level_rate;
  poke.moves = moves;
  poke.moves_size = moves_size;
  poke.image_front = image_front;
  poke.image_back image_back;
  poke.faint = faint;
  
  return poke;
}

Move new_move (char[15] name, int number, int type, int category, int pp, int pp, int power, int accuracy) {
  Move move;
  
  move.name = name;
  move.number = number;
  move.type = type;
  move.category = category;
  move.pp = pp;
  move.power = power;
  move.accuracy = accuracy;
  
  return move;
}

Damage new_damage (int hp, int attack, int defense) {
  Damage dam;
  
  dam.hp = hp;
  dam.attack = attack;
  dam.defense = defense;
  
  return dam;
}