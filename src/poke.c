#include <pebble.h>
#include <string.h>
#include "poke.h"
  
Pokemon new_pokemon (char name[16], uint8_t number, uint8_t types[2], uint8_t type_size, uint8_t level, uint8_t catch_rate, uint8_t level_rate,
                       uint8_t hp_base, uint8_t attack_base, uint8_t defense_base, uint8_t speed_base, uint8_t special_base,
                       uint8_t exp_base, uint8_t normal[8], uint8_t normal_size, uint8_t weak[8], uint8_t weak_size,
                       uint8_t immune[8], uint8_t immune_size, uint8_t resistant[8], uint8_t resistant_size, Move moves[4],
                       uint8_t moves_size, char image_back[8], char image_front[8], bool faint) {
  Pokemon poke;
  
  strcpy(poke.name, name);
  poke.number = number;
  poke.catch_rate = catch_rate;
  poke.level_rate = level_rate;
  poke.types[0] = types[0];
  poke.types[1] = types[1];
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
  memcpy(&poke.normal, &normal, sizeof(uint8_t[8]));
  poke.normal_size = normal_size;
  memcpy(&poke.weak, &weak, sizeof(uint8_t[8]));
  poke.weak_size = weak_size;
  memcpy(&poke.immune, &immune, sizeof(uint8_t[8]));
  poke.immune_size = immune_size;
  memcpy(&poke.resistant, &resistant, sizeof(uint8_t[8]));
  poke.resistant_size = resistant_size;
  poke.level_rate = level_rate;
  memcpy(&poke.moves, &moves, sizeof(Move[4]));
  poke.moves_size = moves_size;
  strcpy(poke.image_front, image_front);
  strcpy(poke.image_back, image_back);
  poke.faint = faint;
  
  return poke;
}

Move new_move (char name[16], uint8_t number, uint8_t type, uint8_t category, uint8_t pp, uint8_t power, uint8_t accuracy) {
  Move move;
  
  strcpy(move.name, name);
  move.number = number;
  move.type = type;
  move.category = category;
  move.pp = pp;
  move.power = power;
  move.accuracy = accuracy;
  
  return move;
}

Damage new_damage (uint8_t hp, uint8_t attack, uint8_t defense) {
  Damage dam;
  
  dam.hp = hp;
  dam.attack = attack;
  dam.defense = defense;
  
  return dam;
}