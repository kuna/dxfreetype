#include "DXTexture.h"

//
BOOL DXTexture::LoadTexture(const TCHAR *path, IDirect3DDevice9* pd3dDevice)
{
	// check if texture is already exists ...
	if (pTexture != 0)
		pTexture->Release();

	D3DXIMAGE_INFO pImgInf;
	if (FAILED(D3DXCreateTextureFromFileEx(pd3dDevice, path,
		D3DX_DEFAULT, D3DX_DEFAULT, 
		1,	// Mip level
		0, D3DFMT_UNKNOWN, D3DPOOL_MANAGED, 0x00000001, 0x00000001,
		0x00000000,	//
		&pImgInf,
		NULL,
		&pTexture))) return FALSE;

	width = txtRect.right = pImgInf.Width;
	height = txtRect.bottom = pImgInf.Height;

	return TRUE;
}

RECT* DXTexture::GetRect() {
	return &txtRect;
}

LPDIRECT3DTEXTURE9 DXTexture::GetTexture() {
	return pTexture;
}

BOOL DXTexture::isTextureLoaded() {
	return (pTexture != 0);
}