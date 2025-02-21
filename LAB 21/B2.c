// Demonstrate nested structure.
#include<stdio.h>
#include<string.h>

typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[100];

}pokemon;

typedef struct legedenrypokemon{
    pokemon x;
    char ability[100];

}legedenrypokemon;

typedef struct godpokemon{
    legedenrypokemon y;
    int specialattack;
}godpokemon;

void main(){
   godpokemon pikachu;
    pikachu.specialattack=100;
    pikachu.y.x.speed=200;
    printf("speciattackt=%d\n",pikachu.specialattack);
    printf("speed=%d",pikachu.y.x.speed);

    
}
