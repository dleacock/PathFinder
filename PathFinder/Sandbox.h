#pragma once

#include <Engine\Engine.h>
#include <Engine\Window.h>

class Sandbox
{
public:
	Sandbox();
	~Sandbox();

	void init();
	void run();
	void onEvent();

private:
	SDL_Event m_event;
	Engine::Window m_window;
	bool m_running;
};

