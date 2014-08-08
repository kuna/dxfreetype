Freetype Library for DirectX9
=======================

죽어라 찾아도 팁도 사용법도 example도 안 나오고 해서 걍 내가 만듬.

## Requires
* directx sdk (june 2010)
* freetype (v 2.5?)

## ability
* texture mask
* border thickness/color
* text thickness/color
* texture caching for performance

## How to use?
```cpp
DXFont fonts[256];
CSVFont font;
wcscpy(font.fontPath, L"C:\\Windows\\fonts\\gulim.ttc");
wcscpy(font.fontTexturePath, L"C:\\Users\\kuna\\Documents\\Visual Studio 2010\\Projects\\dxfreetype\\silver128.png");
font.fontHeight = 80;
font.borderWidth = 5;

fonts[0].fontData = &font;
if (!fonts[0].InitDXFont(dxGame.GetD3D9Device())) {
	MSGBOX_ERROR(hWnd, L"Font initalizing failed!");
}

...

dxGame.Clear(0, 0, 0, 0);
dxGame.BeginScene();
dxGame.BeginSprite();
dxGame.DrawString(&fonts[0], L"한글 ABCD ヒラギ", 10, 10, 1200, 80, 0);
dxGame.DrawString(&fonts[0], L"한글 ABCD ヒラギ", 10, 120, 400, 100, 0);
dxGame.DrawString(&fonts[0], L"ABCDabcdefghijklmnopqrstuv", 10, 220, 400, 100, 0);
dxGame.DrawString(&fonts[0], L"abgABG가나닿", 0, 320, 600, 50, 0);
dxGame.DrawString(&fonts[0], L"abgABG가나닿", 0, 420, 600, 50, 1);
dxGame.DrawString(&fonts[0], L"abgABG가나닿", 1280, 420, 600, 50, 1);
dxGame.DrawString(&fonts[0], L"abgABG가나닿", 1280, 520, 600, 50, 2);
dxGame.DrawString(&fonts[0], L"abgABG가나닿fbewvbewbvjrvberkb", 1280, 620, 600, 50, 2);
dxGame.EndSprite();
dxGame.EndScene();

```

## minorlog
* 140808 - very much big performance up (you should use release mode to get full performance)

## Environment
* vs 2010 SP1

## License
MIT