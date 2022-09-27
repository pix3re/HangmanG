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

	if (m_pWindow == NULL || m_pRenderer == NULL)
	{
		return false;
	}

	IMG_Init(IMG_INIT_PNG);

	m_TestTexture = TextureManager::LoadTexture("cactus.bmp", m_pRenderer);
	m_destRect.h = 32;
	m_destRect.w = 32;

	return true;
}