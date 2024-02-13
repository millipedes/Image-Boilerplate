#include "canvas/include/canvas.h"

int main(void) {
  canvas the_canvas = init_canvas(1000, 1000, MIN_COL, MIN_COL, MIN_COL);
  write_canvas_png(the_canvas, "test_out.png");
  free_canvas(the_canvas);
  return 0;
}
