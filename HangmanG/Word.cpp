#include "Word.h"

Word::Word()
{
	m_pLetterPlaceholder = TextureManager::LoadTexture("assets/placeholder.png");
	m_secretWord = m_wordPool[2];
}

void Word::Render()
{
	for (int i = 0; i < m_secretWord.length(); i++)
	{
		m_pDestRect.x = 64*i;
		m_pDestRect.y = 64;
		m_pDestRect.w = 64;
		m_pDestRect.h = 64;

		SDL_RenderCopy(App::m_pRenderer, m_pLetterPlaceholder, NULL, &m_pDestRect);
	}
}

void Word::Update()
{

}

void Word::MaskWord()
{

}