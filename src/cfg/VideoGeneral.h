#pragma once

class VideoGeneral{
private:
    //If true, start game in Fullscreen mode
    bool *fullscreen;

    //Define screen width
    int *screenWidth;

    //Define screen width
    int *screenHeight;

    // If true, activate the SDL_GL_SWAP_CONTROL attribute
    bool *verticalSync;

public:
    VideoGeneral();
    ~VideoGeneral();

    void setFullscreen(bool fullscreen);
    bool isFullscreen();

    void setScreenWidth(int screenWidth);
    int getScreenWidth();

    void setScreenHeight(int screenHeight);
    int getScreenHeight();

    void setVerticalSync(bool verticalSync);
    bool isVerticalSync();
};
