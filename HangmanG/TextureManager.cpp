#include "TextureManager.h"

SDL_Texture* TextureManager::LoadTexture(const char* filename)
{
	SDL_Surface* tmpSurface = IMG_Load(filename);
	SDL_Texture* tmpTexture = SDL_CreateTextureFromSurface(App::m_pRenderer, tmpSurface);

	SDL_FreeSurface(tmpSurface);

	return tmpTexture;
}