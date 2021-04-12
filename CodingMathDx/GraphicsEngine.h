#pragma once
#include <d3d11.h>
#include "Prerequisites.h"
#include "RenderSystem.h"

class GraphicsEngine
{
public:
	//Initialize the Graphics Engine and Directx11 Device
	GraphicsEngine();
	//Release all the resources loaded
	~GraphicsEngine();
	RenderSystem* getRenderSystem();
public:
	static GraphicsEngine* get();
	static void create();
	static void release();
private:
	RenderSystem* m_render_system = nullptr;
	static GraphicsEngine* m_engine;
};

