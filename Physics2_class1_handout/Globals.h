#pragma once
#include <windows.h>
#include <stdio.h>

#define LOG(format, ...) log(__FILE__, __LINE__, format, __VA_ARGS__);
#define METER_PIXEL_CONST 100
#define METER_TO_PIXELS(meters) {(int)meters * METER_PIXEL_CONST }
#define PIXEL_TO_METERS(pixels)  {(int)pixels / METER_PIXEL_CONST }

void log(const char file[], int line, const char* format, ...);



#define CAP(n) ((n <= 0.0f) ? n=0.0f : (n >= 1.0f) ? n=1.0f : n=n)

#define DEGTORAD 0.0174532925199432957f
#define RADTODEG 57.295779513082320876f

typedef unsigned int uint;

enum update_status
{
	UPDATE_CONTINUE = 1,
	UPDATE_STOP,
	UPDATE_ERROR
};

// Configuration -----------

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 758
#define SCREEN_SIZE 1
#define WIN_FULLSCREEN false
#define WIN_RESIZABLE false
#define WIN_BORDERLESS false
#define WIN_FULLSCREEN_DESKTOP false
#define VSYNC true
#define TITLE "2D Physics Playground"