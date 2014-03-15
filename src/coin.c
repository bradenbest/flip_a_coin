#include <stdlib.h>

#include "coin.h"

char get_coin(int coin){
  return coin ? 'h' : 't';
}

static int percent(int wins, int losses){
  double f_wins = (double)wins;
  double f_losses = (double)losses;
  if(!losses){
    return 100;
  }
  else{
    return (int)( f_wins / ( f_wins + f_losses ) * 100 );
  }
}

static int gcd(int a, int b){
  if (!a){
    return b;
  }
  return gcd(b % a, a);
}

void get_ratio(ratio *r,int wins, int losses){
  int divisor = gcd(wins,losses);
  r->left = wins/divisor;
  r->right = losses/divisor;
  r->percent = percent(wins,losses);
}
