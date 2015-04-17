#include <pebble.h>
  
typedef struct {
  char[15] name;
  int number;
  int catch_rate
  int level_rate;
  int[2] types;
  int level;
  int hp_base;
  int hp_ext = 0;
  int hp_taken = 0;
  int attack_base;
  int attack_ext = 0;
  int attack_taken = 0;
  int defense_base;
  int defense_ext = 0;
  int defense_taken = 0;
  int speed_base;
  int speed_ext = 0;
  int speed_taken = 0;
  int special_base;
  int special_ext = 0;
  int special_taken = 0;
  int exp_base;
  int exp_ext = 0;
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
  bool faint = false;
} Pokemon;

Pokemon create_pokemon (char[15] name, int number, int catch_rate, int level_rate, int[2] types, int level,
                       int hp_base, int attack_base, int defense_base, int speed_base, int special_base,
                       int exp_base, int[10] normal, int normal_size, int[10] weak, int weak_size,
                       int[10] immune, int immune_size, int[10] resistant, int resistant_size, int level_rate,
                       Move[4] moves, int moves_size);

typedef struct {
  char[15] name;
  int number;
  int type;
  int category;
  int pp;
  int power;
  int accuracy;
} Move;

Move create_move (char[15] name, int number, int type, int category, int pp, int pp, int power, int accuracy);