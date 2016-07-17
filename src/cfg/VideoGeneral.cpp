#include "VideoGeneral.h"

VideoGeneral::VideoGeneral(){
    this->fullscreen = new bool;
    this->screenWidth = new int;
    this->screenHeight = new int;
    this->verticalSync = new bool;
}

VideoGeneral::~VideoGeneral(){
    delete this->fullscreen;
    delete this->screenWidth;
    delete this->screenHeight;
    delete this->verticalSync;
}

void VideoGeneral::setFullscreen(bool fullscreen){
    *(this->fullscreen) = fullscreen;
}

bool VideoGeneral::isFullscreen(){
    return *(this->fullscreen);
}

void VideoGeneral::setScreenWidth(int screenWidth){
    *(this->screenWidth) = screenWidth;
}

int VideoGeneral::getScreenWidth(){
    return *(this->screenWidth);
}

void VideoGeneral::setScreenHeight(int screenHeight){
    *(this->screenHeight) = screenHeight;
}

int VideoGeneral::getScreenHeight(){
    return *(this->screenHeight);
}

void VideoGeneral::setVerticalSync(bool verticalSync){
    *(this->verticalSync) = verticalSync;
}

bool VideoGeneral::isVerticalSync(){
    return *(this->verticalSync);
}
