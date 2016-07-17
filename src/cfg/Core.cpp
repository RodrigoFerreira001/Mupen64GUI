#include "Core.h"

Core::Core(){
    this->version = new string;
    this->onScreenDisplay = new bool;
    this->R4300Emulator = new int;
    this->noCompiledJump = new bool;
    this->disableExtraMem = new bool;
    this->autoStateSlotIncrement = new bool;
    this->enableDebugger = new bool;
    this->currentStateSlot = new int;
    this->screenshotPath = new string;
    this->saveStatePath = new string;
    this->saveSRAMPath = new string;
    this->sharedDataPath = new string;
    this->delaySI = new bool;
    this->countPerOp = new int;
}

Core::~Core(){
    delete this->version;
    delete this->onScreenDisplay;
    delete this->R4300Emulator;
    delete this->noCompiledJump;
    delete this->disableExtraMem;
    delete this->autoStateSlotIncrement;
    delete this->enableDebugger;
    delete this->currentStateSlot;
    delete this->screenshotPath;
    delete this->saveStatePath;
    delete this->saveSRAMPath;
    delete this->sharedDataPath;
    delete this->delaySI;
    delete this->countPerOp;
}

void Core::setVersion(string version){
    *(this->version) = version;
}

string Core::getVersion(){
    return *(this->version);
}

void Core::setOnScreenDisplay(bool onScreenDisplay){
    *(this->onScreenDisplay) = onScreenDisplay;
}

bool Core::isOnScreenDisplay(){
    return *(this->onScreenDisplay);
}

int Core::setR4300Emulator(int R4300Emulator){
    *(this->R4300Emulator) = R4300Emulator;
}

int Core::getR4300Emulator(){
    return *(this->R4300Emulator);
}

void Core::setNoCompiledJump(bool noCompiledJump){
    *(this->noCompiledJump) = noCompiledJump;
}

bool Core::isNoCompiledJump(){
    return *(this->noCompiledJump);
}

void Core::setDisableExtraMem(bool disableExtraMem){
    *(this->disableExtraMem) = disableExtraMem;
}

bool Core::isDisableExtraMem(){
    return *(this->disableExtraMem);
}

void Core::setAutoStateSlotIncrement(bool autoStateSlotIncrement){
    *(this->autoStateSlotIncrement) = autoStateSlotIncrement;
}

bool Core::isAutoStateSlotIncrement(){
    return *(this->autoStateSlotIncrement);
}

void Core::setEnableDebugger(bool enableDebugger){
    *(this->enableDebugger) = enableDebugger;
}

bool Core::isEnableDebugger(){
    return *(this->enableDebugger);
}

void Core::setCurrentStateSlot(int currentStateSlot){
    *(this->currentStateSlot) = currentStateSlot;
}

int Core::getCurrentStateSlot(){
    return *(this->currentStateSlot);
}

void Core::setScreenshotPath(string screenshotPath){
    *(this->screenshotPath) = screenshotPath;
}

string Core::getScreenshotPath(){
    return *(this->screenshotPath);
}

void Core::setSaveStatePath(string saveStatePath){
    *(this->saveStatePath) = saveStatePath;
}

string Core::getSaveStatePath(){
    return *(this->saveStatePath);
}

void Core::setSaveSRAMPath(string saveSRAMPath){
    *(this->saveSRAMPath) = saveSRAMPath;
}

string Core::getSaveSRAMPath(){
    return *(this->saveSRAMPath);
}

void Core::setSharedDataPath(string sharedDataPath){
    *(this->sharedDataPath) = sharedDataPath;
}

string Core::getSharedDataPath(){
    return *(this->sharedDataPath);
}

void Core::setDelaySI(bool delaySI){
    *(this->delaySI) = delaySI;
}

bool Core::isDelaySI(){
    return *(this->delaySI);
}

void Core::setCountPerOp(int countPerOp){
    *(this->countPerOp) = countPerOp;
}

int Core::getCountPerOp(){
    return *(this->countPerOp);
}
