#include "pch.h"
#include "CDFObjectInstance.h"


void CDFObjectInstance::GetAbsoluteLocalFileName(int self, wchar_t* ret, int size) {
    // used when GetContentDeliveryMode() == 1
    const wchar_t returnValue[256] = L"C:\\sr\\sr2.tga";
    wcscpy_s(ret, size, returnValue);
    std::wstringstream info;
    info << "CDFEngine: called GetAbsoluteLocalFileName(" << ret << ", " << size << ");";
    OutputDebugString(info.str().c_str());
    return;
}

void CDFObjectInstance::GetTextureInfo(int self, int a, int b) {
    // used when GetContentDeliveryMode() != 1
    std::wstringstream info;
    info << "CDFEngine: called GetTextureInfo(" << a << ", " << b << ");";
    OutputDebugString(info.str().c_str());
}

void CDFObjectInstance::SetLocalBoundingBox(int self, int a, int b) {

    std::wstringstream info;
    info << "CDFEngine: called SetLocalBoundingBox(" << a << ", " << b << ");";
    OutputDebugString(info.str().c_str());
}

void CDFObjectInstance::SetLocalLookAt(int self, int a) {

    std::wstringstream info;
    info << "CDFEngine: called SetLocalLookAt(" << a << ");";
    OutputDebugString(info.str().c_str());
}

void CDFObjectInstance::SetWorldMatrix(int self, float matrix[4][4]) {
    std::wstringstream info;
    info << "CDFEngine: called SetWorldMatrix(" << getMaxtrixString(matrix) << ");";
    OutputDebugString(info.str().c_str());
}

int CDFObjectInstance::GetContentDeliveryMode(int self) {
    std::wstringstream info;
    info << "CDFEngine: called GetContentDeliveryMode() -> 1;";
    OutputDebugString(info.str().c_str());
    // return by file
    return 1;
}



void CDFObjectInstance::vfunction2()  {

    std::wstringstream info;
    info << "CDFEngine: called SetWorldMatrix();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction3() {

    std::wstringstream info;
    info << "CDFEngine: called SetWorldMatrix();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction4() {

    std::wstringstream info;
    info << "CDFEngine: called SetWorldMatrix();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction5() {

    std::wstringstream info;
    info << "CDFEngine: called SetWorldMatrix();";
    OutputDebugString(info.str().c_str());
};


void CDFObjectInstance::vfunction7() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction7();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction8() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction8();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction9() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction9();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction10() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction10();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction11() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction11();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction12() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction12();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction13() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction13();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction14() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction14();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction15() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction15();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction16() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction16();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction17() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction17();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction18() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction18();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction19() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction19();";
    OutputDebugString(info.str().c_str());
};
void CDFObjectInstance::vfunction24() {
    std::wstringstream info;
    info << "CDFEngine: called vfunction24();";
    OutputDebugString(info.str().c_str());
};