#include "App.h"

App::App()
{
	m_pWindow = nullptr;
	m_pRenderer = nullptr;
	m_Running = true;

	pSurfTest = nullptr;
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
		while (SDL_PollEvent(&Event))
		{
			OnEvent(&Event);
		}

		OnLoop();
		OnRender();
	}

	OnCleanup();

	return 0;
}

