#include "App.h"

void App::OnRender()
{
	SDL_RenderCopy(m_pRenderer, m_TestTexture, NULL, &m_destRect);
	SDL_RenderPresent(m_pRenderer);
}