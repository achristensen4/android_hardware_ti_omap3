/*
 * Copyright (C) Texas Instruments - http://www.ti.com/
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
/**
* @file General3A_Settings.h
*
* This file maps the Camera Hardware Interface to V4L2.
*
*/


#include "OMX_TI_IVCommon.h"
#include "OMX_TI_Common.h"
#include "OMX_TI_Index.h"
#include "TICameraParameters.h"
#include "CameraHal.h"

#ifndef GENERAL_3A_SETTINGS_H
#define GENERAL_3A_SETTINGS_H

#define FOCUS_FACE_PRIORITY OMX_IMAGE_FocusControlMax -1
#define FOCUS_REGION_PRIORITY OMX_IMAGE_FocusControlMax -2
#define WB_FACE_PRIORITY OMX_WhiteBalControlMax -1
#define EXPOSURE_FACE_PRIORITY OMX_ExposureControlMax - 1

namespace android {

/*
*   Effect string constants
*/
const char * effNone              = CameraParameters::EFFECT_NONE;
const char * effNegative          = CameraParameters::EFFECT_NEGATIVE;
const char * effSolarize          = CameraParameters::EFFECT_SOLARIZE;
const char * effSepia             = CameraParameters::EFFECT_SEPIA;
const char * effMono              = CameraParameters::EFFECT_MONO;
const char * effBlackBoard      = CameraParameters::EFFECT_BLACKBOARD;
const char * effWhiteBoard        = CameraParameters::EFFECT_WHITEBOARD;
const char * effAqua                = CameraParameters::EFFECT_AQUA;
const char * effPosterize           = CameraParameters::EFFECT_POSTERIZE;
const char * effNatural           = TICameraParameters::EFFECT_NATURAL;
const char * effVivid             = TICameraParameters::EFFECT_VIVID;
const char * effColourSwap        = TICameraParameters::EFFECT_COLOR_SWAP;
const char * effBlackWhite       = TICameraParameters::EFFECT_BLACKWHITE;

/*
* ISO Modes
*/
const char * isoAuto               = TICameraParameters::ISO_MODE_AUTO;
const char * iso100                = TICameraParameters::ISO_MODE_100;
const char * iso200                = TICameraParameters::ISO_MODE_200;
const char * iso400                = TICameraParameters::ISO_MODE_400;
const char * iso800                = TICameraParameters::ISO_MODE_800;
const char * iso1000               = TICameraParameters::ISO_MODE_1000;
const char * iso1200               = TICameraParameters::ISO_MODE_1200;
const char * iso1600               = TICameraParameters::ISO_MODE_1600;

/*
* Scene modes
*/
const char * sceneManual           = CameraParameters::SCENE_MODE_AUTO;
const char * scenePortrait         = CameraParameters::SCENE_MODE_PORTRAIT;
const char * sceneLandscape        = CameraParameters::SCENE_MODE_LANDSCAPE;
const char * sceneSport            = TICameraParameters::SCENE_MODE_SPORT;
const char * sceneSnow             = CameraParameters::SCENE_MODE_SNOW;
const char * sceneBeach            = CameraParameters::SCENE_MODE_BEACH;
const char * sceneNightPortrait    = CameraParameters::SCENE_MODE_NIGHT_PORTRAIT;
const char * sceneFireworks        = CameraParameters::SCENE_MODE_FIREWORKS;
const char * sceneCandleLight      = CameraParameters::SCENE_MODE_CANDLELIGHT;
const char * sceneNight               = CameraParameters::SCENE_MODE_NIGHT;
const char * sceneParty                 = CameraParameters::SCENE_MODE_PARTY;
const char * sceneSteadyPhoto    = CameraParameters::SCENE_MODE_STEADYPHOTO;
const char * sceneSunset              = CameraParameters::SCENE_MODE_SUNSET;
const char * sceneAction                = CameraParameters::SCENE_MODE_ACTION;
const char * sceneTheatre             = CameraParameters::SCENE_MODE_THEATRE;
const char * sceneCloseup          = TICameraParameters::SCENE_MODE_CLOSEUP;
const char * sceneUnderwater       = TICameraParameters::SCENE_MODE_AQUA;
const char * sceneMood             = TICameraParameters::SCENE_MODE_MOOD;
const char * sceneNightIndoor      = TICameraParameters::SCENE_MODE_NIGHT_INDOOR;
const char * imgSceneDocument      = TICameraParameters::SCENE_MODE_DOCUMENT;
const char * imgSceneBarcode       = TICameraParameters::SCENE_MODE_BARCODE;
const char * vidSceneSuperNight    = TICameraParameters::SCENE_MODE_VIDEO_SUPER_NIGHT;
const char * vidSceneCine          = TICameraParameters::SCENE_MODE_VIDEO_CINE;
const char * vidSceneOldFilm       = TICameraParameters::SCENE_MODE_VIDEO_OLD_FILM;

/*
* Whitebalance modes
*/
const char * whiteBalAuto          = CameraParameters::WHITE_BALANCE_AUTO;
const char * whiteBalDaylight      = CameraParameters::WHITE_BALANCE_DAYLIGHT;
const char * whiteBalCloudy        = CameraParameters::WHITE_BALANCE_CLOUDY_DAYLIGHT;
const char * whiteBalShade         = CameraParameters::WHITE_BALANCE_SHADE;
const char * whiteBalFluorescent   = CameraParameters::WHITE_BALANCE_FLUORESCENT;
const char * whiteBalIncandescent  = CameraParameters::WHITE_BALANCE_INCANDESCENT;
const char * whiteBalTwilight            = CameraParameters::WHITE_BALANCE_TWILIGHT;
const char * whiteBalWarmFluorescent = CameraParameters::WHITE_BALANCE_WARM_FLUORESCENT;
const char * whiteBalFace            = TICameraParameters::WHITE_BALANCE_FACE;
const char * whiteBalSunset        = TICameraParameters::WHITE_BALANCE_SUNSET;
const char * whiteBalHorizon       = TICameraParameters::WHITE_BALANCE_HORIZON;
const char * whiteBalTungsten      = TICameraParameters::WHITE_BALANCE_TUNGSTEN;

/*
* Antibanding modes
*/
const char * antibandingOff        = CameraParameters::ANTIBANDING_OFF;
const char * antibandingAuto       = CameraParameters::ANTIBANDING_AUTO;
const char * antibanding50hz       = CameraParameters::ANTIBANDING_50HZ;
const char * antibanding60hz       = CameraParameters::ANTIBANDING_60HZ;

/*
* Focus modes
*/
const char * focusAuto             = CameraParameters::FOCUS_MODE_AUTO;
const char * focusInfinity         = CameraParameters::FOCUS_MODE_INFINITY;
const char * focusMacro            = CameraParameters::FOCUS_MODE_MACRO;
const char * focusTouch             = TICameraParameters::FOCUS_MODE_TOUCH;
const char * focusPortrait         = TICameraParameters::FOCUS_MODE_PORTRAIT;
const char * focusExtended         = TICameraParameters::FOCUS_MODE_EXTENDED;
const char * focusCAF              = TICameraParameters::FOCUS_MODE_CAF;

/*
* Exposure modes
*/
const char * exposureOff           = TICameraParameters::EXPOSURE_MODE_OFF;
const char * exposureAuto          = TICameraParameters::EXPOSURE_MODE_AUTO;
const char * exposureNight         = TICameraParameters::EXPOSURE_MODE_NIGHT;
const char * exposureBackLight     = TICameraParameters::EXPOSURE_MODE_BACKLIGHT;
const char * exposureSpotLight     = TICameraParameters::EXPOSURE_MODE_SPOTLIGHT;
const char * exposureSports        = TICameraParameters::EXPOSURE_MODE_SPORTS;
const char * exposureSnow          = TICameraParameters::EXPOSURE_MODE_SNOW;
const char * exposureBeach         = TICameraParameters::EXPOSURE_MODE_BEACH;
const char * exposureAperture      = TICameraParameters::EXPOSURE_MODE_APERTURE;
const char * exposureSmallAperture = TICameraParameters::EXPOSURE_MODE_SMALL_APERTURE;

struct userToOMX_LUT{
    const char * userDefinition;
    int         omxDefinition;
};

struct LUTtype{
    int size;
    const userToOMX_LUT *Table;
};

userToOMX_LUT isoUserToOMX[] = {
    {isoAuto, 0},
    {iso100, 100},
    {iso200, 200},
    {iso400, 400},
    {iso800, 800},
    {iso1000, 1000},
    {iso1200, 1200},
    {iso1600, 1600},
};

userToOMX_LUT effects_UserToOMX [] = {
    {  effNone,            OMX_ImageFilterNone         },
    {  effNegative,        OMX_ImageFilterNegative     },
    {  effSolarize,        OMX_ImageFilterSolarize     },
    {  effSepia,           OMX_ImageFilterSepia        },
    {  effMono,            OMX_ImageFilterGrayScale    },
    {  effNatural,         OMX_ImageFilterNatural      },
    {  effVivid,           OMX_ImageFilterVivid        },
    {  effColourSwap,      OMX_ImageFilterColourSwap   },
    { effBlackBoard      ,OMX_TI_ImageFilterBlackBoard },
    { effWhiteBoard      ,OMX_TI_ImageFilterWhiteBoard },
    { effAqua               ,OMX_TI_ImageFilterAqua },
    { effPosterize         ,OMX_TI_ImageFilterPosterize },
    { effBlackWhite     ,OMX_TI_ImageFilterBlackWhite }
};

userToOMX_LUT scene_UserToOMX [] = {
    {  sceneManual        ,OMX_Manual       },
    {  sceneCloseup       ,OMX_Closeup      },
    {  sceneLandscape     ,OMX_Landscape    },
    {  sceneUnderwater    ,OMX_Underwater   },
    {  sceneSport         ,OMX_Sport        },
    {  sceneBeach         ,OMX_SnowBeach    },
    {  sceneSnow          ,OMX_SnowBeach    },
    {  sceneMood          ,OMX_Mood         },
    {  sceneNightPortrait ,OMX_NightPortrait},
    {  sceneNightIndoor   ,OMX_NightIndoor  },
    {  sceneFireworks     ,OMX_Fireworks    },
    {  imgSceneDocument   ,OMX_Document     },
    {  imgSceneBarcode    ,OMX_Barcode      },
    {  vidSceneSuperNight ,OMX_SuperNight   },
    {  vidSceneCine       ,OMX_Cine         },
    {  vidSceneOldFilm    ,OMX_OldFilm      },
    { sceneAction            ,OMX_TI_Action },
    { sceneBeach            ,OMX_TI_Beach },
    { sceneCandleLight     ,OMX_TI_Candlelight },
    { sceneNight               ,OMX_TI_Night },
    { sceneParty               ,OMX_TI_Party },
    { scenePortrait            ,OMX_TI_Portrait },
    { sceneSnow               ,OMX_TI_Snow },
    { sceneSteadyPhoto    ,OMX_TI_Steadyphoto },
    { sceneSunset             ,OMX_TI_Sunset },
    { sceneTheatre             ,OMX_TI_Theatre }
};

userToOMX_LUT whiteBal_UserToOMX [] = {
    { whiteBalAuto           ,OMX_WhiteBalControlAuto          },
    { whiteBalDaylight       ,OMX_WhiteBalControlSunLight      },
    { whiteBalCloudy         ,OMX_WhiteBalControlCloudy        },
    { whiteBalShade          ,OMX_WhiteBalControlShade         },
    { whiteBalTungsten       ,OMX_WhiteBalControlTungsten      },
    { whiteBalFluorescent    ,OMX_WhiteBalControlFluorescent   },
    { whiteBalIncandescent   ,OMX_WhiteBalControlIncandescent  },
    { whiteBalHorizon        ,OMX_WhiteBalControlHorizon },
    { whiteBalShade         ,OMX_TI_WhiteBalControlShade },
    { whiteBalTwilight       ,OMX_TI_WhiteBalControlTwilight },
    { whiteBalWarmFluorescent ,OMX_TI_WhiteBalControlWarmFluorescent },
    { whiteBalFace            ,WB_FACE_PRIORITY },
    { whiteBalSunset        ,OMX_TI_WhiteBalControlSunset }
};

userToOMX_LUT antibanding_UserToOMX [] = {
    { antibandingOff    ,OMX_FlickerCancelOff   },
    { antibandingAuto   ,OMX_FlickerCancelAuto  },
    { antibanding50hz   ,OMX_FlickerCancel50    },
    { antibanding60hz   ,OMX_FlickerCancel60    }
};


userToOMX_LUT focus_UserToOMX [] = {
    { focusAuto     ,OMX_IMAGE_FocusControlAutoLock     },
    { focusInfinity ,OMX_IMAGE_FocusControlAutoInfinity },
    { focusMacro    ,OMX_IMAGE_FocusControAutoMacro     },
    { focusPortrait ,OMX_IMAGE_FocusControlPortrait     },
    { focusExtended ,OMX_IMAGE_FocusControlExtended     },
    { focusCAF      ,OMX_IMAGE_FocusControlAuto },
    { focusTouch    ,FOCUS_REGION_PRIORITY},
    { TICameraParameters::FOCUS_MODE_FACE , FOCUS_FACE_PRIORITY },
};

userToOMX_LUT exposure_UserToOMX [] = {
    { exposureOff           ,OMX_ExposureControlOff             },
    { exposureAuto          ,OMX_ExposureControlAuto            },
    { exposureNight         ,OMX_ExposureControlNight           },
    { exposureBackLight     ,OMX_ExposureControlBackLight       },
    { exposureSpotLight     ,OMX_ExposureControlSpotLight       },
    { exposureSports        ,OMX_ExposureControlSports          },
    { exposureSnow          ,OMX_ExposureControlSnow            },
    { exposureBeach         ,OMX_ExposureControlBeach           },
    { exposureAperture      ,OMX_ExposureControlLargeAperture   },
    { exposureSmallAperture ,OMX_ExposureControlSmallApperture  },
    { TICameraParameters::EXPOSURE_MODE_FACE, EXPOSURE_FACE_PRIORITY },
};

const userToOMX_LUT flash_UserToOMX [] = {
    { CameraParameters::FLASH_MODE_OFF           ,OMX_IMAGE_FlashControlOff             },
    { CameraParameters::FLASH_MODE_ON            ,OMX_IMAGE_FlashControlOn              },
    { CameraParameters::FLASH_MODE_AUTO          ,OMX_IMAGE_FlashControlAuto            },
    { CameraParameters::FLASH_MODE_TORCH         ,OMX_IMAGE_FlashControlTorch           },
    { CameraParameters::FLASH_MODE_RED_EYE        ,OMX_IMAGE_FlashControlRedEyeReduction },
    { TICameraParameters::FLASH_MODE_FILL_IN        ,OMX_IMAGE_FlashControlFillin          }
};

const LUTtype ExpLUT =
    {
    sizeof(exposure_UserToOMX)/sizeof(exposure_UserToOMX[0]),
    exposure_UserToOMX
    };

const LUTtype WBalLUT =
    {
    sizeof(whiteBal_UserToOMX)/sizeof(whiteBal_UserToOMX[0]),
    whiteBal_UserToOMX
    };

const LUTtype FlickerLUT =
    {
    sizeof(antibanding_UserToOMX)/sizeof(antibanding_UserToOMX[0]),
    antibanding_UserToOMX
    };

const LUTtype SceneLUT =
    {
    sizeof(scene_UserToOMX)/sizeof(scene_UserToOMX[0]),
    scene_UserToOMX
    };

const LUTtype FlashLUT =
    {
    sizeof(flash_UserToOMX)/sizeof(flash_UserToOMX[0]),
    flash_UserToOMX
    };

const LUTtype EffLUT =
    {
    sizeof(effects_UserToOMX)/sizeof(effects_UserToOMX[0]),
    effects_UserToOMX
    };

const LUTtype FocusLUT =
    {
    sizeof(focus_UserToOMX)/sizeof(focus_UserToOMX[0]),
    focus_UserToOMX
    };

const LUTtype IsoLUT =
    {
    sizeof(isoUserToOMX)/sizeof(isoUserToOMX[0]),
    isoUserToOMX
    };

/*
*   class Gen3A_settings
*   stores the 3A settings
*   also defines the look up tables
*   for mapping settings from Hal to OMX
*/
class Gen3A_settings{
    public:

    int Exposure;
    OMX_U32 ExposureValueLeft;
    OMX_U32 ExposureValueRight;
    OMX_U32 ManualGainISOLeft;
    OMX_U32 ManualGainISORight;
    int WhiteBallance;
    int Flicker;
    int SceneMode;
    int Effect;
    int Focus;
    int EVCompensation;
    int Contrast;
    int Saturation;
    int Sharpness;
    int ISO;
    int FlashMode;

    unsigned int Brightness;
};

/*
*   Flags raised when a setting is changed
*/
enum E3ASettingsFlags
{
    SetExposure             = 1 << 0,
    SetEVCompensation       = 1 << 1,
    SetWhiteBallance        = 1 << 2,
    SetFlicker              = 1 << 3,
    SetSceneMode            = 1 << 4,
    SetSharpness            = 1 << 5,
    SetBrightness           = 1 << 6,
    SetContrast             = 1 << 7,
    SetISO                  = 1 << 8,
    SetSaturation           = 1 << 9,
    SetEffect               = 1 << 10,
    SetFocus                = 1 << 11,
    SetManualExposure       = 1 << 12,
    SetManualGain           = 1 << 13,
    SetExpMode              = 1 << 14,
    SetFlash                = 1 << 15,

    E3aSettingMax,
    E3AsettingsAll = ( ((E3aSettingMax -1 ) << 1) -1 ) /// all possible flags raised
};

};

#endif //GENERAL_3A_SETTINGS_H
