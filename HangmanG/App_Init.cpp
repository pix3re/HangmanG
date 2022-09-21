#include "App.h"

bool App::OnInit()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		return false;
	}

	m_pScreen = SDL_CreateWindow("Hangman",
									SDL_WINDOWPOS_UNDEFINED,
									SDL_WINDOWPOS_UNDEFINED,
									640, 480,
									SDL_WINDOW_OPENGL);

	if (m_pScreen == NULL)
	{
		return false;
	}

	return true;
}