#include "CoreEvents.h"

CoreEvents::CoreEvents(){
    this->version = new int;
    this->kbdMappingStop = new int;
    this->kbdMappingFullscreen = new int;
    this->kbdMappingSaveState = new int;
    this->kbdMappingLoadState = new int;
    this->kbdMappingIncrementSlot = new int;
    this->kbdMappingReset = new int;
    this->KbdMappingSpeedDown = new int;
    this->kbdMappingSpeedUp = new int;
    this->kbdMappingScreenshot = new int;
    this->kbdMappingPause = new int;
    this->kbdMappingMute = new int;
    this->kbdMappingIncreaseVolume = new int;
    this->kbdMappingDecreaseVolume = new int;
    this->kbdMappingFastForward = new int;
    this->kbdMappingFrameAdvance = new int;
    this->kbdMappingGameshark = new int;
    this->joyMappingStop = new string;
    this->joyMappingFullscreen = new string;
    this->joyMappingSaveState = new string;
    this->joyMappingLoadState = new string;
    this->joyMappingIncrementSlot = new string;
    this->joyMappingScreenshot = new string;
    this->joyMappingPause = new string;
    this->joyMappingMute = new string;
    this->joyMappingIncreaseVolume = new string;
    this->joyMappingDecreaseVolume = new string;
    this->joyMappingFastForward = new string;
    this->joyMappingGameshark = new string;
}

CoreEvents::~CoreEvents(){
    delete this->version;
    delete this->kbdMappingStop;
    delete this->kbdMappingFullscreen;
    delete this->kbdMappingSaveState;
    delete this->kbdMappingLoadState;
    delete this->kbdMappingIncrementSlot;
    delete this->kbdMappingReset;
    delete this->KbdMappingSpeedDown;
    delete this->kbdMappingSpeedUp;
    delete this->kbdMappingScreenshot;
    delete this->kbdMappingPause;
    delete this->kbdMappingMute;
    delete this->kbdMappingIncreaseVolume;
    delete this->kbdMappingDecreaseVolume;
    delete this->kbdMappingFastForward;
    delete this->kbdMappingFrameAdvance;
    delete this->kbdMappingGameshark;
    delete this->joyMappingStop;
    delete this->joyMappingFullscreen;
    delete this->joyMappingSaveState;
    delete this->joyMappingLoadState;
    delete this->joyMappingIncrementSlot;
    delete this->joyMappingScreenshot;
    delete this->joyMappingPause;
    delete this->joyMappingMute;
    delete this->joyMappingIncreaseVolume;
    delete this->joyMappingDecreaseVolume;
    delete this->joyMappingFastForward;
    delete this->joyMappingGameshark;
}

void CoreEvents::setVersion(int version){
    *(this->version) = version;
}

int CoreEvents::getVersion(){
    return *(this->version);
}

void CoreEvents::setKbdMappingStop(int kbdMappingStop){
    *(this->kbdMappingStop) = kbdMappingStop;
}

int CoreEvents::getKbdMappingStop(){
    return *(this->kbdMappingStop);
}

void CoreEvents::setKbdMappingFullscreen(int kbdMappingFullscreen){
    *(this->kbdMappingFullscreen) = kbdMappingFullscreen;
}

int CoreEvents::getKbdMappingFullscreen(){
    return *(this->kbdMappingFullscreen);
}

void CoreEvents::setKbdMappingSaveState(int kbdMappingSaveState){
    *(this->kbdMappingSaveState) = kbdMappingSaveState;
}

int CoreEvents::getKbdMappingSaveState(){
    return *(this->kbdMappingSaveState);
}

void CoreEvents::setKbdMappingLoadState(int kbdMappingLoadState){
    *(this->kbdMappingLoadState) = kbdMappingLoadState;
}

int CoreEvents::getKbdMappingLoadState(){
    return *(this->kbdMappingLoadState);
}

void CoreEvents::setKbdMappingIncrementSlot(int kbdMappingIncrementSlot){
    *(this->kbdMappingIncrementSlot) = kbdMappingIncrementSlot;
}

int CoreEvents::getKbdMappingIncrementSlot(){
    return *(this->kbdMappingIncrementSlot);
}

void CoreEvents::setKbdMappingReset(int kbdMappingReset){
    *(this->kbdMappingReset) = kbdMappingReset;
}

int CoreEvents::getKbdMappingReset(){
    return *(this->kbdMappingReset);
}

void CoreEvents::setKbdMappingSpeedDown(int KbdMappingSpeedDown){
    *(this->KbdMappingSpeedDown) = KbdMappingSpeedDown;
}

int CoreEvents::getKbdMappingSpeedDown(){
    return *(this->KbdMappingSpeedDown);
}

void CoreEvents::setKbdMappingSpeedUp(int KbdMappingSpeedUp){
    *(this->kbdMappingSpeedUp) = kbdMappingSpeedUp;
}

int CoreEvents::getKbdMappingSpeedUp(){
    return *(this->kbdMappingSpeedUp);
}

void CoreEvents::setKbdMappingScreenshot(int kbdMappingScreenshot){
    *(this->kbdMappingScreenshot) = kbdMappingScreenshot;
}

int CoreEvents::getKbdMappingScreenshot(){
    return *(this->kbdMappingScreenshot);
}

void CoreEvents::setKbdMappingPause(int kbdMappingPause){
    *(this->kbdMappingPause) = kbdMappingPause;
}

int CoreEvents::getKbdMappingPause(){
    return *(this->kbdMappingPause);
}

void CoreEvents::setKbdMappingMute(int kbdMappingMute){
    *(this->kbdMappingMute) = kbdMappingMute;
}

int CoreEvents::getKbdMappingMute(){
    return *(this->kbdMappingMute);
}

void CoreEvents::setKbdMappingIncreaseVolume(int kbdMappingIncreaseVolume){
    *(this->kbdMappingIncreaseVolume) = kbdMappingIncreaseVolume;
}

int CoreEvents::getKbdMappingIncreaseVolume(){
    return *(this->kbdMappingIncreaseVolume);
}

void CoreEvents::setKbdMappingDecreaseVolume(int kbdMappingDecreaseVolume){
    *(this->kbdMappingDecreaseVolume) = kbdMappingDecreaseVolume;
}

int CoreEvents::getKbdMappingDecreaseVolume(){
    return *(this->kbdMappingDecreaseVolume);
}

void CoreEvents::setKbdMappingFastForward(int kbdMappingFastForward){
    *(this->kbdMappingFastForward) = kbdMappingFastForward;
}

int CoreEvents::getKbdMappingFastForward(){
    return *(this->kbdMappingFastForward);
}

void CoreEvents::setKbdMappingFrameAdvance(int kbdMappingFrameAdvance){
    *(this->kbdMappingFrameAdvance) = kbdMappingFrameAdvance;
}

int CoreEvents::getKbdMappingFrameAdvance(){
    return *(this->kbdMappingFrameAdvance);
}

void CoreEvents::setKbdMappingGameshark(int kbdMappingGameshark){
    *(this->kbdMappingGameshark) = kbdMappingGameshark;
}

int CoreEvents::getKbdMappingGameshark(){
    return *(this->kbdMappingGameshark);
}

void CoreEvents::setJoyMappingStop(string joyMappingStop){
    *(this->joyMappingStop) = joyMappingStop;
}

string CoreEvents::getJoyMappingStop(){
    return *(this->joyMappingStop);
}

void CoreEvents::setJoyMappingFullscreen(string joyMappingFullscreen){
    *(this->joyMappingFullscreen) = joyMappingFullscreen;
}

string CoreEvents::getJoyMappingFullscreen(){
    return *(this->joyMappingFullscreen);
}

void CoreEvents::setJoyMappingSaveState(string joyMappingSaveState){
    *(this->joyMappingSaveState) = joyMappingSaveState;
}

string CoreEvents::getJoyMappingSaveState(){
    return *(this->joyMappingSaveState);
}

void CoreEvents::setJoyMappingLoadState(string joyMappingLoadState){
    *(this->joyMappingLoadState) = joyMappingLoadState;
}

string CoreEvents::getJoyMappingLoadState(){
    return *(this->joyMappingLoadState);
}

void CoreEvents::setJoyMappingIncrementSlot(string joyMappingIncrementSlot){
    *(this->joyMappingIncrementSlot) = joyMappingIncrementSlot;
}

string CoreEvents::getJoyMappingIncrementSlot(){
    return *(this->joyMappingIncrementSlot);
}

void CoreEvents::setJoyMappingReset(string joyMappingReset){
    *(this->joyMappingReset) = joyMappingReset;
}

string CoreEvents::getJoyMappingReset(){
    return *(this->joyMappingReset);
}

void CoreEvents::setJoyMappingPause(string joyMappingPause){
    *(this->joyMappingPause) = joyMappingPause;
}

string CoreEvents::getJoyMappingPause(){
    return *(this->joyMappingPause);
}

void CoreEvents::setJoyMappingMute(string joyMappingMute){
    *(this->joyMappingMute) = joyMappingMute;
}

string CoreEvents::getJoyMappingMute(){
    return *(this->joyMappingMute);
}

void CoreEvents::setJoyMappingIncreaseVolume(string joyMappingIncreaseVolume){
    *(this->joyMappingIncreaseVolume) = joyMappingIncreaseVolume;
}

string CoreEvents::getJoyMappingIncreaseVolume(){
    return *(this->joyMappingIncreaseVolume);
}

void CoreEvents::setJoyMappingDecreaseVolume(string joyMappingDecreaseVolume){
    *(this->joyMappingDecreaseVolume) = joyMappingDecreaseVolume;
}

string CoreEvents::getJoyMappingDecreaseVolume(){
    return *(this->joyMappingDecreaseVolume);
}

void CoreEvents::setJoyMappingFastForward(string joyMappingFastForward){
    *(this->joyMappingFastForward) = joyMappingFastForward;
}

string CoreEvents::getJoyMappingFastForward(){
    return *(this->joyMappingFastForward);
}

void CoreEvents::setJoyMappingGameshark(string joyMappingGameshark){
    *(this->joyMappingGameshark) = joyMappingGameshark;
}

string CoreEvents::getJoyMappingGameshark(){
    return *(this->joyMappingGameshark);
}
