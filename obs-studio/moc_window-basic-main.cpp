/****************************************************************************
** Meta object code from reading C++ file 'window-basic-main.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window-basic-main.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-main.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOBSBasicENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSBasicENDCLASS = QtMocHelpers::stringData(
    "OBSBasic",
    "DeferSaveBegin",
    "",
    "DeferSaveEnd",
    "DisplayStreamStartError",
    "SetupBroadcast",
    "StartStreaming",
    "StopStreaming",
    "ForceStopStreaming",
    "StreamDelayStarting",
    "sec",
    "StreamDelayStopping",
    "StreamingStart",
    "StreamStopping",
    "StreamingStop",
    "errorcode",
    "last_error",
    "StartRecording",
    "StopRecording",
    "RecordingStart",
    "RecordStopping",
    "RecordingStop",
    "code",
    "RecordingFileChanged",
    "lastRecordingPath",
    "ShowReplayBufferPauseWarning",
    "StartReplayBuffer",
    "StopReplayBuffer",
    "ReplayBufferStart",
    "ReplayBufferSave",
    "ReplayBufferSaved",
    "ReplayBufferStopping",
    "ReplayBufferStop",
    "StartVirtualCam",
    "StopVirtualCam",
    "OnVirtualCamStart",
    "OnVirtualCamStop",
    "SaveProjectDeferred",
    "SaveProject",
    "SetTransition",
    "OBSSource",
    "transition",
    "OverrideTransition",
    "TransitionToScene",
    "OBSScene",
    "scene",
    "force",
    "quickTransition",
    "quickDuration",
    "black",
    "manual",
    "SetCurrentScene",
    "AddSceneCollection",
    "create_new",
    "name",
    "NewProfile",
    "DuplicateProfile",
    "DeleteProfile",
    "profileName",
    "UpdatePatronJson",
    "text",
    "error",
    "ShowContextBar",
    "HideContextBar",
    "PauseRecording",
    "UnpauseRecording",
    "on_actionMainUndo_triggered",
    "on_actionMainRedo_triggered",
    "AddSceneItem",
    "OBSSceneItem",
    "item",
    "AddScene",
    "source",
    "RemoveScene",
    "RenameSources",
    "newName",
    "prevName",
    "ActivateAudioSource",
    "DeactivateAudioSource",
    "DuplicateSelectedScene",
    "RemoveSelectedScene",
    "ToggleAlwaysOnTop",
    "ReorderSources",
    "RefreshSources",
    "ProcessHotkey",
    "obs_hotkey_id",
    "id",
    "pressed",
    "AddTransition",
    "const char*",
    "RenameTransition",
    "TransitionClicked",
    "TransitionStopped",
    "TransitionFullyStopped",
    "TriggerQuickTransition",
    "SetDeinterlacingMode",
    "SetDeinterlacingOrder",
    "SetScaleFilter",
    "SetBlendingMethod",
    "SetBlendingMode",
    "IconActivated",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "SetShowing",
    "showing",
    "ToggleShowHide",
    "HideAudioControl",
    "UnhideAllAudioControls",
    "ToggleHideMixer",
    "MixerRenameSource",
    "on_vMixerScrollArea_customContextMenuRequested",
    "on_hMixerScrollArea_customContextMenuRequested",
    "on_actionCopySource_triggered",
    "on_actionPasteRef_triggered",
    "on_actionPasteDup_triggered",
    "on_actionCopyFilters_triggered",
    "on_actionPasteFilters_triggered",
    "ColorChange",
    "GetItemWidgetFromSceneItem",
    "SourceTreeItem*",
    "obs_sceneitem_t*",
    "sceneItem",
    "on_actionShowAbout_triggered",
    "AudioMixerCopyFilters",
    "AudioMixerPasteFilters",
    "EnablePreview",
    "DisablePreview",
    "EnablePreviewProgram",
    "DisablePreviewProgram",
    "SceneCopyFilters",
    "ScenePasteFilters",
    "CheckDiskSpaceRemaining",
    "OpenSavedProjector",
    "SavedProjectorInfo*",
    "info",
    "ResetStatsHotkey",
    "SetImageIcon",
    "icon",
    "SetColorIcon",
    "SetSlideshowIcon",
    "SetAudioInputIcon",
    "SetAudioOutputIcon",
    "SetDesktopCapIcon",
    "SetWindowCapIcon",
    "SetGameCapIcon",
    "SetCameraIcon",
    "SetTextIcon",
    "SetMediaIcon",
    "SetBrowserIcon",
    "SetGroupIcon",
    "SetSceneIcon",
    "SetDefaultIcon",
    "SetAudioProcessOutputIcon",
    "TBarChanged",
    "value",
    "TBarReleased",
    "LockVolumeControl",
    "lock",
    "ThemeChanged",
    "UpdateVirtualCamConfig",
    "VCamConfig",
    "config",
    "RestartVirtualCam",
    "RestartingVirtualCam",
    "on_actionFullscreenInterface_triggered",
    "on_actionShow_Recordings_triggered",
    "on_actionRemux_triggered",
    "on_action_Settings_triggered",
    "on_actionShowMacPermissions_triggered",
    "on_actionShowMissingFiles_triggered",
    "on_actionAdvAudioProperties_triggered",
    "on_actionMixerToolbarAdvAudio_triggered",
    "on_actionMixerToolbarMenu_triggered",
    "on_actionShowLogs_triggered",
    "on_actionUploadCurrentLog_triggered",
    "on_actionUploadLastLog_triggered",
    "on_actionViewCurrentLog_triggered",
    "on_actionCheckForUpdates_triggered",
    "on_actionRepair_triggered",
    "on_actionShowWhatsNew_triggered",
    "on_actionRestartSafe_triggered",
    "on_actionShowCrashLogs_triggered",
    "on_actionUploadLastCrashLog_triggered",
    "on_actionEditTransform_triggered",
    "on_actionCopyTransform_triggered",
    "on_actionPasteTransform_triggered",
    "on_actionRotate90CW_triggered",
    "on_actionRotate90CCW_triggered",
    "on_actionRotate180_triggered",
    "on_actionFlipHorizontal_triggered",
    "on_actionFlipVertical_triggered",
    "on_actionFitToScreen_triggered",
    "on_actionStretchToScreen_triggered",
    "on_actionCenterToScreen_triggered",
    "on_actionVerticalCenter_triggered",
    "on_actionHorizontalCenter_triggered",
    "on_actionSceneFilters_triggered",
    "on_OBSBasic_customContextMenuRequested",
    "pos",
    "on_scenes_currentItemChanged",
    "QListWidgetItem*",
    "current",
    "prev",
    "on_scenes_customContextMenuRequested",
    "GridActionClicked",
    "on_actionSceneListMode_triggered",
    "on_actionSceneGridMode_triggered",
    "on_actionAddScene_triggered",
    "on_actionRemoveScene_triggered",
    "on_actionSceneUp_triggered",
    "on_actionSceneDown_triggered",
    "on_sources_customContextMenuRequested",
    "on_scenes_itemDoubleClicked",
    "on_actionAddSource_triggered",
    "on_actionRemoveSource_triggered",
    "on_actionInteract_triggered",
    "on_actionSourceProperties_triggered",
    "on_actionSourceUp_triggered",
    "on_actionSourceDown_triggered",
    "on_actionMoveUp_triggered",
    "on_actionMoveDown_triggered",
    "on_actionMoveToTop_triggered",
    "on_actionMoveToBottom_triggered",
    "on_actionLockPreview_triggered",
    "on_scalingMenu_aboutToShow",
    "on_actionScaleWindow_triggered",
    "on_actionScaleCanvas_triggered",
    "on_actionScaleOutput_triggered",
    "on_streamButton_clicked",
    "on_recordButton_clicked",
    "VCamButtonClicked",
    "VCamConfigButtonClicked",
    "on_settingsButton_clicked",
    "Screenshot",
    "source_",
    "ScreenshotSelectedSource",
    "ScreenshotProgram",
    "ScreenshotScene",
    "on_actionHelpPortal_triggered",
    "on_actionWebsite_triggered",
    "on_actionDiscord_triggered",
    "on_actionReleaseNotes_triggered",
    "on_preview_customContextMenuRequested",
    "ProgramViewContextMenuRequested",
    "on_previewDisabledWidget_customContextMenuRequested",
    "on_actionNewSceneCollection_triggered",
    "on_actionDupSceneCollection_triggered",
    "on_actionRenameSceneCollection_triggered",
    "on_actionRemoveSceneCollection_triggered",
    "on_actionImportSceneCollection_triggered",
    "on_actionExportSceneCollection_triggered",
    "on_actionNewProfile_triggered",
    "on_actionDupProfile_triggered",
    "on_actionRenameProfile_triggered",
    "on_actionRemoveProfile_triggered",
    "skipConfirmation",
    "on_actionImportProfile_triggered",
    "on_actionExportProfile_triggered",
    "on_actionShowSettingsFolder_triggered",
    "on_actionShowProfileFolder_triggered",
    "on_actionAlwaysOnTop_triggered",
    "on_toggleListboxToolbars_toggled",
    "visible",
    "on_toggleContextBar_toggled",
    "on_toggleStatusBar_toggled",
    "on_toggleSourceIcons_toggled",
    "on_transitions_currentIndexChanged",
    "index",
    "on_transitionAdd_clicked",
    "on_transitionRemove_clicked",
    "on_transitionProps_clicked",
    "on_transitionDuration_valueChanged",
    "ShowTransitionProperties",
    "HideTransitionProperties",
    "on_modeSwitch_clicked",
    "on_sourcePropertiesButton_clicked",
    "on_sourceFiltersButton_clicked",
    "on_sourceInteractButton_clicked",
    "on_autoConfigure_triggered",
    "on_stats_triggered",
    "on_resetUI_triggered",
    "on_resetDocks_triggered",
    "on_lockDocks_toggled",
    "on_multiviewProjectorWindowed_triggered",
    "on_sideDocks_toggled",
    "side",
    "PauseToggled",
    "logUploadFinished",
    "crashUploadFinished",
    "openLogDialog",
    "crash",
    "updateCheckFinished",
    "MoveSceneToTop",
    "MoveSceneToBottom",
    "EditSceneName",
    "EditSceneItemName",
    "SceneNameEdited",
    "QWidget*",
    "editor",
    "OpenSceneFilters",
    "OpenFilters",
    "OpenProperties",
    "OpenInteraction",
    "OpenEditTransform",
    "EnablePreviewDisplay",
    "enable",
    "TogglePreview",
    "OpenStudioProgramProjector",
    "OpenPreviewProjector",
    "OpenSourceProjector",
    "OpenMultiviewProjector",
    "OpenSceneProjector",
    "OpenStudioProgramWindow",
    "OpenPreviewWindow",
    "OpenSourceWindow",
    "OpenSceneWindow",
    "StackedMixerAreaContextMenuRequested",
    "ResizeOutputSizeOfSource",
    "RepairOldExtraDockName",
    "RepairCustomExtraDockName",
    "on_actionResetTransform_triggered",
    "StreamingActive",
    "RecordingActive",
    "ReplayBufferActive",
    "VirtualCamActive",
    "ClearContextBar",
    "UpdateContextBar",
    "UpdateContextBarDeferred",
    "UpdateContextBarVisibility",
    "imageIcon",
    "colorIcon",
    "slideshowIcon",
    "audioInputIcon",
    "audioOutputIcon",
    "desktopCapIcon",
    "windowCapIcon",
    "gameCapIcon",
    "cameraIcon",
    "textIcon",
    "mediaIcon",
    "browserIcon",
    "groupIcon",
    "sceneIcon",
    "defaultIcon",
    "audioProcessOutputIcon"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSBasicENDCLASS_t {
    uint offsetsAndSizes[690];
    char stringdata0[9];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[24];
    char stringdata5[15];
    char stringdata6[15];
    char stringdata7[14];
    char stringdata8[19];
    char stringdata9[20];
    char stringdata10[4];
    char stringdata11[20];
    char stringdata12[15];
    char stringdata13[15];
    char stringdata14[14];
    char stringdata15[10];
    char stringdata16[11];
    char stringdata17[15];
    char stringdata18[14];
    char stringdata19[15];
    char stringdata20[15];
    char stringdata21[14];
    char stringdata22[5];
    char stringdata23[21];
    char stringdata24[18];
    char stringdata25[29];
    char stringdata26[18];
    char stringdata27[17];
    char stringdata28[18];
    char stringdata29[17];
    char stringdata30[18];
    char stringdata31[21];
    char stringdata32[17];
    char stringdata33[16];
    char stringdata34[15];
    char stringdata35[18];
    char stringdata36[17];
    char stringdata37[20];
    char stringdata38[12];
    char stringdata39[14];
    char stringdata40[10];
    char stringdata41[11];
    char stringdata42[19];
    char stringdata43[18];
    char stringdata44[9];
    char stringdata45[6];
    char stringdata46[6];
    char stringdata47[16];
    char stringdata48[14];
    char stringdata49[6];
    char stringdata50[7];
    char stringdata51[16];
    char stringdata52[19];
    char stringdata53[11];
    char stringdata54[5];
    char stringdata55[11];
    char stringdata56[17];
    char stringdata57[14];
    char stringdata58[12];
    char stringdata59[17];
    char stringdata60[5];
    char stringdata61[6];
    char stringdata62[15];
    char stringdata63[15];
    char stringdata64[15];
    char stringdata65[17];
    char stringdata66[28];
    char stringdata67[28];
    char stringdata68[13];
    char stringdata69[13];
    char stringdata70[5];
    char stringdata71[9];
    char stringdata72[7];
    char stringdata73[12];
    char stringdata74[14];
    char stringdata75[8];
    char stringdata76[9];
    char stringdata77[20];
    char stringdata78[22];
    char stringdata79[23];
    char stringdata80[20];
    char stringdata81[18];
    char stringdata82[15];
    char stringdata83[15];
    char stringdata84[14];
    char stringdata85[14];
    char stringdata86[3];
    char stringdata87[8];
    char stringdata88[14];
    char stringdata89[12];
    char stringdata90[17];
    char stringdata91[18];
    char stringdata92[18];
    char stringdata93[23];
    char stringdata94[23];
    char stringdata95[21];
    char stringdata96[22];
    char stringdata97[15];
    char stringdata98[18];
    char stringdata99[16];
    char stringdata100[14];
    char stringdata101[34];
    char stringdata102[7];
    char stringdata103[11];
    char stringdata104[8];
    char stringdata105[15];
    char stringdata106[17];
    char stringdata107[23];
    char stringdata108[16];
    char stringdata109[18];
    char stringdata110[47];
    char stringdata111[47];
    char stringdata112[30];
    char stringdata113[28];
    char stringdata114[28];
    char stringdata115[31];
    char stringdata116[32];
    char stringdata117[12];
    char stringdata118[27];
    char stringdata119[16];
    char stringdata120[17];
    char stringdata121[10];
    char stringdata122[29];
    char stringdata123[22];
    char stringdata124[23];
    char stringdata125[14];
    char stringdata126[15];
    char stringdata127[21];
    char stringdata128[22];
    char stringdata129[17];
    char stringdata130[18];
    char stringdata131[24];
    char stringdata132[19];
    char stringdata133[20];
    char stringdata134[5];
    char stringdata135[17];
    char stringdata136[13];
    char stringdata137[5];
    char stringdata138[13];
    char stringdata139[17];
    char stringdata140[18];
    char stringdata141[19];
    char stringdata142[18];
    char stringdata143[17];
    char stringdata144[15];
    char stringdata145[14];
    char stringdata146[12];
    char stringdata147[13];
    char stringdata148[15];
    char stringdata149[13];
    char stringdata150[13];
    char stringdata151[15];
    char stringdata152[26];
    char stringdata153[12];
    char stringdata154[6];
    char stringdata155[13];
    char stringdata156[18];
    char stringdata157[5];
    char stringdata158[13];
    char stringdata159[23];
    char stringdata160[11];
    char stringdata161[7];
    char stringdata162[18];
    char stringdata163[21];
    char stringdata164[39];
    char stringdata165[35];
    char stringdata166[25];
    char stringdata167[29];
    char stringdata168[38];
    char stringdata169[36];
    char stringdata170[38];
    char stringdata171[40];
    char stringdata172[36];
    char stringdata173[28];
    char stringdata174[36];
    char stringdata175[33];
    char stringdata176[34];
    char stringdata177[35];
    char stringdata178[26];
    char stringdata179[32];
    char stringdata180[31];
    char stringdata181[33];
    char stringdata182[38];
    char stringdata183[33];
    char stringdata184[33];
    char stringdata185[34];
    char stringdata186[30];
    char stringdata187[31];
    char stringdata188[29];
    char stringdata189[34];
    char stringdata190[32];
    char stringdata191[31];
    char stringdata192[35];
    char stringdata193[34];
    char stringdata194[34];
    char stringdata195[36];
    char stringdata196[32];
    char stringdata197[39];
    char stringdata198[4];
    char stringdata199[29];
    char stringdata200[17];
    char stringdata201[8];
    char stringdata202[5];
    char stringdata203[37];
    char stringdata204[18];
    char stringdata205[33];
    char stringdata206[33];
    char stringdata207[28];
    char stringdata208[31];
    char stringdata209[27];
    char stringdata210[29];
    char stringdata211[38];
    char stringdata212[28];
    char stringdata213[29];
    char stringdata214[32];
    char stringdata215[28];
    char stringdata216[36];
    char stringdata217[28];
    char stringdata218[30];
    char stringdata219[26];
    char stringdata220[28];
    char stringdata221[29];
    char stringdata222[32];
    char stringdata223[31];
    char stringdata224[27];
    char stringdata225[31];
    char stringdata226[31];
    char stringdata227[31];
    char stringdata228[24];
    char stringdata229[24];
    char stringdata230[18];
    char stringdata231[24];
    char stringdata232[26];
    char stringdata233[11];
    char stringdata234[8];
    char stringdata235[25];
    char stringdata236[18];
    char stringdata237[16];
    char stringdata238[30];
    char stringdata239[27];
    char stringdata240[27];
    char stringdata241[32];
    char stringdata242[38];
    char stringdata243[32];
    char stringdata244[52];
    char stringdata245[38];
    char stringdata246[38];
    char stringdata247[41];
    char stringdata248[41];
    char stringdata249[41];
    char stringdata250[41];
    char stringdata251[30];
    char stringdata252[30];
    char stringdata253[33];
    char stringdata254[33];
    char stringdata255[17];
    char stringdata256[33];
    char stringdata257[33];
    char stringdata258[38];
    char stringdata259[37];
    char stringdata260[31];
    char stringdata261[33];
    char stringdata262[8];
    char stringdata263[28];
    char stringdata264[27];
    char stringdata265[29];
    char stringdata266[35];
    char stringdata267[6];
    char stringdata268[25];
    char stringdata269[28];
    char stringdata270[27];
    char stringdata271[35];
    char stringdata272[25];
    char stringdata273[25];
    char stringdata274[22];
    char stringdata275[34];
    char stringdata276[31];
    char stringdata277[32];
    char stringdata278[27];
    char stringdata279[19];
    char stringdata280[21];
    char stringdata281[24];
    char stringdata282[21];
    char stringdata283[40];
    char stringdata284[21];
    char stringdata285[5];
    char stringdata286[13];
    char stringdata287[18];
    char stringdata288[20];
    char stringdata289[14];
    char stringdata290[6];
    char stringdata291[20];
    char stringdata292[15];
    char stringdata293[18];
    char stringdata294[14];
    char stringdata295[18];
    char stringdata296[16];
    char stringdata297[9];
    char stringdata298[7];
    char stringdata299[17];
    char stringdata300[12];
    char stringdata301[15];
    char stringdata302[16];
    char stringdata303[18];
    char stringdata304[21];
    char stringdata305[7];
    char stringdata306[14];
    char stringdata307[27];
    char stringdata308[21];
    char stringdata309[20];
    char stringdata310[23];
    char stringdata311[19];
    char stringdata312[24];
    char stringdata313[18];
    char stringdata314[17];
    char stringdata315[16];
    char stringdata316[37];
    char stringdata317[25];
    char stringdata318[23];
    char stringdata319[26];
    char stringdata320[34];
    char stringdata321[16];
    char stringdata322[16];
    char stringdata323[19];
    char stringdata324[17];
    char stringdata325[16];
    char stringdata326[17];
    char stringdata327[25];
    char stringdata328[27];
    char stringdata329[10];
    char stringdata330[10];
    char stringdata331[14];
    char stringdata332[15];
    char stringdata333[16];
    char stringdata334[15];
    char stringdata335[14];
    char stringdata336[12];
    char stringdata337[11];
    char stringdata338[9];
    char stringdata339[10];
    char stringdata340[12];
    char stringdata341[10];
    char stringdata342[10];
    char stringdata343[12];
    char stringdata344[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSBasicENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSBasicENDCLASS_t qt_meta_stringdata_CLASSOBSBasicENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "OBSBasic"
        QT_MOC_LITERAL(9, 14),  // "DeferSaveBegin"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 12),  // "DeferSaveEnd"
        QT_MOC_LITERAL(38, 23),  // "DisplayStreamStartError"
        QT_MOC_LITERAL(62, 14),  // "SetupBroadcast"
        QT_MOC_LITERAL(77, 14),  // "StartStreaming"
        QT_MOC_LITERAL(92, 13),  // "StopStreaming"
        QT_MOC_LITERAL(106, 18),  // "ForceStopStreaming"
        QT_MOC_LITERAL(125, 19),  // "StreamDelayStarting"
        QT_MOC_LITERAL(145, 3),  // "sec"
        QT_MOC_LITERAL(149, 19),  // "StreamDelayStopping"
        QT_MOC_LITERAL(169, 14),  // "StreamingStart"
        QT_MOC_LITERAL(184, 14),  // "StreamStopping"
        QT_MOC_LITERAL(199, 13),  // "StreamingStop"
        QT_MOC_LITERAL(213, 9),  // "errorcode"
        QT_MOC_LITERAL(223, 10),  // "last_error"
        QT_MOC_LITERAL(234, 14),  // "StartRecording"
        QT_MOC_LITERAL(249, 13),  // "StopRecording"
        QT_MOC_LITERAL(263, 14),  // "RecordingStart"
        QT_MOC_LITERAL(278, 14),  // "RecordStopping"
        QT_MOC_LITERAL(293, 13),  // "RecordingStop"
        QT_MOC_LITERAL(307, 4),  // "code"
        QT_MOC_LITERAL(312, 20),  // "RecordingFileChanged"
        QT_MOC_LITERAL(333, 17),  // "lastRecordingPath"
        QT_MOC_LITERAL(351, 28),  // "ShowReplayBufferPauseWarning"
        QT_MOC_LITERAL(380, 17),  // "StartReplayBuffer"
        QT_MOC_LITERAL(398, 16),  // "StopReplayBuffer"
        QT_MOC_LITERAL(415, 17),  // "ReplayBufferStart"
        QT_MOC_LITERAL(433, 16),  // "ReplayBufferSave"
        QT_MOC_LITERAL(450, 17),  // "ReplayBufferSaved"
        QT_MOC_LITERAL(468, 20),  // "ReplayBufferStopping"
        QT_MOC_LITERAL(489, 16),  // "ReplayBufferStop"
        QT_MOC_LITERAL(506, 15),  // "StartVirtualCam"
        QT_MOC_LITERAL(522, 14),  // "StopVirtualCam"
        QT_MOC_LITERAL(537, 17),  // "OnVirtualCamStart"
        QT_MOC_LITERAL(555, 16),  // "OnVirtualCamStop"
        QT_MOC_LITERAL(572, 19),  // "SaveProjectDeferred"
        QT_MOC_LITERAL(592, 11),  // "SaveProject"
        QT_MOC_LITERAL(604, 13),  // "SetTransition"
        QT_MOC_LITERAL(618, 9),  // "OBSSource"
        QT_MOC_LITERAL(628, 10),  // "transition"
        QT_MOC_LITERAL(639, 18),  // "OverrideTransition"
        QT_MOC_LITERAL(658, 17),  // "TransitionToScene"
        QT_MOC_LITERAL(676, 8),  // "OBSScene"
        QT_MOC_LITERAL(685, 5),  // "scene"
        QT_MOC_LITERAL(691, 5),  // "force"
        QT_MOC_LITERAL(697, 15),  // "quickTransition"
        QT_MOC_LITERAL(713, 13),  // "quickDuration"
        QT_MOC_LITERAL(727, 5),  // "black"
        QT_MOC_LITERAL(733, 6),  // "manual"
        QT_MOC_LITERAL(740, 15),  // "SetCurrentScene"
        QT_MOC_LITERAL(756, 18),  // "AddSceneCollection"
        QT_MOC_LITERAL(775, 10),  // "create_new"
        QT_MOC_LITERAL(786, 4),  // "name"
        QT_MOC_LITERAL(791, 10),  // "NewProfile"
        QT_MOC_LITERAL(802, 16),  // "DuplicateProfile"
        QT_MOC_LITERAL(819, 13),  // "DeleteProfile"
        QT_MOC_LITERAL(833, 11),  // "profileName"
        QT_MOC_LITERAL(845, 16),  // "UpdatePatronJson"
        QT_MOC_LITERAL(862, 4),  // "text"
        QT_MOC_LITERAL(867, 5),  // "error"
        QT_MOC_LITERAL(873, 14),  // "ShowContextBar"
        QT_MOC_LITERAL(888, 14),  // "HideContextBar"
        QT_MOC_LITERAL(903, 14),  // "PauseRecording"
        QT_MOC_LITERAL(918, 16),  // "UnpauseRecording"
        QT_MOC_LITERAL(935, 27),  // "on_actionMainUndo_triggered"
        QT_MOC_LITERAL(963, 27),  // "on_actionMainRedo_triggered"
        QT_MOC_LITERAL(991, 12),  // "AddSceneItem"
        QT_MOC_LITERAL(1004, 12),  // "OBSSceneItem"
        QT_MOC_LITERAL(1017, 4),  // "item"
        QT_MOC_LITERAL(1022, 8),  // "AddScene"
        QT_MOC_LITERAL(1031, 6),  // "source"
        QT_MOC_LITERAL(1038, 11),  // "RemoveScene"
        QT_MOC_LITERAL(1050, 13),  // "RenameSources"
        QT_MOC_LITERAL(1064, 7),  // "newName"
        QT_MOC_LITERAL(1072, 8),  // "prevName"
        QT_MOC_LITERAL(1081, 19),  // "ActivateAudioSource"
        QT_MOC_LITERAL(1101, 21),  // "DeactivateAudioSource"
        QT_MOC_LITERAL(1123, 22),  // "DuplicateSelectedScene"
        QT_MOC_LITERAL(1146, 19),  // "RemoveSelectedScene"
        QT_MOC_LITERAL(1166, 17),  // "ToggleAlwaysOnTop"
        QT_MOC_LITERAL(1184, 14),  // "ReorderSources"
        QT_MOC_LITERAL(1199, 14),  // "RefreshSources"
        QT_MOC_LITERAL(1214, 13),  // "ProcessHotkey"
        QT_MOC_LITERAL(1228, 13),  // "obs_hotkey_id"
        QT_MOC_LITERAL(1242, 2),  // "id"
        QT_MOC_LITERAL(1245, 7),  // "pressed"
        QT_MOC_LITERAL(1253, 13),  // "AddTransition"
        QT_MOC_LITERAL(1267, 11),  // "const char*"
        QT_MOC_LITERAL(1279, 16),  // "RenameTransition"
        QT_MOC_LITERAL(1296, 17),  // "TransitionClicked"
        QT_MOC_LITERAL(1314, 17),  // "TransitionStopped"
        QT_MOC_LITERAL(1332, 22),  // "TransitionFullyStopped"
        QT_MOC_LITERAL(1355, 22),  // "TriggerQuickTransition"
        QT_MOC_LITERAL(1378, 20),  // "SetDeinterlacingMode"
        QT_MOC_LITERAL(1399, 21),  // "SetDeinterlacingOrder"
        QT_MOC_LITERAL(1421, 14),  // "SetScaleFilter"
        QT_MOC_LITERAL(1436, 17),  // "SetBlendingMethod"
        QT_MOC_LITERAL(1454, 15),  // "SetBlendingMode"
        QT_MOC_LITERAL(1470, 13),  // "IconActivated"
        QT_MOC_LITERAL(1484, 33),  // "QSystemTrayIcon::ActivationRe..."
        QT_MOC_LITERAL(1518, 6),  // "reason"
        QT_MOC_LITERAL(1525, 10),  // "SetShowing"
        QT_MOC_LITERAL(1536, 7),  // "showing"
        QT_MOC_LITERAL(1544, 14),  // "ToggleShowHide"
        QT_MOC_LITERAL(1559, 16),  // "HideAudioControl"
        QT_MOC_LITERAL(1576, 22),  // "UnhideAllAudioControls"
        QT_MOC_LITERAL(1599, 15),  // "ToggleHideMixer"
        QT_MOC_LITERAL(1615, 17),  // "MixerRenameSource"
        QT_MOC_LITERAL(1633, 46),  // "on_vMixerScrollArea_customCon..."
        QT_MOC_LITERAL(1680, 46),  // "on_hMixerScrollArea_customCon..."
        QT_MOC_LITERAL(1727, 29),  // "on_actionCopySource_triggered"
        QT_MOC_LITERAL(1757, 27),  // "on_actionPasteRef_triggered"
        QT_MOC_LITERAL(1785, 27),  // "on_actionPasteDup_triggered"
        QT_MOC_LITERAL(1813, 30),  // "on_actionCopyFilters_triggered"
        QT_MOC_LITERAL(1844, 31),  // "on_actionPasteFilters_triggered"
        QT_MOC_LITERAL(1876, 11),  // "ColorChange"
        QT_MOC_LITERAL(1888, 26),  // "GetItemWidgetFromSceneItem"
        QT_MOC_LITERAL(1915, 15),  // "SourceTreeItem*"
        QT_MOC_LITERAL(1931, 16),  // "obs_sceneitem_t*"
        QT_MOC_LITERAL(1948, 9),  // "sceneItem"
        QT_MOC_LITERAL(1958, 28),  // "on_actionShowAbout_triggered"
        QT_MOC_LITERAL(1987, 21),  // "AudioMixerCopyFilters"
        QT_MOC_LITERAL(2009, 22),  // "AudioMixerPasteFilters"
        QT_MOC_LITERAL(2032, 13),  // "EnablePreview"
        QT_MOC_LITERAL(2046, 14),  // "DisablePreview"
        QT_MOC_LITERAL(2061, 20),  // "EnablePreviewProgram"
        QT_MOC_LITERAL(2082, 21),  // "DisablePreviewProgram"
        QT_MOC_LITERAL(2104, 16),  // "SceneCopyFilters"
        QT_MOC_LITERAL(2121, 17),  // "ScenePasteFilters"
        QT_MOC_LITERAL(2139, 23),  // "CheckDiskSpaceRemaining"
        QT_MOC_LITERAL(2163, 18),  // "OpenSavedProjector"
        QT_MOC_LITERAL(2182, 19),  // "SavedProjectorInfo*"
        QT_MOC_LITERAL(2202, 4),  // "info"
        QT_MOC_LITERAL(2207, 16),  // "ResetStatsHotkey"
        QT_MOC_LITERAL(2224, 12),  // "SetImageIcon"
        QT_MOC_LITERAL(2237, 4),  // "icon"
        QT_MOC_LITERAL(2242, 12),  // "SetColorIcon"
        QT_MOC_LITERAL(2255, 16),  // "SetSlideshowIcon"
        QT_MOC_LITERAL(2272, 17),  // "SetAudioInputIcon"
        QT_MOC_LITERAL(2290, 18),  // "SetAudioOutputIcon"
        QT_MOC_LITERAL(2309, 17),  // "SetDesktopCapIcon"
        QT_MOC_LITERAL(2327, 16),  // "SetWindowCapIcon"
        QT_MOC_LITERAL(2344, 14),  // "SetGameCapIcon"
        QT_MOC_LITERAL(2359, 13),  // "SetCameraIcon"
        QT_MOC_LITERAL(2373, 11),  // "SetTextIcon"
        QT_MOC_LITERAL(2385, 12),  // "SetMediaIcon"
        QT_MOC_LITERAL(2398, 14),  // "SetBrowserIcon"
        QT_MOC_LITERAL(2413, 12),  // "SetGroupIcon"
        QT_MOC_LITERAL(2426, 12),  // "SetSceneIcon"
        QT_MOC_LITERAL(2439, 14),  // "SetDefaultIcon"
        QT_MOC_LITERAL(2454, 25),  // "SetAudioProcessOutputIcon"
        QT_MOC_LITERAL(2480, 11),  // "TBarChanged"
        QT_MOC_LITERAL(2492, 5),  // "value"
        QT_MOC_LITERAL(2498, 12),  // "TBarReleased"
        QT_MOC_LITERAL(2511, 17),  // "LockVolumeControl"
        QT_MOC_LITERAL(2529, 4),  // "lock"
        QT_MOC_LITERAL(2534, 12),  // "ThemeChanged"
        QT_MOC_LITERAL(2547, 22),  // "UpdateVirtualCamConfig"
        QT_MOC_LITERAL(2570, 10),  // "VCamConfig"
        QT_MOC_LITERAL(2581, 6),  // "config"
        QT_MOC_LITERAL(2588, 17),  // "RestartVirtualCam"
        QT_MOC_LITERAL(2606, 20),  // "RestartingVirtualCam"
        QT_MOC_LITERAL(2627, 38),  // "on_actionFullscreenInterface_..."
        QT_MOC_LITERAL(2666, 34),  // "on_actionShow_Recordings_trig..."
        QT_MOC_LITERAL(2701, 24),  // "on_actionRemux_triggered"
        QT_MOC_LITERAL(2726, 28),  // "on_action_Settings_triggered"
        QT_MOC_LITERAL(2755, 37),  // "on_actionShowMacPermissions_t..."
        QT_MOC_LITERAL(2793, 35),  // "on_actionShowMissingFiles_tri..."
        QT_MOC_LITERAL(2829, 37),  // "on_actionAdvAudioProperties_t..."
        QT_MOC_LITERAL(2867, 39),  // "on_actionMixerToolbarAdvAudio..."
        QT_MOC_LITERAL(2907, 35),  // "on_actionMixerToolbarMenu_tri..."
        QT_MOC_LITERAL(2943, 27),  // "on_actionShowLogs_triggered"
        QT_MOC_LITERAL(2971, 35),  // "on_actionUploadCurrentLog_tri..."
        QT_MOC_LITERAL(3007, 32),  // "on_actionUploadLastLog_triggered"
        QT_MOC_LITERAL(3040, 33),  // "on_actionViewCurrentLog_trigg..."
        QT_MOC_LITERAL(3074, 34),  // "on_actionCheckForUpdates_trig..."
        QT_MOC_LITERAL(3109, 25),  // "on_actionRepair_triggered"
        QT_MOC_LITERAL(3135, 31),  // "on_actionShowWhatsNew_triggered"
        QT_MOC_LITERAL(3167, 30),  // "on_actionRestartSafe_triggered"
        QT_MOC_LITERAL(3198, 32),  // "on_actionShowCrashLogs_triggered"
        QT_MOC_LITERAL(3231, 37),  // "on_actionUploadLastCrashLog_t..."
        QT_MOC_LITERAL(3269, 32),  // "on_actionEditTransform_triggered"
        QT_MOC_LITERAL(3302, 32),  // "on_actionCopyTransform_triggered"
        QT_MOC_LITERAL(3335, 33),  // "on_actionPasteTransform_trigg..."
        QT_MOC_LITERAL(3369, 29),  // "on_actionRotate90CW_triggered"
        QT_MOC_LITERAL(3399, 30),  // "on_actionRotate90CCW_triggered"
        QT_MOC_LITERAL(3430, 28),  // "on_actionRotate180_triggered"
        QT_MOC_LITERAL(3459, 33),  // "on_actionFlipHorizontal_trigg..."
        QT_MOC_LITERAL(3493, 31),  // "on_actionFlipVertical_triggered"
        QT_MOC_LITERAL(3525, 30),  // "on_actionFitToScreen_triggered"
        QT_MOC_LITERAL(3556, 34),  // "on_actionStretchToScreen_trig..."
        QT_MOC_LITERAL(3591, 33),  // "on_actionCenterToScreen_trigg..."
        QT_MOC_LITERAL(3625, 33),  // "on_actionVerticalCenter_trigg..."
        QT_MOC_LITERAL(3659, 35),  // "on_actionHorizontalCenter_tri..."
        QT_MOC_LITERAL(3695, 31),  // "on_actionSceneFilters_triggered"
        QT_MOC_LITERAL(3727, 38),  // "on_OBSBasic_customContextMenu..."
        QT_MOC_LITERAL(3766, 3),  // "pos"
        QT_MOC_LITERAL(3770, 28),  // "on_scenes_currentItemChanged"
        QT_MOC_LITERAL(3799, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(3816, 7),  // "current"
        QT_MOC_LITERAL(3824, 4),  // "prev"
        QT_MOC_LITERAL(3829, 36),  // "on_scenes_customContextMenuRe..."
        QT_MOC_LITERAL(3866, 17),  // "GridActionClicked"
        QT_MOC_LITERAL(3884, 32),  // "on_actionSceneListMode_triggered"
        QT_MOC_LITERAL(3917, 32),  // "on_actionSceneGridMode_triggered"
        QT_MOC_LITERAL(3950, 27),  // "on_actionAddScene_triggered"
        QT_MOC_LITERAL(3978, 30),  // "on_actionRemoveScene_triggered"
        QT_MOC_LITERAL(4009, 26),  // "on_actionSceneUp_triggered"
        QT_MOC_LITERAL(4036, 28),  // "on_actionSceneDown_triggered"
        QT_MOC_LITERAL(4065, 37),  // "on_sources_customContextMenuR..."
        QT_MOC_LITERAL(4103, 27),  // "on_scenes_itemDoubleClicked"
        QT_MOC_LITERAL(4131, 28),  // "on_actionAddSource_triggered"
        QT_MOC_LITERAL(4160, 31),  // "on_actionRemoveSource_triggered"
        QT_MOC_LITERAL(4192, 27),  // "on_actionInteract_triggered"
        QT_MOC_LITERAL(4220, 35),  // "on_actionSourceProperties_tri..."
        QT_MOC_LITERAL(4256, 27),  // "on_actionSourceUp_triggered"
        QT_MOC_LITERAL(4284, 29),  // "on_actionSourceDown_triggered"
        QT_MOC_LITERAL(4314, 25),  // "on_actionMoveUp_triggered"
        QT_MOC_LITERAL(4340, 27),  // "on_actionMoveDown_triggered"
        QT_MOC_LITERAL(4368, 28),  // "on_actionMoveToTop_triggered"
        QT_MOC_LITERAL(4397, 31),  // "on_actionMoveToBottom_triggered"
        QT_MOC_LITERAL(4429, 30),  // "on_actionLockPreview_triggered"
        QT_MOC_LITERAL(4460, 26),  // "on_scalingMenu_aboutToShow"
        QT_MOC_LITERAL(4487, 30),  // "on_actionScaleWindow_triggered"
        QT_MOC_LITERAL(4518, 30),  // "on_actionScaleCanvas_triggered"
        QT_MOC_LITERAL(4549, 30),  // "on_actionScaleOutput_triggered"
        QT_MOC_LITERAL(4580, 23),  // "on_streamButton_clicked"
        QT_MOC_LITERAL(4604, 23),  // "on_recordButton_clicked"
        QT_MOC_LITERAL(4628, 17),  // "VCamButtonClicked"
        QT_MOC_LITERAL(4646, 23),  // "VCamConfigButtonClicked"
        QT_MOC_LITERAL(4670, 25),  // "on_settingsButton_clicked"
        QT_MOC_LITERAL(4696, 10),  // "Screenshot"
        QT_MOC_LITERAL(4707, 7),  // "source_"
        QT_MOC_LITERAL(4715, 24),  // "ScreenshotSelectedSource"
        QT_MOC_LITERAL(4740, 17),  // "ScreenshotProgram"
        QT_MOC_LITERAL(4758, 15),  // "ScreenshotScene"
        QT_MOC_LITERAL(4774, 29),  // "on_actionHelpPortal_triggered"
        QT_MOC_LITERAL(4804, 26),  // "on_actionWebsite_triggered"
        QT_MOC_LITERAL(4831, 26),  // "on_actionDiscord_triggered"
        QT_MOC_LITERAL(4858, 31),  // "on_actionReleaseNotes_triggered"
        QT_MOC_LITERAL(4890, 37),  // "on_preview_customContextMenuR..."
        QT_MOC_LITERAL(4928, 31),  // "ProgramViewContextMenuRequested"
        QT_MOC_LITERAL(4960, 51),  // "on_previewDisabledWidget_cust..."
        QT_MOC_LITERAL(5012, 37),  // "on_actionNewSceneCollection_t..."
        QT_MOC_LITERAL(5050, 37),  // "on_actionDupSceneCollection_t..."
        QT_MOC_LITERAL(5088, 40),  // "on_actionRenameSceneCollectio..."
        QT_MOC_LITERAL(5129, 40),  // "on_actionRemoveSceneCollectio..."
        QT_MOC_LITERAL(5170, 40),  // "on_actionImportSceneCollectio..."
        QT_MOC_LITERAL(5211, 40),  // "on_actionExportSceneCollectio..."
        QT_MOC_LITERAL(5252, 29),  // "on_actionNewProfile_triggered"
        QT_MOC_LITERAL(5282, 29),  // "on_actionDupProfile_triggered"
        QT_MOC_LITERAL(5312, 32),  // "on_actionRenameProfile_triggered"
        QT_MOC_LITERAL(5345, 32),  // "on_actionRemoveProfile_triggered"
        QT_MOC_LITERAL(5378, 16),  // "skipConfirmation"
        QT_MOC_LITERAL(5395, 32),  // "on_actionImportProfile_triggered"
        QT_MOC_LITERAL(5428, 32),  // "on_actionExportProfile_triggered"
        QT_MOC_LITERAL(5461, 37),  // "on_actionShowSettingsFolder_t..."
        QT_MOC_LITERAL(5499, 36),  // "on_actionShowProfileFolder_tr..."
        QT_MOC_LITERAL(5536, 30),  // "on_actionAlwaysOnTop_triggered"
        QT_MOC_LITERAL(5567, 32),  // "on_toggleListboxToolbars_toggled"
        QT_MOC_LITERAL(5600, 7),  // "visible"
        QT_MOC_LITERAL(5608, 27),  // "on_toggleContextBar_toggled"
        QT_MOC_LITERAL(5636, 26),  // "on_toggleStatusBar_toggled"
        QT_MOC_LITERAL(5663, 28),  // "on_toggleSourceIcons_toggled"
        QT_MOC_LITERAL(5692, 34),  // "on_transitions_currentIndexCh..."
        QT_MOC_LITERAL(5727, 5),  // "index"
        QT_MOC_LITERAL(5733, 24),  // "on_transitionAdd_clicked"
        QT_MOC_LITERAL(5758, 27),  // "on_transitionRemove_clicked"
        QT_MOC_LITERAL(5786, 26),  // "on_transitionProps_clicked"
        QT_MOC_LITERAL(5813, 34),  // "on_transitionDuration_valueCh..."
        QT_MOC_LITERAL(5848, 24),  // "ShowTransitionProperties"
        QT_MOC_LITERAL(5873, 24),  // "HideTransitionProperties"
        QT_MOC_LITERAL(5898, 21),  // "on_modeSwitch_clicked"
        QT_MOC_LITERAL(5920, 33),  // "on_sourcePropertiesButton_cli..."
        QT_MOC_LITERAL(5954, 30),  // "on_sourceFiltersButton_clicked"
        QT_MOC_LITERAL(5985, 31),  // "on_sourceInteractButton_clicked"
        QT_MOC_LITERAL(6017, 26),  // "on_autoConfigure_triggered"
        QT_MOC_LITERAL(6044, 18),  // "on_stats_triggered"
        QT_MOC_LITERAL(6063, 20),  // "on_resetUI_triggered"
        QT_MOC_LITERAL(6084, 23),  // "on_resetDocks_triggered"
        QT_MOC_LITERAL(6108, 20),  // "on_lockDocks_toggled"
        QT_MOC_LITERAL(6129, 39),  // "on_multiviewProjectorWindowed..."
        QT_MOC_LITERAL(6169, 20),  // "on_sideDocks_toggled"
        QT_MOC_LITERAL(6190, 4),  // "side"
        QT_MOC_LITERAL(6195, 12),  // "PauseToggled"
        QT_MOC_LITERAL(6208, 17),  // "logUploadFinished"
        QT_MOC_LITERAL(6226, 19),  // "crashUploadFinished"
        QT_MOC_LITERAL(6246, 13),  // "openLogDialog"
        QT_MOC_LITERAL(6260, 5),  // "crash"
        QT_MOC_LITERAL(6266, 19),  // "updateCheckFinished"
        QT_MOC_LITERAL(6286, 14),  // "MoveSceneToTop"
        QT_MOC_LITERAL(6301, 17),  // "MoveSceneToBottom"
        QT_MOC_LITERAL(6319, 13),  // "EditSceneName"
        QT_MOC_LITERAL(6333, 17),  // "EditSceneItemName"
        QT_MOC_LITERAL(6351, 15),  // "SceneNameEdited"
        QT_MOC_LITERAL(6367, 8),  // "QWidget*"
        QT_MOC_LITERAL(6376, 6),  // "editor"
        QT_MOC_LITERAL(6383, 16),  // "OpenSceneFilters"
        QT_MOC_LITERAL(6400, 11),  // "OpenFilters"
        QT_MOC_LITERAL(6412, 14),  // "OpenProperties"
        QT_MOC_LITERAL(6427, 15),  // "OpenInteraction"
        QT_MOC_LITERAL(6443, 17),  // "OpenEditTransform"
        QT_MOC_LITERAL(6461, 20),  // "EnablePreviewDisplay"
        QT_MOC_LITERAL(6482, 6),  // "enable"
        QT_MOC_LITERAL(6489, 13),  // "TogglePreview"
        QT_MOC_LITERAL(6503, 26),  // "OpenStudioProgramProjector"
        QT_MOC_LITERAL(6530, 20),  // "OpenPreviewProjector"
        QT_MOC_LITERAL(6551, 19),  // "OpenSourceProjector"
        QT_MOC_LITERAL(6571, 22),  // "OpenMultiviewProjector"
        QT_MOC_LITERAL(6594, 18),  // "OpenSceneProjector"
        QT_MOC_LITERAL(6613, 23),  // "OpenStudioProgramWindow"
        QT_MOC_LITERAL(6637, 17),  // "OpenPreviewWindow"
        QT_MOC_LITERAL(6655, 16),  // "OpenSourceWindow"
        QT_MOC_LITERAL(6672, 15),  // "OpenSceneWindow"
        QT_MOC_LITERAL(6688, 36),  // "StackedMixerAreaContextMenuRe..."
        QT_MOC_LITERAL(6725, 24),  // "ResizeOutputSizeOfSource"
        QT_MOC_LITERAL(6750, 22),  // "RepairOldExtraDockName"
        QT_MOC_LITERAL(6773, 25),  // "RepairCustomExtraDockName"
        QT_MOC_LITERAL(6799, 33),  // "on_actionResetTransform_trigg..."
        QT_MOC_LITERAL(6833, 15),  // "StreamingActive"
        QT_MOC_LITERAL(6849, 15),  // "RecordingActive"
        QT_MOC_LITERAL(6865, 18),  // "ReplayBufferActive"
        QT_MOC_LITERAL(6884, 16),  // "VirtualCamActive"
        QT_MOC_LITERAL(6901, 15),  // "ClearContextBar"
        QT_MOC_LITERAL(6917, 16),  // "UpdateContextBar"
        QT_MOC_LITERAL(6934, 24),  // "UpdateContextBarDeferred"
        QT_MOC_LITERAL(6959, 26),  // "UpdateContextBarVisibility"
        QT_MOC_LITERAL(6986, 9),  // "imageIcon"
        QT_MOC_LITERAL(6996, 9),  // "colorIcon"
        QT_MOC_LITERAL(7006, 13),  // "slideshowIcon"
        QT_MOC_LITERAL(7020, 14),  // "audioInputIcon"
        QT_MOC_LITERAL(7035, 15),  // "audioOutputIcon"
        QT_MOC_LITERAL(7051, 14),  // "desktopCapIcon"
        QT_MOC_LITERAL(7066, 13),  // "windowCapIcon"
        QT_MOC_LITERAL(7080, 11),  // "gameCapIcon"
        QT_MOC_LITERAL(7092, 10),  // "cameraIcon"
        QT_MOC_LITERAL(7103, 8),  // "textIcon"
        QT_MOC_LITERAL(7112, 9),  // "mediaIcon"
        QT_MOC_LITERAL(7122, 11),  // "browserIcon"
        QT_MOC_LITERAL(7134, 9),  // "groupIcon"
        QT_MOC_LITERAL(7144, 9),  // "sceneIcon"
        QT_MOC_LITERAL(7154, 11),  // "defaultIcon"
        QT_MOC_LITERAL(7166, 22)   // "audioProcessOutputIcon"
    },
    "OBSBasic",
    "DeferSaveBegin",
    "",
    "DeferSaveEnd",
    "DisplayStreamStartError",
    "SetupBroadcast",
    "StartStreaming",
    "StopStreaming",
    "ForceStopStreaming",
    "StreamDelayStarting",
    "sec",
    "StreamDelayStopping",
    "StreamingStart",
    "StreamStopping",
    "StreamingStop",
    "errorcode",
    "last_error",
    "StartRecording",
    "StopRecording",
    "RecordingStart",
    "RecordStopping",
    "RecordingStop",
    "code",
    "RecordingFileChanged",
    "lastRecordingPath",
    "ShowReplayBufferPauseWarning",
    "StartReplayBuffer",
    "StopReplayBuffer",
    "ReplayBufferStart",
    "ReplayBufferSave",
    "ReplayBufferSaved",
    "ReplayBufferStopping",
    "ReplayBufferStop",
    "StartVirtualCam",
    "StopVirtualCam",
    "OnVirtualCamStart",
    "OnVirtualCamStop",
    "SaveProjectDeferred",
    "SaveProject",
    "SetTransition",
    "OBSSource",
    "transition",
    "OverrideTransition",
    "TransitionToScene",
    "OBSScene",
    "scene",
    "force",
    "quickTransition",
    "quickDuration",
    "black",
    "manual",
    "SetCurrentScene",
    "AddSceneCollection",
    "create_new",
    "name",
    "NewProfile",
    "DuplicateProfile",
    "DeleteProfile",
    "profileName",
    "UpdatePatronJson",
    "text",
    "error",
    "ShowContextBar",
    "HideContextBar",
    "PauseRecording",
    "UnpauseRecording",
    "on_actionMainUndo_triggered",
    "on_actionMainRedo_triggered",
    "AddSceneItem",
    "OBSSceneItem",
    "item",
    "AddScene",
    "source",
    "RemoveScene",
    "RenameSources",
    "newName",
    "prevName",
    "ActivateAudioSource",
    "DeactivateAudioSource",
    "DuplicateSelectedScene",
    "RemoveSelectedScene",
    "ToggleAlwaysOnTop",
    "ReorderSources",
    "RefreshSources",
    "ProcessHotkey",
    "obs_hotkey_id",
    "id",
    "pressed",
    "AddTransition",
    "const char*",
    "RenameTransition",
    "TransitionClicked",
    "TransitionStopped",
    "TransitionFullyStopped",
    "TriggerQuickTransition",
    "SetDeinterlacingMode",
    "SetDeinterlacingOrder",
    "SetScaleFilter",
    "SetBlendingMethod",
    "SetBlendingMode",
    "IconActivated",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "SetShowing",
    "showing",
    "ToggleShowHide",
    "HideAudioControl",
    "UnhideAllAudioControls",
    "ToggleHideMixer",
    "MixerRenameSource",
    "on_vMixerScrollArea_customContextMenuRequested",
    "on_hMixerScrollArea_customContextMenuRequested",
    "on_actionCopySource_triggered",
    "on_actionPasteRef_triggered",
    "on_actionPasteDup_triggered",
    "on_actionCopyFilters_triggered",
    "on_actionPasteFilters_triggered",
    "ColorChange",
    "GetItemWidgetFromSceneItem",
    "SourceTreeItem*",
    "obs_sceneitem_t*",
    "sceneItem",
    "on_actionShowAbout_triggered",
    "AudioMixerCopyFilters",
    "AudioMixerPasteFilters",
    "EnablePreview",
    "DisablePreview",
    "EnablePreviewProgram",
    "DisablePreviewProgram",
    "SceneCopyFilters",
    "ScenePasteFilters",
    "CheckDiskSpaceRemaining",
    "OpenSavedProjector",
    "SavedProjectorInfo*",
    "info",
    "ResetStatsHotkey",
    "SetImageIcon",
    "icon",
    "SetColorIcon",
    "SetSlideshowIcon",
    "SetAudioInputIcon",
    "SetAudioOutputIcon",
    "SetDesktopCapIcon",
    "SetWindowCapIcon",
    "SetGameCapIcon",
    "SetCameraIcon",
    "SetTextIcon",
    "SetMediaIcon",
    "SetBrowserIcon",
    "SetGroupIcon",
    "SetSceneIcon",
    "SetDefaultIcon",
    "SetAudioProcessOutputIcon",
    "TBarChanged",
    "value",
    "TBarReleased",
    "LockVolumeControl",
    "lock",
    "ThemeChanged",
    "UpdateVirtualCamConfig",
    "VCamConfig",
    "config",
    "RestartVirtualCam",
    "RestartingVirtualCam",
    "on_actionFullscreenInterface_triggered",
    "on_actionShow_Recordings_triggered",
    "on_actionRemux_triggered",
    "on_action_Settings_triggered",
    "on_actionShowMacPermissions_triggered",
    "on_actionShowMissingFiles_triggered",
    "on_actionAdvAudioProperties_triggered",
    "on_actionMixerToolbarAdvAudio_triggered",
    "on_actionMixerToolbarMenu_triggered",
    "on_actionShowLogs_triggered",
    "on_actionUploadCurrentLog_triggered",
    "on_actionUploadLastLog_triggered",
    "on_actionViewCurrentLog_triggered",
    "on_actionCheckForUpdates_triggered",
    "on_actionRepair_triggered",
    "on_actionShowWhatsNew_triggered",
    "on_actionRestartSafe_triggered",
    "on_actionShowCrashLogs_triggered",
    "on_actionUploadLastCrashLog_triggered",
    "on_actionEditTransform_triggered",
    "on_actionCopyTransform_triggered",
    "on_actionPasteTransform_triggered",
    "on_actionRotate90CW_triggered",
    "on_actionRotate90CCW_triggered",
    "on_actionRotate180_triggered",
    "on_actionFlipHorizontal_triggered",
    "on_actionFlipVertical_triggered",
    "on_actionFitToScreen_triggered",
    "on_actionStretchToScreen_triggered",
    "on_actionCenterToScreen_triggered",
    "on_actionVerticalCenter_triggered",
    "on_actionHorizontalCenter_triggered",
    "on_actionSceneFilters_triggered",
    "on_OBSBasic_customContextMenuRequested",
    "pos",
    "on_scenes_currentItemChanged",
    "QListWidgetItem*",
    "current",
    "prev",
    "on_scenes_customContextMenuRequested",
    "GridActionClicked",
    "on_actionSceneListMode_triggered",
    "on_actionSceneGridMode_triggered",
    "on_actionAddScene_triggered",
    "on_actionRemoveScene_triggered",
    "on_actionSceneUp_triggered",
    "on_actionSceneDown_triggered",
    "on_sources_customContextMenuRequested",
    "on_scenes_itemDoubleClicked",
    "on_actionAddSource_triggered",
    "on_actionRemoveSource_triggered",
    "on_actionInteract_triggered",
    "on_actionSourceProperties_triggered",
    "on_actionSourceUp_triggered",
    "on_actionSourceDown_triggered",
    "on_actionMoveUp_triggered",
    "on_actionMoveDown_triggered",
    "on_actionMoveToTop_triggered",
    "on_actionMoveToBottom_triggered",
    "on_actionLockPreview_triggered",
    "on_scalingMenu_aboutToShow",
    "on_actionScaleWindow_triggered",
    "on_actionScaleCanvas_triggered",
    "on_actionScaleOutput_triggered",
    "on_streamButton_clicked",
    "on_recordButton_clicked",
    "VCamButtonClicked",
    "VCamConfigButtonClicked",
    "on_settingsButton_clicked",
    "Screenshot",
    "source_",
    "ScreenshotSelectedSource",
    "ScreenshotProgram",
    "ScreenshotScene",
    "on_actionHelpPortal_triggered",
    "on_actionWebsite_triggered",
    "on_actionDiscord_triggered",
    "on_actionReleaseNotes_triggered",
    "on_preview_customContextMenuRequested",
    "ProgramViewContextMenuRequested",
    "on_previewDisabledWidget_customContextMenuRequested",
    "on_actionNewSceneCollection_triggered",
    "on_actionDupSceneCollection_triggered",
    "on_actionRenameSceneCollection_triggered",
    "on_actionRemoveSceneCollection_triggered",
    "on_actionImportSceneCollection_triggered",
    "on_actionExportSceneCollection_triggered",
    "on_actionNewProfile_triggered",
    "on_actionDupProfile_triggered",
    "on_actionRenameProfile_triggered",
    "on_actionRemoveProfile_triggered",
    "skipConfirmation",
    "on_actionImportProfile_triggered",
    "on_actionExportProfile_triggered",
    "on_actionShowSettingsFolder_triggered",
    "on_actionShowProfileFolder_triggered",
    "on_actionAlwaysOnTop_triggered",
    "on_toggleListboxToolbars_toggled",
    "visible",
    "on_toggleContextBar_toggled",
    "on_toggleStatusBar_toggled",
    "on_toggleSourceIcons_toggled",
    "on_transitions_currentIndexChanged",
    "index",
    "on_transitionAdd_clicked",
    "on_transitionRemove_clicked",
    "on_transitionProps_clicked",
    "on_transitionDuration_valueChanged",
    "ShowTransitionProperties",
    "HideTransitionProperties",
    "on_modeSwitch_clicked",
    "on_sourcePropertiesButton_clicked",
    "on_sourceFiltersButton_clicked",
    "on_sourceInteractButton_clicked",
    "on_autoConfigure_triggered",
    "on_stats_triggered",
    "on_resetUI_triggered",
    "on_resetDocks_triggered",
    "on_lockDocks_toggled",
    "on_multiviewProjectorWindowed_triggered",
    "on_sideDocks_toggled",
    "side",
    "PauseToggled",
    "logUploadFinished",
    "crashUploadFinished",
    "openLogDialog",
    "crash",
    "updateCheckFinished",
    "MoveSceneToTop",
    "MoveSceneToBottom",
    "EditSceneName",
    "EditSceneItemName",
    "SceneNameEdited",
    "QWidget*",
    "editor",
    "OpenSceneFilters",
    "OpenFilters",
    "OpenProperties",
    "OpenInteraction",
    "OpenEditTransform",
    "EnablePreviewDisplay",
    "enable",
    "TogglePreview",
    "OpenStudioProgramProjector",
    "OpenPreviewProjector",
    "OpenSourceProjector",
    "OpenMultiviewProjector",
    "OpenSceneProjector",
    "OpenStudioProgramWindow",
    "OpenPreviewWindow",
    "OpenSourceWindow",
    "OpenSceneWindow",
    "StackedMixerAreaContextMenuRequested",
    "ResizeOutputSizeOfSource",
    "RepairOldExtraDockName",
    "RepairCustomExtraDockName",
    "on_actionResetTransform_triggered",
    "StreamingActive",
    "RecordingActive",
    "ReplayBufferActive",
    "VirtualCamActive",
    "ClearContextBar",
    "UpdateContextBar",
    "UpdateContextBarDeferred",
    "UpdateContextBarVisibility",
    "imageIcon",
    "colorIcon",
    "slideshowIcon",
    "audioInputIcon",
    "audioOutputIcon",
    "desktopCapIcon",
    "windowCapIcon",
    "gameCapIcon",
    "cameraIcon",
    "textIcon",
    "mediaIcon",
    "browserIcon",
    "groupIcon",
    "sceneIcon",
    "defaultIcon",
    "audioProcessOutputIcon"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSBasicENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
     291,   14, // methods
      16, 2281, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0, 1760,    2, 0x0a,   17 /* Public */,
       3,    0, 1761,    2, 0x0a,   18 /* Public */,
       4,    0, 1762,    2, 0x0a,   19 /* Public */,
       5,    0, 1763,    2, 0x0a,   20 /* Public */,
       6,    0, 1764,    2, 0x0a,   21 /* Public */,
       7,    0, 1765,    2, 0x0a,   22 /* Public */,
       8,    0, 1766,    2, 0x0a,   23 /* Public */,
       9,    1, 1767,    2, 0x0a,   24 /* Public */,
      11,    1, 1770,    2, 0x0a,   26 /* Public */,
      12,    0, 1773,    2, 0x0a,   28 /* Public */,
      13,    0, 1774,    2, 0x0a,   29 /* Public */,
      14,    2, 1775,    2, 0x0a,   30 /* Public */,
      17,    0, 1780,    2, 0x0a,   33 /* Public */,
      18,    0, 1781,    2, 0x0a,   34 /* Public */,
      19,    0, 1782,    2, 0x0a,   35 /* Public */,
      20,    0, 1783,    2, 0x0a,   36 /* Public */,
      21,    2, 1784,    2, 0x0a,   37 /* Public */,
      23,    1, 1789,    2, 0x0a,   40 /* Public */,
      25,    0, 1792,    2, 0x0a,   42 /* Public */,
      26,    0, 1793,    2, 0x0a,   43 /* Public */,
      27,    0, 1794,    2, 0x0a,   44 /* Public */,
      28,    0, 1795,    2, 0x0a,   45 /* Public */,
      29,    0, 1796,    2, 0x0a,   46 /* Public */,
      30,    0, 1797,    2, 0x0a,   47 /* Public */,
      31,    0, 1798,    2, 0x0a,   48 /* Public */,
      32,    1, 1799,    2, 0x0a,   49 /* Public */,
      33,    0, 1802,    2, 0x0a,   51 /* Public */,
      34,    0, 1803,    2, 0x0a,   52 /* Public */,
      35,    0, 1804,    2, 0x0a,   53 /* Public */,
      36,    1, 1805,    2, 0x0a,   54 /* Public */,
      37,    0, 1808,    2, 0x0a,   56 /* Public */,
      38,    0, 1809,    2, 0x0a,   57 /* Public */,
      39,    1, 1810,    2, 0x0a,   58 /* Public */,
      42,    1, 1813,    2, 0x0a,   60 /* Public */,
      43,    2, 1816,    2, 0x0a,   62 /* Public */,
      43,    1, 1821,    2, 0x2a,   65 /* Public | MethodCloned */,
      43,    6, 1824,    2, 0x0a,   67 /* Public */,
      43,    5, 1837,    2, 0x2a,   74 /* Public | MethodCloned */,
      43,    4, 1848,    2, 0x2a,   80 /* Public | MethodCloned */,
      43,    3, 1857,    2, 0x2a,   85 /* Public | MethodCloned */,
      43,    2, 1864,    2, 0x2a,   89 /* Public | MethodCloned */,
      43,    1, 1869,    2, 0x2a,   92 /* Public | MethodCloned */,
      51,    2, 1872,    2, 0x0a,   94 /* Public */,
      51,    1, 1877,    2, 0x2a,   97 /* Public | MethodCloned */,
      52,    2, 1880,    2, 0x0a,   99 /* Public */,
      52,    1, 1885,    2, 0x2a,  102 /* Public | MethodCloned */,
      55,    1, 1888,    2, 0x0a,  104 /* Public */,
      56,    1, 1891,    2, 0x0a,  106 /* Public */,
      57,    1, 1894,    2, 0x0a,  108 /* Public */,
      59,    2, 1897,    2, 0x0a,  110 /* Public */,
      62,    0, 1902,    2, 0x0a,  113 /* Public */,
      63,    0, 1903,    2, 0x0a,  114 /* Public */,
      64,    0, 1904,    2, 0x0a,  115 /* Public */,
      65,    0, 1905,    2, 0x0a,  116 /* Public */,
      66,    0, 1906,    2, 0x08,  117 /* Private */,
      67,    0, 1907,    2, 0x08,  118 /* Private */,
      68,    1, 1908,    2, 0x08,  119 /* Private */,
      71,    1, 1911,    2, 0x08,  121 /* Private */,
      73,    1, 1914,    2, 0x08,  123 /* Private */,
      74,    3, 1917,    2, 0x08,  125 /* Private */,
      77,    1, 1924,    2, 0x08,  129 /* Private */,
      78,    1, 1927,    2, 0x08,  131 /* Private */,
      79,    0, 1930,    2, 0x08,  133 /* Private */,
      80,    0, 1931,    2, 0x08,  134 /* Private */,
      81,    0, 1932,    2, 0x08,  135 /* Private */,
      82,    1, 1933,    2, 0x08,  136 /* Private */,
      83,    1, 1936,    2, 0x08,  138 /* Private */,
      84,    2, 1939,    2, 0x08,  140 /* Private */,
      88,    1, 1944,    2, 0x08,  143 /* Private */,
      90,    1, 1947,    2, 0x08,  145 /* Private */,
      91,    0, 1950,    2, 0x08,  147 /* Private */,
      92,    0, 1951,    2, 0x08,  148 /* Private */,
      93,    0, 1952,    2, 0x08,  149 /* Private */,
      94,    1, 1953,    2, 0x08,  150 /* Private */,
      95,    0, 1956,    2, 0x08,  152 /* Private */,
      96,    0, 1957,    2, 0x08,  153 /* Private */,
      97,    0, 1958,    2, 0x08,  154 /* Private */,
      98,    0, 1959,    2, 0x08,  155 /* Private */,
      99,    0, 1960,    2, 0x08,  156 /* Private */,
     100,    1, 1961,    2, 0x08,  157 /* Private */,
     103,    1, 1964,    2, 0x08,  159 /* Private */,
     105,    0, 1967,    2, 0x08,  161 /* Private */,
     106,    0, 1968,    2, 0x08,  162 /* Private */,
     107,    0, 1969,    2, 0x08,  163 /* Private */,
     108,    0, 1970,    2, 0x08,  164 /* Private */,
     109,    0, 1971,    2, 0x08,  165 /* Private */,
     110,    0, 1972,    2, 0x08,  166 /* Private */,
     111,    0, 1973,    2, 0x08,  167 /* Private */,
     112,    0, 1974,    2, 0x08,  168 /* Private */,
     113,    0, 1975,    2, 0x08,  169 /* Private */,
     114,    0, 1976,    2, 0x08,  170 /* Private */,
     115,    0, 1977,    2, 0x08,  171 /* Private */,
     116,    0, 1978,    2, 0x08,  172 /* Private */,
     117,    0, 1979,    2, 0x08,  173 /* Private */,
     118,    1, 1980,    2, 0x08,  174 /* Private */,
     122,    0, 1983,    2, 0x08,  176 /* Private */,
     123,    0, 1984,    2, 0x08,  177 /* Private */,
     124,    0, 1985,    2, 0x08,  178 /* Private */,
     125,    0, 1986,    2, 0x08,  179 /* Private */,
     126,    0, 1987,    2, 0x08,  180 /* Private */,
     127,    0, 1988,    2, 0x08,  181 /* Private */,
     128,    0, 1989,    2, 0x08,  182 /* Private */,
     129,    0, 1990,    2, 0x08,  183 /* Private */,
     130,    0, 1991,    2, 0x08,  184 /* Private */,
     131,    0, 1992,    2, 0x08,  185 /* Private */,
     132,    1, 1993,    2, 0x08,  186 /* Private */,
     135,    0, 1996,    2, 0x08,  188 /* Private */,
     136,    1, 1997,    2, 0x08,  189 /* Private */,
     138,    1, 2000,    2, 0x08,  191 /* Private */,
     139,    1, 2003,    2, 0x08,  193 /* Private */,
     140,    1, 2006,    2, 0x08,  195 /* Private */,
     141,    1, 2009,    2, 0x08,  197 /* Private */,
     142,    1, 2012,    2, 0x08,  199 /* Private */,
     143,    1, 2015,    2, 0x08,  201 /* Private */,
     144,    1, 2018,    2, 0x08,  203 /* Private */,
     145,    1, 2021,    2, 0x08,  205 /* Private */,
     146,    1, 2024,    2, 0x08,  207 /* Private */,
     147,    1, 2027,    2, 0x08,  209 /* Private */,
     148,    1, 2030,    2, 0x08,  211 /* Private */,
     149,    1, 2033,    2, 0x08,  213 /* Private */,
     150,    1, 2036,    2, 0x08,  215 /* Private */,
     151,    1, 2039,    2, 0x08,  217 /* Private */,
     152,    1, 2042,    2, 0x08,  219 /* Private */,
     153,    1, 2045,    2, 0x08,  221 /* Private */,
     155,    0, 2048,    2, 0x08,  223 /* Private */,
     156,    1, 2049,    2, 0x08,  224 /* Private */,
     158,    0, 2052,    2, 0x08,  226 /* Private */,
     159,    1, 2053,    2, 0x08,  227 /* Private */,
     162,    1, 2056,    2, 0x08,  229 /* Private */,
     163,    0, 2059,    2, 0x08,  231 /* Private */,
     164,    0, 2060,    2, 0x08,  232 /* Private */,
     165,    0, 2061,    2, 0x08,  233 /* Private */,
     166,    0, 2062,    2, 0x08,  234 /* Private */,
     167,    0, 2063,    2, 0x08,  235 /* Private */,
     168,    0, 2064,    2, 0x08,  236 /* Private */,
     169,    0, 2065,    2, 0x08,  237 /* Private */,
     170,    0, 2066,    2, 0x08,  238 /* Private */,
     171,    0, 2067,    2, 0x08,  239 /* Private */,
     172,    0, 2068,    2, 0x08,  240 /* Private */,
     173,    0, 2069,    2, 0x08,  241 /* Private */,
     174,    0, 2070,    2, 0x08,  242 /* Private */,
     175,    0, 2071,    2, 0x08,  243 /* Private */,
     176,    0, 2072,    2, 0x08,  244 /* Private */,
     177,    0, 2073,    2, 0x08,  245 /* Private */,
     178,    0, 2074,    2, 0x08,  246 /* Private */,
     179,    0, 2075,    2, 0x08,  247 /* Private */,
     180,    0, 2076,    2, 0x08,  248 /* Private */,
     181,    0, 2077,    2, 0x08,  249 /* Private */,
     182,    0, 2078,    2, 0x08,  250 /* Private */,
     183,    0, 2079,    2, 0x08,  251 /* Private */,
     184,    0, 2080,    2, 0x08,  252 /* Private */,
     185,    0, 2081,    2, 0x08,  253 /* Private */,
     186,    0, 2082,    2, 0x08,  254 /* Private */,
     187,    0, 2083,    2, 0x08,  255 /* Private */,
     188,    0, 2084,    2, 0x08,  256 /* Private */,
     189,    0, 2085,    2, 0x08,  257 /* Private */,
     190,    0, 2086,    2, 0x08,  258 /* Private */,
     191,    0, 2087,    2, 0x08,  259 /* Private */,
     192,    0, 2088,    2, 0x08,  260 /* Private */,
     193,    0, 2089,    2, 0x08,  261 /* Private */,
     194,    0, 2090,    2, 0x08,  262 /* Private */,
     195,    0, 2091,    2, 0x08,  263 /* Private */,
     196,    0, 2092,    2, 0x08,  264 /* Private */,
     197,    1, 2093,    2, 0x08,  265 /* Private */,
     199,    2, 2096,    2, 0x08,  267 /* Private */,
     203,    1, 2101,    2, 0x08,  270 /* Private */,
     204,    0, 2104,    2, 0x08,  272 /* Private */,
     205,    0, 2105,    2, 0x08,  273 /* Private */,
     206,    0, 2106,    2, 0x08,  274 /* Private */,
     207,    0, 2107,    2, 0x08,  275 /* Private */,
     208,    0, 2108,    2, 0x08,  276 /* Private */,
     209,    0, 2109,    2, 0x08,  277 /* Private */,
     210,    0, 2110,    2, 0x08,  278 /* Private */,
     211,    1, 2111,    2, 0x08,  279 /* Private */,
     212,    1, 2114,    2, 0x08,  281 /* Private */,
     213,    0, 2117,    2, 0x08,  283 /* Private */,
     214,    0, 2118,    2, 0x08,  284 /* Private */,
     215,    0, 2119,    2, 0x08,  285 /* Private */,
     216,    0, 2120,    2, 0x08,  286 /* Private */,
     217,    0, 2121,    2, 0x08,  287 /* Private */,
     218,    0, 2122,    2, 0x08,  288 /* Private */,
     219,    0, 2123,    2, 0x08,  289 /* Private */,
     220,    0, 2124,    2, 0x08,  290 /* Private */,
     221,    0, 2125,    2, 0x08,  291 /* Private */,
     222,    0, 2126,    2, 0x08,  292 /* Private */,
     223,    0, 2127,    2, 0x08,  293 /* Private */,
     224,    0, 2128,    2, 0x08,  294 /* Private */,
     225,    0, 2129,    2, 0x08,  295 /* Private */,
     226,    0, 2130,    2, 0x08,  296 /* Private */,
     227,    0, 2131,    2, 0x08,  297 /* Private */,
     228,    0, 2132,    2, 0x08,  298 /* Private */,
     229,    0, 2133,    2, 0x08,  299 /* Private */,
     230,    0, 2134,    2, 0x08,  300 /* Private */,
     231,    0, 2135,    2, 0x08,  301 /* Private */,
     232,    0, 2136,    2, 0x08,  302 /* Private */,
     233,    1, 2137,    2, 0x08,  303 /* Private */,
     233,    0, 2140,    2, 0x28,  305 /* Private | MethodCloned */,
     235,    0, 2141,    2, 0x08,  306 /* Private */,
     236,    0, 2142,    2, 0x08,  307 /* Private */,
     237,    0, 2143,    2, 0x08,  308 /* Private */,
     238,    0, 2144,    2, 0x08,  309 /* Private */,
     239,    0, 2145,    2, 0x08,  310 /* Private */,
     240,    0, 2146,    2, 0x08,  311 /* Private */,
     241,    0, 2147,    2, 0x08,  312 /* Private */,
     242,    0, 2148,    2, 0x08,  313 /* Private */,
     243,    0, 2149,    2, 0x08,  314 /* Private */,
     244,    0, 2150,    2, 0x08,  315 /* Private */,
     245,    0, 2151,    2, 0x08,  316 /* Private */,
     246,    0, 2152,    2, 0x08,  317 /* Private */,
     247,    0, 2153,    2, 0x08,  318 /* Private */,
     248,    0, 2154,    2, 0x08,  319 /* Private */,
     249,    0, 2155,    2, 0x08,  320 /* Private */,
     250,    0, 2156,    2, 0x08,  321 /* Private */,
     251,    0, 2157,    2, 0x08,  322 /* Private */,
     252,    0, 2158,    2, 0x08,  323 /* Private */,
     253,    0, 2159,    2, 0x08,  324 /* Private */,
     254,    1, 2160,    2, 0x08,  325 /* Private */,
     254,    0, 2163,    2, 0x28,  327 /* Private | MethodCloned */,
     256,    0, 2164,    2, 0x08,  328 /* Private */,
     257,    0, 2165,    2, 0x08,  329 /* Private */,
     258,    0, 2166,    2, 0x08,  330 /* Private */,
     259,    0, 2167,    2, 0x08,  331 /* Private */,
     260,    0, 2168,    2, 0x08,  332 /* Private */,
     261,    1, 2169,    2, 0x08,  333 /* Private */,
     263,    1, 2172,    2, 0x08,  335 /* Private */,
     264,    1, 2175,    2, 0x08,  337 /* Private */,
     265,    1, 2178,    2, 0x08,  339 /* Private */,
     266,    1, 2181,    2, 0x08,  341 /* Private */,
     268,    0, 2184,    2, 0x08,  343 /* Private */,
     269,    0, 2185,    2, 0x08,  344 /* Private */,
     270,    0, 2186,    2, 0x08,  345 /* Private */,
     271,    0, 2187,    2, 0x08,  346 /* Private */,
     272,    0, 2188,    2, 0x08,  347 /* Private */,
     273,    0, 2189,    2, 0x08,  348 /* Private */,
     274,    0, 2190,    2, 0x08,  349 /* Private */,
     275,    0, 2191,    2, 0x08,  350 /* Private */,
     276,    0, 2192,    2, 0x08,  351 /* Private */,
     277,    0, 2193,    2, 0x08,  352 /* Private */,
     278,    0, 2194,    2, 0x08,  353 /* Private */,
     279,    0, 2195,    2, 0x08,  354 /* Private */,
     280,    0, 2196,    2, 0x08,  355 /* Private */,
     281,    1, 2197,    2, 0x08,  356 /* Private */,
     281,    0, 2200,    2, 0x28,  358 /* Private | MethodCloned */,
     282,    1, 2201,    2, 0x08,  359 /* Private */,
     283,    0, 2204,    2, 0x08,  361 /* Private */,
     284,    1, 2205,    2, 0x08,  362 /* Private */,
     286,    0, 2208,    2, 0x08,  364 /* Private */,
     287,    2, 2209,    2, 0x08,  365 /* Private */,
     288,    2, 2214,    2, 0x08,  368 /* Private */,
     289,    2, 2219,    2, 0x08,  371 /* Private */,
     291,    0, 2224,    2, 0x08,  374 /* Private */,
     292,    0, 2225,    2, 0x08,  375 /* Private */,
     293,    0, 2226,    2, 0x08,  376 /* Private */,
     294,    0, 2227,    2, 0x08,  377 /* Private */,
     295,    0, 2228,    2, 0x08,  378 /* Private */,
     296,    1, 2229,    2, 0x08,  379 /* Private */,
     299,    0, 2232,    2, 0x08,  381 /* Private */,
     300,    1, 2233,    2, 0x08,  382 /* Private */,
     300,    0, 2236,    2, 0x28,  384 /* Private | MethodCloned */,
     301,    1, 2237,    2, 0x08,  385 /* Private */,
     301,    0, 2240,    2, 0x28,  387 /* Private | MethodCloned */,
     302,    1, 2241,    2, 0x08,  388 /* Private */,
     302,    0, 2244,    2, 0x28,  390 /* Private | MethodCloned */,
     303,    1, 2245,    2, 0x08,  391 /* Private */,
     303,    0, 2248,    2, 0x28,  393 /* Private | MethodCloned */,
     304,    1, 2249,    2, 0x08,  394 /* Private */,
     306,    0, 2252,    2, 0x08,  396 /* Private */,
     307,    0, 2253,    2, 0x08,  397 /* Private */,
     308,    0, 2254,    2, 0x08,  398 /* Private */,
     309,    0, 2255,    2, 0x08,  399 /* Private */,
     310,    0, 2256,    2, 0x08,  400 /* Private */,
     311,    0, 2257,    2, 0x08,  401 /* Private */,
     312,    0, 2258,    2, 0x08,  402 /* Private */,
     313,    0, 2259,    2, 0x08,  403 /* Private */,
     314,    0, 2260,    2, 0x08,  404 /* Private */,
     315,    0, 2261,    2, 0x08,  405 /* Private */,
     316,    0, 2262,    2, 0x08,  406 /* Private */,
     317,    0, 2263,    2, 0x08,  407 /* Private */,
     318,    0, 2264,    2, 0x08,  408 /* Private */,
     319,    0, 2265,    2, 0x08,  409 /* Private */,
     320,    0, 2266,    2, 0x0a,  410 /* Public */,
     321,    0, 2267,    2, 0x0a,  411 /* Public */,
     322,    0, 2268,    2, 0x0a,  412 /* Public */,
     323,    0, 2269,    2, 0x0a,  413 /* Public */,
     324,    0, 2270,    2, 0x0a,  414 /* Public */,
     325,    0, 2271,    2, 0x0a,  415 /* Public */,
     326,    1, 2272,    2, 0x0a,  416 /* Public */,
     326,    0, 2275,    2, 0x2a,  418 /* Public | MethodCloned */,
     327,    1, 2276,    2, 0x0a,  419 /* Public */,
     327,    0, 2279,    2, 0x2a,  421 /* Public | MethodCloned */,
     328,    0, 2280,    2, 0x0a,  422 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   22,   16,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 44, QMetaType::Bool,   45,   46,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool, QMetaType::Bool, QMetaType::Int, QMetaType::Bool, QMetaType::Bool,   45,   46,   47,   48,   49,   50,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,   45,   46,   47,   48,   49,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool, QMetaType::Bool, QMetaType::Int,   45,   46,   47,   48,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool, QMetaType::Bool,   45,   46,   47,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool,   45,   46,
    QMetaType::Void, 0x80000000 | 40,   45,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool,   45,   46,
    QMetaType::Void, 0x80000000 | 40,   45,
    QMetaType::Bool, QMetaType::Bool, QMetaType::QString,   53,   54,
    QMetaType::Bool, QMetaType::Bool,   53,
    QMetaType::Bool, QMetaType::QString,   54,
    QMetaType::Bool, QMetaType::QString,   54,
    QMetaType::Void, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   60,   61,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 40,   72,
    QMetaType::Void, 0x80000000 | 40,   72,
    QMetaType::Void, 0x80000000 | 40, QMetaType::QString, QMetaType::QString,   72,   75,   76,
    QMetaType::Void, 0x80000000 | 40,   72,
    QMetaType::Void, 0x80000000 | 40,   72,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 85, QMetaType::Bool,   86,   87,
    QMetaType::Void, 0x80000000 | 89,   86,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   86,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 101,  102,
    QMetaType::Void, QMetaType::Bool,  104,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 119, 0x80000000 | 120,  121,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 133,  134,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::QIcon,  137,
    QMetaType::Void, QMetaType::Int,  154,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  157,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 160,  161,
    QMetaType::Void, 0x80000000 | 160,  161,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  198,
    QMetaType::Void, 0x80000000 | 200, 0x80000000 | 200,  201,  202,
    QMetaType::Void, QMetaType::QPoint,  198,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,  198,
    QMetaType::Void, 0x80000000 | 200,   70,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,  234,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  255,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  262,
    QMetaType::Void, QMetaType::Bool,  262,
    QMetaType::Void, QMetaType::Bool,  262,
    QMetaType::Void, QMetaType::Bool,  262,
    QMetaType::Void, QMetaType::Int,  267,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  157,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  285,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   60,   61,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   60,   61,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   60,  290,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 297,  298,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   72,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   72,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   72,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 69,   70,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,  305,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
     329, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     330, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     331, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     332, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     333, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     334, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     335, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     336, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     337, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     338, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     339, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     340, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     341, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     342, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     343, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     344, QMetaType::QIcon, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSBasic::staticMetaObject = { {
    QMetaObject::SuperData::link<OBSMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSBasicENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSBasicENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSBasicENDCLASS_t,
        // property 'imageIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'colorIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'slideshowIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'audioInputIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'audioOutputIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'desktopCapIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'windowCapIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'gameCapIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'cameraIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'textIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'mediaIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'browserIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'groupIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'sceneIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'defaultIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'audioProcessOutputIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSBasic, std::true_type>,
        // method 'DeferSaveBegin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DeferSaveEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DisplayStreamStartError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetupBroadcast'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StartStreaming'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StopStreaming'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ForceStopStreaming'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StreamDelayStarting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'StreamDelayStopping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'StreamingStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StreamStopping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StreamingStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'StartRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StopRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RecordingStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RecordStopping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RecordingStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'RecordingFileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ShowReplayBufferPauseWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StartReplayBuffer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StopReplayBuffer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReplayBufferStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReplayBufferSave'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReplayBufferSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReplayBufferStopping'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReplayBufferStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'StartVirtualCam'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StopVirtualCam'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnVirtualCamStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OnVirtualCamStop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SaveProjectDeferred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SaveProject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetTransition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'OverrideTransition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'TransitionToScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSScene, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'TransitionToScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSScene, std::false_type>,
        // method 'TransitionToScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'TransitionToScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'TransitionToScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'TransitionToScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'TransitionToScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'TransitionToScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'SetCurrentScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'SetCurrentScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'AddSceneCollection'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'AddSceneCollection'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'NewProfile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'DuplicateProfile'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'DeleteProfile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'UpdatePatronJson'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'ShowContextBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HideContextBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PauseRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UnpauseRecording'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMainUndo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMainRedo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AddSceneItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSceneItem, std::false_type>,
        // method 'AddScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'RemoveScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'RenameSources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ActivateAudioSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'DeactivateAudioSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'DuplicateSelectedScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemoveSelectedScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ToggleAlwaysOnTop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReorderSources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSScene, std::false_type>,
        // method 'RefreshSources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSScene, std::false_type>,
        // method 'ProcessHotkey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<obs_hotkey_id, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'AddTransition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const char *, std::false_type>,
        // method 'RenameTransition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'TransitionClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TransitionStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TransitionFullyStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'TriggerQuickTransition'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SetDeinterlacingMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetDeinterlacingOrder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetScaleFilter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetBlendingMethod'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetBlendingMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'IconActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::ActivationReason, std::false_type>,
        // method 'SetShowing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ToggleShowHide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HideAudioControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UnhideAllAudioControls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ToggleHideMixer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MixerRenameSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_vMixerScrollArea_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hMixerScrollArea_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopySource_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPasteRef_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPasteDup_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopyFilters_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPasteFilters_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ColorChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetItemWidgetFromSceneItem'
        QtPrivate::TypeAndForceComplete<SourceTreeItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<obs_sceneitem_t *, std::false_type>,
        // method 'on_actionShowAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AudioMixerCopyFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AudioMixerPasteFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EnablePreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DisablePreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EnablePreviewProgram'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'DisablePreviewProgram'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SceneCopyFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScenePasteFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'CheckDiskSpaceRemaining'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenSavedProjector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SavedProjectorInfo *, std::false_type>,
        // method 'ResetStatsHotkey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SetImageIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetColorIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetSlideshowIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetAudioInputIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetAudioOutputIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetDesktopCapIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetWindowCapIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetGameCapIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetCameraIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetTextIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetMediaIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetBrowserIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetGroupIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetSceneIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetDefaultIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetAudioProcessOutputIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'TBarChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'TBarReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'LockVolumeControl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ThemeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateVirtualCamConfig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const VCamConfig &, std::false_type>,
        // method 'RestartVirtualCam'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const VCamConfig &, std::false_type>,
        // method 'RestartingVirtualCam'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFullscreenInterface_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShow_Recordings_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemux_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_action_Settings_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShowMacPermissions_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShowMissingFiles_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAdvAudioProperties_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMixerToolbarAdvAudio_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMixerToolbarMenu_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShowLogs_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUploadCurrentLog_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUploadLastLog_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionViewCurrentLog_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCheckForUpdates_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRepair_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShowWhatsNew_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRestartSafe_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShowCrashLogs_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionUploadLastCrashLog_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEditTransform_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopyTransform_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionPasteTransform_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRotate90CW_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRotate90CCW_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRotate180_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFlipHorizontal_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFlipVertical_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionFitToScreen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionStretchToScreen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCenterToScreen_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionVerticalCenter_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionHorizontalCenter_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneFilters_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_OBSBasic_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_scenes_currentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_scenes_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'GridActionClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneListMode_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneGridMode_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAddScene_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemoveScene_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneUp_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSceneDown_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sources_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'on_scenes_itemDoubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'on_actionAddSource_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemoveSource_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionInteract_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSourceProperties_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSourceUp_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSourceDown_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMoveUp_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMoveDown_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMoveToTop_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMoveToBottom_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLockPreview_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_scalingMenu_aboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionScaleWindow_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionScaleCanvas_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionScaleOutput_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_streamButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_recordButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'VCamButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'VCamConfigButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_settingsButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Screenshot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'Screenshot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScreenshotSelectedSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScreenshotProgram'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScreenshotScene'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionHelpPortal_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionWebsite_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDiscord_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionReleaseNotes_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_preview_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ProgramViewContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_previewDisabledWidget_customContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNewSceneCollection_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDupSceneCollection_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRenameSceneCollection_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemoveSceneCollection_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionImportSceneCollection_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExportSceneCollection_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionNewProfile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDupProfile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRenameProfile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemoveProfile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actionRemoveProfile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionImportProfile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExportProfile_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShowSettingsFolder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionShowProfileFolder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAlwaysOnTop_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toggleListboxToolbars_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_toggleContextBar_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_toggleStatusBar_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_toggleSourceIcons_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_transitions_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_transitionAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_transitionRemove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_transitionProps_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_transitionDuration_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowTransitionProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HideTransitionProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modeSwitch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sourcePropertiesButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sourceFiltersButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sourceInteractButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_autoConfigure_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stats_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_resetUI_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_resetDocks_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_resetDocks_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lockDocks_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_multiviewProjectorWindowed_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sideDocks_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'PauseToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'logUploadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'crashUploadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openLogDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'updateCheckFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MoveSceneToTop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'MoveSceneToBottom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EditSceneName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EditSceneItemName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SceneNameEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'OpenSceneFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'OpenFilters'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'OpenProperties'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenInteraction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSource, std::false_type>,
        // method 'OpenInteraction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenEditTransform'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OBSSceneItem, std::false_type>,
        // method 'OpenEditTransform'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EnablePreviewDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'TogglePreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenStudioProgramProjector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenPreviewProjector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenSourceProjector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenMultiviewProjector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenSceneProjector'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenStudioProgramWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenPreviewWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenSourceWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OpenSceneWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StackedMixerAreaContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ResizeOutputSizeOfSource'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RepairOldExtraDockName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RepairCustomExtraDockName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionResetTransform_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'StreamingActive'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'RecordingActive'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ReplayBufferActive'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'VirtualCamActive'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'ClearContextBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateContextBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'UpdateContextBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateContextBarDeferred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'UpdateContextBarDeferred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateContextBarVisibility'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OBSBasic::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasic *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DeferSaveBegin(); break;
        case 1: _t->DeferSaveEnd(); break;
        case 2: _t->DisplayStreamStartError(); break;
        case 3: _t->SetupBroadcast(); break;
        case 4: _t->StartStreaming(); break;
        case 5: _t->StopStreaming(); break;
        case 6: _t->ForceStopStreaming(); break;
        case 7: _t->StreamDelayStarting((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->StreamDelayStopping((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->StreamingStart(); break;
        case 10: _t->StreamStopping(); break;
        case 11: _t->StreamingStop((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->StartRecording(); break;
        case 13: _t->StopRecording(); break;
        case 14: _t->RecordingStart(); break;
        case 15: _t->RecordStopping(); break;
        case 16: _t->RecordingStop((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 17: _t->RecordingFileChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->ShowReplayBufferPauseWarning(); break;
        case 19: _t->StartReplayBuffer(); break;
        case 20: _t->StopReplayBuffer(); break;
        case 21: _t->ReplayBufferStart(); break;
        case 22: _t->ReplayBufferSave(); break;
        case 23: _t->ReplayBufferSaved(); break;
        case 24: _t->ReplayBufferStopping(); break;
        case 25: _t->ReplayBufferStop((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->StartVirtualCam(); break;
        case 27: _t->StopVirtualCam(); break;
        case 28: _t->OnVirtualCamStart(); break;
        case 29: _t->OnVirtualCamStop((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->SaveProjectDeferred(); break;
        case 31: _t->SaveProject(); break;
        case 32: _t->SetTransition((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 33: _t->OverrideTransition((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 34: _t->TransitionToScene((*reinterpret_cast< std::add_pointer_t<OBSScene>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 35: _t->TransitionToScene((*reinterpret_cast< std::add_pointer_t<OBSScene>>(_a[1]))); break;
        case 36: _t->TransitionToScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6]))); break;
        case 37: _t->TransitionToScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5]))); break;
        case 38: _t->TransitionToScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 39: _t->TransitionToScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 40: _t->TransitionToScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 41: _t->TransitionToScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 42: _t->SetCurrentScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 43: _t->SetCurrentScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 44: { bool _r = _t->AddSceneCollection((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 45: { bool _r = _t->AddSceneCollection((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 46: { bool _r = _t->NewProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 47: { bool _r = _t->DuplicateProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 48: _t->DeleteProfile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 49: _t->UpdatePatronJson((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 50: _t->ShowContextBar(); break;
        case 51: _t->HideContextBar(); break;
        case 52: _t->PauseRecording(); break;
        case 53: _t->UnpauseRecording(); break;
        case 54: _t->on_actionMainUndo_triggered(); break;
        case 55: _t->on_actionMainRedo_triggered(); break;
        case 56: _t->AddSceneItem((*reinterpret_cast< std::add_pointer_t<OBSSceneItem>>(_a[1]))); break;
        case 57: _t->AddScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 58: _t->RemoveScene((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 59: _t->RenameSources((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 60: _t->ActivateAudioSource((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 61: _t->DeactivateAudioSource((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 62: _t->DuplicateSelectedScene(); break;
        case 63: _t->RemoveSelectedScene(); break;
        case 64: _t->ToggleAlwaysOnTop(); break;
        case 65: _t->ReorderSources((*reinterpret_cast< std::add_pointer_t<OBSScene>>(_a[1]))); break;
        case 66: _t->RefreshSources((*reinterpret_cast< std::add_pointer_t<OBSScene>>(_a[1]))); break;
        case 67: _t->ProcessHotkey((*reinterpret_cast< std::add_pointer_t<obs_hotkey_id>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 68: _t->AddTransition((*reinterpret_cast< std::add_pointer_t<const char*>>(_a[1]))); break;
        case 69: _t->RenameTransition((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 70: _t->TransitionClicked(); break;
        case 71: _t->TransitionStopped(); break;
        case 72: _t->TransitionFullyStopped(); break;
        case 73: _t->TriggerQuickTransition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 74: _t->SetDeinterlacingMode(); break;
        case 75: _t->SetDeinterlacingOrder(); break;
        case 76: _t->SetScaleFilter(); break;
        case 77: _t->SetBlendingMethod(); break;
        case 78: _t->SetBlendingMode(); break;
        case 79: _t->IconActivated((*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 80: _t->SetShowing((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 81: _t->ToggleShowHide(); break;
        case 82: _t->HideAudioControl(); break;
        case 83: _t->UnhideAllAudioControls(); break;
        case 84: _t->ToggleHideMixer(); break;
        case 85: _t->MixerRenameSource(); break;
        case 86: _t->on_vMixerScrollArea_customContextMenuRequested(); break;
        case 87: _t->on_hMixerScrollArea_customContextMenuRequested(); break;
        case 88: _t->on_actionCopySource_triggered(); break;
        case 89: _t->on_actionPasteRef_triggered(); break;
        case 90: _t->on_actionPasteDup_triggered(); break;
        case 91: _t->on_actionCopyFilters_triggered(); break;
        case 92: _t->on_actionPasteFilters_triggered(); break;
        case 93: _t->ColorChange(); break;
        case 94: { SourceTreeItem* _r = _t->GetItemWidgetFromSceneItem((*reinterpret_cast< std::add_pointer_t<obs_sceneitem_t*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< SourceTreeItem**>(_a[0]) = std::move(_r); }  break;
        case 95: _t->on_actionShowAbout_triggered(); break;
        case 96: _t->AudioMixerCopyFilters(); break;
        case 97: _t->AudioMixerPasteFilters(); break;
        case 98: _t->EnablePreview(); break;
        case 99: _t->DisablePreview(); break;
        case 100: _t->EnablePreviewProgram(); break;
        case 101: _t->DisablePreviewProgram(); break;
        case 102: _t->SceneCopyFilters(); break;
        case 103: _t->ScenePasteFilters(); break;
        case 104: _t->CheckDiskSpaceRemaining(); break;
        case 105: _t->OpenSavedProjector((*reinterpret_cast< std::add_pointer_t<SavedProjectorInfo*>>(_a[1]))); break;
        case 106: _t->ResetStatsHotkey(); break;
        case 107: _t->SetImageIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 108: _t->SetColorIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 109: _t->SetSlideshowIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 110: _t->SetAudioInputIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 111: _t->SetAudioOutputIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 112: _t->SetDesktopCapIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 113: _t->SetWindowCapIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 114: _t->SetGameCapIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 115: _t->SetCameraIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 116: _t->SetTextIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 117: _t->SetMediaIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 118: _t->SetBrowserIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 119: _t->SetGroupIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 120: _t->SetSceneIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 121: _t->SetDefaultIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 122: _t->SetAudioProcessOutputIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 123: _t->TBarChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 124: _t->TBarReleased(); break;
        case 125: _t->LockVolumeControl((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 126: _t->ThemeChanged(); break;
        case 127: _t->UpdateVirtualCamConfig((*reinterpret_cast< std::add_pointer_t<VCamConfig>>(_a[1]))); break;
        case 128: _t->RestartVirtualCam((*reinterpret_cast< std::add_pointer_t<VCamConfig>>(_a[1]))); break;
        case 129: _t->RestartingVirtualCam(); break;
        case 130: _t->on_actionFullscreenInterface_triggered(); break;
        case 131: _t->on_actionShow_Recordings_triggered(); break;
        case 132: _t->on_actionRemux_triggered(); break;
        case 133: _t->on_action_Settings_triggered(); break;
        case 134: _t->on_actionShowMacPermissions_triggered(); break;
        case 135: _t->on_actionShowMissingFiles_triggered(); break;
        case 136: _t->on_actionAdvAudioProperties_triggered(); break;
        case 137: _t->on_actionMixerToolbarAdvAudio_triggered(); break;
        case 138: _t->on_actionMixerToolbarMenu_triggered(); break;
        case 139: _t->on_actionShowLogs_triggered(); break;
        case 140: _t->on_actionUploadCurrentLog_triggered(); break;
        case 141: _t->on_actionUploadLastLog_triggered(); break;
        case 142: _t->on_actionViewCurrentLog_triggered(); break;
        case 143: _t->on_actionCheckForUpdates_triggered(); break;
        case 144: _t->on_actionRepair_triggered(); break;
        case 145: _t->on_actionShowWhatsNew_triggered(); break;
        case 146: _t->on_actionRestartSafe_triggered(); break;
        case 147: _t->on_actionShowCrashLogs_triggered(); break;
        case 148: _t->on_actionUploadLastCrashLog_triggered(); break;
        case 149: _t->on_actionEditTransform_triggered(); break;
        case 150: _t->on_actionCopyTransform_triggered(); break;
        case 151: _t->on_actionPasteTransform_triggered(); break;
        case 152: _t->on_actionRotate90CW_triggered(); break;
        case 153: _t->on_actionRotate90CCW_triggered(); break;
        case 154: _t->on_actionRotate180_triggered(); break;
        case 155: _t->on_actionFlipHorizontal_triggered(); break;
        case 156: _t->on_actionFlipVertical_triggered(); break;
        case 157: _t->on_actionFitToScreen_triggered(); break;
        case 158: _t->on_actionStretchToScreen_triggered(); break;
        case 159: _t->on_actionCenterToScreen_triggered(); break;
        case 160: _t->on_actionVerticalCenter_triggered(); break;
        case 161: _t->on_actionHorizontalCenter_triggered(); break;
        case 162: _t->on_actionSceneFilters_triggered(); break;
        case 163: _t->on_OBSBasic_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 164: _t->on_scenes_currentItemChanged((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[2]))); break;
        case 165: _t->on_scenes_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 166: _t->GridActionClicked(); break;
        case 167: _t->on_actionSceneListMode_triggered(); break;
        case 168: _t->on_actionSceneGridMode_triggered(); break;
        case 169: _t->on_actionAddScene_triggered(); break;
        case 170: _t->on_actionRemoveScene_triggered(); break;
        case 171: _t->on_actionSceneUp_triggered(); break;
        case 172: _t->on_actionSceneDown_triggered(); break;
        case 173: _t->on_sources_customContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 174: _t->on_scenes_itemDoubleClicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 175: _t->on_actionAddSource_triggered(); break;
        case 176: _t->on_actionRemoveSource_triggered(); break;
        case 177: _t->on_actionInteract_triggered(); break;
        case 178: _t->on_actionSourceProperties_triggered(); break;
        case 179: _t->on_actionSourceUp_triggered(); break;
        case 180: _t->on_actionSourceDown_triggered(); break;
        case 181: _t->on_actionMoveUp_triggered(); break;
        case 182: _t->on_actionMoveDown_triggered(); break;
        case 183: _t->on_actionMoveToTop_triggered(); break;
        case 184: _t->on_actionMoveToBottom_triggered(); break;
        case 185: _t->on_actionLockPreview_triggered(); break;
        case 186: _t->on_scalingMenu_aboutToShow(); break;
        case 187: _t->on_actionScaleWindow_triggered(); break;
        case 188: _t->on_actionScaleCanvas_triggered(); break;
        case 189: _t->on_actionScaleOutput_triggered(); break;
        case 190: _t->on_streamButton_clicked(); break;
        case 191: _t->on_recordButton_clicked(); break;
        case 192: _t->VCamButtonClicked(); break;
        case 193: _t->VCamConfigButtonClicked(); break;
        case 194: _t->on_settingsButton_clicked(); break;
        case 195: _t->Screenshot((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 196: _t->Screenshot(); break;
        case 197: _t->ScreenshotSelectedSource(); break;
        case 198: _t->ScreenshotProgram(); break;
        case 199: _t->ScreenshotScene(); break;
        case 200: _t->on_actionHelpPortal_triggered(); break;
        case 201: _t->on_actionWebsite_triggered(); break;
        case 202: _t->on_actionDiscord_triggered(); break;
        case 203: _t->on_actionReleaseNotes_triggered(); break;
        case 204: _t->on_preview_customContextMenuRequested(); break;
        case 205: _t->ProgramViewContextMenuRequested(); break;
        case 206: _t->on_previewDisabledWidget_customContextMenuRequested(); break;
        case 207: _t->on_actionNewSceneCollection_triggered(); break;
        case 208: _t->on_actionDupSceneCollection_triggered(); break;
        case 209: _t->on_actionRenameSceneCollection_triggered(); break;
        case 210: _t->on_actionRemoveSceneCollection_triggered(); break;
        case 211: _t->on_actionImportSceneCollection_triggered(); break;
        case 212: _t->on_actionExportSceneCollection_triggered(); break;
        case 213: _t->on_actionNewProfile_triggered(); break;
        case 214: _t->on_actionDupProfile_triggered(); break;
        case 215: _t->on_actionRenameProfile_triggered(); break;
        case 216: _t->on_actionRemoveProfile_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 217: _t->on_actionRemoveProfile_triggered(); break;
        case 218: _t->on_actionImportProfile_triggered(); break;
        case 219: _t->on_actionExportProfile_triggered(); break;
        case 220: _t->on_actionShowSettingsFolder_triggered(); break;
        case 221: _t->on_actionShowProfileFolder_triggered(); break;
        case 222: _t->on_actionAlwaysOnTop_triggered(); break;
        case 223: _t->on_toggleListboxToolbars_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 224: _t->on_toggleContextBar_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 225: _t->on_toggleStatusBar_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 226: _t->on_toggleSourceIcons_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 227: _t->on_transitions_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 228: _t->on_transitionAdd_clicked(); break;
        case 229: _t->on_transitionRemove_clicked(); break;
        case 230: _t->on_transitionProps_clicked(); break;
        case 231: _t->on_transitionDuration_valueChanged(); break;
        case 232: _t->ShowTransitionProperties(); break;
        case 233: _t->HideTransitionProperties(); break;
        case 234: _t->on_modeSwitch_clicked(); break;
        case 235: _t->on_sourcePropertiesButton_clicked(); break;
        case 236: _t->on_sourceFiltersButton_clicked(); break;
        case 237: _t->on_sourceInteractButton_clicked(); break;
        case 238: _t->on_autoConfigure_triggered(); break;
        case 239: _t->on_stats_triggered(); break;
        case 240: _t->on_resetUI_triggered(); break;
        case 241: _t->on_resetDocks_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 242: _t->on_resetDocks_triggered(); break;
        case 243: _t->on_lockDocks_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 244: _t->on_multiviewProjectorWindowed_triggered(); break;
        case 245: _t->on_sideDocks_toggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 246: _t->PauseToggled(); break;
        case 247: _t->logUploadFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 248: _t->crashUploadFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 249: _t->openLogDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 250: _t->updateCheckFinished(); break;
        case 251: _t->MoveSceneToTop(); break;
        case 252: _t->MoveSceneToBottom(); break;
        case 253: _t->EditSceneName(); break;
        case 254: _t->EditSceneItemName(); break;
        case 255: _t->SceneNameEdited((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1]))); break;
        case 256: _t->OpenSceneFilters(); break;
        case 257: _t->OpenFilters((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 258: _t->OpenFilters(); break;
        case 259: _t->OpenProperties((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 260: _t->OpenProperties(); break;
        case 261: _t->OpenInteraction((*reinterpret_cast< std::add_pointer_t<OBSSource>>(_a[1]))); break;
        case 262: _t->OpenInteraction(); break;
        case 263: _t->OpenEditTransform((*reinterpret_cast< std::add_pointer_t<OBSSceneItem>>(_a[1]))); break;
        case 264: _t->OpenEditTransform(); break;
        case 265: _t->EnablePreviewDisplay((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 266: _t->TogglePreview(); break;
        case 267: _t->OpenStudioProgramProjector(); break;
        case 268: _t->OpenPreviewProjector(); break;
        case 269: _t->OpenSourceProjector(); break;
        case 270: _t->OpenMultiviewProjector(); break;
        case 271: _t->OpenSceneProjector(); break;
        case 272: _t->OpenStudioProgramWindow(); break;
        case 273: _t->OpenPreviewWindow(); break;
        case 274: _t->OpenSourceWindow(); break;
        case 275: _t->OpenSceneWindow(); break;
        case 276: _t->StackedMixerAreaContextMenuRequested(); break;
        case 277: _t->ResizeOutputSizeOfSource(); break;
        case 278: _t->RepairOldExtraDockName(); break;
        case 279: _t->RepairCustomExtraDockName(); break;
        case 280: _t->on_actionResetTransform_triggered(); break;
        case 281: { bool _r = _t->StreamingActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 282: { bool _r = _t->RecordingActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 283: { bool _r = _t->ReplayBufferActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 284: { bool _r = _t->VirtualCamActive();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 285: _t->ClearContextBar(); break;
        case 286: _t->UpdateContextBar((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 287: _t->UpdateContextBar(); break;
        case 288: _t->UpdateContextBarDeferred((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 289: _t->UpdateContextBarDeferred(); break;
        case 290: _t->UpdateContextBarVisibility(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 255:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OBSBasic *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->GetImageIcon(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->GetColorIcon(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->GetSlideshowIcon(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioInputIcon(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioOutputIcon(); break;
        case 5: *reinterpret_cast< QIcon*>(_v) = _t->GetDesktopCapIcon(); break;
        case 6: *reinterpret_cast< QIcon*>(_v) = _t->GetWindowCapIcon(); break;
        case 7: *reinterpret_cast< QIcon*>(_v) = _t->GetGameCapIcon(); break;
        case 8: *reinterpret_cast< QIcon*>(_v) = _t->GetCameraIcon(); break;
        case 9: *reinterpret_cast< QIcon*>(_v) = _t->GetTextIcon(); break;
        case 10: *reinterpret_cast< QIcon*>(_v) = _t->GetMediaIcon(); break;
        case 11: *reinterpret_cast< QIcon*>(_v) = _t->GetBrowserIcon(); break;
        case 12: *reinterpret_cast< QIcon*>(_v) = _t->GetGroupIcon(); break;
        case 13: *reinterpret_cast< QIcon*>(_v) = _t->GetSceneIcon(); break;
        case 14: *reinterpret_cast< QIcon*>(_v) = _t->GetDefaultIcon(); break;
        case 15: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioProcessOutputIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OBSBasic *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetImageIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->SetColorIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->SetSlideshowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->SetAudioInputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: _t->SetAudioOutputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: _t->SetDesktopCapIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 6: _t->SetWindowCapIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 7: _t->SetGameCapIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 8: _t->SetCameraIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 9: _t->SetTextIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 10: _t->SetMediaIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 11: _t->SetBrowserIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 12: _t->SetGroupIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 13: _t->SetSceneIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 14: _t->SetDefaultIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 15: _t->SetAudioProcessOutputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OBSBasic::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasic::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSBasicENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return OBSMainWindow::qt_metacast(_clname);
}

int OBSBasic::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = OBSMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 291)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 291;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 291)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 291;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSceneRenameDelegateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSceneRenameDelegateENDCLASS = QtMocHelpers::stringData(
    "SceneRenameDelegate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSceneRenameDelegateENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSceneRenameDelegateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSceneRenameDelegateENDCLASS_t qt_meta_stringdata_CLASSSceneRenameDelegateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19)   // "SceneRenameDelegate"
    },
    "SceneRenameDelegate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSceneRenameDelegateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject SceneRenameDelegate::staticMetaObject = { {
    QMetaObject::SuperData::link<QStyledItemDelegate::staticMetaObject>(),
    qt_meta_stringdata_CLASSSceneRenameDelegateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSceneRenameDelegateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSceneRenameDelegateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SceneRenameDelegate, std::true_type>
    >,
    nullptr
} };

void SceneRenameDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *SceneRenameDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SceneRenameDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSceneRenameDelegateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QStyledItemDelegate::qt_metacast(_clname);
}

int SceneRenameDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
