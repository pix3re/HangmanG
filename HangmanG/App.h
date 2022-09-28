#pragma once
#ifndef _APP_H_
	#define _APP_H_

#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"
#include "Word.h"

class App
{
public:
	App();

	int OnExecute();
	bool OnInit();
	void OnEvent(SDL_Event* event);
	void OnUpdate();
	void OnPrepareRender();
	void OnRender();
	void OnCleanup();

	static SDL_Renderer* m_pRenderer;
	

private:
	bool m_Running = false;

	const int m_FPS = 60;
	const int m_frameDelay = 1000 / m_FPS;

	Uint32 m_frameStart = 0;
	int m_frameTime = 0;

	SDL_Window* m_pWindow = nullptr;

};

#endif