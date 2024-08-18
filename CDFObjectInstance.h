#pragma once
#include <string>
#include <sstream>
#include "pch.h"

#include "matrix.h"

class CDFObjectInstance
{
    virtual void GetAbsoluteLocalFileName(int self, wchar_t* a, int size);
    virtual void vfunction2();
    virtual void vfunction3();
    virtual void vfunction4();
    virtual void vfunction5();
    virtual void GetTextureInfo(int self, int a, int b);
    virtual void vfunction7();
    virtual void vfunction8();
    virtual void vfunction9();
    virtual void vfunction10();
    virtual void vfunction11();
    virtual void vfunction12();
    virtual void vfunction13();
    virtual void vfunction14();
    virtual void vfunction15();
    virtual void vfunction16();
    virtual void vfunction17();
    virtual void vfunction18();
    virtual void vfunction19();
    virtual void SetLocalBoundingBox(int self, int a, int b);
    virtual void SetLocalLookAt(int self, int a);
    virtual void SetWorldMatrix(int self, float matrix[4][4]);
    virtual int GetContentDeliveryMode(int self);
    virtual void vfunction24();
};