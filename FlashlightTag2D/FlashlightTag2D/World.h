#pragma once
#include <memory>
#include <SDL.h>
#include "Types.h"

#define MAX_CAMERAS 10

class World
{
public:
	//The dimensions of the level
	static const int LEVEL_WIDTH = 4000;
	static const int LEVEL_HEIGHT = 2000;

	//Screen dimension constants
	static const int SCREEN_WIDTH = 1920;
	static const int SCREEN_HEIGHT = 1080;

	//World(SDL_Renderer* renderer);
	World(SDL_Window* window);

	virtual ~World();

	void RunGame();
	void AddCamera(StrongGameActorPtr camera);
	//StrongGameActorPtr AddEntity(StrongGameActorPtr entity);

	StrongGameActorPtr GetCurrentCamera() { return m_pCurrentCamera; };
	SDL_Renderer* GetRenderer() { return m_renderer; };

private:
	//StrongGameActorPtrList m_pEntityList;
	ComponentList m_graphicsComponentList;
	StrongGameActorPtrList m_pCameraList;
	StrongGameActorPtr m_pCurrentCamera;
	SDL_Renderer* m_renderer;
	SDL_Window* m_window;
};

