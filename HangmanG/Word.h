#pragma once
#ifndef _WORD_H_
#define _WORD_H_

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
	std::vector<char> m_wordToGuess;
	SDL_Texture* m_pMaskedLetter;
};

#endif