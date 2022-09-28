#include "App.h"

Word* gameWord;

SDL_Renderer* App::m_pRenderer = nullptr;


App::App()
{
	m_pWindow = nullptr;
	m_Running = true;
}

int App::OnExecute()
{
	if (OnInit() == false)
	{
		return -1;
	}

	SDL_Event Event;

	while (m_Running)
	{
		m_frameStart = SDL_GetTicks();

		OnPrepareRender();

		while (SDL_PollEvent(&Event))
		{
			OnEvent(&Event);
		}

		OnUpdate();
		OnRender();

		m_frameTime = SDL_GetTicks() - m_frameStart;

		if (m_frameDelay > m_frameTime)\
		{
			SDL_Delay(m_frameDelay - m_frameTime);
		}
	}

	OnCleanup();

	return 0;
}

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

	//m_destRect.h = 32;
	//m_destRect.w = 32;
	//m_TestTexture = TextureManager::LoadTexture("Assets/hanger.png");

	gameWord = new Word();

	return true;
}

void App::OnEvent(SDL_Event* event)
{
	if (event->type == SDL_QUIT)
	{
		m_Running = false;
	}
}

void App::OnUpdate()
{

}

void App::OnPrepareRender()
{
	SDL_SetRenderDrawColor(m_pRenderer, 255, 255, 255, 255);
	SDL_RenderClear(m_pRenderer);
}


void App::OnRender()
{
	//SDL_RenderCopy(m_pRenderer, m_TestTexture, NULL, &m_destRect);
	gameWord->Render();
	SDL_RenderPresent(m_pRenderer);
}

void App::OnCleanup()
{
	SDL_DestroyRenderer(m_pRenderer);
	SDL_DestroyWindow(m_pWindow);
	SDL_Quit();
}