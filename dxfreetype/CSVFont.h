// we use fontface, not bitmapped font.
#include <tchar.h>
#pragma once

class CSVFont {
public:
	TCHAR fontPath[256];
	TCHAR fontTexturePath[256];
	int fontHeight, fontWidth;
	int glyphHeight;
	int fontThickness;
	int fontR, fontG, fontB;
	int borderR, borderG, borderB;
	int borderWidth;

public:
	void SetData(TCHAR *args[]);
};