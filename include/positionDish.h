/*
  Dish Positioner Header
  USB to Serial
  This code was produced as part of the UMass Lowell
  SPACEHAUC project. It is open for use/modificaton by anyone
  for any purpose.
*/

#ifndef POSITIONDISH_H
#define POSITIONDISH_H

#define HEX_P         0x50
#define HEX_A         0x41
#define HEX_B         0x42
#define HEX_CR        0x0D
#define HEX_SPACE     0x20

// Initialize communcation with the positioner
// Returns the file/device stream
//int initPositioner();

// Current antenna position request
//int P(int stream);

// Change antenna elevation
int PA(int degrees);

// Change antenna azimuth
int PB(int degrees);

char to_Hex(int integer);

#endif
