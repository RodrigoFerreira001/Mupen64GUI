#pragma once

#include <string>

class AudioSDL{
private:
    // Mupen64Plus SDL Audio Plugin config parameter version number
    int *version;

    // Frequency which is used if rom doesn't want to change it
    int *defaultFrequency;

    // Swaps left and right channels
    bool *swapChannels;

    // Size of primary buffer in output samples. This is where audio is loaded after it's extracted from n64's memory.
    int *primaryBufferSize;

    // Fullness level target for Primary audio buffer, in equivalent output samples
    int *primaryBufferTarget;

    // Size of secondary buffer in output samples. This is SDL's hardware buffer.
    int *secondaryBufferSize;

    // Audio resampling algorithm. src-sinc-best-quality, src-sinc-medium-quality, src-sinc-fastest, src-zero-order-hold
    //, src-linear, speex-fixed-{10-0}, trivial
    string *resample;

    // Volume control type: 1 = SDL (only affects Mupen64Plus output)  2 = OSS mixer (adjusts master PC volume)
    int *volumeControlType;

    // Percentage change each time the volume is increased or decreased
    int *volumeAdjust;

    // Default volume when a game is started.  Only used if VOLUME_CONTROL_TYPE is 1
    int *volumeDefault;

public:
    AudioSDL();
    ~AudioSDL();

    void setVersion(int version);
    int getVersion();

    void setDefaultFrequency(int defaultFrequency);
    int getDefaultFrequency();

    void setSwapChannels(bool swapChannels);
    bool isSwapChannels();

    void setPrimaryBufferSize(int primaryBufferSize);
    int getPrimaryBufferSize();

    void setPrimaryBufferTarget(int primaryBufferTarget);
    int getPrimaryBufferTarget();

    void setSecondaryBufferSize(int secondaryBufferSize);
    int getSecondaryBufferSize();

    void setResample(string resample);
    string getResample();

    void setVolumeControlType(int volumeControlType);
    int getVolumeControlType();

    void setVolumeAdjust(int volumeAdjust);
    int getVolumeAdjust();

    void setVolumeDefault(int volumeDefault);
    int getVolumeDefault();
};
