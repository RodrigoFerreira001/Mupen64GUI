#pragma once

#include <string>

class VideoRice{
private:
    // Mupen64Plus Rice Video Plugin config parameter version number
    int version;
    void setVersion(int version);
    int getVersion();

    // Frame Buffer Emulation (0=ROM default, 1=disable)
    int frameBufferSetting;
    void setFrameBufferSetting(int frameBufferSetting);
    int getFrameBufferSetting();

    // Frequency to write back the frame buffer (0=every frame, 1=every other frame, etc)
    int frameBufferWriteBackControl;
    void setFrameBufferWriteBackControl(int frameBufferWriteBackControl);
    int getFrameBufferWriteBackControl();

    // Render-to-texture emulation (0=none, 1=ignore, 2=normal, 3=write back, 4=write back and reload)
    int renderToTexture;
    void setRenderToTexture(int renderToTexture);
    int getRenderToTexture();

    // Control when the screen will be updated (0=ROM default, 1=VI origin update, 2=VI origin change,
    // 3=CI change, 4=first CI change, 5=first primitive draw, 6=before screen clear, 7=after screen drawn)
    int screenUpdateSetting;
    void setScreenUpdateSetting(int screenUpdateSetting);
    int getScreenUpdateSetting();

    // Force to use normal alpha blender
    bool normalAlphaBlender;
    void setNormalAlphaBlender(bool normalAlphaBlender);
    bool isNormalAlphaBlender();

    // Use a faster algorithm to speed up texture loading and CRC computation
    bool fastTextureLoading;

    // Use different texture coordinate clamping code
    bool accurateTextureMapping;

    // Force emulated frame buffers to be in N64 native resolution
    bool inN64Resolution;

    // Try to reduce Video RAM usage (should never be used)
    bool saveVRAM;

    // Enable this option to have better render-to-texture quality
    bool doubleSizeForSmallTxtrBuf;

    // Force to use normal color combiner
    bool defaultCombinerDisable;

    // Enable game-specific settings from INI file
    bool enableHacks;

    // If enabled, graphics will be drawn in WinFrame mode instead of solid and texture mode
    bool winFrameMode;

    // N64 Texture Memory Full Emulation (may fix some games, may break others)
    bool fullTMEMEmulation;

    // Enable vertex clipper for fog operations
    bool openGLVertexClipper;

    // Enable/Disable SSE optimizations for capable CPUs
    bool enableSSE;

    // If this option is enabled, the plugin will skip every other frame
    bool skipFrame;

    // If enabled, texture enhancement will be done only for TxtRect ucode
    bool texRectOnly;

    // If enabled, texture enhancement will be done only for textures width+height<=128
    bool smallTextureOnly;

    // Select hi-resolution textures based only on the CRC and ignore format+size information (Glide64 compatibility)
    bool LoadHiResCRCOnly;

    // Enable hi-resolution texture file loading
    bool LoadHiResTextures;

    // Enable texture dumping
    bool dumpTexturesToFiles;

    // Display On-screen FPS
    bool ShowFPS;

    // Use Mipmapping? 0=no, 1=nearest, 2=bilinear, 3=trilinear
    int mipmapping;

    // Enable, Disable or Force fog generation (0=Disable, 1=Enable n64 choose, 2=Force Fog)
    int fogMethod;

    // Force to use texture filtering or not (0=auto: n64 choose, 1=force no filtering, 2=force filtering)
    int forceTextureFilter;

    // Primary texture enhancement filter (0=None, 1=2X, 2=2XSAI, 3=HQ2X, 4=LQ2X, 5=HQ4X,
    //6=Sharpen, 7=Sharpen More, 8=External, 9=Mirrored)
    int TextureEnhancement;

    // Secondary texture enhancement filter (0 = none, 1-4 = filtered)
    int textureEnhancementControl;

    // Color bit depth to use for textures (0=default, 1=32 bits, 2=16 bits)
    int textureQuality;

    // Z-buffer depth (only 16 or 32)
    int openGLDepthBufferSetting;

    // Enable/Disable MultiSampling (0=off, 2,4,8,16=quality)
    int multiSampling;

    // Color bit depth for rendering window (0=32 bits, 1=16 bits)
    int colorQuality;

    // OpenGL level to support (0=auto, 1=OGL_1.1, 2=OGL_1.4, 3=OGL_FRAGMENT_PROGRAM)
    int openGLRenderSetting;

    // Enable/Disable Anisotropic Filtering for Mipmapping (0=no filtering, 2-16=quality).
    // This is uneffective if Mipmapping is 0. If the given value is to high to be supported
    // by your graphic card, the value will be the highest value your graphic card can support.
    // Better result with Trilinear filtering
    int anisotropicFiltering;

    // If true, use polygon offset values specified below
    bool forcePolygonOffset;

    // Specifies a scale factor that is used to create a variable depth offset for each polygon
    int polygonOffsetFactor;

    // Is multiplied by an implementation-specific value to create a constant depth offset
    int polygonOffsetUnits;
public:
};
