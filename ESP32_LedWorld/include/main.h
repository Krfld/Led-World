#include <Arduino.h>

#include "Adafruit_NeoPixel.h"
#include "countries.h"

typedef uint8_t id_t;

typedef struct
{
	uint8_t x;
	uint8_t y;
} axis_s;

typedef struct
{
	sigla_t country;
	axis_s axis;
} led_s;