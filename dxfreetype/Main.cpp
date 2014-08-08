/*
 * Uses DXUT
 */

#include "DXGame.h"
#include "DXFont.h"

// driver & main...
HWND hWnd;
DXGame dxGame;

// skin
DXFont fonts[256];


VOID Render() {
	// start scene
	dxGame.Clear(0, 0, 0, 0);
	dxGame.BeginScene();

	// http://irrlicht.sourceforge.net/docu/example006.html
	// test
	
	dxGame.BeginSprite();
	/*
	dxGame.BeginString();
	dxGame.DrawString(&fonts[0], L"ÇÑ±Û ABCD «Ò«é«®", 10, 400, 1200, 20, 0);
	dxGame.EndString();

	*/

	dxGame.BeginString();
	dxGame.DrawString(&fonts[0], L"ÇÑ±Û ABCD «Ò«é«®", 0, 0, 1200, 80, 0);
	dxGame.DrawString(&fonts[1], L"ÇÑ±Û ABCD «Ò«é«®!@#$#$^%$^&", 10, 120, 400, 100, 0);
	dxGame.DrawString(&fonts[0], L"ABCDabcdefghijklmnopqrstuv", 10, 220, 400, 100, 0);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´ê", 0, 320, 600, 50, 0);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´ê", 0, 420, 600, 50, 1);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´ê", 1280, 420, 600, 50, 1);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´ê", 1280, 520, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.DrawString(&fonts[0], L"abgABG°¡³ª´êfbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
	dxGame.EndString();

	
	//dxGame.sprite->Draw(fonts[0].glyphTexture, 0, 0, 0, 0xFFFFFFFF);
	dxGame.EndSprite();
	dxGame.EndScene();
}

CSVFont font;
CSVFont *font2;
VOID Init() {
	wcscpy(font.fontPath, L"C:\\Windows\\fonts\\Gaesung.ttf");
	wcscpy(font.fontTexturePath, L"C:\\Users\\kuna\\Documents\\Visual Studio 2010\\Projects\\dxfreetype\\silver128.png");
	// need DXTexture...
	font.fontHeight = 60;
	font.borderWidth = 5;

	fonts[0].fontData = &font;
	if (!fonts[0].InitDXFont(dxGame.GetD3D9Device())) {
		MSGBOX_ERROR(hWnd, L"Font initalizing failed!");
	}
	
	font2 = new CSVFont(font);
	font2->fontHeight = 10;
	wcscpy(font2->fontPath, L"C:\\Windows\\fonts\\gulim.ttc");

	fonts[1].fontData = font2;
	if (!fonts[1].InitDXFont(dxGame.GetD3D9Device())) {
		MSGBOX_ERROR(hWnd, L"Font initalizing failed!");
	}
}

// TODO: include it to DXGame
LRESULT WINAPI MsgProc( HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam )
{
    switch( msg )
    {
        case WM_DESTROY:
            PostQuitMessage( 0 );
            return 0;

        case WM_PAINT:
            //ValidateRect( hWnd, NULL );
            return 0;
		case WM_KEYDOWN:
			return 0;
		case WM_KEYUP:
			return 0;
		case WM_MOUSEWHEEL:
			return 0;
		case WM_LBUTTONDOWN:
			return 0;
		case WM_LBUTTONUP:
			return 0;
		case WM_RBUTTONDOWN:
			return 0;
		case WM_MOUSEMOVE:
			return 0;
    }

    return DefWindowProc( hWnd, msg, wParam, lParam );
}

#define SCREENWIDTH 1280
#define SCREENHEIGHT 720
INT WINAPI wWinMain( HINSTANCE hInst, HINSTANCE, LPWSTR, INT )
{
	// create window
	hWnd = dxGame.MakeWindow(MsgProc, L"Freetype for DirectX", SCREENWIDTH, SCREENHEIGHT);

	// init device
	if (!dxGame.Initalize(hWnd)) {
		MSGBOX_ERROR(hWnd, L"Failed to initalize DirectX!");
		return FALSE;
	}
	
	// show Window
    ShowWindow( hWnd, SW_SHOWDEFAULT );
    UpdateWindow( hWnd );

	// init
	Init();

    // Enter the message loop
    MSG msg;
    while( GetMessage( &msg, NULL, 0, 0 ) )
    {
        TranslateMessage( &msg );
        DispatchMessage( &msg );
		
        Render();
    }

	// clear program...?
	fonts[0].Release();
	dxGame.Release();

	return 0;
}