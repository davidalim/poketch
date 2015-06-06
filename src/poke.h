#include <pebble.h>
  
#define PSYCHIC 1;
#define NORMAL 1;
#define FIGHTING 1;
#define GRASS 1;
#define DRAGON 1;
#define WATER 1;
#define ICE 1;
#define FIRE 1;
#define ELECTRIC 1;

#define PHYSICAL 1;
#define STATUS 1;
#define SPECIAL 1;

typedef struct { // TOTAL 24 bytes
  char name[18];
  uint8_t number;
  uint8_t type;
  uint8_t category;
  uint8_t pp;
  uint8_t power;
  uint8_t accuracy;
} Move;


typedef struct {          // TOTAL 188 bytes (+1)
  Move moves[4];          // 96
  char name[16];          // 64
  uint8_t normal[8];
  uint8_t weak[8];
  uint8_t immune[8];
  uint8_t resistant[8];
  char image_front[8];
  char image_back[8];
  uint8_t types[2];       // 28
  uint8_t number;
  uint8_t catch_rate;
  uint8_t level_rate;
  uint8_t level;
  uint8_t hp_base;
  uint8_t hp_ext;
  uint8_t hp_taken;
  uint8_t attack_base;
  uint8_t attack_ext;
  uint8_t attack_taken;
  uint8_t defense_base;
  uint8_t defense_ext;
  uint8_t defense_taken;
  uint8_t speed_base;
  uint8_t speed_ext;
  uint8_t speed_taken;
  uint8_t special_base;
  uint8_t special_ext;
  uint8_t special_taken;
  uint8_t exp_base;
  uint8_t exp_ext;
  uint8_t normal_size;
  uint8_t weak_size;
  uint8_t immune_size;
  uint8_t resistant_size;
  uint8_t moves_size;
  bool faint;
} Pokemon;

Pokemon new_pokemon (char name[16], uint8_t number, uint8_t types[2], uint8_t type_size, uint8_t level, uint8_t catch_rate, uint8_t level_rate,
                       uint8_t hp_base, uint8_t attack_base, uint8_t defense_base, uint8_t speed_base, uint8_t special_base,
                       uint8_t exp_base, uint8_t normal[8], uint8_t normal_size, uint8_t weak[8], uint8_t weak_size,
                       uint8_t immune[8], uint8_t immune_size, uint8_t resistant[8], uint8_t resistant_size, Move moves[4],
                       uint8_t moves_size, char image_back[8], char image_front[8], bool faint);

Move new_move (char name[16], uint8_t number, uint8_t type, uint8_t category, uint8_t pp, uint8_t power, uint8_t accuracy);

typedef struct {
  uint8_t hp;
  uint8_t attack;
  uint8_t defense;
} Damage;

Damage new_damage (uint8_t hp, uint8_t attack, uint8_t defense);