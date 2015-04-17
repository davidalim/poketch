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
  
typedef struct {
  char[15] name;
  int number;
  int catch_rate
  int level_rate;
  int[2] types;
  int level;
  int hp_base;
  int hp_ext;
  int hp_taken;
  int attack_base;
  int attack_ext;
  int attack_taken;
  int defense_base;
  int defense_ext;
  int defense_taken;
  int speed_base;
  int speed_ext;
  int speed_taken;
  int special_base;
  int special_ext;
  int special_taken;
  int exp_base;
  int exp_ext;
  int[10] normal;
  int normal_size;
  int[10] weak;
  int weak_size;
  int[10] immune;
  int immune_size;
  int[10] resistant;
  int resistant_size;
  int level_rate;
  Move[4] moves;
  int moves_size;
  char[10] image_front;
  char[10] image_back;
  bool faint;
} Pokemon;

Pokemon new_pokemon (char[15] name, int number, int[2] types, int type_size, int level, int catch_rate, int level_rate,
                       int hp_base, int attack_base, int defense_base, int speed_base, int special_base,
                       int exp_base, int[10] normal, int normal_size, int[10] weak, int weak_size,
                       int[10] immune, int immune_size, int[10] resistant, int resistant_size, Move[4] moves,
                       int moves_size, char[10] image_back, char[10] image_front);

typedef struct {
  char[15] name;
  int number;
  int type;
  int category;
  int pp;
  int power;
  int accuracy;
} Move;

Move new_move (char[15] name, int number, int type, int category, int pp, int pp, int power, int accuracy);

typedef struct {
  int hp;
  int attack;
  int defense;
} Damage;

Damage new_damage (int hp, int attack, int defense);