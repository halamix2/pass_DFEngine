#pragma once
#include <string>
#include <sstream>
#include "pch.h"
#include "matrix.h"
#include "CDFObjectInstance.h"

struct Options {
	wchar_t* dataDirectory;
	wchar_t* a;
	int memoManago;
	int engineMode;
	int dCache;
	int eCache;
	int f;
	int g;
};

// only Start, CreateDFObject, Update, SetCameraViewMatrix, SetCameraProjMatrix is used by the game
// do not reorder these!
class CDFEngine {
public:
	virtual int Start(int* a, int* b, Options* options); // -1 and below error, 0 success
	virtual void Shutdown(int self);
	virtual int SetSoundSystem(int self, int b, int c);
	virtual int CreateDFObject(int self, char* name, CDFObjectInstance** obj);  // iga_1, iga_2...
	virtual int RemoveDFObject(int self, int b);
	virtual int DestroyAllDfObjects(int self, int b);
	virtual int RefreshCurrentCreatives(int self, int b);
	virtual void Update(int self, float TimeSinceLastUpdate);
	virtual int StartZone(int self, char* zone); // always Zone1, error -1 and below
	virtual void LeaveZone(int self, char* zone);
	virtual void UpdateContentFromServerBlocking(int self);
	virtual int GetEngineParameter(int self, int b, short c);
	virtual int SetEngineParameter(int self, int b, int c);
	virtual void SetCameraViewMatrix(int self, float matrix[4][4]); // array of 4*4
	virtual void SetCameraProjMatrix(int self, float matrix[4][4]); // 4*4
	virtual void SetNetworkDownloadLimit(int self, int b);
	virtual void SetNetworkUploadLimit(int self, int b);
	virtual void SetNetworkEnable(int self, int b);
	virtual void* dtor(void* self, int b);
	// static char* zone;
};

