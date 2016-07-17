#include "AudioSDL.h"

AudioSDL::AudioSDL(){
    this->version = new int;
    this->defaultFrequency = new int;
    this->swapChannels = new bool;
    this->primaryBufferSize = new int;
    this->primaryBufferTarget = new int;
    this->secondaryBufferSize = new int;
    this->resample = new string;
    this->volumeControlType = new int;
    this->volumeAdjust = new int;
    this->volumeDefault = new int;
}

AudioSDL::~AudioSDL(){
    delete this->version;
    delete this->defaultFrequency;
    delete this->swapChannels;
    delete this->primaryBufferSize;
    delete this->primaryBufferTarget;
    delete this->secondaryBufferSize;
    delete this->resample;
    delete this->volumeControlType;
    delete this->volumeAdjust;
    delete this->volumeDefault;
}

void AudioSDL::setVersion(int version){
    *(this->version) = version;
}

int AudioSDL::getVersion(){
    return *(this->version);
}

void AudioSDL::setDefaultFrequency(int defaultFrequency){
    *(this->defaultFrequency) = defaultFrequency;
}

int AudioSDL::getDefaultFrequency(){
    return *(this->defaultFrequency);
}

void AudioSDL::setSwapChannels(bool swapChannels){
    *(this->swapChannels) = swapChannels;
}

bool AudioSDL::isSwapChannels(){
    return *(this->swapChannels);
}

void AudioSDL::setPrimaryBufferSize(int primaryBufferSize){
    *(this->primaryBufferSize) = primaryBufferSize;
}

int AudioSDL::getPrimaryBufferSize(){
    return *(this->primaryBufferSize);
}

void AudioSDL::setPrimaryBufferTarget(int primaryBufferTarget){
    *(this->primaryBufferTarget) = primaryBufferTarget;
}

int AudioSDL::getPrimaryBufferTarget(){
    return *(this->primaryBufferTarget);
}

void AudioSDL::setSecondaryBufferSize(int secondaryBufferSize){
    *(this->secondaryBufferSize) = secondaryBufferSize;
}

int AudioSDL::getSecondaryBufferSize(){
    return *(this->secondaryBufferSize);
}

void AudioSDL::setResample(string resample){
    *(this->resample) = resample;
}

string AudioSDL::getResample(){
    return *(this->resample);
}

void AudioSDL::setVolumeControlType(int volumeControlType){
    *(this->volumeControlType) = volumeControlType;
}

int AudioSDL::getVolumeControlType(){
    return *(this->volumeControlType);
}

void AudioSDL::setVolumeAdjust(int volumeAdjust){
    *(this->volumeAdjust) = volumeAdjust;
}

int AudioSDL::getVolumeAdjust(){
    return *(this->volumeAdjust);
}

void AudioSDL::setVolumeDefault(int volumeDefault){
    *(this->volumeDefault) = volumeDefault;
}

int AudioSDL::getVolumeDefault(){
    return *(this->volumeDefault);
}
