pass_DFEngine
===
An experiment to try to get "ads" workign in SR2.

There is a hardcoded path to `C:\sr\sr2.tga` in CDFObjectInstance.cpp, a texture file should be in 512x256 resolution (should allow png, tga, bmp, jpg, dds, anything D3DXCreateTextureFromFileW can handle)

Currently the texture file gets accessed as it should, but the game crashes somewhere on empty pointer.