#pragma once

#include <cstdint>

struct CAppOwnershipInfo {
    int32_t subId;
    int32_t releaseState;
    uint32_t owner;
    int32_t masterSubscriptionAppId;
    uint32_t trialTime;
    int32_t field5_0x14;
    int32_t field6_0x18;
    uint32_t field7_0x1c;
    uint32_t realOwner;
    bool playable;
    bool licenseExpired;
    bool permanent;
    bool lowViolence;
    bool freeLicense;
    bool regionRestricted;
    bool fromFreeWeekend;
    bool licenseLocked;
    bool licensePending;
    bool retailLicense;
    bool autoGrant;
    bool licensePermanent;
    bool field21_0x30;
    bool field22_0x31;
    bool siteLicense;
    bool field24_0x33;
    bool field25_0x34;
    bool familyShared;
    bool field27_0x36;
    bool field28_0x37;
}; //0x38
