#include <pebble.h>
#include <poke.h>
#include "pokedex.h"
  
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

Move movelist[35];
Pokemon pokelist[4];
  
movelist[1] = new_move("Pound",1,NORMAL,PHYSICAL,35,40,100);
movelist[5] = new_move("Mega Punch",5,NORMAL,PHYSICAL,20,80,85);
movelist[10] = new_move("Scratch",10,NORMAL,PHYSICAL,35,40,100);
movelist[33] = new_move("Tackle",33,NORMAL,PHYSICAL,35,50,100);

pokelist[0] = new_pokemon("Pikachu",25,{ELECTRIC},5,190,35,55,30,90,50,0,{1},{1},{1});

module.exports.poke25 = new p.Pokemon({
  name: "Pikachu", 
  number: 25,
  types: [1],
  level: 5,
  catch_rate: 190,
  hp_base: 35,
  attack_base: 55,
  defense_base: 30,
  speed_base: 90,
  special_base: 50,
  exp_base: 0,
  normal:[], 
  weak:[], 
  immune:[], 
  resistant:[],
  level_rate:0,
  image_back:"images/25_back.png",
  image_front:"images/25_front.png",
  moves:[m.move1, m.move5, m.move10, m.move33]
  /*move1:m.move1,
  move2:m.move5,
  move3:m.move10,
  move4:m.move33*/
});

module.exports.poke1 = new p.Pokemon({
  name: "Bulbasaur", 
  number: 1,
  types: [1],
  level: 5,
  catch_rate: 190,
  hp_base: 45,
  attack_base: 49,
  defense_base: 49,
  speed_base: 45,
  special_base: 60,
  exp_base: 0,
  normal:[], 
  weak:[], 
  immune:[], 
  resistant:[],
  level_rate:0,
  image_back:"images/1_back.png",
  image_front:"images/1_front.png",
  moves:[m.move1, m.move5, m.move10, m.move33]
  /*move1:m.move1,
  move2:m.move5,
  move3:m.move10,
  move4:m.move33*/
});

module.exports.poke115 = new p.Pokemon({
  name: "Kangaskhan", 
  number: 115,
  types: [1],
  level: 5,
  catch_rate: 190,
  hp_base: 105,
  attack_base: 95,
  defense_base: 80,
  speed_base: 80,
  special_base: 40,
  exp_base: 0,
  normal:[], 
  weak:[], 
  immune:[], 
  resistant:[],
  level_rate:0,
  image_back:"images/115_back.png",
  image_front:"images/115_front.png",
  moves:[m.move1, m.move5, m.move10, m.move33]
  /*move1:m.move1,
  move2:m.move5,
  move3:m.move10,
  move4:m.move33*/
});

module.exports.poke131 = new p.Pokemon({
  name: "Lapras", 
  number: 131,
  types: [1],
  level: 5,
  catch_rate: 45,
  hp_base: 135,
  attack_base: 85,
  defense_base: 80,
  speed_base: 60,
  special_base: 95,
  exp_base: 0,
  normal:[], 
  weak:[], 
  immune:[], 
  resistant:[],
  level_rate:0,
  image_back:"images/131_back.png",
  image_front:"images/131_front.png",
  moves:[m.move1, m.move5, m.move10, m.move33]
  /*move1:m.move1,
  move2:m.move5,
  move3:m.move10,
  move4:m.move33*/
});