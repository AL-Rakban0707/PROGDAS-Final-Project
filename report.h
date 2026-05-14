#ifndef REPORT_H
#define REPORT_H

#include "types.h"

/*
 printout dari 1 reading, lengkap dengan data indikator, skor wqi, dan alert
 */
void printReport(WaterReading *r, int reading_number);

/*
printout history dari setiap reading dalam 1 sesi
menunjukkan apakah ada suatu tren
 */
void printHistory(Session *s);

/*
menambahkan hasil reading ke file txt.
membuat file txt. jika tidak ada
 */
void saveToFile(Session *s);

#endif