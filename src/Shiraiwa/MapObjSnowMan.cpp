#include "Shiraiwa/Objects/MapObjSnowMan.h"

#include "JSystem/J3D/J3DFrameCtrl.h"
#include "JSystem/J3D/J3DModel.h"
#include "Sato/ObjUtility.h"

#include <JSystem/JAudio/JASFakeMatch2.h>

J3DDeformData *TMapObjSnowMan::sSnowManBlsAnmData;
J3DAnmCluster *TMapObjSnowMan::sSnowManBlkAnmData;

TMapObjSnowMan::TMapObjSnowMan(const CrsData::SObject &obj) : TMapObjHioNode(obj) {}

TMapObjSnowMan::~TMapObjSnowMan() {}

const char *TMapObjSnowMan::getBmdFileName() {
    static const char *cBmdName = "/Objects/Snowman1.bmd";
    return cBmdName;
}

void TMapObjSnowMan::reset() {
    GeographyObj::reset();
    GeographyObj::clrObjFlagHidding();
    GeographyObj::clrObjFlagCheckItemHitting();
    GeographyObj::clrAllCheckKartHitFlag();
    mAnmObjCluster.resetFrame();
}

void TMapObjSnowMan::createModel(JKRSolidHeap *heap, u32 viewNo) {
    mModel.createModel(heap, viewNo, 0);
    J3DAnmObjCluster::setDeformData(&mModel, sSnowManBlsAnmData, false);
    mAnmObjCluster.setExModel(&mModel, sSnowManBlsAnmData);
    mAnmObjCluster.attach(sSnowManBlkAnmData);
    mAnmObjCluster.getFrameCtrl()->setAttribute(2);
}

void TMapObjSnowMan::loadAnimation() {
    void *bls = ObjUtility::getPtrCourseArc("/Objects/Snowman1.bls");
    J3DAnmObjCluster::loadClusterData(&sSnowManBlsAnmData, bls);
    void *blk = ObjUtility::getPtrCourseArc("/Objects/Snowman1.blk");
    J3DAnmObjCluster::loadClusterAnmData(&sSnowManBlkAnmData, blk);
}

void TMapObjSnowMan::calc() {}

void TMapObjSnowMan::update() {
    mAnmObjCluster.update();
    GeographyObj::update();
}
