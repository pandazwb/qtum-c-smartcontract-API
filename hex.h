#ifndef _HEX_H
#define _HEX_H

#include "stdint.h"

int decodeHexString(char *inhex, uint8_t *out, size_t len);
void printHex(uint8_t* bytes, size_t buflen);

#endif
