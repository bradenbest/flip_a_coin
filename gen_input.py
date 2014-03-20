#!/usr/bin/python3
# The idea is to run this script and pipe it into flip-a-coin, so the game'll play itself

import random

NUMBER_OF_GAMES = 1000

i = NUMBER_OF_GAMES - 1

while i > 0:
  i -= 1
  r = int(random.random() * 10) % 2
  if not r: 
    print("hy", end='')
  else: 
    print("ty", end='')
print("tn")

print("HOLY OBNOCIOUS OUT OF PLACE LINE BATMAN")
