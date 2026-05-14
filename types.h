#ifndef TYPES_H
#define TYPES_H

// -------------
// Constants
// -------------

#define MAX_ECOSYSTEM_NAME 30

// Alert Warning Codes
typedef enum { ALERT_NORMAL, ALERT_WARNING, ALERT_CRITICAL } ALERT_INDICATOR;

// Water Color Codes
typedef enum {
  COLOR_CLEAR,
  COLOR_BROWN,
  COLOR_GREEN,
  COLOR_BLACK,
  COLOR_YELLOW
} COLOR_INDICATOR;

// Ecosystems Type Code
typedef enum { ECO_RIVER, ECO_LAKE, ECO_DRINKING, ECO_CATFISH_FARM } ECO_TYPE;

// -------------
// Structs
// -------------

// Threshold (Btw, turbidity tuh kekeruhan)
typedef struct {
  float ph_min, ph_max;
  float oxygen_min;
  float turbidity_max;
  float temp_min, temp_max;
  float conductivity_max;
} Thresholds;

// Water Readings
typedef struct {
  float ph;
  float dissolved_oxygen; // mg/L
  float turbidity;        // NTU
  float temperature;      // C
  float conductivity;     // uS/cm
  int water_color;        // COLOR_CONSTANT
  int wqi_score;          // 0–100, komputasi hasil evaluateReading()
  int alert_level;        // diatur evaluateReading()
  int combined_flag;      // 1 jika kombinasi berbahaya didapatkan
} WaterReading;

// Sessions (runtime)

typedef struct {
  WaterReading *readings; // heap array
  int count;              // jumlah reading
  int capacity;           // size alloc
  char ecosystem_name[MAX_ECOSYSTEM_NAME];
  int ecosystem_type; // ECO_CONST
} Session;

#endif