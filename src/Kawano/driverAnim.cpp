#include "Kawano/driver.h"

// MJB - Placeholders for functions used in KartCtrlInfo.

bool DriverModel::IsChange() {
    if (IsChangeFront() != 0) {
        return true;
    } else {
        return IsChangeBack() != 0;
    }
}

int DriverModel::IsChangeFront() {
    switch (mState) {
    case 6:
    case 97:
    case 99:
    case 100:
        return 1;
    case 101:
    case 103:
    case 121:
        return 1;
    }
    return 0;
}

int DriverModel::IsChangeBack() {
    switch (mState) {
    case 5:
    case 96:
    case 98:
    case 99:
        return 1;
    case 100:
    case 102:
    case 122:
        return 1;
    }
    return 0;
}
