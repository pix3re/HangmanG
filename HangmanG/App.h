#pragma once
#ifndef _APP_H_
	#define _APP_H_

#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"

class App
{
public:
	App();

	int OnExecute();
	

private:
	bool m_Running = false;

	const int m_FPS = 60;
	const int m_frameDelay = 1000 / m_FPS;

	Uint32 m_frameStart = 0;
	int m_frameTime = 0;

	SDL_Window* m_pWindow = nullptr;
	SDL_Renderer* m_pRenderer = nullptr;

	// test variables
	SDL_Texture* m_TestTexture;
	SDL_Rect m_destRect;


public:
	bool OnInit();
	void OnEvent(SDL_Event* event);
	void OnLoop();
	void OnPrepareRender();
	void OnRender();
	void OnCleanup();

};

#endif