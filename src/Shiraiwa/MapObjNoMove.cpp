#include "Shiraiwa/Objects/MapObjNoMove.h"

#include <JSystem/JAudio/JASFakeMatch2.h>

TMapObjNoMove::SObjList TMapObjNoMove::sObjList[] = {
    {0x1199, "/Objects/DonkyWood.bmd"},
    {0x1070, "/Objects/Wl_Dokan1.bmd"},
    {0x13f3, "/Objects/Lights1.bmd"},
    {0x138c, "/Objects/DeBalloon1.bmd"},
};

TMapObjNoMove::TMapObjNoMove(const CrsData::SObject &obj) : GeographyObj(obj) {
    setObjFlagSimpleDraw();
}

TMapObjNoMove::~TMapObjNoMove() {}

void TMapObjNoMove::reset() {
    GeographyObj::resetObject();
    clrObjFlagCheckGeoHitting();
    clrObjFlagCheckItemHitting();
    clrAllCheckKartHitFlag();
}

const char *TMapObjNoMove::getBmdFileName() {
    for (int i = 0; i < 4; i++) {
        if (mObjData->objID == sObjList[i].objID) {
            return sObjList[i].fileName;
        }
    }
    return nullptr;
}

void TMapObjNoMove::calc() {}
