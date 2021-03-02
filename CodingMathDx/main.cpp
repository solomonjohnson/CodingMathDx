

#include"AppWindow.h"

int main()
{
	AppWindow app;

	if (app.init())
	{
		while (app.isRun())
		{
			app.broadcast();
		}
	}
	return 0;
}













#pragma region Old Code

////#include <windows.h>
////
////#define MAX_CLASS_NAME_LENGTH 256
////#define HInstance() GetModuleHandle(NULL)
////
////WCHAR WindowClass[MAX_CLASS_NAME_LENGTH];
////INT	WindowWidth;
////INT WindowHeight;
////
////
////
////int WINAPI WinMain(HINSTANCE hInstance,
////	HINSTANCE hPrevInstance,
////	LPSTR lpCmdLine,
////	int nCmdShow) {
////
////	wcscpy_s(WindowClass, TEXT("Our First Window"));
////	WindowWidth = 1366;
////	WindowHeight = 768;
////	//Create class
////	WNDCLASSEX wcex;
////
////	wcex.cbSize = sizeof(WNDCLASSEX);
////	wcex.style = CS_HREDRAW | CS_VREDRAW;
////	wcex.cbClsExtra = 0;
////	wcex.cbWndExtra = 0;
////	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
////	wcex.hbrBackground = (HBRUSH)GetStockObject(NULL_BRUSH);
////	wcex.hIcon = LoadIcon(0, IDI_APPLICATION);
////	wcex.hIconSm = LoadIcon(0, IDI_APPLICATION);
////	wcex.lpszMenuName = nullptr;
////	wcex.lpszClassName = WindowClass;
////
////	wcex.hInstance = HInstance();
////	wcex.lpfnWndProc = DefWindowProc;
////
////	RegisterClassEx(&wcex);
////
////	//Create Window
////	HWND hWnd = CreateWindow(WindowClass, WindowClass, WS_OVERLAPPEDWINDOW,
////		CW_USEDEFAULT, 0, WindowWidth, WindowHeight, nullptr, nullptr, HInstance(), nullptr);
////	if (!hWnd)
////	{
////		MessageBox(0, L"Failed to Create Window.", 0, 0);
////		return 0;
////	}
////
////	//Display Window
////	ShowWindow(hWnd, SW_SHOW);
////	UpdateWindow(hWnd);
////
////	//Listen for messages
////	MSG msg = { 0 };
////	while (msg.message != WM_QUIT)
////	{
////		//If there is window messages then process them
////		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
////		{
////			TranslateMessage(&msg);
////			DispatchMessage(&msg);
////		}
////	}
////
////	return 0;
////}
//
//#include <windows.h>
//#include <windowsx.h>
//#include <d3d9.h>
//
//#define SCREEN_WIDTH 800
//#define SCREEN_HEIGHT 600
//#pragma comment (lib, "d3d9.lib")
//LPDIRECT3D9 d3d; // the pointer to our Direct3D interface
//LPDIRECT3DDEVICE9 d3ddev; // the pointer to the device class
//LPDIRECT3DVERTEXBUFFER9 v_buffer = NULL; // the pointer to the vertex buffer
//void initD3D(HWND hWnd); // sets up and initializes Direct3D
//void render_frame(void); // renders a single frame
//void cleanD3D(void); // closes Direct3D and releases memory
//void init_graphics(void); // 3D declarations
//struct CUSTOMVERTEX { FLOAT X, Y, Z, RHW; DWORD COLOR; };
//
//LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
//	LPSTR lpCmdLine, int nCmdShow) {
//
//	HWND hWnd;
//	WNDCLASSEX wc;
//	ZeroMemory(&wc, sizeof(WNDCLASSEX));
//	wc.cbSize = sizeof(WNDCLASSEX);
//	wc.style = CS_HREDRAW | CS_VREDRAW;
//	wc.lpfnWndProc = DefWindowProc;
//	wc.hInstance = hInstance;
//	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
//	wc.lpszClassName = L"WindowClass";
//	RegisterClassEx(&wc);
//	hWnd = CreateWindowEx(
//		NULL,
//		L"WindowClass",
//		L"Our Direct3D Program",
//		WS_OVERLAPPEDWINDOW,
//		0, 0,
//		SCREEN_WIDTH, SCREEN_HEIGHT,
//		NULL,
//		NULL,
//		hInstance,
//		NULL
//	);
//	ShowWindow(hWnd, nCmdShow);
//	UpdateWindow(hWnd);
//
//	MSG msg = { 0 };
//	while (msg.message != WM_QUIT)
//	{
//		//If there is window messages then process them
//		if (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
//		{
//			TranslateMessage(&msg);
//			DispatchMessage(&msg);
//		}
//	}
//	return 0;
//}
//
//void init_graphics(void) {
//	// create the vertices using the CUSTOMVERTEX struct
//	CUSTOMVERTEX vertices[] = {
//	   { 400.0f, 62.5f, 0.5f, 1.0f, D3DCOLOR_XRGB(0, 0, 255), },
//	   { 650.0f, 500.0f, 0.5f, 1.0f, D3DCOLOR_XRGB(0, 255, 0), },
//	   { 150.0f, 500.0f, 0.5f, 1.0f, D3DCOLOR_XRGB(255, 0, 0), },
//	};
//	//  create a vertex buffer interface called v_buffer
//	d3ddev->CreateVertexBuffer(
//		3 * sizeof(CUSTOMVERTEX),
//		0,
//		CUSTOMFVF,
//		D3DPOOL_MANAGED,
//		&v_buffer,
//		NULL
//	);
//	VOID* pVoid; // a void pointer
//	// lock v_buffer and load the vertices into it
//	v_buffer->Lock(0, 0, (void**)&pVoid, 0);
//	memcpy(pVoid, vertices, sizeof(vertices));
//	v_buffer->Unlock();
//}  
#pragma endregion

