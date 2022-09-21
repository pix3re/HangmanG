#include "App.h"

App::App()
{
	m_pScreen = nullptr;
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
