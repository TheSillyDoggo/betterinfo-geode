#pragma once

#include <Geode/Geode.hpp>

#include "_bases/BIBaseLayer.h"

using namespace geode::prelude;

class BI_DLL CustomCreatorLayer : public BIBaseLayer {
protected:
    virtual bool init();
    void onBack(cocos2d::CCObject*);
    void onFeatured(cocos2d::CCObject*);
    void onFeaturedLite(cocos2d::CCObject*);
    void onMostLiked(cocos2d::CCObject*);
    void onDaily(cocos2d::CCObject*);
    void onWeekly(cocos2d::CCObject*);
    void onFame(cocos2d::CCObject*);
    void onInfo(cocos2d::CCObject*);
    void onSearch(cocos2d::CCObject*);
    void onSearchID(cocos2d::CCObject*);
    void onSettings(cocos2d::CCObject*);
    void onEgg(cocos2d::CCObject*);
public:
    static CustomCreatorLayer* create();
    static cocos2d::CCScene* scene();
};