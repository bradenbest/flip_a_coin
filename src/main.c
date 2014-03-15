#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "coin.h"

int main(void){
  srand(time(0));
  int wins = 0;
  int losses = 0;
  char choice, coin;
  ratio r;
  while(1){
    choice = 0;
    coin = get_coin(rand() % 2);
    
    while(choice != 'h' && choice != 't'){
      printf("Call it, heads or tails? [h/t] ");
      scanf(" %c",&choice);
    }
    if(choice == coin){
      printf("You win!\n");
      wins ++;
    }else{
      printf("You lose.\n");
      losses ++;
    }
    printf("Wins:   %i\nLosses: %i\n",wins,losses);
    printf("Play again? [y/n] ");
    scanf(" %c",&choice);
    if(choice != 'y'){
      break;
    }
  }
  get_ratio(&r, wins, losses);
  printf("You won %i out of %i total games, giving you a winning ratio of %i:%i.\nYour win rate is %i%%\n", wins, wins+losses, r.left, r.right, r.percent);
}
