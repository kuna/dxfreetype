#include "CSVFont.h"

void CSVFont::SetData(TCHAR *args[]) {
	// (index), (width), (border), (fontcolor)a, r, g, b, (bordercolor)a, r, g, b, (texture)
	// width 0 is the default.
	fontWidth = _wtoi(args[2]);
	borderWidth = _wtoi(args[3]);
	fontR = _wtoi(args[4]);
	fontG = _wtoi(args[5]);
	fontB = _wtoi(args[6]);
	borderR = _wtoi(args[7]);
	borderG = _wtoi(args[8]);
	borderB = _wtoi(args[9]);
	if (args[10] > 0)
		wcscpy(fontTexturePath, args[10]);
}