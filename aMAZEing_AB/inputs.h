#ifndef INPUTS_H
#define INPUTS_H

#include "globals.h"

void checkInputs()
{
  if (arduboy.pressed(DOWN_BUTTON) && (cam_y < 192))
  {
    cam_y++;
  }
  else if (arduboy.pressed(UP_BUTTON) && (cam_y > 0))
  {
    cam_y--;
  }
  else if (arduboy.pressed(LEFT_BUTTON) && (cam_x > 0))
  {
    cam_x--;
  }
  else if (arduboy.pressed(RIGHT_BUTTON) && (cam_x < 128))
  {
    cam_x++;
  }
}

#endif
