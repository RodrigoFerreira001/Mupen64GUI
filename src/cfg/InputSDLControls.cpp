#include "InputSDLControls.h"

InputSDLControls::InputSDLControls(){
    this->version = new int[4];
    this->mode = new int[4];
    this->device = new int[4];
    this->name = new string[4];
    this->plugged = new bool[4];
    this->plugin = new int[4];
    this->mouse = new bool[4];
    this->mouseSensitivity = new string[4];
    this->analogDeadzone = new string[4];
    this->analogPeak = new string[4];
    this->dPadR = new string[4];
    this->dPadL = new string[4];
    this->dPadD = new string[4];
    this->dPadU = new string[4];
    this->startButton = new string[4];
    this->zTrig = new string[4];
    this->bButton = new string[4];
    this->aButton = new string[4];
    this->cButtonR = new string[4];
    this->cButtonL = new string[4];
    this->cButtonD = new string[4];
    this->cButtonU = new string[4];
    this->rTrig = new string[4];
    this->lTrig = new string[4];
    this->mempakSwitch = new string[4];
    this->rumblepakSwitch = new string[4];
    this->xAxis = new string[4];
    this->yAxis = new string[4];
}

InputSDLControls::~InputSDLControls(){
    delete[] this->version;
    delete[] this->mode;
    delete[] this->device;
    delete[] this->name;
    delete[] this->plugged;
    delete[] this->plugin;
    delete[] this->mouse;
    delete[] this->mouseSensitivity;
    delete[] this->analogDeadzone;
    delete[] this->analogPeak;
    delete[] this->dPadR;
    delete[] this->dPadL;
    delete[] this->dPadD;
    delete[] this->dPadU;
    delete[] this->startButton;
    delete[] this->zTrig;
    delete[] this->bButton;
    delete[] this->aButton;
    delete[] this->cButtonR;
    delete[] this->cButtonL;
    delete[] this->cButtonD;
    delete[] this->cButtonU;
    delete[] this->rTrig;
    delete[] this->lTrig;
    delete[] this->mempakSwitch;
    delete[] this->rumblepakSwitch;
    delete[] this->xAxis;
    delete[] this->yAxis;
}

void InputSDLControls::setVersion(int version, int input){
    this->version[input] = version;
}

int InputSDLControls::getVersion(int input){
    return this->version[input];
}

void InputSDLControls::setMode(int mode, int input){
    this->mode[input] = mode;
}

int InputSDLControls::getMode(int input){
    return this->mode[input];
}

void InputSDLControls::setDevice(int device, int input){
    this->device[input] = device;
}

int InputSDLControls::getDevice(int input){
    return this->device[input];
}

void InputSDLControls::setName(string name, int input){
    this->name[input] = name;
}

string InputSDLControls::getName(int input){
    return this->name[input];
}

void InputSDLControls::setPlugged(bool plugged, int input){
    this->plugged[input] = plugged;
}

bool InputSDLControls::isPlugged(int input){
    return this->plugged[input];
}

void InputSDLControls::setPlugin(int plugin, int input){
    this->plugin[input] = plugin;
}

int InputSDLControls::getPlugin(int input){
    return this->plugin[input];
}

void InputSDLControls::setMouseEnable(bool mouse, int input){
    this->mouse[input] = mouse;
}

bool InputSDLControls::isMouseEnable(int input){
    return this->mouse[input];
}

void InputSDLControls::setMouseSensivity(string mouseSensitivity, int input){
    this->mouseSensitivity[input] = mouseSensitivity;
}

string gInputSDLControls::etMouseSensivity(int input){
    return this->mouseSensitivity[input];
}

void sInputSDLControls::etAnalogDeadzone(string analogDeadzone, int input){
    this->analogDeadzone[input] = analogDeadzone;
}

string InputSDLControls::getAnalogDeadzone(int input){
    return this->analogDeadzone[input];
}

void InputSDLControls::setAnalogPeak(string analogPeak, int input){
    this->analogPeak[input] = analogPeak;
}

string InputSDLControls::getAnalogPeak(int input){
    return this->analogPeak[input];
}

void InputSDLControls::setDPadR(string dPadR, int input){
    this->dPadR[input] = dPadR;
}

string InputSDLControls::getDPadR(int input){
    return this->dPadR[input];
}

void InputSDLControls::setDPadL(string dPadL, int input){
    this->dPadL[input] = dPadL;
}

string InputSDLControls::getDPadL(int input){
    return this->dPadL[input];
}

void InputSDLControls::setDPadD(string dPadD, int input){
    this->dPadD[input] = dPadD;
}

string InputSDLControls::getDPadD(int input){
    return this->dPadD[input];
}

void InputSDLControls::setDPadU(string dPadU, int input){
    this->dPadU[input] = dPadU;
}

string InputSDLControls::getDPadU(int input){
    return this->dPadU[input];
}

void InputSDLControls::setStartButton(string startButton, int input){
    this->startButton[input] = startButton;
}

string InputSDLControls::getStartButton(int input){
    return this->startButton[input];
}

void InputSDLControls::setZTrig(string zTrig, int input){
    this->zTrig[input] = zTrig;
}

string InputSDLControls::getZTrig(int input){
    return this->zTrig[input];
}

void InputSDLControls::setBButton(string bButton, int input){
    this->bButton[input] = bButton;
}

string InputSDLControls::getBButton(int input){
    return this->bButton[input];
}

void InputSDLControls::setAButton(string aButton, int input){
    this->aButton[input] = aButton;
}

string InputSDLControls::getAButton(int input){
    return this->aButton[input];
}

void InputSDLControls::setCButtonR(string cButtonR, int input){
    this->cButtonR[input] = cButtonR;
}

string InputSDLControls::getCButtonR(int input){
    return this->cButtonR[input];
}

void InputSDLControls::setCButtonL(string cButtonL, int input){
    this->cButtonL[input] = cButtonL;
}

string InputSDLControls::getCButtonL(int input){
    return this->cButtonL[input];
}

void InputSDLControls::setCButtonD(string cButtonD, int input){
    this->cButtonD[input] = cButtonD;
}

string InputSDLControls::getCButtonD(int input){
    return this->cButtonD[input];
}

void InputSDLControls::setCButtonU(string cButtonU, int input){
    this->cButtonU[input] = cButtonU;
}

string InputSDLControls::getCButtonU(int input){
    return this->cButtonU[input];
}

void InputSDLControls::setRTrig(string rTrig, int input){
    this->rTrig[input] = rTrig;
}

string InputSDLControls::getRTrig(int input){
    return this->rTrig[input];
}

void InputSDLControls::setLTrig(string lTrig, int input){
    this->lTrig[input] = lTrig;
}

string InputSDLControls::getLTrig(int input){
    return this->lTrig[input];
}

void InputSDLControls::setMempakSwitch(string mempakSwitch, int input){
    this->mempakSwitch[input] = mempakSwitch;
}

string InputSDLControls::getMempakSwitch(int input){
    return this->mempakSwitch[input];
}

void InputSDLControls::setRumblepakSwitch(string rumblepakSwitch, int input){
    this->rumblepakSwitch[input] = rumblepakSwitch;
}

string InputSDLControls::getRumblepakSwitch(int input){
    return this->rumblepakSwitch[input];
}

void InputSDLControls::setXAxis(string xAxis, int input){
    this->xAxis[input] = xAxis;
}

string InputSDLControls::getXAxis(int input){
    return this->xAxis[input];
}

void InputSDLControls::setYAxis(string yAxis, int input){
    this->yAxis[input] = yAxis;
}

string InputSDLControls::getYAxis(int input){
    return this->yAxis[input];
}
