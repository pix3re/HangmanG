#include "App.h"

void App::OnRender()
{
	SDL_RenderPresent(m_pRenderer);
}