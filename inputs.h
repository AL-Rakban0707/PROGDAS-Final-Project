#ifndef INPUT_H
#define INPUT_H

#include "types.h"

/*
 input parameter air dari user, lalu dimasukkan ke pointer r
 wqi dan alert tidak dimasukkan ke sini
 */
void inputReading(WaterReading *r);

/*
 fungsi continue jika user ingin melakukan reading lagi
 */
int askContinue(void);

/*
 fungsi berapa banyak jumlah reading yang ingin dilakukan oleh user
 */
int askCapacity(void);

#endif