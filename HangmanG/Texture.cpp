#include "Texture.h"

Texture::Texture()
{

}

SDL_Texture* Texture::OnLoad(char* filename)
{
	SDL_Texture* texture;

	//helper load message
	SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", filename);

	//complete function
}