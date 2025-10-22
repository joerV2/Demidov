#include "graphics.h"
#include "picture.hpp"

void house() {
    
    setcolor(COLOR(150, 75, 0));
    setfillstyle(SOLID_FILL, COLOR(150, 75, 0));
    bar(100, 300, 300, 450);
    
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    int roof_points[] = {80, 300, 200, 200, 320, 300};
    fillpoly(3, roof_points);
    
    setcolor(COLOR(101, 67, 33));
    setfillstyle(SOLID_FILL, COLOR(101, 67, 33));
    bar(180, 350, 220, 450);
    
    setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
    bar(120, 320, 160, 360);
    
    setcolor(WHITE);
    line(140, 320, 140, 360);
    line(120, 340, 160, 340);
    
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(210, 400, 3, 3);
}