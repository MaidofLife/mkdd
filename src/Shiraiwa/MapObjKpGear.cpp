#include "Shiraiwa/Objects/MapObjKpGear.h"

#include "Sato/AnmController.h"
#include "Sato/ObjUtility.h"

#include <JSystem/JAudio/JASFakeMatch2.h>

J3DAnmTransform *TMapObjKpGear::sKpGearBckAnmTrans;
J3DMtxCalc *TMapObjKpGear::sKpGearBckMtxCalc;

TMapObjKpGear::TMapObjKpGear(const CrsData::SObject &obj) : TMapObjHioNode(obj) {
    GeographyObj::NewAnmCtrl();
}

TMapObjKpGear::~TMapObjKpGear() {}

const char *TMapObjKpGear::getBmdFileName() {
    static const char *cBmdName = "/Objects/KpGear1.bmd";
    return cBmdName;
}

void TMapObjKpGear::reset() {
    GeographyObj::reset();
    GeographyObj::clrObjFlagHidding();
    GeographyObj::clrObjFlagCheckItemHitting();
    GeographyObj::clrAllCheckKartHitFlag();
    GeographyObj::getAnmCtrl()->Reset();
}

void TMapObjKpGear::loadAnimation() {
    J3DModelData *mdlData = mModel.getModelData();
    void *bck = ObjUtility::getPtrCourseArc("/Objects/KpGear1.bck");
    J3DAnmObjTrans::setupTransAnmData(&sKpGearBckAnmTrans, &sKpGearBckMtxCalc, mdlData, bck);
}

void TMapObjKpGear::createModel(JKRSolidHeap *heap, u32 viewNo) {
    mModel.createModel(heap, viewNo, 0);
    GeographyObj::getAnmCtrl()->InitRegistration(1, &mModel);
    GeographyObj::getAnmCtrl()->RegisterTrans(0, sKpGearBckAnmTrans, sKpGearBckMtxCalc);
    GeographyObj::getAnmCtrl()->getFrameCtrl(0)->setAttribute(2);
}

void TMapObjKpGear::calc() {}
