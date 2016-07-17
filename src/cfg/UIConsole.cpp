#include "UIConsole.h"

UIConsole::UIConsole(){
    this->version = new int;
    this->pluginDir = new string;
    this->videoPlugin = new string;
    this->audioPlugin = new string;
    this->inputPlugin = new string;
    this->rspPlugin = new string;
}

UIConsole::~UIConsole(){
    delete this->version;
    delete this->pluginDir;
    delete this->videoPlugin;
    delete this->audioPlugin;
    delete this->inputPlugin;
    delete this->rspPlugin;
}

void UIConsole::setVersion(int version){
    *(this->version) = version;
}

int UIConsole::getVersion(){
    return *(this->version);
}

void UIConsole::setPluginDir(string pluginDir){
    *(this->pluginDir) = pluginDir;
}

string UIConsole::getPluginDir(){
    return *(this->pluginDir);
}

void UIConsole::setVideoPlugin(string videoPlugin){
    *(this->videoPlugin) = videoPlugin;
}

string UIConsole::getVideoPlugin(){
    return *(this->videoPlugin);
}

void UIConsole::setAudioPlugin(string audioPlugin){
    *(this->audioPlugin) = audioPlugin;
}

string UIConsole::getAudioPlugin(){
    return *(this->audioPlugin);
}

void UIConsole::setInputPlugin(string inputPlugin){
    *(this->inputPlugin) = inputPlugin;
}

string UIConsole::getInputPlugin(){
    return *(this->inputPlugin);
}

void UIConsole::setRspPlugin(string rspPlugin){
    *(this->rspPlugin) = rspPlugin;
}

string UIConsole::getRspPlugin(){
    return *(this->rspPlugin);
}
