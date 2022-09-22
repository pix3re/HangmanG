#pragma once
#ifndef _SURFACE_H_
#define _SURFACE_H_

#include <SDL.h>

class Surface
{
public:
	Surface();

public:
	static SDL_Surface* OnLoad(char* file);
	static bool OnDraw(SDL_Surface* surfDestination, SDL_Surface* surfSource, int x, int y);
};

#endif