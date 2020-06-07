/*
  DEMO: aMAZEing

  MADE by TEAM a.r.g. : http://www.team-arg.org/demos.html

  2017 - JO3RI

  License: MIT : https://opensource.org/licenses/MIT

*/

//determine the demo
#define DEMO_ID 13

#include "globals.h"
#include "inputs.h"
#include "demo.h"


void setup() {
  arduboy.begin();
  arduboy.clear();
  sprites.drawSelfMasked(34, 4, T_arg, 0);
  arduboy.display();
  delay(1500);
  arduboy.clear();
  sprites.drawSelfMasked(4, 22, amazeing, 0);
  arduboy.display();
  delay(1500);
}

void loop() {
  if (!(arduboy.nextFrame())) return;
  arduboy.pollButtons();
  arduboy.clear();
  checkInputs();
  drawArray();
  arduboy.display();
}
