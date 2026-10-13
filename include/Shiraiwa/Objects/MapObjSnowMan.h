#ifndef MAPOBJSNOWMAN_H
#define MAPOBJSNOWMAN_H

#include "Shiraiwa/Objects/MapObjHioNode.h"
#include "Sato/J3DAnmObject.h"

class TMapObjSnowMan : public TMapObjHioNode {
public:
    TMapObjSnowMan(const CrsData::SObject &); // 0x802bc54c
    ~TMapObjSnowMan();                         // 0x802bc5d8

    virtual void loadAnimation();                    // 0x802bc7c0
    virtual void createModel(JKRSolidHeap *, u32);   // 0x802bc74c
    virtual void update();                           // 0x802bc814
    virtual void reset();                            // 0x802bc65c
    virtual void calc();                             // 0x802bc810
    virtual const char *getBmdFileName();            // 0x802bc634

    static J3DDeformData *sSnowManBlsAnmData;
    static J3DAnmCluster *sSnowManBlkAnmData;

private:
    J3DAnmObjCluster mAnmObjCluster;
}; // class TMapObjSnowMan
#endif // MAPOBJSNOWMAN_H
