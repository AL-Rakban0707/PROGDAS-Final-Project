#include "ecosystems.h"
#include <stdio.h>
#include <string.h>


/* ─────────────────────────────────────────────
   INTERNAL HELPERS — not exposed in the header
   ───────────────────────────────────────────── */

static void setRiverThresholds(Thresholds *t) {
  t->ph_min = 6.5f;
  t->ph_max = 8.5f;
  t->oxygen_min = 5.0f;         /* mg/L — minimum for healthy fish */
  t->turbidity_max = 25.0f;     /* NTU  — TODO: verify with research */
  t->temp_min = 10.0f;          /* C    */
  t->temp_max = 28.0f;          /* C    */
  t->conductivity_max = 500.0f; /* uS/cm */
}

static void setShrimpFarmThresholds(Thresholds *t) {
  t->ph_min = 7.5f;
  t->ph_max = 8.5f;
  t->oxygen_min = 4.0f; /* TODO: verify with research */
  t->turbidity_max = 30.0f;
  t->temp_min = 23.0f;
  t->temp_max = 30.0f;
  t->conductivity_max = 800.0f;
}

static void setDrinkingWaterThresholds(Thresholds *t) {
  t->ph_min = 6.5f;
  t->ph_max = 8.5f;
  t->oxygen_min = 6.0f;    /* TODO: verify with research */
  t->turbidity_max = 1.0f; /* Much stricter for drinking water */
  t->temp_min = 0.0f;
  t->temp_max = 25.0f;
  t->conductivity_max = 400.0f;
}

static void setLakeThresholds(Thresholds *t) {
  t->ph_min = 6.0f;
  t->ph_max = 9.0f;
  t->oxygen_min = 5.0f; /* TODO: verify with research */
  t->turbidity_max = 50.0f;
  t->temp_min = 5.0f;
  t->temp_max = 30.0f;
  t->conductivity_max = 600.0f;
}

/* ─────────────────────────────────────────────
   PUBLIC FUNCTIONS
   ───────────────────────────────────────────── */

void selectEcosystem(Session *session, Thresholds *thresholds) {
  int choice;

  printf("\n╔══════════════════════════════╗\n");
  printf("║   SELECT ECOSYSTEM TYPE      ║\n");
  printf("╚══════════════════════════════╝\n");
  printf("  [0] River\n");
  printf("  [1] Shrimp Farm\n");
  printf("  [2] Drinking Water Source\n");
  printf("  [3] Lake\n");
  printf("Choice: ");
  scanf("%d", &choice);

  switch (choice) {
  case ECO_RIVER:
    setRiverThresholds(thresholds);
    strncpy(session->ecosystem_name, "River", MAX_ECOSYSTEM_NAME);
    session->ecosystem_type = ECO_RIVER;
    break;
  case ECO_SHRIMP_FARM:
    setShrimpFarmThresholds(thresholds);
    strncpy(session->ecosystem_name, "Shrimp Farm", MAX_ECOSYSTEM_NAME);
    session->ecosystem_type = ECO_SHRIMP_FARM;
    break;
  case ECO_DRINKING:
    setDrinkingWaterThresholds(thresholds);
    strncpy(session->ecosystem_name, "Drinking Water Source",
            MAX_ECOSYSTEM_NAME);
    session->ecosystem_type = ECO_DRINKING;
    break;
  case ECO_LAKE:
    setLakeThresholds(thresholds);
    strncpy(session->ecosystem_name, "Lake", MAX_ECOSYSTEM_NAME);
    session->ecosystem_type = ECO_LAKE;
    break;
  default:
    printf("Invalid choice. Defaulting to River.\n");
    setRiverThresholds(thresholds);
    strncpy(session->ecosystem_name, "River", MAX_ECOSYSTEM_NAME);
    session->ecosystem_type = ECO_RIVER;
    break;
  }

  printf("\nEcosystem set to: %s\n", session->ecosystem_name);
}

void printThresholds(Thresholds *t) {
  printf("\n--- Thresholds for this ecosystem ---\n");
  printf("  pH             : %.1f – %.1f\n", t->ph_min, t->ph_max);
  printf("  Dissolved O2   : >= %.1f mg/L\n", t->oxygen_min);
  printf("  Turbidity      : <= %.1f NTU\n", t->turbidity_max);
  printf("  Temperature    : %.1f – %.1f C\n", t->temp_min, t->temp_max);
  printf("  Conductivity   : <= %.1f uS/cm\n", t->conductivity_max);
  printf("-------------------------------------\n");
}