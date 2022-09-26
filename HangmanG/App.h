#pragma once
#ifndef _APP_H_
	#define _APP_H_

#include <SDL.h>

class App
{
public:
	App();

	int OnExecute();

private:
	bool m_Running = false;

	SDL_Window* m_pWindow;
	SDL_Renderer* m_pRenderer;


public:
	bool OnInit();
	void OnEvent(SDL_Event* event);
	void OnLoop();
	void OnPrepareRender();
	void OnRender();
	void OnCleanup();
};

#endif