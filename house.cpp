#include "graphics.h"
#include "picture.hpp"

void house() {
    // Основная часть дома (прямоугольник)
    setcolor(COLOR(150, 75, 0));  // Коричневый цвет
    setfillstyle(SOLID_FILL, COLOR(150, 75, 0));
    bar(100, 300, 300, 450);
    
    // Крыша (треугольник)
    setcolor(RED);
    setfillstyle(SOLID_FILL, RED);
    int roof_points[] = {80, 300, 200, 200, 320, 300};
    fillpoly(3, roof_points);
    
    // Дверь
    setcolor(COLOR(101, 67, 33));  // Темно-коричневый
    setfillstyle(SOLID_FILL, COLOR(101, 67, 33));
    bar(180, 350, 220, 450);
    
    // Окно
    setcolor(CYAN);
    setfillstyle(SOLID_FILL, CYAN);
    bar(120, 320, 160, 360);
    
    // Рама окна
    setcolor(WHITE);
    line(140, 320, 140, 360);  // Вертикальная линия
    line(120, 340, 160, 340);  // Горизонтальная линия
    
    // Ручка двери
    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(210, 400, 3, 3);
}