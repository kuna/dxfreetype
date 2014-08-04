#include <d3d9.h>
#include <d3dx9.h>

class DXTexture {
protected:
	RECT txtRect;
	LPDIRECT3DTEXTURE9 pTexture;
public:
	BOOL LoadTexture(const TCHAR *path, IDirect3DDevice9* pd3dDevice);
	BOOL isTextureLoaded();
	RECT* GetRect();
	LPDIRECT3DTEXTURE9 GetTexture();

	int width;
	int height;
};
