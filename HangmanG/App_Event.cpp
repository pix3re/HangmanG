#include "App.h"

void App::OnEvent(SDL_Event* event)
{
	if (event->type == SDL_QUIT)
	{
		m_Running = false;
	}
}