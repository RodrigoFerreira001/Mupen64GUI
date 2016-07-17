#pragma once

#include <string>

class CoreEvents{
private:
    // Mupen64Plus CoreEvents config parameter set version number.  Please don't change this version number.
    int *version;

    // SDL keysym for stopping the emulator
    int *kbdMappingStop;

    // SDL keysym for switching between fullscreen/windowed modes
    int *kbdMappingFullscreen;

    // SDL keysym for saving the emulator state
    int *kbdMappingSaveState;

    // SDL keysym for loading the emulator state
    int *kbdMappingLoadState;

    // SDL keysym for advancing the save state slot
    int *kbdMappingIncrementSlot;

    // SDL keysym for resetting the emulator
    int *kbdMappingReset;

    // SDL keysym for slowing down the emulator
    int *KbdMappingSpeedDown;

    // SDL keysym for speeding up the emulator
    int *kbdMappingSpeedUp;

    // SDL keysym for taking a screenshot
    int *kbdMappingScreenshot;

    // SDL keysym for pausing the emulator
    int *kbdMappingPause;

    // SDL keysym for muting/unmuting the sound
    int *kbdMappingMute;

    // SDL keysym for increasing the volume
    int *kbdMappingIncreaseVolume;

    // SDL keysym for decreasing the volume
    int *kbdMappingDecreaseVolume;

    // SDL keysym for temporarily going really fast
    int *kbdMappingFastForward;

    // SDL keysym for advancing by one frame when paused
    int *kbdMappingFrameAdvance;

    // SDL keysym for pressing the game shark button
    int *kbdMappingGameshark;

    // Joystick event string for stopping the emulator
    string *joyMappingStop;

    // Joystick event string for switching between fullscreen/windowed modes
    string *joyMappingFullscreen;

    // Joystick event string for saving the emulator state
    string *joyMappingSaveState;

    // Joystick event string for loading the emulator state
    string *joyMappingLoadState;

    // Joystick event string for advancing the save state slot
    string *joyMappingIncrementSlot;

    // Joystick event string for taking a screenshot
    string *joyMappingScreenshot;

    // Joystick event string for pausing the emulator
    string *joyMappingPause;

    // Joystick event string for muting/unmuting the sound
    string *joyMappingMute;

    // Joystick event string for increasing the volume
    string *joyMappingIncreaseVolume;

    // Joystick event string for decreasing the volume
    string *joyMappingDecreaseVolume;

    // Joystick event string for fast-forward
    string *joyMappingFastForward;

    // Joystick event string for pressing the game shark button
    string *joyMappingGameshark;

public:
    CoreEvents();
    ~CoreEvents();

    void setVersion(int version);
    int getVersion();

    void setKbdMappingStop(int kbdMappingStop);
    int getKbdMappingStop();

    void setKbdMappingFullscreen(int kbdMappingFullscreen);
    int getKbdMappingFullscreen();

    void setKbdMappingSaveState(int kbdMappingSaveState);
    int getKbdMappingSaveState();

    void setKbdMappingLoadState(int kbdMappingLoadState);
    int getKbdMappingLoadState();

    void setKbdMappingIncrementSlot(int kbdMappingIncrementSlot);
    int getKbdMappingIncrementSlot();

    void setKbdMappingReset(int kbdMappingReset);
    int getKbdMappingReset();

    void setKbdMappingSpeedDown(int KbdMappingSpeedDown);
    int getKbdMappingSpeedDown();

    void setKbdMappingSpeedUp(int KbdMappingSpeedUp);
    int getKbdMappingSpeedUp();

    void setKbdMappingScreenshot(int kbdMappingScreenshot);
    int getKbdMappingScreenshot();

    void setKbdMappingPause(int kbdMappingPause);
    int getKbdMappingPause();

    void setKbdMappingMute(int kbdMappingMute);
    int getKbdMappingMute();

    void setKbdMappingIncreaseVolume(int kbdMappingIncreaseVolume);
    int getKbdMappingIncreaseVolume();

    void setKbdMappingDecreaseVolume(int kbdMappingDecreaseVolume);
    int getKbdMappingDecreaseVolume();

    void setKbdMappingFastForward(int kbdMappingFastForward);
    int getKbdMappingFastForward();

    void setKbdMappingFrameAdvance(int kbdMappingFrameAdvance);
    int getKbdMappingFrameAdvance();

    void setKbdMappingGameshark(int kbdMappingGameshark);
    int getKbdMappingGameshark();

    void setJoyMappingStop(string joyMappingStop);
    string getJoyMappingStop();

    void setJoyMappingFullscreen(string joyMappingFullscreen);
    string getJoyMappingFullscreen();

    void setJoyMappingSaveState(string joyMappingSaveState);
    string getJoyMappingSaveState();

    void setJoyMappingLoadState(string joyMappingLoadState);
    string getJoyMappingLoadState();

    void setJoyMappingIncrementSlot(string joyMappingIncrementSlot);
    string getJoyMappingIncrementSlot();

    void setJoyMappingReset(string joyMappingReset);
    string getJoyMappingReset();

    void setJoyMappingPause(string joyMappingPause);
    string getJoyMappingPause();

    void setJoyMappingMute(string joyMappingMute);
    string getJoyMappingMute();

    void setJoyMappingIncreaseVolume(string joyMappingIncreaseVolume);
    string getJoyMappingIncreaseVolume();

    void setJoyMappingDecreaseVolume(string joyMappingDecreaseVolume);
    string getJoyMappingDecreaseVolume();

    void setJoyMappingFastForward(string joyMappingFastForward);
    string getJoyMappingFastForward();

    void setJoyMappingGameshark(string joyMappingGameshark);
    string getJoyMappingGameshark();
};
