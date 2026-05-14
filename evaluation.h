#ifndef EVALUATE_H
#define EVALUATE_H

#include "types.h"

/*
 Master evaluation function.
 semua score___() functions dipanggil, mengitung weighted WQI score,
 sets r->wqi_score, r->alert_level, and r->combined_flag.
 */
void evaluateReading(WaterReading *r, Thresholds *t);

/*
 Individual scoring functions.
 return nilai 0 to 100 dari threshold masing-masing tipe.
 */
int scorePH(float ph, Thresholds *t);
int scoreOxygen(float oxygen, Thresholds *t);
int scoreTurbidity(float ntu, Thresholds *t);
int scoreTemperature(float temp, Thresholds *t);
int scoreConductivity(float conduct, Thresholds *t);
int scoreColor(int color); // gaperlu ada threshold

/*
 Check kombinasi parameter yang lebih buruk dari satu reading
 (e.g., low oxygen AND high temperature)
 Sets r->combined_flag = 1 jika kombinasi berbahaya ditemukan.
 */
void checkCombinedFactors(WaterReading *r, Thresholds *t);

#endif