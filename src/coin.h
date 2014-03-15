typedef struct ratio{
  int left : 32;
  int right : 32;
  int percent : 32;
} ratio;

char get_coin(int coin);
void get_ratio(ratio *r, int wins, int losses);
