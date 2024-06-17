#include <cstdint>
#include <stdint.h>
#include <stdlib.h>

/* RGB array - 3 fields - (0x) aa ff 11 | aa ff 11 | aa ff 11 and so on.
 * RGBA array - 4 fields - (0x) aa ff 11 88 | aa ff 11 88 | aa ff 11 88 and so
 * on.
 *
 * To iterate over the RGB values (1 to 3 fields) in RGBA data unit - a
 * stride of 4 fields is necessary. */

/* rgb_pixels would only support RGB (3 fields): */
/* void rgb_color_correct(uint8_t *rgb_pixels, unsigned int pixel_count); */

/* rgb_pixels can have arbitrary (stride) number of fields: */
void rgb_color_correct(uint8_t *rgb_pixels, size_t pixel_count, size_t stride);

int main(int argc, char *argv[]) {
  uint8_t *rgba;
  size_t pixel_count = 5;
  size_t stride = sizeof(uint8_t) * 4;

  rgb_color_correct(rgba, pixel_count, stride);

  /* Struct */

  typedef struct {
    float size;
    uint8_t color[3];
    char name[16];
  } Thing;

  Thing t[10];

  rgb_color_correct(t[0].color, 10, sizeof *t);

  return 0;
}
