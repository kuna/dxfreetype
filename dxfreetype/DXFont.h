#include <d3d9.h>
#include <d3dx9.h>
#include <map>
#include "CSVFont.h"
#pragma once

// freetype
#include <ft2build.h>
#include FT_FREETYPE_H
#include FT_STROKER_H
//#include FT_CACHE_H
#ifdef _DEBUG
#pragma comment(lib,"freetype253_D.lib")
#else
#pragma comment(lib,"freetype253.lib")
#endif

// for font texture
#include "DXTexture.h"

class DXFontTexture {
public:
	int x, y;
	int width;
	int height;
	bool unusable;
};

#define TEXTURE_HEIGHT 1024
#define TEXTURE_WIDTH 1024

class DXFont {
private:
	// drawing
	IDirect3DDevice9* device;

	// for caching
	std::map<int, DXFontTexture*> texture_cache;

	// freetype
	FT_Library ftLib;
	FT_Face ftFace;
	FT_Stroker ftStroker;
	DXTexture fontTexture;
	bool fontTextureLoaded;

	D3DCOLOR getColor(int x, int y, int a);

	BOOL getAvailableGlyphSlot(DXFontTexture *data);
	int cx, cy;

	// refer
	// http://www.devpia.com/MAEUL/Contents/Detail.aspx?BoardID=51&MAEULNO=20&no=8373
public:
	CSVFont *fontData;

	BOOL InitDXFont(IDirect3DDevice9* device);
	BOOL Release();
	DXFontTexture* getFontTexture(TCHAR chr, int *wid=0, int *hei=0);

	BOOL RenderChar(TCHAR chr, bool render=true, int *width=0, int *height=0);
	BOOL drawChar(TCHAR chr, D3DCOLOR *pixels, int textureWidth, int x=0, int y=0);
	
	LPDIRECT3DTEXTURE9 glyphTexture;

	~DXFont();
};