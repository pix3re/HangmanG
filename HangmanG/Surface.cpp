#include "Surface.h"

Surface::Surface()
{

}

SDL_Surface* Surface::OnLoad(char* file)
{
	SDL_Surface* pSurfTemp = nullptr;
	SDL_Surface* pSurfReturn = nullptr;

	if ((pSurfTemp = SDL_LoadBMP(file)) == nullptr)
	{
		return nullptr;
	}

	pSurfReturn = SDL_ConvertSurfaceFormat(pSurfTemp, SDL_PIXELFORMAT_RGBA32, 0);
	SDL_FreeSurface(pSurfTemp);

	return pSurfReturn;
}

bool Surface::OnDraw(SDL_Surface* surfDestination, SDL_Surface* surfSource, int x, int y)
{
	if (surfDestination == nullptr || surfSource == nullptr)
	{
		return false;
	}

	SDL_Rect destRect;
	destRect.x = x;
	destRect.y = y;

	SDL_BlitSurface(surfSource, NULL, surfDestination, &destRect);

	return true;
}

bool Surface::OnDraw(SDL_Surface* surfDestination, SDL_Surface* surfSource, int x, int y, int x2, int y2, int width, int height)
{
	if (surfDestination == nullptr || surfSource == nullptr)
	{
		return false;
	}

	SDL_Rect destRect;
	destRect.x = x;
	destRect.y = y;

	SDL_Rect srcRect;
	srcRect.x = x2;
	srcRect.y = y2;
	srcRect.w = width;
	srcRect.h = height;

	SDL_BlitSurface(surfSource, &srcRect, surfDestination, &destRect);

	return true;
}