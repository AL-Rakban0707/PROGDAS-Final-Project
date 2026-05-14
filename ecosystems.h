#ifndef ECOSYSTEMS_H
#define ECOSYSTEMS_H

#include "types.h"

/*
prompt user buat masukin tipe ekosistem, ngeset nama sama tipe ekosistem persesi
 */
void selectEcosystem(Session *session, Thresholds *thresholds);

/*
 printout threshold dari ekosistem yang kepilih
 */
void printThresholds(Thresholds *t);

#endif