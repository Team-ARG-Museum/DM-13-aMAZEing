#ifndef DEMO_H
#define DEMO_H

#include "globals.h"
#include "mapdata.h"

byte getTileID(byte mapLevel, byte block, byte tilePosition)
{
  return pgm_read_byte(&map_blocks[pgm_read_byte(&map_layout[mapLevel][block])][tilePosition]);
}

void drawArray()
{
  byte blockColumn = 0;
  byte blockRow = 0;
  while ((blockColumn + (blockRow * 4)) < 16)
  {
    byte column = 0;
    byte row = 0;
    while ((column + (row * 8)) < 64)
    {
      sprites.drawSelfMasked
      (
        (blockColumn * 64) + (column * 8) - cam_x,
        (blockRow * 64) + (row * 8) - cam_y,
        tileSheet,
        getTileID(level, (blockRow * 4) + blockColumn, (row * 8) + column)
      );
      column++;
      if (column > (7))
      {
        column = 0;
        row++;
      }
    }
    blockColumn++;
    if (blockColumn > (3))
    {
      blockColumn = 0;
      blockRow++;
    }
  }
}


#endif
