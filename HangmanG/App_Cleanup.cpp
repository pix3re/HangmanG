#include "App.h"

void App::OnCleanup()
{
	SDL_FreeSurface(pSurfTest);

	SDL_DestroyRenderer(m_pRenderer);
	SDL_DestroyWindow(m_pWindow);
	SDL_Quit();
}