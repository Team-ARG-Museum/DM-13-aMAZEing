#ifndef GLOBALS_H
#define GLOBALS_H

#include <Arduino.h>
#include <Arduboy2.h>
#include "bitmaps.h"

#define MAP_HEIGHT_IN_TILES             16
#define MAP_WIDTH_IN_TILES              16
#define SCREEN_HEIGHT_IN_TILES          8
#define TILE_SIZE                       8

Arduboy2Base arduboy;
Sprites sprites;

byte globalCounter = 0;
byte cam_y = 0;
byte cam_x = 0;
byte level = 0;

#endif
