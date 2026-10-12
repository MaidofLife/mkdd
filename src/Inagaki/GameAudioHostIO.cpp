#include "Inagaki/GameAudioHostIO.h"
#include "Yamamoto/kartPad.h"

#include "JSystem/JAudio/JASFakeMatch3.h"

namespace GameAudio {
    const f32 GA_MULTI_CAMERA_VOL_DOWN_DISTANCE = 10000.0;
    const f32 GA_MULTI_CAMERA_VOL_DOWN_RATE = 0.5f;
}

KartPad::KartPad() {
    mAccelBtn = 0x100;
    mTrigZ = 0x10;
    mBtnB = 0x200;
    mItemMask = 0xc00;
    mBtnB2 = 0x200;
    mFaceBtnsMask = mItemMask | 0x300;
    mBtnY = 0x800;
    mTrigL = 0x40;
    mTrigR = 0x20;
    _4C = 0;
    _50 = 0;
    _51 = 0;
    _52 = 0;
}