#include "App.h"

bool App::OnInit()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		return false;
	}

	m_pWindow = SDL_CreateWindow("Hangman",
									SDL_WINDOWPOS_UNDEFINED,
									SDL_WINDOWPOS_UNDEFINED,
									640, 480,
									SDL_WINDOW_OPENGL);

	m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, SDL_RENDERER_ACCELERATED);

	if (m_pWindow == NULL)
	{
		return false;
	}

	return true;
}