#ifndef MAPOBJNOMOVE_H
#define MAPOBJNOMOVE_H

#include "Sato/GeographyObj.h"

class TMapObjNoMove : public GeographyObj {
public:
    struct SObjList {
        u32 objID;
        const char *fileName;
    };

    TMapObjNoMove(const CrsData::SObject &); // 0x802b5b88
    ~TMapObjNoMove();                        // 0x802b5bd0

    virtual void reset();                    // 0x802b5c50
    virtual void calc();                     // 0x802b5ce8
    virtual const char *getBmdFileName();     // 0x802b5c9c

    static SObjList sObjList[];
}; // class TMapObjNoMove
#endif // MAPOBJNOMOVE_H
