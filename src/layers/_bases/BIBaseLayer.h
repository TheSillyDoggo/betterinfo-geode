#pragma once

#include <Geode/Bindings.hpp>

using namespace geode::prelude;

class BIBaseLayer : public cocos2d::CCLayer {
protected:
    virtual bool init(bool TL = true, bool TR = true, bool BL = true, bool BR = true);
    virtual void keyBackClicked();
    void onBack(cocos2d::CCObject*);
public:
    static BIBaseLayer* create(bool TL = true, bool TR = true, bool BL = true, bool BR = true);
    static cocos2d::CCScene* scene(bool TL = true, bool TR = true, bool BL = true, bool BR = true);
    void setCorners(bool TL, bool TR, bool BL, bool BR);

    CCSprite* m_cornerBL = nullptr;
    CCSprite* m_cornerBR = nullptr;
    CCSprite* m_cornerTL = nullptr;
    CCSprite* m_cornerTR = nullptr;
};