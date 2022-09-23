#include "App.h"

void App::OnRender()
{
	Surface::OnDraw(m_pDisplaySurface, pSurfTest, 0, 0);

	SDL_UpdateWindowSurface(m_pWindow);
}