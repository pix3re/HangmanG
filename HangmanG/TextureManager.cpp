#include "TextureManager.h"

SDL_Texture* TextureManager::LoadTexture(const char* filename, SDL_Renderer* renderer)
{
	SDL_Surface* tmpSurface = IMG_Load(filename);
	SDL_Texture* tmpTexture = SDL_CreateTextureFromSurface(renderer, tmpSurface);

	SDL_FreeSurface(tmpSurface);

	return tmpTexture;
}