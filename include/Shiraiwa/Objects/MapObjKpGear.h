#ifndef MAPOBJKPGEAR_H
#define MAPOBJKPGEAR_H

#include "Shiraiwa/Objects/MapObjHioNode.h"

class AnmController;
class AnmControlTrans;

class TMapObjKpGear : public TMapObjHioNode {
public:
    TMapObjKpGear(const CrsData::SObject &); // 0x802c654c
    ~TMapObjKpGear();                         // 0x802c65c4

    virtual void loadAnimation();             // 0x802c66d0
    virtual void createModel(JKRSolidHeap *, u32); // 0x802c671c
    virtual void reset();                     // 0x802c667c
    virtual void calc();                      // 0x802c6854
    virtual const char *getBmdFileName();     // 0x802c6654

    static J3DAnmTransform *sKpGearBckAnmTrans;
    static J3DMtxCalc *sKpGearBckMtxCalc;
}; // class TMapObjKpGear
#endif // MAPOBJKPGEAR_H
