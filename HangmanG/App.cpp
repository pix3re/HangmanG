#include "App.h"

App::App()
{
	m_pWindow = nullptr;
	m_pRenderer = nullptr;
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

		OnLoop();
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

