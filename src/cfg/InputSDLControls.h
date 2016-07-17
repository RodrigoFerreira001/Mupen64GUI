#pragma once

#include <string>

class InputSDLControls{
private:
  // Mupen64Plus SDL Input Plugin config parameter version number.  Please don't change this version number.
  int *version;

  // Controller configuration mode: 0=Fully Manual, 1=Auto with named SDL Device, 2=Fully automatic
  int *mode;

  // Specifies which joystick is bound to this controller: -1=No joystick, 0 or more= SDL Joystick number
  //Hodor
  int *device;

  // SDL joystick name (or Keyboard)
  string *name;

  // Specifies whether this controller is 'plugged in' to the simulated N64
  bool *plugged;

  // Specifies which type of expansion pak is in the controller: 1=None, 2=Mem pak, 5=Rumble pak
  int *plugin;

  // If True, then mouse buttons may be used with this controller
  bool *mouse;

  // Scaling factor for mouse movements.  For X, Y axes.
  string *mouseSensitivity;

  // The minimum absolute value of the SDL analog joystick axis to move the N64 controller axis value from 0.  For X, Y axes.
  string *analogDeadzone;

  // An absolute value of the SDL joystick axis >= AnalogPeak will saturate the N64 controller axis value (at 80).
  //For X, Y axes. For each axis, this must be greater than the corresponding AnalogDeadzone value
  string *analogPeak;

  // Digital button configuration mappings
  string *dPadR;
  string *dPadL;
  string *dPadD;
  string *dPadU;
  string *startButton;
  string *zTrig;
  string *bButton;
  string *aButton;
  string *cButtonR;
  string *cButtonL;
  string *cButtonD;
  string *cButtonU;
  string *rTrig;
  string *lTrig;
  string *mempakSwitch;
  string *rumblepakSwitch;

  // Analog axis configuration mappings
  string *xAxis;
  string *yAxis;

public:
    InputSDLControls();
    ~InputSDLControls();

    void setVersion(int version, int input);
    int getVersion(int input);

    void setMode(int mode, int input);
    int getMode(int input);

    void setDevice(int device, int input);
    int getDevice(int input);

    void setName(string name, int input);
    string getName(int input);

    void setPlugged(bool plugged, int input);
    bool isPlugged(int input);

    void setPlugin(int plugin, int input);
    int getPlugin(int input);

    void setMouseEnable(bool mouse, int input);
    bool isMouseEnable(int input);

    void setMouseSensivity(string mouseSensitivity, int input);
    string getMouseSensivity(int input);

    void setAnalogDeadzone(string analogDeadzone, int input);
    string getAnalogDeadzone(int input);

    void setAnalogPeak(string analogPeak, int input);
    string getAnalogPeak(int input);

    void setDPadR(string dPadR, int input);
    string getDPadR(int input);

    void setDPadL(string dPadL, int input);
    string getDPadL(int input);

    void setDPadD(string dPadD, int input);
    string getDPadD(int input);

    void setDPadU(string dPadU, int input);
    string getDPadU(int input);

    void setStartButton(string startButton, int input);
    string getStartButton(int input);

    void setZTrig(string zTrig, int input);
    string getZTrig(int input);

    void setBButton(string bButton, int input);
    string getBButton(int input);

    void setAButton(string aButton, int input);
    string getAButton(int input);

    void setCButtonR(string cButtonR, int input);
    string getCButtonR(int input);

    void setCButtonL(string cButtonL, int input);
    string getCButtonL(int input);

    void setCButtonD(string cButtonD, int input);
    string getCButtonD(int input);

    void setCButtonU(string cButtonU, int input);
    string getCButtonU(int input);

    void setRTrig(string rTrig, int input);
    string getRTrig(int input);

    void setLTrig(string lTrig, int input);
    string getLTrig(int input);

    void setMempakSwitch(string mempakSwitch, int input);
    string getMempakSwitch(int input);

    void setRumblepakSwitch(string rumblepakSwitch, int input);
    string getRumblepakSwitch(int input);

    void setXAxis(string xAxis, int input);
    string getXAxis(int input);

    void setYAxis(string yAxis, int input);
    string getYAxis(int input);
};
