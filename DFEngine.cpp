#include "pch.h"

int CDFEngine::Start(int* self, int* inGameExe, Options* options) {
    std::wstringstream info;
    // unused is unused by the game, maybe place for us to store data or sth?
    info << "CDFEngine: called Start(" << inGameExe << ", " << options << ");";
    OutputDebugString(info.str().c_str());
    info = std::wstringstream();
    info << "CDFEngine: Start options:(" << options->dataDirectory <<
        ", " << options->a <<
        ", " << options->memoManago<<
        ", " << options->engineMode <<
        ", " << options->dCache <<
        ", " << options->eCache <<
        ", " << options->f <<
        ", " << options->g <<
        "); ";
    OutputDebugString(info.str().c_str());
    return 0;
}

int CDFEngine::CreateDFObject(int self, char* objectIdentifier, CDFObjectInstance** obj) {
    std::wstringstream info;
    info << "CDFEngine: called CreateDFObject(" << objectIdentifier << ", " << obj << ");";
    OutputDebugString(info.str().c_str());
    *obj = &globalAd;
    info = std::wstringstream();
    info << "CDFEngine: CreateDFObject will return " << obj;
    OutputDebugString(info.str().c_str());
    return 0;
}

void CDFEngine::Update(int self, float TimeSinceLastUpdate) {
    std::wstringstream info;
    info << "CDFEngine: called Update(" << TimeSinceLastUpdate << ");";
    OutputDebugString(info.str().c_str());
    return;
}

void CDFEngine::SetCameraViewMatrix(int self, float matrix[4][4]) {
    std::wstringstream info;
    info << "CDFEngine: called SetCameraViewMatrix(" << getMaxtrixString(matrix) << ");";
    OutputDebugString(info.str().c_str());
    return;
}
void CDFEngine::SetCameraProjMatrix(int self, float matrix[4][4]) {
    std::wstringstream info;
    info << "CDFEngine: called SetCameraProjMatrix(" << getMaxtrixString(matrix) << ");";
    OutputDebugString(info.str().c_str());
    return;
}

int CDFEngine::StartZone(int self, char* newZone) {
    std::wstringstream info;
    info << "CDFEngine: called setZone(\"" << newZone << "\");";
    OutputDebugString(info.str().c_str());
    // zone = newZone;
    return 0;
}

// dummy functions, not used by the SR2

void CDFEngine::Shutdown(int a) {
    std::wstringstream info;
    info << "CDFEngine: called Shutdown(" << a << ");";
    OutputDebugString(info.str().c_str());
    return;
}
int CDFEngine::SetSoundSystem(int a, int b, int c) {
    std::wstringstream info;
    info << "CDFEngine: called SetSoundSystem(" << a << ", " << b << ", " << c << ");";
    OutputDebugString(info.str().c_str());
    return 0;
}
int CDFEngine::RemoveDFObject(int a, int b) {
    std::wstringstream info;
    info << "CDFEngine: called RemoveDFObject(" << a << ", " << b << ");";
    OutputDebugString(info.str().c_str());
    return 0 ;
}
int CDFEngine::DestroyAllDfObjects(int a, int b) {
    std::wstringstream info;
    info << "CDFEngine: called DestroyAllDfObjects(" << a << ", " << b << ");";
    OutputDebugString(info.str().c_str());
    return 0;
}
int CDFEngine::RefreshCurrentCreatives(int a, int b) {
    std::wstringstream info;
    info << "CDFEngine: called RefreshCurrentCreatives(" << a << ", " << b << "); ";
    OutputDebugString(info.str().c_str());
    return 0;
}

void CDFEngine::LeaveZone(int a, char* zone) {
    std::wstringstream info;
    info << "CDFEngine: called LeaveZone(" << a << ", " << zone << ");";
    return;
}
void CDFEngine::UpdateContentFromServerBlocking(int a) {
    std::wstringstream info;
    info << "CDFEngine: called UpdateContentFromServerBlocking(\"" << a <<");";
    return;
}
int CDFEngine::GetEngineParameter(int a, int b, short c) {
    std::wstringstream info;
    info << "CDFEngine: called GetEngineParameter(" << a << ", " << b << ", " << c << ");";
    return 0;
}

int CDFEngine::SetEngineParameter(int a, int b, int c) {
    std::wstringstream info;
    info << "CDFEngine: called SetEngineParameter(" << a << ", " << b << ", " << c << ");";
    OutputDebugString(info.str().c_str());
    return 0;
}

void CDFEngine::SetNetworkDownloadLimit(int a, int b) {
    std::wstringstream info;
    info << "CDFEngine: called SetNetworkDownloadLimit(" << a << ", " << b << ");";
    OutputDebugString(info.str().c_str());
    return;
}
void CDFEngine::SetNetworkUploadLimit(int a, int b) {
    std::wstringstream info;
    info << "CDFEngine: called SetNetworkUploadLimit(" << a << ", " << b << ");";
    OutputDebugString(info.str().c_str());
    return;
}
void CDFEngine::SetNetworkEnable(int a, int b) {
    std::wstringstream info;
    info << "CDFEngine: called SetNetworkEnable(" << a << ", " << b << ");";
    OutputDebugString(info.str().c_str());
    return;
}

void* CDFEngine::dtor(void* self, int b) {
    std::wstringstream info;
    info << "CDFEngine: called dtor(" << b << ");";
    OutputDebugString(info.str().c_str());
    return self;
}