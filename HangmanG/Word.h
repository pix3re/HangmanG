#pragma once
#ifndef _WORD_H_
#define _WORD_H_

#include <string>
#include <vector>
#include "TextureManager.h"

class Word
{
public:
	Word();
	~Word() = default;

	void Update();
	void Render();

private:
	void MaskWord();

private:
	std::vector<std::string> m_wordPool = { "hangman", "orange", "man"};
	std::string m_secretWord;
	SDL_Texture* m_pLetterPlaceholder;
	SDL_Rect m_pDestRect;
	SDL_Rect m_pSrcRect;

	struct letter
	{
		int x;
		int y;
		int w = 64;
		int h = 64;
		int offset;
	};
};

#endif