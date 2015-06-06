#include <pebble.h>
#include "pokebelt.h"
#include "poke.h"
#include "pokedex.h"

#define POKE_KEY(n) 1111(n)

#define MAX_BELT 6;
// TODO multiple pokemon, based on index


Belt belt_init () {
  init_pokedex();
  uint8_t i,size = 0;
  Belt belt;
  Pokemon * pokes[MAX_BELT];
  
  for(i = 0; i < MAX_BELT; i++){
    persist_read_data(POKE_KEY(i), pokes[i], sizeof(Pokemon));
  }
  
  for(i = 0; i < MAX_BELT; i++) {
    if (pokes[i]) {              // correcting local data
      pokes[size++] = pokes[i];
      
      if (i > size) {   // correcting persistent data (should not really ever happen)
        pokes[i] = 0;
        persist_delete(POKE_KEY(i));
        persist_write_data(POKE_KEY(size-1), pokes[size-1], sizeof(Pokemon));
      } 
    }
  }  

  if (size == 0) {
    pokes[size++] = get_poke(1);
    var poklist = [];
    index = 0;
    poklist[index] = pokemon;
    belt = {list:poklist, size:1};
    localStorage.setItem(BASE_KEY, JSON.stringify(belt));
    return belt;
  }
  console.log("BELT OKAY");
  belt = JSON.parse(belt);
  var out = belt.list[index];
  return belt;
}
  
    this.get_starter = function() {
        this.get(0);
    };

    this.save = function(index, pokemon) {
        console.log("vvvvvvvvvv SAVE vvvvvvvvvv");
        var belt = localStorage.getItem(BASE_KEY);
        if (belt === null) {
          console.log("BELT EMPTY");
          var poklist = [];
          poklist[0] = pokemon;
          belt = {list:poklist, size:1};
          localStorage.setItem(BASE_KEY, JSON.stringify(belt));
          console.log("^^^^^^^^^^ SAVE ^^^^^^^^^");
          return pokemon;
        }
        belt = JSON.parse(belt);
        if(index >= 6){
          console.log("BELT FULL");
          console.log("^^^^^^^^^^ SAVE ^^^^^^^^^");
          return null;
        }
      
        console.log("BELT OKAY");
        var list = belt.list;
        list[index] = pokemon;
        localStorage.setItem(BASE_KEY, JSON.stringify(belt));
        console.log("^^^^^^^^^^ SAVE ^^^^^^^^^");
        return pokemon;
    };
  
    this.add = function(pokemon) {
        console.log("vvvvvvvvvv ADD vvvvvvvvvv");
        var belt = localStorage.getItem(BASE_KEY);
        if (belt === null) { 
          console.log("BELT EMPTY");
          var poklist = [];
          poklist[0] = pokemon;
          belt = {list:poklist, size:1};
          localStorage.setItem(BASE_KEY, JSON.stringify(belt));
          console.log("^^^^^^^^^^ ADD ^^^^^^^^^");
          return pokemon;
        }
        belt = JSON.parse(belt);
        if(belt.size >= MAX_BELT){
          console.log("BELT FULL");
          console.log("^^^^^^^^^^ ADD ^^^^^^^^^");
          return null;
        }
        console.log("BELT OKAY");
        for(var key in belt){console.log(key + ": " + belt[key]);}
        var list = belt.list;
        console.log("FIRST IN BELT" + list[0]);
        list[belt.size] = pokemon;
        belt.size++;
        localStorage.setItem(BASE_KEY, JSON.stringify(belt));
        console.log("^^^^^^^^^^ ADD ^^^^^^^^^");
        return pokemon;
    };
  
    this.remove = function(index) {
        console.log("vvvvvvvvvv REMOVE vvvvvvvvvv");
        var belt = localStorage.getItem(BASE_KEY);
        if(belt === null){
          console.log("BELT EMPTY");
          console.log("^^^^^^^^^^ REMOVE ^^^^^^^^^");
          return null;
        }
      
        belt = JSON.parse(belt);
      
        if (belt.size <= 1 ){
            console.log("CANT REMOVE LAST POKEMON");
            console.log("^^^^^^^^^^ REMOVE ^^^^^^^^^");
            return null;
        }
      
        if (belt.index >= MAX_BELT ){
            console.log("INDEX OUT OF BOUNDS");
            console.log("^^^^^^^^^^ REMOVE ^^^^^^^^^");
            return null;
        }
      
        console.log("BELT OKAY");
      
        for(var i = index; i < belt.size; i++){
              belt.list[i] = belt.list[i+1];
        }
        belt.list[i] = null; //just in case
        localStorage.setItem(BASE_KEY, JSON.stringify(belt));
        console.log("^^^^^^^^^^ REMOVE ^^^^^^^^^");
        return index;
    };

    this.is_empty = function() {
        console.log("vvvvvvvvvv IS_EMPTY vvvvvvvvvv");
        var belt = localStorage.getItem(BASE_KEY);
        //console.log("IS_EMPTY_2");
        var out = (belt === null || JSON.parse(belt.size) === 0);
        console.log("^^^^^^^^^^ IS_EMPTY ^^^^^^^^^");
        return out;
    };

    /*swap : function(index,pokemon) {
        var belt = localStorage.get(BASE_KEY);
        if (belt)
        var poklist = belt.list;
        var pok = poklist[index];
        localStorage.set(BASE_KEY, JSON.stringify(pok));
    }*/
}