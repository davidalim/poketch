#include <pebble.h>
#include "pokedex.h"

Move movelist[NUM_MOVES];   //NEED THESE?
Pokemon pokelist[NUM_POKES];

Pokemon get_poke(int num, Pokemon * poke) {
  //if(num > NUM_POKES)
  //  return -1;
  
  return pokelist[num - 1];
}

Move get_move(int num) {
  //if(num > NUM_MOVES)
  //  return -1;
  
  return movelist[num - 1];
}
  
movelist[0] = new_move("Pound",1,NORMAL,PHYSICAL,35,40,100);
movelist[1] = new_move("Mega Punch",5,NORMAL,PHYSICAL,20,80,85);
movelist[2] = new_move("Scratch",10,NORMAL,PHYSICAL,35,40,100);
movelist[3] = new_move("Tackle",33,NORMAL,PHYSICAL,35,50,100);

pokelist[0] = new_pokemon("Pikachu",     // name
                          25,            // number
                          {ELECTRIC},    // types
                          1,             // type_size
                          5,             // level
                          190,           // catch_rate
                          0,             // level_rate
                          35,            // hp_base
                          55,            // attack_base
                          30,            // defense_base
                          90,            // speed_base
                          50,            // special_base
                          0,             // exp_base
                          {NORMAL},      // normal
                          1,             // normal_size
                          {NORMAL},      // weak
                          1,             // weak_size
                          {NORMAL},      // immune
                          1,             // immune_size
                          {NORMAL},      // resistant
                          1,             // resistant_size
                          {              // moves
                            get_move(1),  
                            get_move(2),
                            get_move(3),
                            get_move(4)
                          },
                          4,             // moves_size
                          "25_back",     // image_back
                          "25_front"     // image_front
                         );          

pokelist[1] = new_pokemon("Bulbasaur",   // name
                          1,             // number
                          {GRASS},       // types
                          1,             // type_size
                          5,             // level
                          190,           // catch_rate
                          0,             // level_rate
                          35,            // hp_base
                          49,            // attack_base
                          49,            // defense_base
                          45,            // speed_base
                          60,            // special_base
                          0,             // exp_base
                          {NORMAL},      // normal
                          1,             // normal_size
                          {NORMAL},      // weak
                          1,             // weak_size
                          {NORMAL},      // immune
                          1,             // immune_size
                          {NORMAL},      // resistant
                          1,             // resistant_size
                          {              // moves
                            get_move(1),  
                            get_move(2),
                            get_move(3),
                            get_move(4)
                          }, 
                          4,             // moves_size
                          "1_back",      // image_back
                          "1_front"      // image_front
                         ); 

pokelist[2] = new_pokemon("Kangaskhan",  // name
                          115,           // number
                          {NORMAL},      // types
                          1,             // type_size
                          5,             // level
                          190,           // catch_rate
                          0,             // level_rate
                          105,           // hp_base
                          95,            // attack_base
                          80,            // defense_base
                          80,            // speed_base
                          40,            // special_base
                          0,             // exp_base
                          {NORMAL},      // normal
                          1,             // normal_size
                          {NORMAL},      // weak
                          1,             // weak_size
                          {NORMAL},      // immune
                          1,             // immune_size
                          {NORMAL},      // resistant
                          1,             // resistant_size
                          {              // moves
                            get_move(1),  
                            get_move(2),
                            get_move(3),
                            get_move(4)
                          }, 
                          4,             // moves_size
                          "115_back",    // image_back
                          "115_front"    // image_front
                         );

pokelist[3] = new_pokemon("Lapras",      // name
                          131,           // number
                          {WATER},       // types
                          1,             // type_size
                          5,             // level
                          45,            // catch_rate
                          0,             // level_rate
                          135,           // hp_base
                          85,            // attack_base
                          80,            // defense_base
                          60,            // speed_base
                          95,            // special_base
                          0,             // exp_base
                          {NORMAL},      // normal
                          1,             // normal_size
                          {NORMAL},      // weak
                          1,             // weak_size
                          {NORMAL},      // immune
                          1,             // immune_size
                          {NORMAL},      // resistant
                          1,             // resistant_size
                          {              // moves
                            get_move(1),  
                            get_move(2),
                            get_move(3),
                            get_move(4)
                          }, 
                          4,             // moves_size
                          "131_back",    // image_back
                          "131_front"    // image_front
                         );