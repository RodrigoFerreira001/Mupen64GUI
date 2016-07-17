#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "AudioSDLConfig.h"

class ConfigFile{
private:

    AudioSDLConfig audioSDL;




    //CoreEvents
    // Mupen64Plus CoreEvents config parameter set version number.  Please don't change this version number.
    int coreEventsVersion;

    // SDL keysym for stopping the emulator
    int coreEventsKbdMappingStop;

    // SDL keysym for switching between fullscreen/windowed modes
    int coreEventsKbdMappingFullscreen;

    // SDL keysym for saving the emulator state
    int coreEventsKbdMappingSaveState;

    // SDL keysym for loading the emulator state
    Kbd Mapping Load State = 288

    // SDL keysym for advancing the save state slot
    Kbd Mapping Increment Slot = 0

    // SDL keysym for resetting the emulator
    Kbd Mapping Reset = 290

    // SDL keysym for slowing down the emulator
    Kbd Mapping Speed Down = 291

    // SDL keysym for speeding up the emulator
    Kbd Mapping Speed Up = 292

    // SDL keysym for taking a screenshot
    Kbd Mapping Screenshot = 293

    // SDL keysym for pausing the emulator
    Kbd Mapping Pause = 112

    // SDL keysym for muting/unmuting the sound
    Kbd Mapping Mute = 109

    // SDL keysym for increasing the volume
    Kbd Mapping Increase Volume = 93

    // SDL keysym for decreasing the volume
    Kbd Mapping Decrease Volume = 91

    // SDL keysym for temporarily going really fast
    Kbd Mapping Fast Forward = 102

    // SDL keysym for advancing by one frame when paused
    Kbd Mapping Frame Advance = 47

    // SDL keysym for pressing the game shark button
    Kbd Mapping Gameshark = 103

    // Joystick event string for stopping the emulator
    Joy Mapping Stop = ""

    // Joystick event string for switching between fullscreen/windowed modes
    Joy Mapping Fullscreen = ""

    // Joystick event string for saving the emulator state
    Joy Mapping Save State = ""

    // Joystick event string for loading the emulator state
    Joy Mapping Load State = ""

    // Joystick event string for advancing the save state slot
    Joy Mapping Increment Slot = ""

    // Joystick event string for taking a screenshot
    Joy Mapping Screenshot = ""
    // Joystick event string for pausing the emulator
    Joy Mapping Pause = ""
    // Joystick event string for muting/unmuting the sound
    Joy Mapping Mute = ""
    // Joystick event string for increasing the volume
    Joy Mapping Increase Volume = ""
    // Joystick event string for decreasing the volume
    Joy Mapping Decrease Volume = ""
    // Joystick event string for fast-forward
    Joy Mapping Fast Forward = ""
    // Joystick event string for pressing the game shark button
    Joy Mapping Gameshark = ""

public:

    //Default Constructor
    ConfigFile();

    //Default Destructor
    ~ConfigFile();


    


};
