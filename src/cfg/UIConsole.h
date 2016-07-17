#pragma once

#include <string>

class UIConsole{
private:
    // Mupen64Plus UI-Console config parameter set version number.  Please don't change this version number.
    int *version;

    // Directory in which to search for plugins
    string *pluginDir;

    // Filename of video plugin
    string *videoPlugin;

    // Filename of audio plugin
    string *audioPlugin;

    // Filename of input plugin
    string *inputPlugin;

    // Filename of RSP plugin
    string *rspPlugin;
public:
    UIConsole();
    ~UIConsole();

    void setVersion(int version);
    int getVersion();

    void setPluginDir(string pluginDir);
    string getPluginDir();

    void setVideoPlugin(string videoPlugin);
    string getVideoPlugin();

    void setAudioPlugin(string audioPlugin);
    string getAudioPlugin();

    void setInputPlugin(string inputPlugin);
    string getInputPlugin();

    void setRspPlugin(string rspPlugin);
    string getRspPlugin();
};
