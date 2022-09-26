#pragma once
#ifndef _TEXTURE_H_
#define _TEXTURE_H_

#include <SDL.h>

class Texture
{
public:
	Texture();

public:
	SDL_Texture* OnLoad(char* filename);
};

#endif