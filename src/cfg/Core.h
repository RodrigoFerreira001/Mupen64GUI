#pragma once
#include <string>

class Core{
private:
    // Mupen64Plus Core config parameter set version number.  Please don't change this version number.
    string *version;

    // Draw on-screen display if True, otherwise don't draw OSD
    bool *onScreenDisplay;

    // Use Pure Interpreter if 0, Cached Interpreter if 1, or Dynamic Recompiler if 2 or more
    int *R4300Emulator;

    // Disable compiled jump commands in dynamic recompiler (should be set to False)
    bool *noCompiledJump;

    // Disable 4MB expansion RAM pack. May be necessary for some games
    bool *disableExtraMem;

    // Increment the save state slot after each save operation
    bool *autoStateSlotIncrement;

    // Activate the R4300 debugger when ROM execution begins, if core was built with Debugger support
    bool *enableDebugger;

    // Save state slot (0-9) to use when saving/loading the emulator state
    int *currentStateSlot;

    // Path to directory where screenshots are saved. If this is blank, the default value
    //of ${UserConfigPath}/screenshot will be used
    string *screenshotPath;

    // Path to directory where emulator save states (snapshots) are saved. If this is blank
    //, the default value of ${UserConfigPath}/save will be used
    string *saveStatePath;

    // Path to directory where SRAM/EEPROM data (in-game saves) are stored. If this is blank
    //, the default value of ${UserConfigPath}/save will be used
    string *saveSRAMPath;

    // Path to a directory to search when looking for shared data files
    string *sharedDataPath;

    // Delay interrupt after DMA SI read/write
    bool *delaySI;

    // Force number of cycles per emulated instruction
    int *countPerOp;

public:
    Core();
    ~Core();

    void setVersion(string version);
    string getVersion();

    void setOnScreenDisplay(bool onScreenDisplay);
    bool isOnScreenDisplay();

    int setR4300Emulator(int R4300Emulator);
    int getR4300Emulator();

    void setNoCompiledJump(bool noCompiledJump);
    bool isNoCompiledJump();

    void setDisableExtraMem(bool disableExtraMem);
    bool isDisableExtraMem();

    void setAutoStateSlotIncrement(bool autoStateSlotIncrement);
    bool isAutoStateSlotIncrement();

    void setEnableDebugger(bool enableDebugger);
    bool isEnableDebugger();

    void setCurrentStateSlot(int currentStateSlot);
    int getCurrentStateSlot();

    void setScreenshotPath(string screenshotPath);
    string getScreenshotPath();

    void setSaveStatePath(string saveStatePath);
    string getSaveStatePath();

    void setSaveSRAMPath(string saveSRAMPath);
    string getSaveSRAMPath();

    void setSharedDataPath(string sharedDataPath);
    string getSharedDataPath();

    void setDelaySI(bool delaySI);
    bool isDelaySI();

    void setCountPerOp(int countPerOp);
    int getCountPerOp();
}
