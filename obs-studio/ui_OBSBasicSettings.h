/********************************************************************************
** Form generated from reading UI file 'OBSBasicSettings.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASICSETTINGS_H
#define UI_OBSBASICSETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "hotkey-edit.hpp"
#include "url-push-button.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasicSettings
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QStackedWidget *settingsPages;
    QWidget *generalPage;
    QVBoxLayout *verticalLayout_18;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_19;
    QFrame *widget_2;
    QVBoxLayout *verticalLayout_20;
    QGroupBox *groupBox_15;
    QFormLayout *formLayout_32;
    QLabel *label;
    QComboBox *language;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *openStatsOnStartup;
    QCheckBox *hideOBSFromCapture;
    QGroupBox *updateSettingsGroupBox;
    QFormLayout *formLayout_20;
    QLabel *updateChannelLabel;
    QComboBox *updateChannelBox;
    QCheckBox *enableAutoUpdates;
    QSpacerItem *horizontalSpacer_29;
    QGroupBox *groupBox_16;
    QFormLayout *formLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *warnBeforeStreamStart;
    QCheckBox *warnBeforeStreamStop;
    QCheckBox *warnBeforeRecordStop;
    QCheckBox *recordWhenStreaming;
    QCheckBox *keepRecordStreamStops;
    QCheckBox *replayWhileStreaming;
    QCheckBox *keepReplayStreamStops;
    QGroupBox *groupBox_10;
    QFormLayout *formLayout_21;
    QCheckBox *snappingEnabled;
    QCheckBox *screenSnapping;
    QCheckBox *centerSnapping;
    QCheckBox *sourceSnapping;
    QDoubleSpinBox *snapDistance;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QGroupBox *groupBox_14;
    QFormLayout *formLayout_28;
    QCheckBox *hideProjectorCursor;
    QCheckBox *projectorAlwaysOnTop;
    QCheckBox *saveProjectors;
    QCheckBox *closeProjectors;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_13;
    QFormLayout *formLayout_29;
    QCheckBox *systemTrayEnabled;
    QCheckBox *systemTrayWhenStarted;
    QCheckBox *systemTrayAlways;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox_18;
    QFormLayout *formLayout_35;
    QCheckBox *overflowAlwaysVisible;
    QSpacerItem *horizontalSpacer_25;
    QCheckBox *overflowSelectionHide;
    QCheckBox *previewSafeAreas;
    QCheckBox *previewSpacingHelpers;
    QCheckBox *overflowHide;
    QGroupBox *groupBox_19;
    QFormLayout *formLayout_36;
    QSpacerItem *horizontalSpacer_26;
    QCheckBox *automaticSearch;
    QGroupBox *groupBox_11;
    QFormLayout *formLayout_31;
    QCheckBox *doubleClickSwitch;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *studioPortraitLayout;
    QCheckBox *prevProgLabelToggle;
    QGroupBox *groupBoxMultiview;
    QFormLayout *formLayoutMultiview;
    QSpacerItem *horizontalSpacerMultiview;
    QCheckBox *multiviewMouseSwitch;
    QCheckBox *multiviewDrawNames;
    QCheckBox *multiviewDrawAreas;
    QComboBox *multiviewLayout;
    QLabel *label_64;
    QWidget *appearancePage;
    QVBoxLayout *formLayout_69;
    QScrollArea *scrollArea_420;
    QWidget *appearancePageContents;
    QVBoxLayout *verticalLayout_1337;
    QFrame *appearanceFrame;
    QVBoxLayout *verticalLayout_30;
    QGroupBox *appearanceGeneral;
    QFormLayout *formLayout_37;
    QLabel *label_45;
    QComboBox *theme;
    QLabel *label_10;
    QComboBox *themeVariant;
    QSpacerItem *verticalSpacer_8;
    QWidget *streamPage;
    QVBoxLayout *verticalLayout_5;
    QFrame *widget_5;
    QFormLayout *topStreamLayout;
    QLabel *serviceLabel;
    QFrame *serviceWidget;
    QHBoxLayout *serviceWidgetLayout;
    QComboBox *service;
    UrlPushButton *moreInfoButton;
    QStackedWidget *streamStackWidget;
    QWidget *loginPage;
    QFormLayout *loginPageLayout;
    QSpacerItem *horizontalSpacer_20;
    QHBoxLayout *horizontalLayout_16;
    QPushButton *connectAccount;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *useStreamKey;
    QSpacerItem *horizontalSpacer_23;
    QWidget *streamKeyPage;
    QFormLayout *streamkeyPageLayout;
    QLabel *serverLabel;
    QStackedWidget *serverStackedWidget;
    QWidget *servicePage;
    QHBoxLayout *horizontalLayout_21;
    QComboBox *server;
    QWidget *customPage;
    QHBoxLayout *horizontalLayout_22;
    QLineEdit *customServer;
    QLabel *streamKeyLabel;
    QFrame *streamKeyWidget;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *key;
    QPushButton *show;
    UrlPushButton *getStreamKeyButton;
    QSpacerItem *horizontalSpacer_18;
    QHBoxLayout *horizontalLayout_23;
    QLabel *connectedAccountText;
    QPushButton *disconnectAccount;
    QSpacerItem *horizontalSpacer_24;
    QCheckBox *bandwidthTestEnable;
    QCheckBox *useAuth;
    QLabel *authUsernameLabel;
    QLineEdit *authUsername;
    QLabel *authPwLabel;
    QFrame *authPwWidget;
    QHBoxLayout *horizontalLayout_25;
    QLineEdit *authPw;
    QPushButton *authPwShow;
    QComboBox *twitchAddonDropdown;
    QLabel *twitchAddonLabel;
    QCheckBox *ignoreRecommended;
    QLabel *enforceSettingsLabel;
    QHBoxLayout *horizontalLayout_28;
    QPushButton *useStreamKeyAdv;
    QSpacerItem *horizontalSpacer_28;
    QLabel *connectedAccountLabel;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *connectAccount2;
    QSpacerItem *horizontalSpacer_19;
    QWidget *outputPage;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_6;
    QFrame *widget;
    QFormLayout *formLayout_5;
    QLabel *outputModeLabel;
    QComboBox *outputMode;
    QStackedWidget *outputModePages;
    QWidget *easyOutputsPage;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *simpleOutScroll;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_52;
    QGroupBox *simpleStreamingGroupBox;
    QFormLayout *simpleStreamingLayout;
    QLabel *label_19;
    QSpinBox *simpleOutputVBitrate;
    QLabel *label_20;
    QComboBox *simpleOutputABitrate;
    QLabel *simpleOutStrEncoderLabel;
    QComboBox *simpleOutStrEncoder;
    QLabel *simpleOutPresetLabel;
    QComboBox *simpleOutPreset;
    QCheckBox *simpleOutAdvanced;
    QLabel *label_23;
    QLineEdit *simpleOutCustom;
    QLabel *simpleOutStrAEncoderLabel;
    QComboBox *simpleOutStrAEncoder;
    QGroupBox *simpleRecordingGroupBox;
    QFormLayout *formLayout_6;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *simpleOutputPath;
    QPushButton *simpleOutputBrowse;
    QCheckBox *simpleNoSpace;
    QLabel *label_26;
    QComboBox *simpleOutRecQuality;
    QLabel *simpleOutRecFormatLabel;
    QComboBox *simpleOutRecFormat;
    QLabel *simpleOutRecEncoderLabel;
    QComboBox *simpleOutRecEncoder;
    QLabel *simpleOutRecAEncoderLabel;
    QComboBox *simpleOutRecAEncoder;
    QLabel *simplerectrack_label;
    QStackedWidget *simpleRecTrackWidget;
    QWidget *simpleRecTracks;
    QHBoxLayout *horizontalLayoutSimpleTracks;
    QCheckBox *simpleOutRecTrack1;
    QCheckBox *simpleOutRecTrack2;
    QCheckBox *simpleOutRecTrack3;
    QCheckBox *simpleOutRecTrack4;
    QCheckBox *simpleOutRecTrack5;
    QCheckBox *simpleOutRecTrack6;
    QWidget *simpleFlvTracks;
    QHBoxLayout *horizontalLayoutSimpleFLVTracks;
    QRadioButton *simpleFlvTrack1;
    QRadioButton *simpleFlvTrack2;
    QRadioButton *simpleFlvTrack3;
    QRadioButton *simpleFlvTrack4;
    QRadioButton *simpleFlvTrack5;
    QRadioButton *simpleFlvTrack6;
    QLabel *label_420;
    QLineEdit *simpleOutMuxCustom;
    QGroupBox *simpleReplayBuf;
    QFormLayout *formLayout_24;
    QLabel *label_35;
    QSpinBox *simpleRBSecMax;
    QLabel *simpleRBMegsMaxLabel;
    QSpinBox *simpleRBMegsMax;
    QLabel *simpleRBEstimate;
    QFrame *simpleOutputContainer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *simpleOutInfoLayout;
    QWidget *advOutputsPage;
    QVBoxLayout *verticalLayout_8;
    QTabWidget *advOutTabs;
    QWidget *advOutputStreamTab;
    QVBoxLayout *verticalLayout_12;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_14;
    QGroupBox *advOutTopContainer;
    QFormLayout *advOutTopLayout;
    QLabel *label_28;
    QStackedWidget *advStreamTrackWidget;
    QFrame *streamSingleTracks;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *advOutTrack1;
    QRadioButton *advOutTrack2;
    QRadioButton *advOutTrack3;
    QRadioButton *advOutTrack4;
    QRadioButton *advOutTrack5;
    QRadioButton *advOutTrack6;
    QWidget *streamMultiTracks;
    QHBoxLayout *horizontalLayout_multitrack;
    QCheckBox *advOutMultiTrack1;
    QCheckBox *advOutMultiTrack2;
    QCheckBox *advOutMultiTrack3;
    QCheckBox *advOutMultiTrack4;
    QCheckBox *advOutMultiTrack5;
    QCheckBox *advOutMultiTrack6;
    QLabel *advOutAEncLabel;
    QComboBox *advOutAEncoder;
    QLabel *advOutEncLabel;
    QComboBox *advOutEncoder;
    QLabel *advOutUseRescale;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *advOutRescaleFilter;
    QComboBox *advOutRescale;
    QGroupBox *advOutEncoderProps;
    QVBoxLayout *advOutEncoderLayout;
    QSpacerItem *verticalSpacer_0;
    QWidget *advOutputRecordTab;
    QVBoxLayout *verticalLayout_11;
    QFrame *advOutRecTypeContainer;
    QFormLayout *formLayout_9;
    QLabel *label_31;
    QComboBox *advOutRecType;
    QStackedWidget *stackedWidget;
    QWidget *advOutRecStandard;
    QVBoxLayout *verticalLayout_13;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QVBoxLayout *verticalLayout_21;
    QGroupBox *advOutRecTopContainer;
    QFormLayout *formLayout_16;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *advOutRecPath;
    QPushButton *advOutRecPathBrowse;
    QSpacerItem *horizontalSpacer_27;
    QCheckBox *advOutNoSpace;
    QLabel *label_43;
    QComboBox *advOutRecFormat;
    QLabel *label_29;
    QStackedWidget *advRecTrackWidget;
    QWidget *recTracks;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *advOutRecTrack1;
    QCheckBox *advOutRecTrack2;
    QCheckBox *advOutRecTrack3;
    QCheckBox *advOutRecTrack4;
    QCheckBox *advOutRecTrack5;
    QCheckBox *advOutRecTrack6;
    QWidget *flvTracks;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *flvTrack1;
    QRadioButton *flvTrack2;
    QRadioButton *flvTrack3;
    QRadioButton *flvTrack4;
    QRadioButton *flvTrack5;
    QRadioButton *flvTrack6;
    QLabel *advOutRecAEncLabel;
    QComboBox *advOutRecAEncoder;
    QLabel *advOutRecEncLabel;
    QComboBox *advOutRecEncoder;
    QLabel *advOutRecUseRescale;
    QFrame *advOutRecRescaleContainer;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *advOutRecRescaleFilter;
    QComboBox *advOutRecRescale;
    QLabel *label_9001;
    QLineEdit *advOutMuxCustom;
    QCheckBox *advOutSplitFile;
    QComboBox *advOutSplitFileType;
    QLabel *advOutSplitFileTimeLabel;
    QSpinBox *advOutSplitFileTime;
    QLabel *advOutSplitFileSizeLabel;
    QSpinBox *advOutSplitFileSize;
    QGroupBox *advOutRecEncoderProps;
    QVBoxLayout *verticalLayout_15;
    QSpacerItem *verticalSpacer_3;
    QWidget *advOutRecFFmpegPage;
    QVBoxLayout *verticalLayout_26;
    QScrollArea *scrollArea_5;
    QWidget *scrollAreaWidgetContents_8;
    QVBoxLayout *verticalLayout_27;
    QGroupBox *advOutRecFFmpeg;
    QFormLayout *formLayout_7;
    QLabel *label_48;
    QComboBox *advOutFFType;
    QLabel *label_36;
    QStackedWidget *stackedWidget_2;
    QWidget *page_7;
    QHBoxLayout *horizontalLayout_27;
    QLineEdit *advOutFFRecPath;
    QPushButton *advOutFFPathBrowse;
    QWidget *page_8;
    QHBoxLayout *horizontalLayout_30;
    QLineEdit *advOutFFURL;
    QCheckBox *advOutFFNoSpace;
    QLabel *label_16;
    QComboBox *advOutFFFormat;
    QLabel *label_44;
    QLabel *advOutFFFormatDesc;
    QLabel *label_1337;
    QLineEdit *advOutFFMCfg;
    QLabel *label_40;
    QSpinBox *advOutFFVBitrate;
    QLabel *label_63;
    QSpinBox *advOutFFVGOPSize;
    QCheckBox *advOutFFUseRescale;
    QComboBox *advOutFFRescale;
    QCheckBox *advOutFFIgnoreCompat;
    QLabel *label_37;
    QComboBox *advOutFFVEncoder;
    QLabel *label_38;
    QLineEdit *advOutFFVCfg;
    QLabel *label_41;
    QSpinBox *advOutFFABitrate;
    QLabel *label_47;
    QFrame *widget_10;
    QHBoxLayout *horizontalLayout_26;
    QCheckBox *advOutFFTrack1;
    QCheckBox *advOutFFTrack2;
    QCheckBox *advOutFFTrack3;
    QCheckBox *advOutFFTrack4;
    QCheckBox *advOutFFTrack5;
    QCheckBox *advOutFFTrack6;
    QLabel *label_39;
    QComboBox *advOutFFAEncoder;
    QLabel *label_46;
    QLineEdit *advOutFFACfg;
    QSpacerItem *verticalSpacer_6;
    QFrame *advOutRecInfo;
    QVBoxLayout *advOutRecInfoLayout;
    QWidget *advOutputAudioTracksTab;
    QVBoxLayout *verticalLayout_9;
    QFrame *widget_3;
    QVBoxLayout *verticalLayout_10;
    QScrollArea *scrollArea_6;
    QWidget *scrollAreaWidgetContents_7;
    QVBoxLayout *verticalLayout_28;
    QGroupBox *groupBox;
    QFormLayout *formLayout_10;
    QComboBox *advOutTrack1Bitrate;
    QLabel *label_55;
    QLineEdit *advOutTrack1Name;
    QLabel *label_25;
    QGroupBox *groupBox_2;
    QFormLayout *formLayout_11;
    QLabel *label_49;
    QComboBox *advOutTrack2Bitrate;
    QLabel *label_50;
    QLineEdit *advOutTrack2Name;
    QGroupBox *groupBox_3;
    QFormLayout *formLayout_12;
    QLabel *label_51;
    QComboBox *advOutTrack3Bitrate;
    QLabel *label_52;
    QLineEdit *advOutTrack3Name;
    QGroupBox *groupBox_4;
    QFormLayout *formLayout_13;
    QLabel *label_53;
    QComboBox *advOutTrack4Bitrate;
    QLabel *label_54;
    QLineEdit *advOutTrack4Name;
    QGroupBox *groupBox_9;
    QFormLayout *formLayout_25;
    QLabel *label_59;
    QComboBox *advOutTrack5Bitrate;
    QLabel *label_60;
    QLineEdit *advOutTrack5Name;
    QGroupBox *groupBox_12;
    QFormLayout *formLayout_26;
    QLabel *label_61;
    QComboBox *advOutTrack6Bitrate;
    QLabel *label_62;
    QLineEdit *advOutTrack6Name;
    QSpacerItem *verticalSpacer_5;
    QWidget *advOutputReplayTab;
    QVBoxLayout *verticalLayout_22;
    QFrame *advOutputReplayFrame;
    QVBoxLayout *verticalLayout_29;
    QLabel *advReplayBufCustomFFmpeg;
    QCheckBox *advReplayBuf;
    QFrame *advReplayBufferFrame;
    QFormLayout *formLayout_30;
    QLabel *advRBSecMaxLabel;
    QSpinBox *advRBSecMax;
    QSpinBox *advRBMegsMax;
    QLabel *advRBMegsMaxLabel;
    QLabel *advRBEstimate;
    QSpacerItem *verticalSpacer;
    QWidget *audioPage;
    QVBoxLayout *formLayout;
    QScrollArea *scrollArea_50;
    QWidget *scrollAreaWidgetContents_50;
    QVBoxLayout *verticalLayout_50;
    QFrame *widget_50;
    QVBoxLayout *verticalLayout_51;
    QGroupBox *audioGeneralGroupBox;
    QFormLayout *formLayout_52;
    QLabel *label_14;
    QComboBox *sampleRate;
    QLabel *label_15;
    QComboBox *channelSetup;
    QGroupBox *audioDevicesGroupBox;
    QFormLayout *formLayout_53;
    QLabel *label_2;
    QComboBox *desktopAudioDevice1;
    QLabel *label_3;
    QComboBox *desktopAudioDevice2;
    QLabel *label_4;
    QComboBox *auxAudioDevice1;
    QLabel *label_5;
    QComboBox *auxAudioDevice2;
    QLabel *label_6;
    QComboBox *auxAudioDevice3;
    QComboBox *auxAudioDevice4;
    QLabel *label_67;
    QGroupBox *audioMetersGroupBox;
    QFormLayout *formLayout_54;
    QLabel *label_65;
    QComboBox *meterDecayRate;
    QLabel *label_66;
    QComboBox *peakMeterType;
    QGroupBox *audioAdvGroupBox;
    QFormLayout *formLayout_56;
    QLabel *monitoringDeviceLabel;
    QComboBox *monitoringDevice;
    QCheckBox *disableAudioDucking;
    QSpacerItem *horizontalSpacer_11;
    QCheckBox *lowLatencyBuffering;
    QGroupBox *audioHotkeysGroupBox;
    QFormLayout *audioSourceLayout;
    QSpacerItem *verticalSpacer_4;
    QLabel *audioMsg;
    QLabel *audioMsg_2;
    QWidget *videoPage;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_29;
    QComboBox *baseResolution;
    QLabel *baseAspect;
    QLabel *outputResLabel;
    QLabel *label_11;
    QComboBox *downscaleFilter;
    QComboBox *fpsType;
    QStackedWidget *fpsTypes;
    QWidget *page;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *fpsCommon;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *fpsInteger;
    QWidget *page_2;
    QFormLayout *formLayout_4;
    QSpinBox *fpsNumerator;
    QSpinBox *fpsDenominator;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *videoMsg;
    QHBoxLayout *outputResLayout;
    QComboBox *outputResolution;
    QLabel *scaledAspect;
    QWidget *hotkeyPage;
    QVBoxLayout *verticalLayout_25;
    QGridLayout *hotkeySearchLayout;
    QLabel *hotkeySearchLabel;
    QLineEdit *hotkeyFilterSearch;
    QLabel *hotkeyFilterLabel;
    OBSHotkeyEdit *hotkeyFilterInput;
    QPushButton *hotkeyFilterReset;
    QScrollArea *hotkeyScrollArea;
    QWidget *hotkeyScrollContents;
    QFormLayout *hotkeyFormLayout;
    QLabel *pleaseWaitLabel;
    QWidget *accessPage;
    QVBoxLayout *formLayout_41;
    QScrollArea *scrollArea_7;
    QWidget *accessPageContents;
    QVBoxLayout *verticalLayout_42;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *colorsGroupBox;
    QFormLayout *formLayout_8;
    QLabel *colorPresetLabel;
    QComboBox *colorPreset;
    QLabel *colorSelectLabel_1;
    QHBoxLayout *colorSelectLayout_1;
    QLabel *color1;
    QPushButton *choose1;
    QSpacerItem *colorSpacer_1;
    QLabel *colorSelectLabel_2;
    QHBoxLayout *colorSelectLayout_2;
    QLabel *color2;
    QPushButton *choose2;
    QSpacerItem *colorSpacer_2;
    QLabel *colorSelectLabel_3;
    QHBoxLayout *colorSelectLayout_3;
    QLabel *color3;
    QPushButton *choose3;
    QSpacerItem *colorSpacer_3;
    QLabel *colorSelectLabel_4;
    QHBoxLayout *colorSelectLayout_4;
    QLabel *color4;
    QPushButton *choose4;
    QSpacerItem *colorSpacer_4;
    QLabel *colorSelectLabel_5;
    QHBoxLayout *colorSelectLayout_5;
    QLabel *color5;
    QPushButton *choose5;
    QSpacerItem *colorSpacer_5;
    QLabel *colorSelectLabel_6;
    QHBoxLayout *colorSelectLayout_6;
    QLabel *color6;
    QPushButton *choose6;
    QSpacerItem *colorSpacer_6;
    QLabel *colorSelectLabel_7;
    QHBoxLayout *colorSelectLayout_7;
    QLabel *color7;
    QPushButton *choose7;
    QSpacerItem *colorSpacer_7;
    QLabel *colorSelectLabel_8;
    QHBoxLayout *colorSelectLayout_8;
    QLabel *color8;
    QPushButton *choose8;
    QSpacerItem *colorSpacer_8;
    QLabel *colorSelectLabel_9;
    QHBoxLayout *colorSelectLayout_9;
    QLabel *color9;
    QPushButton *choose9;
    QSpacerItem *colorSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QWidget *advancedPage;
    QVBoxLayout *verticalLayout_16;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_23;
    QFrame *widget_11;
    QVBoxLayout *verticalLayout_24;
    QGroupBox *advancedGeneralGroupBox;
    QFormLayout *formLayout_22;
    QLabel *processPriorityLabel;
    QComboBox *processPriority;
    QSpacerItem *horizontalSpacer_13;
    QCheckBox *confirmOnExit;
    QGroupBox *advancedVideoContainer;
    QFormLayout *formLayout_14;
    QLabel *rendererLabel;
    QComboBox *renderer;
    QLabel *adapterLabel;
    QComboBox *adapter;
    QLabel *label_30;
    QComboBox *colorFormat;
    QLabel *label_33;
    QHBoxLayout *horizontalLayout_20;
    QComboBox *colorSpace;
    QLabel *label_34;
    QComboBox *colorRange;
    QLabel *label_sdrWhiteLevel;
    QHBoxLayout *horizontalLayout_sdrPaperWhite;
    QSpinBox *sdrWhiteLevel;
    QLabel *label_hdrNominalPeakLevel;
    QSpinBox *hdrNominalPeakLevel;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *disableOSXVSync;
    QCheckBox *resetOSXVSync;
    QSpacerItem *horizontalSpacer_12;
    QGroupBox *groupBox_6;
    QFormLayout *formLayout_17;
    QLabel *label_7;
    QLineEdit *filenameFormatting;
    QCheckBox *overwriteIfExists;
    QHBoxLayout *horizontalLayout_14;
    QLineEdit *simpleRBPrefix;
    QLabel *label_58;
    QLineEdit *simpleRBSuffix;
    QLabel *label_57;
    QSpacerItem *horizontalSpacer_10;
    QCheckBox *autoRemux;
    QSpacerItem *horizontalSpacer_16;
    QGroupBox *groupBox_5;
    QFormLayout *formLayout_18;
    QLabel *label_56;
    QFrame *widget_12;
    QHBoxLayout *horizontalLayout_13;
    QSpinBox *streamDelaySec;
    QLabel *streamDelayInfo;
    QCheckBox *streamDelayPreserve;
    QCheckBox *streamDelayEnable;
    QSpacerItem *horizontalSpacer_9;
    QGroupBox *groupBox_7;
    QFormLayout *formLayout_19;
    QCheckBox *reconnectEnable;
    QHBoxLayout *horizontalLayout_19;
    QSpinBox *reconnectRetryDelay;
    QLabel *label_22;
    QSpinBox *reconnectMaxRetries;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *advNetworkGroupBox;
    QFormLayout *formLayout_23;
    QLabel *advNetworkDisabled;
    QLabel *ipFamilyLabel;
    QComboBox *ipFamily;
    QLabel *bindToIPLabel;
    QComboBox *bindToIP;
    QCheckBox *enableNewSocketLoop;
    QCheckBox *enableLowLatencyMode;
    QSpacerItem *horizontalSpacer_7;
    QCheckBox *dynBitrate;
    QGroupBox *sourcesGroup;
    QFormLayout *formLayout_34;
    QSpacerItem *horizontalSpacer_15;
    QCheckBox *browserHWAccel;
    QGroupBox *groupBox_17;
    QFormLayout *formLayout_33;
    QLabel *label_21;
    QComboBox *hotkeyFocusType;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_17;
    QLabel *advancedMsg;
    QLabel *advancedMsg2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *OBSBasicSettings)
    {
        if (OBSBasicSettings->objectName().isEmpty())
            OBSBasicSettings->setObjectName("OBSBasicSettings");
        OBSBasicSettings->resize(981, 730);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OBSBasicSettings->sizePolicy().hasHeightForWidth());
        OBSBasicSettings->setSizePolicy(sizePolicy);
        OBSBasicSettings->setMinimumSize(QSize(700, 512));
        OBSBasicSettings->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(OBSBasicSettings);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        listWidget = new QListWidget(OBSBasicSettings);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/settings/images/settings/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/settings/images/settings/appearance.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/settings/images/settings/stream.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/settings/images/settings/output.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(listWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/settings/images/settings/audio.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(listWidget);
        __qlistwidgetitem4->setIcon(icon4);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/settings/images/settings/video.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem5 = new QListWidgetItem(listWidget);
        __qlistwidgetitem5->setIcon(icon5);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/settings/images/settings/hotkeys.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem6 = new QListWidgetItem(listWidget);
        __qlistwidgetitem6->setIcon(icon6);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/settings/images/settings/accessibility.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem7 = new QListWidgetItem(listWidget);
        __qlistwidgetitem7->setIcon(icon7);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/settings/images/settings/advanced.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem8 = new QListWidgetItem(listWidget);
        __qlistwidgetitem8->setIcon(icon8);
        listWidget->setObjectName("listWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMaximumSize(QSize(180, 16777215));
        listWidget->setIconSize(QSize(16, 16));
        listWidget->setSpacing(1);

        horizontalLayout->addWidget(listWidget);

        settingsPages = new QStackedWidget(OBSBasicSettings);
        settingsPages->setObjectName("settingsPages");
        generalPage = new QWidget();
        generalPage->setObjectName("generalPage");
        verticalLayout_18 = new QVBoxLayout(generalPage);
        verticalLayout_18->setObjectName("verticalLayout_18");
        verticalLayout_18->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(generalPage);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setFrameShadow(QFrame::Plain);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 764, 1298));
        verticalLayout_19 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_19->setObjectName("verticalLayout_19");
        verticalLayout_19->setContentsMargins(0, 0, 0, 9);
        widget_2 = new QFrame(scrollAreaWidgetContents_2);
        widget_2->setObjectName("widget_2");
        verticalLayout_20 = new QVBoxLayout(widget_2);
        verticalLayout_20->setObjectName("verticalLayout_20");
        verticalLayout_20->setContentsMargins(9, 0, -1, 0);
        groupBox_15 = new QGroupBox(widget_2);
        groupBox_15->setObjectName("groupBox_15");
        formLayout_32 = new QFormLayout(groupBox_15);
        formLayout_32->setObjectName("formLayout_32");
        formLayout_32->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_32->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_32->setContentsMargins(-1, 2, -1, -1);
        label = new QLabel(groupBox_15);
        label->setObjectName("label");

        formLayout_32->setWidget(0, QFormLayout::LabelRole, label);

        language = new QComboBox(groupBox_15);
        language->setObjectName("language");

        formLayout_32->setWidget(0, QFormLayout::FieldRole, language);

        horizontalSpacer_3 = new QSpacerItem(170, 5, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        formLayout_32->setItem(1, QFormLayout::LabelRole, horizontalSpacer_3);

        openStatsOnStartup = new QCheckBox(groupBox_15);
        openStatsOnStartup->setObjectName("openStatsOnStartup");

        formLayout_32->setWidget(1, QFormLayout::FieldRole, openStatsOnStartup);

        hideOBSFromCapture = new QCheckBox(groupBox_15);
        hideOBSFromCapture->setObjectName("hideOBSFromCapture");

        formLayout_32->setWidget(2, QFormLayout::FieldRole, hideOBSFromCapture);


        verticalLayout_20->addWidget(groupBox_15);

        updateSettingsGroupBox = new QGroupBox(widget_2);
        updateSettingsGroupBox->setObjectName("updateSettingsGroupBox");
        formLayout_20 = new QFormLayout(updateSettingsGroupBox);
        formLayout_20->setObjectName("formLayout_20");
        formLayout_20->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_20->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        updateChannelLabel = new QLabel(updateSettingsGroupBox);
        updateChannelLabel->setObjectName("updateChannelLabel");

        formLayout_20->setWidget(0, QFormLayout::LabelRole, updateChannelLabel);

        updateChannelBox = new QComboBox(updateSettingsGroupBox);
        updateChannelBox->setObjectName("updateChannelBox");
        updateChannelBox->setEditable(false);

        formLayout_20->setWidget(0, QFormLayout::FieldRole, updateChannelBox);

        enableAutoUpdates = new QCheckBox(updateSettingsGroupBox);
        enableAutoUpdates->setObjectName("enableAutoUpdates");
        enableAutoUpdates->setChecked(true);

        formLayout_20->setWidget(1, QFormLayout::FieldRole, enableAutoUpdates);

        horizontalSpacer_29 = new QSpacerItem(170, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        formLayout_20->setItem(1, QFormLayout::LabelRole, horizontalSpacer_29);


        verticalLayout_20->addWidget(updateSettingsGroupBox);

        groupBox_16 = new QGroupBox(widget_2);
        groupBox_16->setObjectName("groupBox_16");
        formLayout_2 = new QFormLayout(groupBox_16);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer_5 = new QSpacerItem(170, 5, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        formLayout_2->setItem(0, QFormLayout::LabelRole, horizontalSpacer_5);

        warnBeforeStreamStart = new QCheckBox(groupBox_16);
        warnBeforeStreamStart->setObjectName("warnBeforeStreamStart");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, warnBeforeStreamStart);

        warnBeforeStreamStop = new QCheckBox(groupBox_16);
        warnBeforeStreamStop->setObjectName("warnBeforeStreamStop");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, warnBeforeStreamStop);

        warnBeforeRecordStop = new QCheckBox(groupBox_16);
        warnBeforeRecordStop->setObjectName("warnBeforeRecordStop");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, warnBeforeRecordStop);

        recordWhenStreaming = new QCheckBox(groupBox_16);
        recordWhenStreaming->setObjectName("recordWhenStreaming");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, recordWhenStreaming);

        keepRecordStreamStops = new QCheckBox(groupBox_16);
        keepRecordStreamStops->setObjectName("keepRecordStreamStops");
        keepRecordStreamStops->setEnabled(false);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, keepRecordStreamStops);

        replayWhileStreaming = new QCheckBox(groupBox_16);
        replayWhileStreaming->setObjectName("replayWhileStreaming");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, replayWhileStreaming);

        keepReplayStreamStops = new QCheckBox(groupBox_16);
        keepReplayStreamStops->setObjectName("keepReplayStreamStops");
        keepReplayStreamStops->setEnabled(false);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, keepReplayStreamStops);


        verticalLayout_20->addWidget(groupBox_16);

        groupBox_10 = new QGroupBox(widget_2);
        groupBox_10->setObjectName("groupBox_10");
        groupBox_10->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy2);
        groupBox_10->setFlat(false);
        formLayout_21 = new QFormLayout(groupBox_10);
        formLayout_21->setObjectName("formLayout_21");
        formLayout_21->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_21->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_21->setContentsMargins(-1, 2, -1, -1);
        snappingEnabled = new QCheckBox(groupBox_10);
        snappingEnabled->setObjectName("snappingEnabled");
        snappingEnabled->setChecked(true);

        formLayout_21->setWidget(0, QFormLayout::FieldRole, snappingEnabled);

        screenSnapping = new QCheckBox(groupBox_10);
        screenSnapping->setObjectName("screenSnapping");
        screenSnapping->setChecked(true);

        formLayout_21->setWidget(2, QFormLayout::FieldRole, screenSnapping);

        centerSnapping = new QCheckBox(groupBox_10);
        centerSnapping->setObjectName("centerSnapping");
        centerSnapping->setChecked(true);

        formLayout_21->setWidget(4, QFormLayout::FieldRole, centerSnapping);

        sourceSnapping = new QCheckBox(groupBox_10);
        sourceSnapping->setObjectName("sourceSnapping");
        sourceSnapping->setChecked(true);

        formLayout_21->setWidget(3, QFormLayout::FieldRole, sourceSnapping);

        snapDistance = new QDoubleSpinBox(groupBox_10);
        snapDistance->setObjectName("snapDistance");
        snapDistance->setDecimals(1);
        snapDistance->setSingleStep(0.500000000000000);
        snapDistance->setValue(10.000000000000000);

        formLayout_21->setWidget(1, QFormLayout::FieldRole, snapDistance);

        label_9 = new QLabel(groupBox_10);
        label_9->setObjectName("label_9");

        formLayout_21->setWidget(1, QFormLayout::LabelRole, label_9);

        horizontalSpacer_4 = new QSpacerItem(170, 5, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        formLayout_21->setItem(3, QFormLayout::LabelRole, horizontalSpacer_4);


        verticalLayout_20->addWidget(groupBox_10);

        groupBox_14 = new QGroupBox(widget_2);
        groupBox_14->setObjectName("groupBox_14");
        formLayout_28 = new QFormLayout(groupBox_14);
        formLayout_28->setObjectName("formLayout_28");
        formLayout_28->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_28->setContentsMargins(-1, 2, -1, -1);
        hideProjectorCursor = new QCheckBox(groupBox_14);
        hideProjectorCursor->setObjectName("hideProjectorCursor");

        formLayout_28->setWidget(0, QFormLayout::FieldRole, hideProjectorCursor);

        projectorAlwaysOnTop = new QCheckBox(groupBox_14);
        projectorAlwaysOnTop->setObjectName("projectorAlwaysOnTop");

        formLayout_28->setWidget(1, QFormLayout::FieldRole, projectorAlwaysOnTop);

        saveProjectors = new QCheckBox(groupBox_14);
        saveProjectors->setObjectName("saveProjectors");

        formLayout_28->setWidget(2, QFormLayout::FieldRole, saveProjectors);

        closeProjectors = new QCheckBox(groupBox_14);
        closeProjectors->setObjectName("closeProjectors");

        formLayout_28->setWidget(3, QFormLayout::FieldRole, closeProjectors);

        horizontalSpacer = new QSpacerItem(170, 5, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        formLayout_28->setItem(1, QFormLayout::LabelRole, horizontalSpacer);


        verticalLayout_20->addWidget(groupBox_14);

        groupBox_13 = new QGroupBox(widget_2);
        groupBox_13->setObjectName("groupBox_13");
        formLayout_29 = new QFormLayout(groupBox_13);
        formLayout_29->setObjectName("formLayout_29");
        formLayout_29->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_29->setContentsMargins(-1, 2, -1, -1);
        systemTrayEnabled = new QCheckBox(groupBox_13);
        systemTrayEnabled->setObjectName("systemTrayEnabled");

        formLayout_29->setWidget(0, QFormLayout::FieldRole, systemTrayEnabled);

        systemTrayWhenStarted = new QCheckBox(groupBox_13);
        systemTrayWhenStarted->setObjectName("systemTrayWhenStarted");
        systemTrayWhenStarted->setEnabled(false);

        formLayout_29->setWidget(1, QFormLayout::FieldRole, systemTrayWhenStarted);

        systemTrayAlways = new QCheckBox(groupBox_13);
        systemTrayAlways->setObjectName("systemTrayAlways");
        systemTrayAlways->setEnabled(false);

        formLayout_29->setWidget(2, QFormLayout::FieldRole, systemTrayAlways);

        horizontalSpacer_2 = new QSpacerItem(170, 5, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        formLayout_29->setItem(1, QFormLayout::LabelRole, horizontalSpacer_2);


        verticalLayout_20->addWidget(groupBox_13);

        groupBox_18 = new QGroupBox(widget_2);
        groupBox_18->setObjectName("groupBox_18");
        formLayout_35 = new QFormLayout(groupBox_18);
        formLayout_35->setObjectName("formLayout_35");
        formLayout_35->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_35->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_35->setContentsMargins(-1, 2, -1, -1);
        overflowAlwaysVisible = new QCheckBox(groupBox_18);
        overflowAlwaysVisible->setObjectName("overflowAlwaysVisible");

        formLayout_35->setWidget(1, QFormLayout::FieldRole, overflowAlwaysVisible);

        horizontalSpacer_25 = new QSpacerItem(170, 5, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_35->setItem(0, QFormLayout::LabelRole, horizontalSpacer_25);

        overflowSelectionHide = new QCheckBox(groupBox_18);
        overflowSelectionHide->setObjectName("overflowSelectionHide");

        formLayout_35->setWidget(2, QFormLayout::FieldRole, overflowSelectionHide);

        previewSafeAreas = new QCheckBox(groupBox_18);
        previewSafeAreas->setObjectName("previewSafeAreas");

        formLayout_35->setWidget(3, QFormLayout::FieldRole, previewSafeAreas);

        previewSpacingHelpers = new QCheckBox(groupBox_18);
        previewSpacingHelpers->setObjectName("previewSpacingHelpers");

        formLayout_35->setWidget(4, QFormLayout::FieldRole, previewSpacingHelpers);

        overflowHide = new QCheckBox(groupBox_18);
        overflowHide->setObjectName("overflowHide");

        formLayout_35->setWidget(0, QFormLayout::FieldRole, overflowHide);


        verticalLayout_20->addWidget(groupBox_18);

        groupBox_19 = new QGroupBox(widget_2);
        groupBox_19->setObjectName("groupBox_19");
        formLayout_36 = new QFormLayout(groupBox_19);
        formLayout_36->setObjectName("formLayout_36");
        formLayout_36->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_36->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_36->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer_26 = new QSpacerItem(170, 5, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_36->setItem(0, QFormLayout::LabelRole, horizontalSpacer_26);

        automaticSearch = new QCheckBox(groupBox_19);
        automaticSearch->setObjectName("automaticSearch");

        formLayout_36->setWidget(0, QFormLayout::FieldRole, automaticSearch);


        verticalLayout_20->addWidget(groupBox_19);

        groupBox_11 = new QGroupBox(widget_2);
        groupBox_11->setObjectName("groupBox_11");
        formLayout_31 = new QFormLayout(groupBox_11);
        formLayout_31->setObjectName("formLayout_31");
        formLayout_31->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_31->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_31->setContentsMargins(-1, 2, -1, -1);
        doubleClickSwitch = new QCheckBox(groupBox_11);
        doubleClickSwitch->setObjectName("doubleClickSwitch");

        formLayout_31->setWidget(0, QFormLayout::FieldRole, doubleClickSwitch);

        horizontalSpacer_6 = new QSpacerItem(170, 5, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_31->setItem(0, QFormLayout::LabelRole, horizontalSpacer_6);

        studioPortraitLayout = new QCheckBox(groupBox_11);
        studioPortraitLayout->setObjectName("studioPortraitLayout");

        formLayout_31->setWidget(1, QFormLayout::FieldRole, studioPortraitLayout);

        prevProgLabelToggle = new QCheckBox(groupBox_11);
        prevProgLabelToggle->setObjectName("prevProgLabelToggle");
        prevProgLabelToggle->setChecked(true);

        formLayout_31->setWidget(2, QFormLayout::FieldRole, prevProgLabelToggle);


        verticalLayout_20->addWidget(groupBox_11);

        groupBoxMultiview = new QGroupBox(widget_2);
        groupBoxMultiview->setObjectName("groupBoxMultiview");
        formLayoutMultiview = new QFormLayout(groupBoxMultiview);
        formLayoutMultiview->setObjectName("formLayoutMultiview");
        formLayoutMultiview->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayoutMultiview->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayoutMultiview->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacerMultiview = new QSpacerItem(170, 5, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        formLayoutMultiview->setItem(0, QFormLayout::LabelRole, horizontalSpacerMultiview);

        multiviewMouseSwitch = new QCheckBox(groupBoxMultiview);
        multiviewMouseSwitch->setObjectName("multiviewMouseSwitch");
        multiviewMouseSwitch->setChecked(true);

        formLayoutMultiview->setWidget(0, QFormLayout::FieldRole, multiviewMouseSwitch);

        multiviewDrawNames = new QCheckBox(groupBoxMultiview);
        multiviewDrawNames->setObjectName("multiviewDrawNames");
        multiviewDrawNames->setChecked(true);

        formLayoutMultiview->setWidget(1, QFormLayout::FieldRole, multiviewDrawNames);

        multiviewDrawAreas = new QCheckBox(groupBoxMultiview);
        multiviewDrawAreas->setObjectName("multiviewDrawAreas");
        multiviewDrawAreas->setChecked(true);

        formLayoutMultiview->setWidget(2, QFormLayout::FieldRole, multiviewDrawAreas);

        multiviewLayout = new QComboBox(groupBoxMultiview);
        multiviewLayout->setObjectName("multiviewLayout");

        formLayoutMultiview->setWidget(3, QFormLayout::FieldRole, multiviewLayout);

        label_64 = new QLabel(groupBoxMultiview);
        label_64->setObjectName("label_64");

        formLayoutMultiview->setWidget(3, QFormLayout::LabelRole, label_64);


        verticalLayout_20->addWidget(groupBoxMultiview);


        verticalLayout_19->addWidget(widget_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_18->addWidget(scrollArea_2);

        settingsPages->addWidget(generalPage);
        appearancePage = new QWidget();
        appearancePage->setObjectName("appearancePage");
        formLayout_69 = new QVBoxLayout(appearancePage);
        formLayout_69->setObjectName("formLayout_69");
        formLayout_69->setContentsMargins(0, 0, 0, 0);
        scrollArea_420 = new QScrollArea(appearancePage);
        scrollArea_420->setObjectName("scrollArea_420");
        scrollArea_420->setFrameShape(QFrame::NoFrame);
        scrollArea_420->setFrameShadow(QFrame::Plain);
        scrollArea_420->setWidgetResizable(true);
        appearancePageContents = new QWidget();
        appearancePageContents->setObjectName("appearancePageContents");
        appearancePageContents->setGeometry(QRect(0, 0, 781, 680));
        verticalLayout_1337 = new QVBoxLayout(appearancePageContents);
        verticalLayout_1337->setObjectName("verticalLayout_1337");
        verticalLayout_1337->setContentsMargins(0, 0, 0, 0);
        appearanceFrame = new QFrame(appearancePageContents);
        appearanceFrame->setObjectName("appearanceFrame");
        verticalLayout_30 = new QVBoxLayout(appearanceFrame);
        verticalLayout_30->setObjectName("verticalLayout_30");
        verticalLayout_30->setContentsMargins(-1, 0, 0, 0);
        appearanceGeneral = new QGroupBox(appearanceFrame);
        appearanceGeneral->setObjectName("appearanceGeneral");
        appearanceGeneral->setCheckable(false);
        formLayout_37 = new QFormLayout(appearanceGeneral);
        formLayout_37->setObjectName("formLayout_37");
        formLayout_37->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_37->setContentsMargins(-1, 2, -1, -1);
        label_45 = new QLabel(appearanceGeneral);
        label_45->setObjectName("label_45");

        formLayout_37->setWidget(0, QFormLayout::LabelRole, label_45);

        theme = new QComboBox(appearanceGeneral);
        theme->setObjectName("theme");

        formLayout_37->setWidget(0, QFormLayout::FieldRole, theme);

        label_10 = new QLabel(appearanceGeneral);
        label_10->setObjectName("label_10");

        formLayout_37->setWidget(1, QFormLayout::LabelRole, label_10);

        themeVariant = new QComboBox(appearanceGeneral);
        themeVariant->setObjectName("themeVariant");

        formLayout_37->setWidget(1, QFormLayout::FieldRole, themeVariant);


        verticalLayout_30->addWidget(appearanceGeneral);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_30->addItem(verticalSpacer_8);


        verticalLayout_1337->addWidget(appearanceFrame);

        scrollArea_420->setWidget(appearancePageContents);

        formLayout_69->addWidget(scrollArea_420);

        settingsPages->addWidget(appearancePage);
        streamPage = new QWidget();
        streamPage->setObjectName("streamPage");
        verticalLayout_5 = new QVBoxLayout(streamPage);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(9, 0, 0, 0);
        widget_5 = new QFrame(streamPage);
        widget_5->setObjectName("widget_5");
        sizePolicy2.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy2);
        topStreamLayout = new QFormLayout(widget_5);
        topStreamLayout->setObjectName("topStreamLayout");
        topStreamLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        topStreamLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        topStreamLayout->setContentsMargins(0, 0, -1, 0);
        serviceLabel = new QLabel(widget_5);
        serviceLabel->setObjectName("serviceLabel");
        serviceLabel->setMinimumSize(QSize(170, 0));
        serviceLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        topStreamLayout->setWidget(2, QFormLayout::LabelRole, serviceLabel);

        serviceWidget = new QFrame(widget_5);
        serviceWidget->setObjectName("serviceWidget");
        serviceWidgetLayout = new QHBoxLayout(serviceWidget);
        serviceWidgetLayout->setObjectName("serviceWidgetLayout");
        serviceWidgetLayout->setContentsMargins(0, 0, 0, 0);
        service = new QComboBox(serviceWidget);
        service->setObjectName("service");
        service->setMaxVisibleItems(20);

        serviceWidgetLayout->addWidget(service);

        moreInfoButton = new UrlPushButton(serviceWidget);
        moreInfoButton->setObjectName("moreInfoButton");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(moreInfoButton->sizePolicy().hasHeightForWidth());
        moreInfoButton->setSizePolicy(sizePolicy3);

        serviceWidgetLayout->addWidget(moreInfoButton);


        topStreamLayout->setWidget(2, QFormLayout::FieldRole, serviceWidget);


        verticalLayout_5->addWidget(widget_5);

        streamStackWidget = new QStackedWidget(streamPage);
        streamStackWidget->setObjectName("streamStackWidget");
        sizePolicy.setHeightForWidth(streamStackWidget->sizePolicy().hasHeightForWidth());
        streamStackWidget->setSizePolicy(sizePolicy);
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        loginPageLayout = new QFormLayout(loginPage);
        loginPageLayout->setObjectName("loginPageLayout");
        horizontalSpacer_20 = new QSpacerItem(170, 19, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        loginPageLayout->setItem(0, QFormLayout::LabelRole, horizontalSpacer_20);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        connectAccount = new QPushButton(loginPage);
        connectAccount->setObjectName("connectAccount");

        horizontalLayout_16->addWidget(connectAccount);

        horizontalSpacer_21 = new QSpacerItem(40, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_21);


        loginPageLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_16);

        horizontalSpacer_22 = new QSpacerItem(170, 19, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        loginPageLayout->setItem(1, QFormLayout::LabelRole, horizontalSpacer_22);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        useStreamKey = new QPushButton(loginPage);
        useStreamKey->setObjectName("useStreamKey");

        horizontalLayout_17->addWidget(useStreamKey);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_23);


        loginPageLayout->setLayout(1, QFormLayout::FieldRole, horizontalLayout_17);

        streamStackWidget->addWidget(loginPage);
        streamKeyPage = new QWidget();
        streamKeyPage->setObjectName("streamKeyPage");
        streamkeyPageLayout = new QFormLayout(streamKeyPage);
        streamkeyPageLayout->setObjectName("streamkeyPageLayout");
        streamkeyPageLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        streamkeyPageLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        serverLabel = new QLabel(streamKeyPage);
        serverLabel->setObjectName("serverLabel");

        streamkeyPageLayout->setWidget(0, QFormLayout::LabelRole, serverLabel);

        serverStackedWidget = new QStackedWidget(streamKeyPage);
        serverStackedWidget->setObjectName("serverStackedWidget");
        sizePolicy2.setHeightForWidth(serverStackedWidget->sizePolicy().hasHeightForWidth());
        serverStackedWidget->setSizePolicy(sizePolicy2);
        servicePage = new QWidget();
        servicePage->setObjectName("servicePage");
        horizontalLayout_21 = new QHBoxLayout(servicePage);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        server = new QComboBox(servicePage);
        server->setObjectName("server");

        horizontalLayout_21->addWidget(server);

        serverStackedWidget->addWidget(servicePage);
        customPage = new QWidget();
        customPage->setObjectName("customPage");
        horizontalLayout_22 = new QHBoxLayout(customPage);
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        horizontalLayout_22->setContentsMargins(0, 0, 0, 0);
        customServer = new QLineEdit(customPage);
        customServer->setObjectName("customServer");

        horizontalLayout_22->addWidget(customServer);

        serverStackedWidget->addWidget(customPage);

        streamkeyPageLayout->setWidget(0, QFormLayout::FieldRole, serverStackedWidget);

        streamKeyLabel = new QLabel(streamKeyPage);
        streamKeyLabel->setObjectName("streamKeyLabel");
        streamKeyLabel->setOpenExternalLinks(true);

        streamkeyPageLayout->setWidget(1, QFormLayout::LabelRole, streamKeyLabel);

        streamKeyWidget = new QFrame(streamKeyPage);
        streamKeyWidget->setObjectName("streamKeyWidget");
        horizontalLayout_11 = new QHBoxLayout(streamKeyWidget);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        key = new QLineEdit(streamKeyWidget);
        key->setObjectName("key");
        key->setInputMask(QString::fromUtf8(""));
        key->setText(QString::fromUtf8(""));
        key->setEchoMode(QLineEdit::Password);

        horizontalLayout_11->addWidget(key);

        show = new QPushButton(streamKeyWidget);
        show->setObjectName("show");

        horizontalLayout_11->addWidget(show);

        getStreamKeyButton = new UrlPushButton(streamKeyWidget);
        getStreamKeyButton->setObjectName("getStreamKeyButton");
        getStreamKeyButton->setToolTipDuration(-4);

        horizontalLayout_11->addWidget(getStreamKeyButton);


        streamkeyPageLayout->setWidget(1, QFormLayout::FieldRole, streamKeyWidget);

        horizontalSpacer_18 = new QSpacerItem(170, 8, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        streamkeyPageLayout->setItem(3, QFormLayout::LabelRole, horizontalSpacer_18);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(8);
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        horizontalLayout_23->setContentsMargins(7, -1, 7, -1);
        connectedAccountText = new QLabel(streamKeyPage);
        connectedAccountText->setObjectName("connectedAccountText");
        connectedAccountText->setStyleSheet(QString::fromUtf8("font-weight: bold"));

        horizontalLayout_23->addWidget(connectedAccountText);

        disconnectAccount = new QPushButton(streamKeyPage);
        disconnectAccount->setObjectName("disconnectAccount");

        horizontalLayout_23->addWidget(disconnectAccount);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_24);


        streamkeyPageLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_23);

        bandwidthTestEnable = new QCheckBox(streamKeyPage);
        bandwidthTestEnable->setObjectName("bandwidthTestEnable");

        streamkeyPageLayout->setWidget(6, QFormLayout::FieldRole, bandwidthTestEnable);

        useAuth = new QCheckBox(streamKeyPage);
        useAuth->setObjectName("useAuth");

        streamkeyPageLayout->setWidget(7, QFormLayout::FieldRole, useAuth);

        authUsernameLabel = new QLabel(streamKeyPage);
        authUsernameLabel->setObjectName("authUsernameLabel");

        streamkeyPageLayout->setWidget(9, QFormLayout::LabelRole, authUsernameLabel);

        authUsername = new QLineEdit(streamKeyPage);
        authUsername->setObjectName("authUsername");

        streamkeyPageLayout->setWidget(9, QFormLayout::FieldRole, authUsername);

        authPwLabel = new QLabel(streamKeyPage);
        authPwLabel->setObjectName("authPwLabel");

        streamkeyPageLayout->setWidget(10, QFormLayout::LabelRole, authPwLabel);

        authPwWidget = new QFrame(streamKeyPage);
        authPwWidget->setObjectName("authPwWidget");
        horizontalLayout_25 = new QHBoxLayout(authPwWidget);
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        authPw = new QLineEdit(authPwWidget);
        authPw->setObjectName("authPw");
        authPw->setEchoMode(QLineEdit::Password);

        horizontalLayout_25->addWidget(authPw);

        authPwShow = new QPushButton(authPwWidget);
        authPwShow->setObjectName("authPwShow");

        horizontalLayout_25->addWidget(authPwShow);


        streamkeyPageLayout->setWidget(10, QFormLayout::FieldRole, authPwWidget);

        twitchAddonDropdown = new QComboBox(streamKeyPage);
        twitchAddonDropdown->setObjectName("twitchAddonDropdown");

        streamkeyPageLayout->setWidget(8, QFormLayout::FieldRole, twitchAddonDropdown);

        twitchAddonLabel = new QLabel(streamKeyPage);
        twitchAddonLabel->setObjectName("twitchAddonLabel");

        streamkeyPageLayout->setWidget(8, QFormLayout::LabelRole, twitchAddonLabel);

        ignoreRecommended = new QCheckBox(streamKeyPage);
        ignoreRecommended->setObjectName("ignoreRecommended");

        streamkeyPageLayout->setWidget(11, QFormLayout::FieldRole, ignoreRecommended);

        enforceSettingsLabel = new QLabel(streamKeyPage);
        enforceSettingsLabel->setObjectName("enforceSettingsLabel");
        enforceSettingsLabel->setText(QString::fromUtf8(""));
        enforceSettingsLabel->setTextFormat(Qt::RichText);
        enforceSettingsLabel->setOpenExternalLinks(true);

        streamkeyPageLayout->setWidget(12, QFormLayout::FieldRole, enforceSettingsLabel);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        useStreamKeyAdv = new QPushButton(streamKeyPage);
        useStreamKeyAdv->setObjectName("useStreamKeyAdv");

        horizontalLayout_28->addWidget(useStreamKeyAdv);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_28->addItem(horizontalSpacer_28);


        streamkeyPageLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_28);

        connectedAccountLabel = new QLabel(streamKeyPage);
        connectedAccountLabel->setObjectName("connectedAccountLabel");

        streamkeyPageLayout->setWidget(4, QFormLayout::LabelRole, connectedAccountLabel);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        connectAccount2 = new QPushButton(streamKeyPage);
        connectAccount2->setObjectName("connectAccount2");
        connectAccount2->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_15->addWidget(connectAccount2);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_19);


        streamkeyPageLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_15);

        streamStackWidget->addWidget(streamKeyPage);

        verticalLayout_5->addWidget(streamStackWidget);

        settingsPages->addWidget(streamPage);
        outputPage = new QWidget();
        outputPage->setObjectName("outputPage");
        verticalLayout_2 = new QVBoxLayout(outputPage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(9, 0, 0, 0);
        frame = new QFrame(outputPage);
        frame->setObjectName("frame");
        verticalLayout_6 = new QVBoxLayout(frame);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget = new QFrame(frame);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy4);
        formLayout_5 = new QFormLayout(widget);
        formLayout_5->setObjectName("formLayout_5");
        formLayout_5->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_5->setContentsMargins(0, 0, 9, 0);
        outputModeLabel = new QLabel(widget);
        outputModeLabel->setObjectName("outputModeLabel");
        outputModeLabel->setMinimumSize(QSize(170, 0));
        outputModeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, outputModeLabel);

        outputMode = new QComboBox(widget);
        outputMode->addItem(QString());
        outputMode->addItem(QString());
        outputMode->setObjectName("outputMode");
        outputMode->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(outputMode->sizePolicy().hasHeightForWidth());
        outputMode->setSizePolicy(sizePolicy5);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, outputMode);


        verticalLayout_6->addWidget(widget);

        outputModePages = new QStackedWidget(frame);
        outputModePages->setObjectName("outputModePages");
        easyOutputsPage = new QWidget();
        easyOutputsPage->setObjectName("easyOutputsPage");
        verticalLayout_3 = new QVBoxLayout(easyOutputsPage);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        simpleOutScroll = new QScrollArea(easyOutputsPage);
        simpleOutScroll->setObjectName("simpleOutScroll");
        simpleOutScroll->setFrameShape(QFrame::NoFrame);
        simpleOutScroll->setFrameShadow(QFrame::Plain);
        simpleOutScroll->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 518, 609));
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(scrollAreaWidgetContents_3->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_3->setSizePolicy(sizePolicy6);
        verticalLayout_52 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_52->setObjectName("verticalLayout_52");
        verticalLayout_52->setContentsMargins(0, 0, 9, 0);
        simpleStreamingGroupBox = new QGroupBox(scrollAreaWidgetContents_3);
        simpleStreamingGroupBox->setObjectName("simpleStreamingGroupBox");
        sizePolicy2.setHeightForWidth(simpleStreamingGroupBox->sizePolicy().hasHeightForWidth());
        simpleStreamingGroupBox->setSizePolicy(sizePolicy2);
        simpleStreamingLayout = new QFormLayout(simpleStreamingGroupBox);
        simpleStreamingLayout->setObjectName("simpleStreamingLayout");
        simpleStreamingLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        simpleStreamingLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        simpleStreamingLayout->setContentsMargins(9, 2, 9, 9);
        label_19 = new QLabel(simpleStreamingGroupBox);
        label_19->setObjectName("label_19");
        label_19->setMinimumSize(QSize(170, 0));
        label_19->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        simpleStreamingLayout->setWidget(0, QFormLayout::LabelRole, label_19);

        simpleOutputVBitrate = new QSpinBox(simpleStreamingGroupBox);
        simpleOutputVBitrate->setObjectName("simpleOutputVBitrate");
        simpleOutputVBitrate->setMinimum(200);
        simpleOutputVBitrate->setMaximum(1000000);
        simpleOutputVBitrate->setValue(2000);

        simpleStreamingLayout->setWidget(0, QFormLayout::FieldRole, simpleOutputVBitrate);

        label_20 = new QLabel(simpleStreamingGroupBox);
        label_20->setObjectName("label_20");

        simpleStreamingLayout->setWidget(1, QFormLayout::LabelRole, label_20);

        simpleOutputABitrate = new QComboBox(simpleStreamingGroupBox);
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->addItem(QString());
        simpleOutputABitrate->setObjectName("simpleOutputABitrate");

        simpleStreamingLayout->setWidget(1, QFormLayout::FieldRole, simpleOutputABitrate);

        simpleOutStrEncoderLabel = new QLabel(simpleStreamingGroupBox);
        simpleOutStrEncoderLabel->setObjectName("simpleOutStrEncoderLabel");

        simpleStreamingLayout->setWidget(2, QFormLayout::LabelRole, simpleOutStrEncoderLabel);

        simpleOutStrEncoder = new QComboBox(simpleStreamingGroupBox);
        simpleOutStrEncoder->setObjectName("simpleOutStrEncoder");

        simpleStreamingLayout->setWidget(2, QFormLayout::FieldRole, simpleOutStrEncoder);

        simpleOutPresetLabel = new QLabel(simpleStreamingGroupBox);
        simpleOutPresetLabel->setObjectName("simpleOutPresetLabel");
        simpleOutPresetLabel->setEnabled(true);

        simpleStreamingLayout->setWidget(3, QFormLayout::LabelRole, simpleOutPresetLabel);

        simpleOutPreset = new QComboBox(simpleStreamingGroupBox);
        simpleOutPreset->setObjectName("simpleOutPreset");

        simpleStreamingLayout->setWidget(3, QFormLayout::FieldRole, simpleOutPreset);

        simpleOutAdvanced = new QCheckBox(simpleStreamingGroupBox);
        simpleOutAdvanced->setObjectName("simpleOutAdvanced");
        simpleOutAdvanced->setChecked(true);

        simpleStreamingLayout->setWidget(4, QFormLayout::FieldRole, simpleOutAdvanced);

        label_23 = new QLabel(simpleStreamingGroupBox);
        label_23->setObjectName("label_23");

        simpleStreamingLayout->setWidget(5, QFormLayout::LabelRole, label_23);

        simpleOutCustom = new QLineEdit(simpleStreamingGroupBox);
        simpleOutCustom->setObjectName("simpleOutCustom");

        simpleStreamingLayout->setWidget(5, QFormLayout::FieldRole, simpleOutCustom);

        simpleOutStrAEncoderLabel = new QLabel(simpleStreamingGroupBox);
        simpleOutStrAEncoderLabel->setObjectName("simpleOutStrAEncoderLabel");

        simpleStreamingLayout->setWidget(6, QFormLayout::LabelRole, simpleOutStrAEncoderLabel);

        simpleOutStrAEncoder = new QComboBox(simpleStreamingGroupBox);
        simpleOutStrAEncoder->setObjectName("simpleOutStrAEncoder");

        simpleStreamingLayout->setWidget(6, QFormLayout::FieldRole, simpleOutStrAEncoder);


        verticalLayout_52->addWidget(simpleStreamingGroupBox);

        simpleRecordingGroupBox = new QGroupBox(scrollAreaWidgetContents_3);
        simpleRecordingGroupBox->setObjectName("simpleRecordingGroupBox");
        sizePolicy2.setHeightForWidth(simpleRecordingGroupBox->sizePolicy().hasHeightForWidth());
        simpleRecordingGroupBox->setSizePolicy(sizePolicy2);
        formLayout_6 = new QFormLayout(simpleRecordingGroupBox);
        formLayout_6->setObjectName("formLayout_6");
        formLayout_6->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_6->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_6->setContentsMargins(9, 2, 9, 9);
        label_18 = new QLabel(simpleRecordingGroupBox);
        label_18->setObjectName("label_18");
        label_18->setMinimumSize(QSize(170, 0));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_18);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        simpleOutputPath = new QLineEdit(simpleRecordingGroupBox);
        simpleOutputPath->setObjectName("simpleOutputPath");
        simpleOutputPath->setEnabled(true);

        horizontalLayout_5->addWidget(simpleOutputPath);

        simpleOutputBrowse = new QPushButton(simpleRecordingGroupBox);
        simpleOutputBrowse->setObjectName("simpleOutputBrowse");
        simpleOutputBrowse->setEnabled(true);

        horizontalLayout_5->addWidget(simpleOutputBrowse);


        formLayout_6->setLayout(0, QFormLayout::FieldRole, horizontalLayout_5);

        simpleNoSpace = new QCheckBox(simpleRecordingGroupBox);
        simpleNoSpace->setObjectName("simpleNoSpace");
        simpleNoSpace->setChecked(true);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, simpleNoSpace);

        label_26 = new QLabel(simpleRecordingGroupBox);
        label_26->setObjectName("label_26");

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_26);

        simpleOutRecQuality = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecQuality->setObjectName("simpleOutRecQuality");

        formLayout_6->setWidget(2, QFormLayout::FieldRole, simpleOutRecQuality);

        simpleOutRecFormatLabel = new QLabel(simpleRecordingGroupBox);
        simpleOutRecFormatLabel->setObjectName("simpleOutRecFormatLabel");

        formLayout_6->setWidget(3, QFormLayout::LabelRole, simpleOutRecFormatLabel);

        simpleOutRecFormat = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecFormat->setObjectName("simpleOutRecFormat");
        simpleOutRecFormat->setEditable(false);

        formLayout_6->setWidget(3, QFormLayout::FieldRole, simpleOutRecFormat);

        simpleOutRecEncoderLabel = new QLabel(simpleRecordingGroupBox);
        simpleOutRecEncoderLabel->setObjectName("simpleOutRecEncoderLabel");

        formLayout_6->setWidget(4, QFormLayout::LabelRole, simpleOutRecEncoderLabel);

        simpleOutRecEncoder = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecEncoder->setObjectName("simpleOutRecEncoder");

        formLayout_6->setWidget(4, QFormLayout::FieldRole, simpleOutRecEncoder);

        simpleOutRecAEncoderLabel = new QLabel(simpleRecordingGroupBox);
        simpleOutRecAEncoderLabel->setObjectName("simpleOutRecAEncoderLabel");

        formLayout_6->setWidget(5, QFormLayout::LabelRole, simpleOutRecAEncoderLabel);

        simpleOutRecAEncoder = new QComboBox(simpleRecordingGroupBox);
        simpleOutRecAEncoder->setObjectName("simpleOutRecAEncoder");

        formLayout_6->setWidget(5, QFormLayout::FieldRole, simpleOutRecAEncoder);

        simplerectrack_label = new QLabel(simpleRecordingGroupBox);
        simplerectrack_label->setObjectName("simplerectrack_label");

        formLayout_6->setWidget(6, QFormLayout::LabelRole, simplerectrack_label);

        simpleRecTrackWidget = new QStackedWidget(simpleRecordingGroupBox);
        simpleRecTrackWidget->setObjectName("simpleRecTrackWidget");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(simpleRecTrackWidget->sizePolicy().hasHeightForWidth());
        simpleRecTrackWidget->setSizePolicy(sizePolicy7);
        simpleRecTracks = new QWidget();
        simpleRecTracks->setObjectName("simpleRecTracks");
        horizontalLayoutSimpleTracks = new QHBoxLayout(simpleRecTracks);
        horizontalLayoutSimpleTracks->setObjectName("horizontalLayoutSimpleTracks");
        horizontalLayoutSimpleTracks->setContentsMargins(0, 0, 0, 0);
        simpleOutRecTrack1 = new QCheckBox(simpleRecTracks);
        simpleOutRecTrack1->setObjectName("simpleOutRecTrack1");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(simpleOutRecTrack1->sizePolicy().hasHeightForWidth());
        simpleOutRecTrack1->setSizePolicy(sizePolicy8);
        simpleOutRecTrack1->setText(QString::fromUtf8("1"));

        horizontalLayoutSimpleTracks->addWidget(simpleOutRecTrack1);

        simpleOutRecTrack2 = new QCheckBox(simpleRecTracks);
        simpleOutRecTrack2->setObjectName("simpleOutRecTrack2");
        sizePolicy8.setHeightForWidth(simpleOutRecTrack2->sizePolicy().hasHeightForWidth());
        simpleOutRecTrack2->setSizePolicy(sizePolicy8);
        simpleOutRecTrack2->setText(QString::fromUtf8("2"));

        horizontalLayoutSimpleTracks->addWidget(simpleOutRecTrack2);

        simpleOutRecTrack3 = new QCheckBox(simpleRecTracks);
        simpleOutRecTrack3->setObjectName("simpleOutRecTrack3");
        sizePolicy8.setHeightForWidth(simpleOutRecTrack3->sizePolicy().hasHeightForWidth());
        simpleOutRecTrack3->setSizePolicy(sizePolicy8);
        simpleOutRecTrack3->setText(QString::fromUtf8("3"));

        horizontalLayoutSimpleTracks->addWidget(simpleOutRecTrack3);

        simpleOutRecTrack4 = new QCheckBox(simpleRecTracks);
        simpleOutRecTrack4->setObjectName("simpleOutRecTrack4");
        sizePolicy8.setHeightForWidth(simpleOutRecTrack4->sizePolicy().hasHeightForWidth());
        simpleOutRecTrack4->setSizePolicy(sizePolicy8);
        simpleOutRecTrack4->setText(QString::fromUtf8("4"));

        horizontalLayoutSimpleTracks->addWidget(simpleOutRecTrack4);

        simpleOutRecTrack5 = new QCheckBox(simpleRecTracks);
        simpleOutRecTrack5->setObjectName("simpleOutRecTrack5");
        sizePolicy8.setHeightForWidth(simpleOutRecTrack5->sizePolicy().hasHeightForWidth());
        simpleOutRecTrack5->setSizePolicy(sizePolicy8);
        simpleOutRecTrack5->setText(QString::fromUtf8("5"));

        horizontalLayoutSimpleTracks->addWidget(simpleOutRecTrack5);

        simpleOutRecTrack6 = new QCheckBox(simpleRecTracks);
        simpleOutRecTrack6->setObjectName("simpleOutRecTrack6");
        sizePolicy8.setHeightForWidth(simpleOutRecTrack6->sizePolicy().hasHeightForWidth());
        simpleOutRecTrack6->setSizePolicy(sizePolicy8);
        simpleOutRecTrack6->setText(QString::fromUtf8("6"));

        horizontalLayoutSimpleTracks->addWidget(simpleOutRecTrack6);

        simpleRecTrackWidget->addWidget(simpleRecTracks);
        simpleFlvTracks = new QWidget();
        simpleFlvTracks->setObjectName("simpleFlvTracks");
        simpleFlvTracks->setEnabled(false);
        horizontalLayoutSimpleFLVTracks = new QHBoxLayout(simpleFlvTracks);
        horizontalLayoutSimpleFLVTracks->setObjectName("horizontalLayoutSimpleFLVTracks");
        horizontalLayoutSimpleFLVTracks->setContentsMargins(0, 0, 0, 0);
        simpleFlvTrack1 = new QRadioButton(simpleFlvTracks);
        simpleFlvTrack1->setObjectName("simpleFlvTrack1");
        sizePolicy8.setHeightForWidth(simpleFlvTrack1->sizePolicy().hasHeightForWidth());
        simpleFlvTrack1->setSizePolicy(sizePolicy8);
        simpleFlvTrack1->setChecked(true);

        horizontalLayoutSimpleFLVTracks->addWidget(simpleFlvTrack1);

        simpleFlvTrack2 = new QRadioButton(simpleFlvTracks);
        simpleFlvTrack2->setObjectName("simpleFlvTrack2");
        sizePolicy8.setHeightForWidth(simpleFlvTrack2->sizePolicy().hasHeightForWidth());
        simpleFlvTrack2->setSizePolicy(sizePolicy8);

        horizontalLayoutSimpleFLVTracks->addWidget(simpleFlvTrack2);

        simpleFlvTrack3 = new QRadioButton(simpleFlvTracks);
        simpleFlvTrack3->setObjectName("simpleFlvTrack3");
        sizePolicy8.setHeightForWidth(simpleFlvTrack3->sizePolicy().hasHeightForWidth());
        simpleFlvTrack3->setSizePolicy(sizePolicy8);

        horizontalLayoutSimpleFLVTracks->addWidget(simpleFlvTrack3);

        simpleFlvTrack4 = new QRadioButton(simpleFlvTracks);
        simpleFlvTrack4->setObjectName("simpleFlvTrack4");
        sizePolicy8.setHeightForWidth(simpleFlvTrack4->sizePolicy().hasHeightForWidth());
        simpleFlvTrack4->setSizePolicy(sizePolicy8);

        horizontalLayoutSimpleFLVTracks->addWidget(simpleFlvTrack4);

        simpleFlvTrack5 = new QRadioButton(simpleFlvTracks);
        simpleFlvTrack5->setObjectName("simpleFlvTrack5");
        sizePolicy8.setHeightForWidth(simpleFlvTrack5->sizePolicy().hasHeightForWidth());
        simpleFlvTrack5->setSizePolicy(sizePolicy8);

        horizontalLayoutSimpleFLVTracks->addWidget(simpleFlvTrack5);

        simpleFlvTrack6 = new QRadioButton(simpleFlvTracks);
        simpleFlvTrack6->setObjectName("simpleFlvTrack6");
        sizePolicy8.setHeightForWidth(simpleFlvTrack6->sizePolicy().hasHeightForWidth());
        simpleFlvTrack6->setSizePolicy(sizePolicy8);

        horizontalLayoutSimpleFLVTracks->addWidget(simpleFlvTrack6);

        simpleRecTrackWidget->addWidget(simpleFlvTracks);

        formLayout_6->setWidget(6, QFormLayout::FieldRole, simpleRecTrackWidget);

        label_420 = new QLabel(simpleRecordingGroupBox);
        label_420->setObjectName("label_420");

        formLayout_6->setWidget(7, QFormLayout::LabelRole, label_420);

        simpleOutMuxCustom = new QLineEdit(simpleRecordingGroupBox);
        simpleOutMuxCustom->setObjectName("simpleOutMuxCustom");

        formLayout_6->setWidget(7, QFormLayout::FieldRole, simpleOutMuxCustom);


        verticalLayout_52->addWidget(simpleRecordingGroupBox);

        simpleReplayBuf = new QGroupBox(scrollAreaWidgetContents_3);
        simpleReplayBuf->setObjectName("simpleReplayBuf");
        simpleReplayBuf->setCheckable(true);
        simpleReplayBuf->setChecked(true);
        formLayout_24 = new QFormLayout(simpleReplayBuf);
        formLayout_24->setObjectName("formLayout_24");
        formLayout_24->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_24->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_24->setContentsMargins(9, 2, 9, 9);
        label_35 = new QLabel(simpleReplayBuf);
        label_35->setObjectName("label_35");

        formLayout_24->setWidget(0, QFormLayout::LabelRole, label_35);

        simpleRBSecMax = new QSpinBox(simpleReplayBuf);
        simpleRBSecMax->setObjectName("simpleRBSecMax");
        simpleRBSecMax->setSuffix(QString::fromUtf8(" sec"));
        simpleRBSecMax->setMinimum(5);
        simpleRBSecMax->setMaximum(21600);
        simpleRBSecMax->setValue(15);

        formLayout_24->setWidget(0, QFormLayout::FieldRole, simpleRBSecMax);

        simpleRBMegsMaxLabel = new QLabel(simpleReplayBuf);
        simpleRBMegsMaxLabel->setObjectName("simpleRBMegsMaxLabel");

        formLayout_24->setWidget(1, QFormLayout::LabelRole, simpleRBMegsMaxLabel);

        simpleRBMegsMax = new QSpinBox(simpleReplayBuf);
        simpleRBMegsMax->setObjectName("simpleRBMegsMax");
        simpleRBMegsMax->setSuffix(QString::fromUtf8(" MB"));
        simpleRBMegsMax->setMinimum(20);
        simpleRBMegsMax->setMaximum(8192);
        simpleRBMegsMax->setValue(512);

        formLayout_24->setWidget(1, QFormLayout::FieldRole, simpleRBMegsMax);

        simpleRBEstimate = new QLabel(simpleReplayBuf);
        simpleRBEstimate->setObjectName("simpleRBEstimate");
        simpleRBEstimate->setText(QString::fromUtf8(""));

        formLayout_24->setWidget(2, QFormLayout::FieldRole, simpleRBEstimate);


        verticalLayout_52->addWidget(simpleReplayBuf);

        simpleOutputContainer = new QFrame(scrollAreaWidgetContents_3);
        simpleOutputContainer->setObjectName("simpleOutputContainer");
        simpleOutputContainer->setMinimumSize(QSize(0, 20));
        verticalLayout_4 = new QVBoxLayout(simpleOutputContainer);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);

        verticalLayout_52->addWidget(simpleOutputContainer);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_52->addItem(verticalSpacer_2);

        simpleOutScroll->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_3->addWidget(simpleOutScroll);

        simpleOutInfoLayout = new QVBoxLayout();
        simpleOutInfoLayout->setObjectName("simpleOutInfoLayout");
        simpleOutInfoLayout->setContentsMargins(10, 10, 10, 10);

        verticalLayout_3->addLayout(simpleOutInfoLayout);

        outputModePages->addWidget(easyOutputsPage);
        advOutputsPage = new QWidget();
        advOutputsPage->setObjectName("advOutputsPage");
        verticalLayout_8 = new QVBoxLayout(advOutputsPage);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 9, 0);
        advOutTabs = new QTabWidget(advOutputsPage);
        advOutTabs->setObjectName("advOutTabs");
        advOutTabs->setUsesScrollButtons(true);
        advOutputStreamTab = new QWidget();
        advOutputStreamTab->setObjectName("advOutputStreamTab");
        verticalLayout_12 = new QVBoxLayout(advOutputStreamTab);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 6, 0, 0);
        scrollArea_3 = new QScrollArea(advOutputStreamTab);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setFrameShape(QFrame::NoFrame);
        scrollArea_3->setFrameShadow(QFrame::Plain);
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 431, 180));
        verticalLayout_14 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 9, 0);
        advOutTopContainer = new QGroupBox(scrollAreaWidgetContents_5);
        advOutTopContainer->setObjectName("advOutTopContainer");
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(advOutTopContainer->sizePolicy().hasHeightForWidth());
        advOutTopContainer->setSizePolicy(sizePolicy9);
        advOutTopLayout = new QFormLayout(advOutTopContainer);
        advOutTopLayout->setObjectName("advOutTopLayout");
        advOutTopLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        advOutTopLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        advOutTopLayout->setContentsMargins(8, 2, 8, 8);
        label_28 = new QLabel(advOutTopContainer);
        label_28->setObjectName("label_28");
        label_28->setMinimumSize(QSize(170, 0));
        label_28->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        advOutTopLayout->setWidget(1, QFormLayout::LabelRole, label_28);

        advStreamTrackWidget = new QStackedWidget(advOutTopContainer);
        advStreamTrackWidget->setObjectName("advStreamTrackWidget");
        sizePolicy7.setHeightForWidth(advStreamTrackWidget->sizePolicy().hasHeightForWidth());
        advStreamTrackWidget->setSizePolicy(sizePolicy7);
        streamSingleTracks = new QFrame();
        streamSingleTracks->setObjectName("streamSingleTracks");
        sizePolicy7.setHeightForWidth(streamSingleTracks->sizePolicy().hasHeightForWidth());
        streamSingleTracks->setSizePolicy(sizePolicy7);
        horizontalLayout_7 = new QHBoxLayout(streamSingleTracks);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        advOutTrack1 = new QRadioButton(streamSingleTracks);
        advOutTrack1->setObjectName("advOutTrack1");
        advOutTrack1->setText(QString::fromUtf8("1"));
        advOutTrack1->setChecked(true);

        horizontalLayout_7->addWidget(advOutTrack1);

        advOutTrack2 = new QRadioButton(streamSingleTracks);
        advOutTrack2->setObjectName("advOutTrack2");
        advOutTrack2->setText(QString::fromUtf8("2"));

        horizontalLayout_7->addWidget(advOutTrack2);

        advOutTrack3 = new QRadioButton(streamSingleTracks);
        advOutTrack3->setObjectName("advOutTrack3");
        advOutTrack3->setText(QString::fromUtf8("3"));

        horizontalLayout_7->addWidget(advOutTrack3);

        advOutTrack4 = new QRadioButton(streamSingleTracks);
        advOutTrack4->setObjectName("advOutTrack4");
        advOutTrack4->setText(QString::fromUtf8("4"));

        horizontalLayout_7->addWidget(advOutTrack4);

        advOutTrack5 = new QRadioButton(streamSingleTracks);
        advOutTrack5->setObjectName("advOutTrack5");
        advOutTrack5->setText(QString::fromUtf8("5"));

        horizontalLayout_7->addWidget(advOutTrack5);

        advOutTrack6 = new QRadioButton(streamSingleTracks);
        advOutTrack6->setObjectName("advOutTrack6");
        advOutTrack6->setText(QString::fromUtf8("6"));

        horizontalLayout_7->addWidget(advOutTrack6);

        advStreamTrackWidget->addWidget(streamSingleTracks);
        streamMultiTracks = new QWidget();
        streamMultiTracks->setObjectName("streamMultiTracks");
        horizontalLayout_multitrack = new QHBoxLayout(streamMultiTracks);
        horizontalLayout_multitrack->setObjectName("horizontalLayout_multitrack");
        horizontalLayout_multitrack->setContentsMargins(0, 0, 0, 0);
        advOutMultiTrack1 = new QCheckBox(streamMultiTracks);
        advOutMultiTrack1->setObjectName("advOutMultiTrack1");
        advOutMultiTrack1->setText(QString::fromUtf8("1"));

        horizontalLayout_multitrack->addWidget(advOutMultiTrack1);

        advOutMultiTrack2 = new QCheckBox(streamMultiTracks);
        advOutMultiTrack2->setObjectName("advOutMultiTrack2");
        advOutMultiTrack2->setText(QString::fromUtf8("2"));

        horizontalLayout_multitrack->addWidget(advOutMultiTrack2);

        advOutMultiTrack3 = new QCheckBox(streamMultiTracks);
        advOutMultiTrack3->setObjectName("advOutMultiTrack3");
        advOutMultiTrack3->setText(QString::fromUtf8("3"));

        horizontalLayout_multitrack->addWidget(advOutMultiTrack3);

        advOutMultiTrack4 = new QCheckBox(streamMultiTracks);
        advOutMultiTrack4->setObjectName("advOutMultiTrack4");
        advOutMultiTrack4->setText(QString::fromUtf8("4"));

        horizontalLayout_multitrack->addWidget(advOutMultiTrack4);

        advOutMultiTrack5 = new QCheckBox(streamMultiTracks);
        advOutMultiTrack5->setObjectName("advOutMultiTrack5");
        advOutMultiTrack5->setText(QString::fromUtf8("5"));

        horizontalLayout_multitrack->addWidget(advOutMultiTrack5);

        advOutMultiTrack6 = new QCheckBox(streamMultiTracks);
        advOutMultiTrack6->setObjectName("advOutMultiTrack6");
        advOutMultiTrack6->setText(QString::fromUtf8("6"));

        horizontalLayout_multitrack->addWidget(advOutMultiTrack6);

        advStreamTrackWidget->addWidget(streamMultiTracks);

        advOutTopLayout->setWidget(1, QFormLayout::FieldRole, advStreamTrackWidget);

        advOutAEncLabel = new QLabel(advOutTopContainer);
        advOutAEncLabel->setObjectName("advOutAEncLabel");

        advOutTopLayout->setWidget(2, QFormLayout::LabelRole, advOutAEncLabel);

        advOutAEncoder = new QComboBox(advOutTopContainer);
        advOutAEncoder->setObjectName("advOutAEncoder");

        advOutTopLayout->setWidget(2, QFormLayout::FieldRole, advOutAEncoder);

        advOutEncLabel = new QLabel(advOutTopContainer);
        advOutEncLabel->setObjectName("advOutEncLabel");

        advOutTopLayout->setWidget(3, QFormLayout::LabelRole, advOutEncLabel);

        advOutEncoder = new QComboBox(advOutTopContainer);
        advOutEncoder->setObjectName("advOutEncoder");

        advOutTopLayout->setWidget(3, QFormLayout::FieldRole, advOutEncoder);

        advOutUseRescale = new QLabel(advOutTopContainer);
        advOutUseRescale->setObjectName("advOutUseRescale");
        sizePolicy1.setHeightForWidth(advOutUseRescale->sizePolicy().hasHeightForWidth());
        advOutUseRescale->setSizePolicy(sizePolicy1);
        advOutUseRescale->setLayoutDirection(Qt::RightToLeft);

        advOutTopLayout->setWidget(4, QFormLayout::LabelRole, advOutUseRescale);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        advOutRescaleFilter = new QComboBox(advOutTopContainer);
        advOutRescaleFilter->setObjectName("advOutRescaleFilter");

        horizontalLayout_10->addWidget(advOutRescaleFilter);

        advOutRescale = new QComboBox(advOutTopContainer);
        advOutRescale->setObjectName("advOutRescale");
        advOutRescale->setEnabled(false);
        advOutRescale->setEditable(true);

        horizontalLayout_10->addWidget(advOutRescale);


        advOutTopLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout_10);


        verticalLayout_14->addWidget(advOutTopContainer);

        advOutEncoderProps = new QGroupBox(scrollAreaWidgetContents_5);
        advOutEncoderProps->setObjectName("advOutEncoderProps");
        sizePolicy9.setHeightForWidth(advOutEncoderProps->sizePolicy().hasHeightForWidth());
        advOutEncoderProps->setSizePolicy(sizePolicy9);
        advOutEncoderLayout = new QVBoxLayout(advOutEncoderProps);
        advOutEncoderLayout->setObjectName("advOutEncoderLayout");
        advOutEncoderLayout->setContentsMargins(8, 2, 8, 8);

        verticalLayout_14->addWidget(advOutEncoderProps);

        verticalSpacer_0 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_0);

        scrollArea_3->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_12->addWidget(scrollArea_3);

        advOutTabs->addTab(advOutputStreamTab, QString());
        advOutputRecordTab = new QWidget();
        advOutputRecordTab->setObjectName("advOutputRecordTab");
        verticalLayout_11 = new QVBoxLayout(advOutputRecordTab);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        advOutRecTypeContainer = new QFrame(advOutputRecordTab);
        advOutRecTypeContainer->setObjectName("advOutRecTypeContainer");
        formLayout_9 = new QFormLayout(advOutRecTypeContainer);
        formLayout_9->setObjectName("formLayout_9");
        formLayout_9->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_9->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_9->setContentsMargins(9, 6, 0, 6);
        label_31 = new QLabel(advOutRecTypeContainer);
        label_31->setObjectName("label_31");
        label_31->setMinimumSize(QSize(170, 0));
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_9->setWidget(0, QFormLayout::LabelRole, label_31);

        advOutRecType = new QComboBox(advOutRecTypeContainer);
        advOutRecType->addItem(QString());
        advOutRecType->addItem(QString());
        advOutRecType->setObjectName("advOutRecType");

        formLayout_9->setWidget(0, QFormLayout::FieldRole, advOutRecType);


        verticalLayout_11->addWidget(advOutRecTypeContainer);

        stackedWidget = new QStackedWidget(advOutputRecordTab);
        stackedWidget->setObjectName("stackedWidget");
        advOutRecStandard = new QWidget();
        advOutRecStandard->setObjectName("advOutRecStandard");
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(advOutRecStandard->sizePolicy().hasHeightForWidth());
        advOutRecStandard->setSizePolicy(sizePolicy10);
        verticalLayout_13 = new QVBoxLayout(advOutRecStandard);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        scrollArea_4 = new QScrollArea(advOutRecStandard);
        scrollArea_4->setObjectName("scrollArea_4");
        sizePolicy.setHeightForWidth(scrollArea_4->sizePolicy().hasHeightForWidth());
        scrollArea_4->setSizePolicy(sizePolicy);
        scrollArea_4->setFrameShape(QFrame::NoFrame);
        scrollArea_4->setFrameShadow(QFrame::Plain);
        scrollArea_4->setLineWidth(0);
        scrollArea_4->setWidgetResizable(true);
        scrollArea_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 518, 371));
        sizePolicy6.setHeightForWidth(scrollAreaWidgetContents_4->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents_4->setSizePolicy(sizePolicy6);
        verticalLayout_21 = new QVBoxLayout(scrollAreaWidgetContents_4);
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalLayout_21->setContentsMargins(0, 0, 9, 0);
        advOutRecTopContainer = new QGroupBox(scrollAreaWidgetContents_4);
        advOutRecTopContainer->setObjectName("advOutRecTopContainer");
        sizePolicy9.setHeightForWidth(advOutRecTopContainer->sizePolicy().hasHeightForWidth());
        advOutRecTopContainer->setSizePolicy(sizePolicy9);
        formLayout_16 = new QFormLayout(advOutRecTopContainer);
        formLayout_16->setObjectName("formLayout_16");
        formLayout_16->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_16->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_16->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        formLayout_16->setContentsMargins(9, 2, 9, 9);
        label_32 = new QLabel(advOutRecTopContainer);
        label_32->setObjectName("label_32");
        sizePolicy6.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy6);
        label_32->setMinimumSize(QSize(170, 0));
        label_32->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_16->setWidget(0, QFormLayout::LabelRole, label_32);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        advOutRecPath = new QLineEdit(advOutRecTopContainer);
        advOutRecPath->setObjectName("advOutRecPath");
        advOutRecPath->setEnabled(true);
        sizePolicy4.setHeightForWidth(advOutRecPath->sizePolicy().hasHeightForWidth());
        advOutRecPath->setSizePolicy(sizePolicy4);

        horizontalLayout_6->addWidget(advOutRecPath);

        advOutRecPathBrowse = new QPushButton(advOutRecTopContainer);
        advOutRecPathBrowse->setObjectName("advOutRecPathBrowse");
        advOutRecPathBrowse->setEnabled(true);
        sizePolicy8.setHeightForWidth(advOutRecPathBrowse->sizePolicy().hasHeightForWidth());
        advOutRecPathBrowse->setSizePolicy(sizePolicy8);

        horizontalLayout_6->addWidget(advOutRecPathBrowse);


        formLayout_16->setLayout(0, QFormLayout::FieldRole, horizontalLayout_6);

        horizontalSpacer_27 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_16->setItem(1, QFormLayout::LabelRole, horizontalSpacer_27);

        advOutNoSpace = new QCheckBox(advOutRecTopContainer);
        advOutNoSpace->setObjectName("advOutNoSpace");
        sizePolicy8.setHeightForWidth(advOutNoSpace->sizePolicy().hasHeightForWidth());
        advOutNoSpace->setSizePolicy(sizePolicy8);
        advOutNoSpace->setChecked(true);

        formLayout_16->setWidget(1, QFormLayout::FieldRole, advOutNoSpace);

        label_43 = new QLabel(advOutRecTopContainer);
        label_43->setObjectName("label_43");

        formLayout_16->setWidget(2, QFormLayout::LabelRole, label_43);

        advOutRecFormat = new QComboBox(advOutRecTopContainer);
        advOutRecFormat->setObjectName("advOutRecFormat");
        sizePolicy6.setHeightForWidth(advOutRecFormat->sizePolicy().hasHeightForWidth());
        advOutRecFormat->setSizePolicy(sizePolicy6);
        advOutRecFormat->setEditable(false);

        formLayout_16->setWidget(2, QFormLayout::FieldRole, advOutRecFormat);

        label_29 = new QLabel(advOutRecTopContainer);
        label_29->setObjectName("label_29");

        formLayout_16->setWidget(5, QFormLayout::LabelRole, label_29);

        advRecTrackWidget = new QStackedWidget(advOutRecTopContainer);
        advRecTrackWidget->setObjectName("advRecTrackWidget");
        sizePolicy7.setHeightForWidth(advRecTrackWidget->sizePolicy().hasHeightForWidth());
        advRecTrackWidget->setSizePolicy(sizePolicy7);
        recTracks = new QWidget();
        recTracks->setObjectName("recTracks");
        horizontalLayout_9 = new QHBoxLayout(recTracks);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        advOutRecTrack1 = new QCheckBox(recTracks);
        advOutRecTrack1->setObjectName("advOutRecTrack1");
        sizePolicy8.setHeightForWidth(advOutRecTrack1->sizePolicy().hasHeightForWidth());
        advOutRecTrack1->setSizePolicy(sizePolicy8);
        advOutRecTrack1->setText(QString::fromUtf8("1"));

        horizontalLayout_9->addWidget(advOutRecTrack1);

        advOutRecTrack2 = new QCheckBox(recTracks);
        advOutRecTrack2->setObjectName("advOutRecTrack2");
        sizePolicy8.setHeightForWidth(advOutRecTrack2->sizePolicy().hasHeightForWidth());
        advOutRecTrack2->setSizePolicy(sizePolicy8);
        advOutRecTrack2->setText(QString::fromUtf8("2"));

        horizontalLayout_9->addWidget(advOutRecTrack2);

        advOutRecTrack3 = new QCheckBox(recTracks);
        advOutRecTrack3->setObjectName("advOutRecTrack3");
        sizePolicy8.setHeightForWidth(advOutRecTrack3->sizePolicy().hasHeightForWidth());
        advOutRecTrack3->setSizePolicy(sizePolicy8);
        advOutRecTrack3->setText(QString::fromUtf8("3"));

        horizontalLayout_9->addWidget(advOutRecTrack3);

        advOutRecTrack4 = new QCheckBox(recTracks);
        advOutRecTrack4->setObjectName("advOutRecTrack4");
        sizePolicy8.setHeightForWidth(advOutRecTrack4->sizePolicy().hasHeightForWidth());
        advOutRecTrack4->setSizePolicy(sizePolicy8);
        advOutRecTrack4->setText(QString::fromUtf8("4"));

        horizontalLayout_9->addWidget(advOutRecTrack4);

        advOutRecTrack5 = new QCheckBox(recTracks);
        advOutRecTrack5->setObjectName("advOutRecTrack5");
        sizePolicy8.setHeightForWidth(advOutRecTrack5->sizePolicy().hasHeightForWidth());
        advOutRecTrack5->setSizePolicy(sizePolicy8);
        advOutRecTrack5->setText(QString::fromUtf8("5"));

        horizontalLayout_9->addWidget(advOutRecTrack5);

        advOutRecTrack6 = new QCheckBox(recTracks);
        advOutRecTrack6->setObjectName("advOutRecTrack6");
        sizePolicy8.setHeightForWidth(advOutRecTrack6->sizePolicy().hasHeightForWidth());
        advOutRecTrack6->setSizePolicy(sizePolicy8);
        advOutRecTrack6->setText(QString::fromUtf8("6"));

        horizontalLayout_9->addWidget(advOutRecTrack6);

        advRecTrackWidget->addWidget(recTracks);
        flvTracks = new QWidget();
        flvTracks->setObjectName("flvTracks");
        horizontalLayout_8 = new QHBoxLayout(flvTracks);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        flvTrack1 = new QRadioButton(flvTracks);
        flvTrack1->setObjectName("flvTrack1");
        sizePolicy8.setHeightForWidth(flvTrack1->sizePolicy().hasHeightForWidth());
        flvTrack1->setSizePolicy(sizePolicy8);

        horizontalLayout_8->addWidget(flvTrack1);

        flvTrack2 = new QRadioButton(flvTracks);
        flvTrack2->setObjectName("flvTrack2");
        sizePolicy8.setHeightForWidth(flvTrack2->sizePolicy().hasHeightForWidth());
        flvTrack2->setSizePolicy(sizePolicy8);

        horizontalLayout_8->addWidget(flvTrack2);

        flvTrack3 = new QRadioButton(flvTracks);
        flvTrack3->setObjectName("flvTrack3");
        sizePolicy8.setHeightForWidth(flvTrack3->sizePolicy().hasHeightForWidth());
        flvTrack3->setSizePolicy(sizePolicy8);

        horizontalLayout_8->addWidget(flvTrack3);

        flvTrack4 = new QRadioButton(flvTracks);
        flvTrack4->setObjectName("flvTrack4");
        sizePolicy8.setHeightForWidth(flvTrack4->sizePolicy().hasHeightForWidth());
        flvTrack4->setSizePolicy(sizePolicy8);

        horizontalLayout_8->addWidget(flvTrack4);

        flvTrack5 = new QRadioButton(flvTracks);
        flvTrack5->setObjectName("flvTrack5");
        sizePolicy8.setHeightForWidth(flvTrack5->sizePolicy().hasHeightForWidth());
        flvTrack5->setSizePolicy(sizePolicy8);

        horizontalLayout_8->addWidget(flvTrack5);

        flvTrack6 = new QRadioButton(flvTracks);
        flvTrack6->setObjectName("flvTrack6");
        sizePolicy8.setHeightForWidth(flvTrack6->sizePolicy().hasHeightForWidth());
        flvTrack6->setSizePolicy(sizePolicy8);

        horizontalLayout_8->addWidget(flvTrack6);

        advRecTrackWidget->addWidget(flvTracks);

        formLayout_16->setWidget(5, QFormLayout::FieldRole, advRecTrackWidget);

        advOutRecAEncLabel = new QLabel(advOutRecTopContainer);
        advOutRecAEncLabel->setObjectName("advOutRecAEncLabel");

        formLayout_16->setWidget(4, QFormLayout::LabelRole, advOutRecAEncLabel);

        advOutRecAEncoder = new QComboBox(advOutRecTopContainer);
        advOutRecAEncoder->setObjectName("advOutRecAEncoder");
        sizePolicy6.setHeightForWidth(advOutRecAEncoder->sizePolicy().hasHeightForWidth());
        advOutRecAEncoder->setSizePolicy(sizePolicy6);

        formLayout_16->setWidget(4, QFormLayout::FieldRole, advOutRecAEncoder);

        advOutRecEncLabel = new QLabel(advOutRecTopContainer);
        advOutRecEncLabel->setObjectName("advOutRecEncLabel");

        formLayout_16->setWidget(3, QFormLayout::LabelRole, advOutRecEncLabel);

        advOutRecEncoder = new QComboBox(advOutRecTopContainer);
        advOutRecEncoder->setObjectName("advOutRecEncoder");
        sizePolicy6.setHeightForWidth(advOutRecEncoder->sizePolicy().hasHeightForWidth());
        advOutRecEncoder->setSizePolicy(sizePolicy6);

        formLayout_16->setWidget(3, QFormLayout::FieldRole, advOutRecEncoder);

        advOutRecUseRescale = new QLabel(advOutRecTopContainer);
        advOutRecUseRescale->setObjectName("advOutRecUseRescale");
        sizePolicy8.setHeightForWidth(advOutRecUseRescale->sizePolicy().hasHeightForWidth());
        advOutRecUseRescale->setSizePolicy(sizePolicy8);
        advOutRecUseRescale->setLayoutDirection(Qt::RightToLeft);

        formLayout_16->setWidget(6, QFormLayout::LabelRole, advOutRecUseRescale);

        advOutRecRescaleContainer = new QFrame(advOutRecTopContainer);
        advOutRecRescaleContainer->setObjectName("advOutRecRescaleContainer");
        horizontalLayout_4 = new QHBoxLayout(advOutRecRescaleContainer);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        advOutRecRescaleFilter = new QComboBox(advOutRecRescaleContainer);
        advOutRecRescaleFilter->setObjectName("advOutRecRescaleFilter");

        horizontalLayout_4->addWidget(advOutRecRescaleFilter);

        advOutRecRescale = new QComboBox(advOutRecRescaleContainer);
        advOutRecRescale->setObjectName("advOutRecRescale");
        advOutRecRescale->setEnabled(false);
        sizePolicy6.setHeightForWidth(advOutRecRescale->sizePolicy().hasHeightForWidth());
        advOutRecRescale->setSizePolicy(sizePolicy6);
        advOutRecRescale->setEditable(true);

        horizontalLayout_4->addWidget(advOutRecRescale);


        formLayout_16->setWidget(6, QFormLayout::FieldRole, advOutRecRescaleContainer);

        label_9001 = new QLabel(advOutRecTopContainer);
        label_9001->setObjectName("label_9001");

        formLayout_16->setWidget(7, QFormLayout::LabelRole, label_9001);

        advOutMuxCustom = new QLineEdit(advOutRecTopContainer);
        advOutMuxCustom->setObjectName("advOutMuxCustom");
        sizePolicy4.setHeightForWidth(advOutMuxCustom->sizePolicy().hasHeightForWidth());
        advOutMuxCustom->setSizePolicy(sizePolicy4);

        formLayout_16->setWidget(7, QFormLayout::FieldRole, advOutMuxCustom);

        advOutSplitFile = new QCheckBox(advOutRecTopContainer);
        advOutSplitFile->setObjectName("advOutSplitFile");
        sizePolicy1.setHeightForWidth(advOutSplitFile->sizePolicy().hasHeightForWidth());
        advOutSplitFile->setSizePolicy(sizePolicy1);
        advOutSplitFile->setLayoutDirection(Qt::RightToLeft);

        formLayout_16->setWidget(8, QFormLayout::LabelRole, advOutSplitFile);

        advOutSplitFileType = new QComboBox(advOutRecTopContainer);
        advOutSplitFileType->addItem(QString());
        advOutSplitFileType->addItem(QString());
        advOutSplitFileType->addItem(QString());
        advOutSplitFileType->setObjectName("advOutSplitFileType");
        advOutSplitFileType->setEnabled(false);

        formLayout_16->setWidget(8, QFormLayout::FieldRole, advOutSplitFileType);

        advOutSplitFileTimeLabel = new QLabel(advOutRecTopContainer);
        advOutSplitFileTimeLabel->setObjectName("advOutSplitFileTimeLabel");

        formLayout_16->setWidget(9, QFormLayout::LabelRole, advOutSplitFileTimeLabel);

        advOutSplitFileTime = new QSpinBox(advOutRecTopContainer);
        advOutSplitFileTime->setObjectName("advOutSplitFileTime");
        advOutSplitFileTime->setMinimum(1);
        advOutSplitFileTime->setMaximum(525600);
        advOutSplitFileTime->setValue(15);

        formLayout_16->setWidget(9, QFormLayout::FieldRole, advOutSplitFileTime);

        advOutSplitFileSizeLabel = new QLabel(advOutRecTopContainer);
        advOutSplitFileSizeLabel->setObjectName("advOutSplitFileSizeLabel");

        formLayout_16->setWidget(10, QFormLayout::LabelRole, advOutSplitFileSizeLabel);

        advOutSplitFileSize = new QSpinBox(advOutRecTopContainer);
        advOutSplitFileSize->setObjectName("advOutSplitFileSize");
        advOutSplitFileSize->setMinimum(20);
        advOutSplitFileSize->setMaximum(1073741824);
        advOutSplitFileSize->setValue(2048);

        formLayout_16->setWidget(10, QFormLayout::FieldRole, advOutSplitFileSize);


        verticalLayout_21->addWidget(advOutRecTopContainer);

        advOutRecEncoderProps = new QGroupBox(scrollAreaWidgetContents_4);
        advOutRecEncoderProps->setObjectName("advOutRecEncoderProps");
        sizePolicy9.setHeightForWidth(advOutRecEncoderProps->sizePolicy().hasHeightForWidth());
        advOutRecEncoderProps->setSizePolicy(sizePolicy9);
        verticalLayout_15 = new QVBoxLayout(advOutRecEncoderProps);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(9, 2, 9, 8);

        verticalLayout_21->addWidget(advOutRecEncoderProps);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_21->addItem(verticalSpacer_3);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_13->addWidget(scrollArea_4);

        stackedWidget->addWidget(advOutRecStandard);
        advOutRecFFmpegPage = new QWidget();
        advOutRecFFmpegPage->setObjectName("advOutRecFFmpegPage");
        sizePolicy10.setHeightForWidth(advOutRecFFmpegPage->sizePolicy().hasHeightForWidth());
        advOutRecFFmpegPage->setSizePolicy(sizePolicy10);
        verticalLayout_26 = new QVBoxLayout(advOutRecFFmpegPage);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        scrollArea_5 = new QScrollArea(advOutRecFFmpegPage);
        scrollArea_5->setObjectName("scrollArea_5");
        scrollArea_5->setFrameShape(QFrame::NoFrame);
        scrollArea_5->setFrameShadow(QFrame::Plain);
        scrollArea_5->setLineWidth(0);
        scrollArea_5->setWidgetResizable(true);
        scrollAreaWidgetContents_8 = new QWidget();
        scrollAreaWidgetContents_8->setObjectName("scrollAreaWidgetContents_8");
        scrollAreaWidgetContents_8->setGeometry(QRect(0, 0, 634, 467));
        verticalLayout_27 = new QVBoxLayout(scrollAreaWidgetContents_8);
        verticalLayout_27->setObjectName("verticalLayout_27");
        verticalLayout_27->setContentsMargins(0, 0, 9, 0);
        advOutRecFFmpeg = new QGroupBox(scrollAreaWidgetContents_8);
        advOutRecFFmpeg->setObjectName("advOutRecFFmpeg");
        formLayout_7 = new QFormLayout(advOutRecFFmpeg);
        formLayout_7->setObjectName("formLayout_7");
        formLayout_7->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_7->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_7->setContentsMargins(9, 2, 9, 9);
        label_48 = new QLabel(advOutRecFFmpeg);
        label_48->setObjectName("label_48");
        sizePolicy10.setHeightForWidth(label_48->sizePolicy().hasHeightForWidth());
        label_48->setSizePolicy(sizePolicy10);
        label_48->setMinimumSize(QSize(170, 0));
        label_48->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_48);

        advOutFFType = new QComboBox(advOutRecFFmpeg);
        advOutFFType->addItem(QString());
        advOutFFType->addItem(QString());
        advOutFFType->setObjectName("advOutFFType");

        formLayout_7->setWidget(0, QFormLayout::FieldRole, advOutFFType);

        label_36 = new QLabel(advOutRecFFmpeg);
        label_36->setObjectName("label_36");
        sizePolicy10.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy10);
        label_36->setMinimumSize(QSize(170, 0));
        label_36->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_36);

        stackedWidget_2 = new QStackedWidget(advOutRecFFmpeg);
        stackedWidget_2->setObjectName("stackedWidget_2");
        sizePolicy2.setHeightForWidth(stackedWidget_2->sizePolicy().hasHeightForWidth());
        stackedWidget_2->setSizePolicy(sizePolicy2);
        page_7 = new QWidget();
        page_7->setObjectName("page_7");
        sizePolicy2.setHeightForWidth(page_7->sizePolicy().hasHeightForWidth());
        page_7->setSizePolicy(sizePolicy2);
        horizontalLayout_27 = new QHBoxLayout(page_7);
        horizontalLayout_27->setSpacing(3);
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        horizontalLayout_27->setContentsMargins(0, 0, 0, 0);
        advOutFFRecPath = new QLineEdit(page_7);
        advOutFFRecPath->setObjectName("advOutFFRecPath");
        advOutFFRecPath->setReadOnly(true);

        horizontalLayout_27->addWidget(advOutFFRecPath);

        advOutFFPathBrowse = new QPushButton(page_7);
        advOutFFPathBrowse->setObjectName("advOutFFPathBrowse");

        horizontalLayout_27->addWidget(advOutFFPathBrowse);

        stackedWidget_2->addWidget(page_7);
        page_8 = new QWidget();
        page_8->setObjectName("page_8");
        sizePolicy2.setHeightForWidth(page_8->sizePolicy().hasHeightForWidth());
        page_8->setSizePolicy(sizePolicy2);
        horizontalLayout_30 = new QHBoxLayout(page_8);
        horizontalLayout_30->setSpacing(0);
        horizontalLayout_30->setObjectName("horizontalLayout_30");
        horizontalLayout_30->setContentsMargins(0, 0, 0, 0);
        advOutFFURL = new QLineEdit(page_8);
        advOutFFURL->setObjectName("advOutFFURL");
        advOutFFURL->setEnabled(true);

        horizontalLayout_30->addWidget(advOutFFURL);

        stackedWidget_2->addWidget(page_8);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, stackedWidget_2);

        advOutFFNoSpace = new QCheckBox(advOutRecFFmpeg);
        advOutFFNoSpace->setObjectName("advOutFFNoSpace");
        advOutFFNoSpace->setChecked(true);

        formLayout_7->setWidget(2, QFormLayout::FieldRole, advOutFFNoSpace);

        label_16 = new QLabel(advOutRecFFmpeg);
        label_16->setObjectName("label_16");

        formLayout_7->setWidget(3, QFormLayout::LabelRole, label_16);

        advOutFFFormat = new QComboBox(advOutRecFFmpeg);
        advOutFFFormat->setObjectName("advOutFFFormat");

        formLayout_7->setWidget(3, QFormLayout::FieldRole, advOutFFFormat);

        label_44 = new QLabel(advOutRecFFmpeg);
        label_44->setObjectName("label_44");

        formLayout_7->setWidget(4, QFormLayout::LabelRole, label_44);

        advOutFFFormatDesc = new QLabel(advOutRecFFmpeg);
        advOutFFFormatDesc->setObjectName("advOutFFFormatDesc");

        formLayout_7->setWidget(4, QFormLayout::FieldRole, advOutFFFormatDesc);

        label_1337 = new QLabel(advOutRecFFmpeg);
        label_1337->setObjectName("label_1337");

        formLayout_7->setWidget(5, QFormLayout::LabelRole, label_1337);

        advOutFFMCfg = new QLineEdit(advOutRecFFmpeg);
        advOutFFMCfg->setObjectName("advOutFFMCfg");

        formLayout_7->setWidget(5, QFormLayout::FieldRole, advOutFFMCfg);

        label_40 = new QLabel(advOutRecFFmpeg);
        label_40->setObjectName("label_40");

        formLayout_7->setWidget(6, QFormLayout::LabelRole, label_40);

        advOutFFVBitrate = new QSpinBox(advOutRecFFmpeg);
        advOutFFVBitrate->setObjectName("advOutFFVBitrate");
        advOutFFVBitrate->setMinimum(0);
        advOutFFVBitrate->setMaximum(1000000000);
        advOutFFVBitrate->setValue(2500);

        formLayout_7->setWidget(6, QFormLayout::FieldRole, advOutFFVBitrate);

        label_63 = new QLabel(advOutRecFFmpeg);
        label_63->setObjectName("label_63");

        formLayout_7->setWidget(7, QFormLayout::LabelRole, label_63);

        advOutFFVGOPSize = new QSpinBox(advOutRecFFmpeg);
        advOutFFVGOPSize->setObjectName("advOutFFVGOPSize");
        advOutFFVGOPSize->setMaximum(1000000000);
        advOutFFVGOPSize->setValue(250);

        formLayout_7->setWidget(7, QFormLayout::FieldRole, advOutFFVGOPSize);

        advOutFFUseRescale = new QCheckBox(advOutRecFFmpeg);
        advOutFFUseRescale->setObjectName("advOutFFUseRescale");
        sizePolicy1.setHeightForWidth(advOutFFUseRescale->sizePolicy().hasHeightForWidth());
        advOutFFUseRescale->setSizePolicy(sizePolicy1);
        advOutFFUseRescale->setLayoutDirection(Qt::RightToLeft);

        formLayout_7->setWidget(8, QFormLayout::LabelRole, advOutFFUseRescale);

        advOutFFRescale = new QComboBox(advOutRecFFmpeg);
        advOutFFRescale->setObjectName("advOutFFRescale");
        advOutFFRescale->setEnabled(false);
        advOutFFRescale->setEditable(true);

        formLayout_7->setWidget(8, QFormLayout::FieldRole, advOutFFRescale);

        advOutFFIgnoreCompat = new QCheckBox(advOutRecFFmpeg);
        advOutFFIgnoreCompat->setObjectName("advOutFFIgnoreCompat");

        formLayout_7->setWidget(9, QFormLayout::FieldRole, advOutFFIgnoreCompat);

        label_37 = new QLabel(advOutRecFFmpeg);
        label_37->setObjectName("label_37");

        formLayout_7->setWidget(10, QFormLayout::LabelRole, label_37);

        advOutFFVEncoder = new QComboBox(advOutRecFFmpeg);
        advOutFFVEncoder->setObjectName("advOutFFVEncoder");

        formLayout_7->setWidget(10, QFormLayout::FieldRole, advOutFFVEncoder);

        label_38 = new QLabel(advOutRecFFmpeg);
        label_38->setObjectName("label_38");

        formLayout_7->setWidget(11, QFormLayout::LabelRole, label_38);

        advOutFFVCfg = new QLineEdit(advOutRecFFmpeg);
        advOutFFVCfg->setObjectName("advOutFFVCfg");

        formLayout_7->setWidget(11, QFormLayout::FieldRole, advOutFFVCfg);

        label_41 = new QLabel(advOutRecFFmpeg);
        label_41->setObjectName("label_41");

        formLayout_7->setWidget(12, QFormLayout::LabelRole, label_41);

        advOutFFABitrate = new QSpinBox(advOutRecFFmpeg);
        advOutFFABitrate->setObjectName("advOutFFABitrate");
        advOutFFABitrate->setMinimum(32);
        advOutFFABitrate->setMaximum(4096);
        advOutFFABitrate->setSingleStep(16);
        advOutFFABitrate->setValue(128);

        formLayout_7->setWidget(12, QFormLayout::FieldRole, advOutFFABitrate);

        label_47 = new QLabel(advOutRecFFmpeg);
        label_47->setObjectName("label_47");

        formLayout_7->setWidget(13, QFormLayout::LabelRole, label_47);

        widget_10 = new QFrame(advOutRecFFmpeg);
        widget_10->setObjectName("widget_10");
        sizePolicy7.setHeightForWidth(widget_10->sizePolicy().hasHeightForWidth());
        widget_10->setSizePolicy(sizePolicy7);
        horizontalLayout_26 = new QHBoxLayout(widget_10);
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        horizontalLayout_26->setContentsMargins(0, 0, 0, 0);
        advOutFFTrack1 = new QCheckBox(widget_10);
        advOutFFTrack1->setObjectName("advOutFFTrack1");
        advOutFFTrack1->setText(QString::fromUtf8("1"));
        advOutFFTrack1->setChecked(true);

        horizontalLayout_26->addWidget(advOutFFTrack1);

        advOutFFTrack2 = new QCheckBox(widget_10);
        advOutFFTrack2->setObjectName("advOutFFTrack2");
        advOutFFTrack2->setText(QString::fromUtf8("2"));

        horizontalLayout_26->addWidget(advOutFFTrack2);

        advOutFFTrack3 = new QCheckBox(widget_10);
        advOutFFTrack3->setObjectName("advOutFFTrack3");
        advOutFFTrack3->setText(QString::fromUtf8("3"));

        horizontalLayout_26->addWidget(advOutFFTrack3);

        advOutFFTrack4 = new QCheckBox(widget_10);
        advOutFFTrack4->setObjectName("advOutFFTrack4");
        advOutFFTrack4->setText(QString::fromUtf8("4"));

        horizontalLayout_26->addWidget(advOutFFTrack4);

        advOutFFTrack5 = new QCheckBox(widget_10);
        advOutFFTrack5->setObjectName("advOutFFTrack5");
        advOutFFTrack5->setText(QString::fromUtf8("5"));

        horizontalLayout_26->addWidget(advOutFFTrack5);

        advOutFFTrack6 = new QCheckBox(widget_10);
        advOutFFTrack6->setObjectName("advOutFFTrack6");
        advOutFFTrack6->setText(QString::fromUtf8("6"));

        horizontalLayout_26->addWidget(advOutFFTrack6);


        formLayout_7->setWidget(13, QFormLayout::FieldRole, widget_10);

        label_39 = new QLabel(advOutRecFFmpeg);
        label_39->setObjectName("label_39");

        formLayout_7->setWidget(14, QFormLayout::LabelRole, label_39);

        advOutFFAEncoder = new QComboBox(advOutRecFFmpeg);
        advOutFFAEncoder->setObjectName("advOutFFAEncoder");

        formLayout_7->setWidget(14, QFormLayout::FieldRole, advOutFFAEncoder);

        label_46 = new QLabel(advOutRecFFmpeg);
        label_46->setObjectName("label_46");

        formLayout_7->setWidget(15, QFormLayout::LabelRole, label_46);

        advOutFFACfg = new QLineEdit(advOutRecFFmpeg);
        advOutFFACfg->setObjectName("advOutFFACfg");

        formLayout_7->setWidget(15, QFormLayout::FieldRole, advOutFFACfg);


        verticalLayout_27->addWidget(advOutRecFFmpeg);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_27->addItem(verticalSpacer_6);

        scrollArea_5->setWidget(scrollAreaWidgetContents_8);

        verticalLayout_26->addWidget(scrollArea_5);

        stackedWidget->addWidget(advOutRecFFmpegPage);

        verticalLayout_11->addWidget(stackedWidget);

        advOutRecInfo = new QFrame(advOutputRecordTab);
        advOutRecInfo->setObjectName("advOutRecInfo");
        advOutRecInfoLayout = new QVBoxLayout(advOutRecInfo);
        advOutRecInfoLayout->setObjectName("advOutRecInfoLayout");
        advOutRecInfoLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_11->addWidget(advOutRecInfo);

        advOutTabs->addTab(advOutputRecordTab, QString());
        advOutputAudioTracksTab = new QWidget();
        advOutputAudioTracksTab->setObjectName("advOutputAudioTracksTab");
        verticalLayout_9 = new QVBoxLayout(advOutputAudioTracksTab);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QFrame(advOutputAudioTracksTab);
        widget_3->setObjectName("widget_3");
        sizePolicy6.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy6);
        verticalLayout_10 = new QVBoxLayout(widget_3);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 6, 0, 0);
        scrollArea_6 = new QScrollArea(widget_3);
        scrollArea_6->setObjectName("scrollArea_6");
        scrollArea_6->setFrameShape(QFrame::NoFrame);
        scrollArea_6->setFrameShadow(QFrame::Plain);
        scrollArea_6->setLineWidth(0);
        scrollArea_6->setWidgetResizable(true);
        scrollAreaWidgetContents_7 = new QWidget();
        scrollAreaWidgetContents_7->setObjectName("scrollAreaWidgetContents_7");
        scrollAreaWidgetContents_7->setGeometry(QRect(0, 0, 267, 510));
        verticalLayout_28 = new QVBoxLayout(scrollAreaWidgetContents_7);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalLayout_28->setContentsMargins(0, 0, 9, 0);
        groupBox = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox->setObjectName("groupBox");
        sizePolicy6.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy6);
        formLayout_10 = new QFormLayout(groupBox);
        formLayout_10->setObjectName("formLayout_10");
        formLayout_10->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_10->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_10->setContentsMargins(9, 2, 9, 9);
        advOutTrack1Bitrate = new QComboBox(groupBox);
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->addItem(QString());
        advOutTrack1Bitrate->setObjectName("advOutTrack1Bitrate");
        sizePolicy6.setHeightForWidth(advOutTrack1Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack1Bitrate->setSizePolicy(sizePolicy6);

        formLayout_10->setWidget(0, QFormLayout::FieldRole, advOutTrack1Bitrate);

        label_55 = new QLabel(groupBox);
        label_55->setObjectName("label_55");

        formLayout_10->setWidget(1, QFormLayout::LabelRole, label_55);

        advOutTrack1Name = new QLineEdit(groupBox);
        advOutTrack1Name->setObjectName("advOutTrack1Name");
        sizePolicy4.setHeightForWidth(advOutTrack1Name->sizePolicy().hasHeightForWidth());
        advOutTrack1Name->setSizePolicy(sizePolicy4);

        formLayout_10->setWidget(1, QFormLayout::FieldRole, advOutTrack1Name);

        label_25 = new QLabel(groupBox);
        label_25->setObjectName("label_25");
        label_25->setMinimumSize(QSize(170, 0));
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_25);


        verticalLayout_28->addWidget(groupBox);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_2->setObjectName("groupBox_2");
        sizePolicy6.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy6);
        formLayout_11 = new QFormLayout(groupBox_2);
        formLayout_11->setObjectName("formLayout_11");
        formLayout_11->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_11->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_11->setContentsMargins(9, 2, 9, 9);
        label_49 = new QLabel(groupBox_2);
        label_49->setObjectName("label_49");
        label_49->setMinimumSize(QSize(170, 0));
        label_49->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_11->setWidget(0, QFormLayout::LabelRole, label_49);

        advOutTrack2Bitrate = new QComboBox(groupBox_2);
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->addItem(QString());
        advOutTrack2Bitrate->setObjectName("advOutTrack2Bitrate");
        sizePolicy6.setHeightForWidth(advOutTrack2Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack2Bitrate->setSizePolicy(sizePolicy6);

        formLayout_11->setWidget(0, QFormLayout::FieldRole, advOutTrack2Bitrate);

        label_50 = new QLabel(groupBox_2);
        label_50->setObjectName("label_50");

        formLayout_11->setWidget(1, QFormLayout::LabelRole, label_50);

        advOutTrack2Name = new QLineEdit(groupBox_2);
        advOutTrack2Name->setObjectName("advOutTrack2Name");
        sizePolicy4.setHeightForWidth(advOutTrack2Name->sizePolicy().hasHeightForWidth());
        advOutTrack2Name->setSizePolicy(sizePolicy4);

        formLayout_11->setWidget(1, QFormLayout::FieldRole, advOutTrack2Name);


        verticalLayout_28->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_3->setObjectName("groupBox_3");
        sizePolicy6.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy6);
        formLayout_12 = new QFormLayout(groupBox_3);
        formLayout_12->setObjectName("formLayout_12");
        formLayout_12->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_12->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_12->setContentsMargins(9, 2, 9, 9);
        label_51 = new QLabel(groupBox_3);
        label_51->setObjectName("label_51");
        label_51->setMinimumSize(QSize(170, 0));
        label_51->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_12->setWidget(0, QFormLayout::LabelRole, label_51);

        advOutTrack3Bitrate = new QComboBox(groupBox_3);
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->addItem(QString());
        advOutTrack3Bitrate->setObjectName("advOutTrack3Bitrate");
        sizePolicy6.setHeightForWidth(advOutTrack3Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack3Bitrate->setSizePolicy(sizePolicy6);

        formLayout_12->setWidget(0, QFormLayout::FieldRole, advOutTrack3Bitrate);

        label_52 = new QLabel(groupBox_3);
        label_52->setObjectName("label_52");

        formLayout_12->setWidget(1, QFormLayout::LabelRole, label_52);

        advOutTrack3Name = new QLineEdit(groupBox_3);
        advOutTrack3Name->setObjectName("advOutTrack3Name");
        sizePolicy4.setHeightForWidth(advOutTrack3Name->sizePolicy().hasHeightForWidth());
        advOutTrack3Name->setSizePolicy(sizePolicy4);

        formLayout_12->setWidget(1, QFormLayout::FieldRole, advOutTrack3Name);


        verticalLayout_28->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_4->setObjectName("groupBox_4");
        sizePolicy6.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy6);
        formLayout_13 = new QFormLayout(groupBox_4);
        formLayout_13->setObjectName("formLayout_13");
        formLayout_13->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_13->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_13->setContentsMargins(9, 2, 9, 9);
        label_53 = new QLabel(groupBox_4);
        label_53->setObjectName("label_53");
        label_53->setMinimumSize(QSize(170, 0));
        label_53->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_13->setWidget(0, QFormLayout::LabelRole, label_53);

        advOutTrack4Bitrate = new QComboBox(groupBox_4);
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->addItem(QString());
        advOutTrack4Bitrate->setObjectName("advOutTrack4Bitrate");
        sizePolicy6.setHeightForWidth(advOutTrack4Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack4Bitrate->setSizePolicy(sizePolicy6);

        formLayout_13->setWidget(0, QFormLayout::FieldRole, advOutTrack4Bitrate);

        label_54 = new QLabel(groupBox_4);
        label_54->setObjectName("label_54");

        formLayout_13->setWidget(1, QFormLayout::LabelRole, label_54);

        advOutTrack4Name = new QLineEdit(groupBox_4);
        advOutTrack4Name->setObjectName("advOutTrack4Name");
        sizePolicy4.setHeightForWidth(advOutTrack4Name->sizePolicy().hasHeightForWidth());
        advOutTrack4Name->setSizePolicy(sizePolicy4);

        formLayout_13->setWidget(1, QFormLayout::FieldRole, advOutTrack4Name);


        verticalLayout_28->addWidget(groupBox_4);

        groupBox_9 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_9->setObjectName("groupBox_9");
        sizePolicy6.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy6);
        formLayout_25 = new QFormLayout(groupBox_9);
        formLayout_25->setObjectName("formLayout_25");
        formLayout_25->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_25->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_25->setContentsMargins(9, 2, 9, 9);
        label_59 = new QLabel(groupBox_9);
        label_59->setObjectName("label_59");
        label_59->setMinimumSize(QSize(170, 0));
        label_59->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_25->setWidget(0, QFormLayout::LabelRole, label_59);

        advOutTrack5Bitrate = new QComboBox(groupBox_9);
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->addItem(QString());
        advOutTrack5Bitrate->setObjectName("advOutTrack5Bitrate");
        sizePolicy6.setHeightForWidth(advOutTrack5Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack5Bitrate->setSizePolicy(sizePolicy6);

        formLayout_25->setWidget(0, QFormLayout::FieldRole, advOutTrack5Bitrate);

        label_60 = new QLabel(groupBox_9);
        label_60->setObjectName("label_60");

        formLayout_25->setWidget(1, QFormLayout::LabelRole, label_60);

        advOutTrack5Name = new QLineEdit(groupBox_9);
        advOutTrack5Name->setObjectName("advOutTrack5Name");
        sizePolicy4.setHeightForWidth(advOutTrack5Name->sizePolicy().hasHeightForWidth());
        advOutTrack5Name->setSizePolicy(sizePolicy4);

        formLayout_25->setWidget(1, QFormLayout::FieldRole, advOutTrack5Name);


        verticalLayout_28->addWidget(groupBox_9);

        groupBox_12 = new QGroupBox(scrollAreaWidgetContents_7);
        groupBox_12->setObjectName("groupBox_12");
        sizePolicy6.setHeightForWidth(groupBox_12->sizePolicy().hasHeightForWidth());
        groupBox_12->setSizePolicy(sizePolicy6);
        formLayout_26 = new QFormLayout(groupBox_12);
        formLayout_26->setObjectName("formLayout_26");
        formLayout_26->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_26->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_26->setContentsMargins(9, 2, 9, 9);
        label_61 = new QLabel(groupBox_12);
        label_61->setObjectName("label_61");
        label_61->setMinimumSize(QSize(170, 0));
        label_61->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_26->setWidget(0, QFormLayout::LabelRole, label_61);

        advOutTrack6Bitrate = new QComboBox(groupBox_12);
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->addItem(QString());
        advOutTrack6Bitrate->setObjectName("advOutTrack6Bitrate");
        sizePolicy6.setHeightForWidth(advOutTrack6Bitrate->sizePolicy().hasHeightForWidth());
        advOutTrack6Bitrate->setSizePolicy(sizePolicy6);

        formLayout_26->setWidget(0, QFormLayout::FieldRole, advOutTrack6Bitrate);

        label_62 = new QLabel(groupBox_12);
        label_62->setObjectName("label_62");

        formLayout_26->setWidget(1, QFormLayout::LabelRole, label_62);

        advOutTrack6Name = new QLineEdit(groupBox_12);
        advOutTrack6Name->setObjectName("advOutTrack6Name");
        sizePolicy4.setHeightForWidth(advOutTrack6Name->sizePolicy().hasHeightForWidth());
        advOutTrack6Name->setSizePolicy(sizePolicy4);

        formLayout_26->setWidget(1, QFormLayout::FieldRole, advOutTrack6Name);


        verticalLayout_28->addWidget(groupBox_12);

        verticalSpacer_5 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_28->addItem(verticalSpacer_5);

        scrollArea_6->setWidget(scrollAreaWidgetContents_7);

        verticalLayout_10->addWidget(scrollArea_6);


        verticalLayout_9->addWidget(widget_3);

        advOutTabs->addTab(advOutputAudioTracksTab, QString());
        advOutputReplayTab = new QWidget();
        advOutputReplayTab->setObjectName("advOutputReplayTab");
        verticalLayout_22 = new QVBoxLayout(advOutputReplayTab);
        verticalLayout_22->setObjectName("verticalLayout_22");
        verticalLayout_22->setContentsMargins(0, 0, 0, 0);
        advOutputReplayFrame = new QFrame(advOutputReplayTab);
        advOutputReplayFrame->setObjectName("advOutputReplayFrame");
        advOutputReplayFrame->setLineWidth(0);
        verticalLayout_29 = new QVBoxLayout(advOutputReplayFrame);
        verticalLayout_29->setObjectName("verticalLayout_29");
        verticalLayout_29->setContentsMargins(9, 6, 0, 9);
        advReplayBufCustomFFmpeg = new QLabel(advOutputReplayFrame);
        advReplayBufCustomFFmpeg->setObjectName("advReplayBufCustomFFmpeg");

        verticalLayout_29->addWidget(advReplayBufCustomFFmpeg);

        advReplayBuf = new QCheckBox(advOutputReplayFrame);
        advReplayBuf->setObjectName("advReplayBuf");

        verticalLayout_29->addWidget(advReplayBuf);

        advReplayBufferFrame = new QFrame(advOutputReplayFrame);
        advReplayBufferFrame->setObjectName("advReplayBufferFrame");
        sizePolicy6.setHeightForWidth(advReplayBufferFrame->sizePolicy().hasHeightForWidth());
        advReplayBufferFrame->setSizePolicy(sizePolicy6);
        formLayout_30 = new QFormLayout(advReplayBufferFrame);
        formLayout_30->setObjectName("formLayout_30");
        formLayout_30->setContentsMargins(0, 0, 0, 8);
        advRBSecMaxLabel = new QLabel(advReplayBufferFrame);
        advRBSecMaxLabel->setObjectName("advRBSecMaxLabel");

        formLayout_30->setWidget(0, QFormLayout::LabelRole, advRBSecMaxLabel);

        advRBSecMax = new QSpinBox(advReplayBufferFrame);
        advRBSecMax->setObjectName("advRBSecMax");
        advRBSecMax->setSuffix(QString::fromUtf8(" s"));
        advRBSecMax->setMinimum(5);
        advRBSecMax->setMaximum(21600);
        advRBSecMax->setValue(15);

        formLayout_30->setWidget(0, QFormLayout::FieldRole, advRBSecMax);

        advRBMegsMax = new QSpinBox(advReplayBufferFrame);
        advRBMegsMax->setObjectName("advRBMegsMax");
        advRBMegsMax->setMinimum(20);
        advRBMegsMax->setMaximum(8192);
        advRBMegsMax->setValue(512);

        formLayout_30->setWidget(1, QFormLayout::FieldRole, advRBMegsMax);

        advRBMegsMaxLabel = new QLabel(advReplayBufferFrame);
        advRBMegsMaxLabel->setObjectName("advRBMegsMaxLabel");

        formLayout_30->setWidget(1, QFormLayout::LabelRole, advRBMegsMaxLabel);

        advRBEstimate = new QLabel(advReplayBufferFrame);
        advRBEstimate->setObjectName("advRBEstimate");
        advRBEstimate->setText(QString::fromUtf8(""));

        formLayout_30->setWidget(2, QFormLayout::FieldRole, advRBEstimate);


        verticalLayout_29->addWidget(advReplayBufferFrame);


        verticalLayout_22->addWidget(advOutputReplayFrame);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_22->addItem(verticalSpacer);

        advOutTabs->addTab(advOutputReplayTab, QString());

        verticalLayout_8->addWidget(advOutTabs);

        outputModePages->addWidget(advOutputsPage);

        verticalLayout_6->addWidget(outputModePages);


        verticalLayout_2->addWidget(frame);

        settingsPages->addWidget(outputPage);
        audioPage = new QWidget();
        audioPage->setObjectName("audioPage");
        formLayout = new QVBoxLayout(audioPage);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_50 = new QScrollArea(audioPage);
        scrollArea_50->setObjectName("scrollArea_50");
        scrollArea_50->setFrameShape(QFrame::NoFrame);
        scrollArea_50->setFrameShadow(QFrame::Plain);
        scrollArea_50->setWidgetResizable(true);
        scrollAreaWidgetContents_50 = new QWidget();
        scrollAreaWidgetContents_50->setObjectName("scrollAreaWidgetContents_50");
        scrollAreaWidgetContents_50->setGeometry(QRect(0, 0, 608, 520));
        verticalLayout_50 = new QVBoxLayout(scrollAreaWidgetContents_50);
        verticalLayout_50->setObjectName("verticalLayout_50");
        verticalLayout_50->setContentsMargins(0, 0, 0, 9);
        widget_50 = new QFrame(scrollAreaWidgetContents_50);
        widget_50->setObjectName("widget_50");
        verticalLayout_51 = new QVBoxLayout(widget_50);
        verticalLayout_51->setObjectName("verticalLayout_51");
        verticalLayout_51->setContentsMargins(9, 0, -1, 0);
        audioGeneralGroupBox = new QGroupBox(widget_50);
        audioGeneralGroupBox->setObjectName("audioGeneralGroupBox");
        formLayout_52 = new QFormLayout(audioGeneralGroupBox);
        formLayout_52->setObjectName("formLayout_52");
        formLayout_52->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_52->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_52->setContentsMargins(-1, 2, -1, -1);
        label_14 = new QLabel(audioGeneralGroupBox);
        label_14->setObjectName("label_14");
        label_14->setMinimumSize(QSize(170, 0));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_52->setWidget(0, QFormLayout::LabelRole, label_14);

        sampleRate = new QComboBox(audioGeneralGroupBox);
        sampleRate->addItem(QString());
        sampleRate->addItem(QString());
        sampleRate->setObjectName("sampleRate");
        sampleRate->setCurrentText(QString::fromUtf8("44.1 kHz"));

        formLayout_52->setWidget(0, QFormLayout::FieldRole, sampleRate);

        label_15 = new QLabel(audioGeneralGroupBox);
        label_15->setObjectName("label_15");

        formLayout_52->setWidget(1, QFormLayout::LabelRole, label_15);

        channelSetup = new QComboBox(audioGeneralGroupBox);
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->addItem(QString());
        channelSetup->setObjectName("channelSetup");

        formLayout_52->setWidget(1, QFormLayout::FieldRole, channelSetup);


        verticalLayout_51->addWidget(audioGeneralGroupBox);

        audioDevicesGroupBox = new QGroupBox(widget_50);
        audioDevicesGroupBox->setObjectName("audioDevicesGroupBox");
        formLayout_53 = new QFormLayout(audioDevicesGroupBox);
        formLayout_53->setObjectName("formLayout_53");
        formLayout_53->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_53->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_53->setContentsMargins(-1, 2, -1, -1);
        label_2 = new QLabel(audioDevicesGroupBox);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(170, 0));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_53->setWidget(0, QFormLayout::LabelRole, label_2);

        desktopAudioDevice1 = new QComboBox(audioDevicesGroupBox);
        desktopAudioDevice1->setObjectName("desktopAudioDevice1");
        desktopAudioDevice1->setEnabled(true);

        formLayout_53->setWidget(0, QFormLayout::FieldRole, desktopAudioDevice1);

        label_3 = new QLabel(audioDevicesGroupBox);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_53->setWidget(1, QFormLayout::LabelRole, label_3);

        desktopAudioDevice2 = new QComboBox(audioDevicesGroupBox);
        desktopAudioDevice2->setObjectName("desktopAudioDevice2");
        desktopAudioDevice2->setEnabled(true);

        formLayout_53->setWidget(1, QFormLayout::FieldRole, desktopAudioDevice2);

        label_4 = new QLabel(audioDevicesGroupBox);
        label_4->setObjectName("label_4");

        formLayout_53->setWidget(2, QFormLayout::LabelRole, label_4);

        auxAudioDevice1 = new QComboBox(audioDevicesGroupBox);
        auxAudioDevice1->setObjectName("auxAudioDevice1");
        auxAudioDevice1->setEnabled(true);

        formLayout_53->setWidget(2, QFormLayout::FieldRole, auxAudioDevice1);

        label_5 = new QLabel(audioDevicesGroupBox);
        label_5->setObjectName("label_5");

        formLayout_53->setWidget(3, QFormLayout::LabelRole, label_5);

        auxAudioDevice2 = new QComboBox(audioDevicesGroupBox);
        auxAudioDevice2->setObjectName("auxAudioDevice2");
        auxAudioDevice2->setEnabled(true);

        formLayout_53->setWidget(3, QFormLayout::FieldRole, auxAudioDevice2);

        label_6 = new QLabel(audioDevicesGroupBox);
        label_6->setObjectName("label_6");

        formLayout_53->setWidget(4, QFormLayout::LabelRole, label_6);

        auxAudioDevice3 = new QComboBox(audioDevicesGroupBox);
        auxAudioDevice3->setObjectName("auxAudioDevice3");
        auxAudioDevice3->setEnabled(true);

        formLayout_53->setWidget(4, QFormLayout::FieldRole, auxAudioDevice3);

        auxAudioDevice4 = new QComboBox(audioDevicesGroupBox);
        auxAudioDevice4->setObjectName("auxAudioDevice4");
        auxAudioDevice4->setEnabled(true);

        formLayout_53->setWidget(5, QFormLayout::FieldRole, auxAudioDevice4);

        label_67 = new QLabel(audioDevicesGroupBox);
        label_67->setObjectName("label_67");

        formLayout_53->setWidget(5, QFormLayout::LabelRole, label_67);


        verticalLayout_51->addWidget(audioDevicesGroupBox);

        audioMetersGroupBox = new QGroupBox(widget_50);
        audioMetersGroupBox->setObjectName("audioMetersGroupBox");
        formLayout_54 = new QFormLayout(audioMetersGroupBox);
        formLayout_54->setObjectName("formLayout_54");
        formLayout_54->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_54->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_54->setContentsMargins(-1, 2, -1, -1);
        label_65 = new QLabel(audioMetersGroupBox);
        label_65->setObjectName("label_65");
        label_65->setMinimumSize(QSize(170, 0));
        label_65->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_54->setWidget(0, QFormLayout::LabelRole, label_65);

        meterDecayRate = new QComboBox(audioMetersGroupBox);
        meterDecayRate->addItem(QString());
        meterDecayRate->addItem(QString());
        meterDecayRate->addItem(QString());
        meterDecayRate->setObjectName("meterDecayRate");

        formLayout_54->setWidget(0, QFormLayout::FieldRole, meterDecayRate);

        label_66 = new QLabel(audioMetersGroupBox);
        label_66->setObjectName("label_66");

        formLayout_54->setWidget(1, QFormLayout::LabelRole, label_66);

        peakMeterType = new QComboBox(audioMetersGroupBox);
        peakMeterType->addItem(QString());
        peakMeterType->addItem(QString());
        peakMeterType->setObjectName("peakMeterType");

        formLayout_54->setWidget(1, QFormLayout::FieldRole, peakMeterType);


        verticalLayout_51->addWidget(audioMetersGroupBox);

        audioAdvGroupBox = new QGroupBox(widget_50);
        audioAdvGroupBox->setObjectName("audioAdvGroupBox");
        formLayout_56 = new QFormLayout(audioAdvGroupBox);
        formLayout_56->setObjectName("formLayout_56");
        formLayout_56->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_56->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_56->setContentsMargins(-1, 2, -1, -1);
        monitoringDeviceLabel = new QLabel(audioAdvGroupBox);
        monitoringDeviceLabel->setObjectName("monitoringDeviceLabel");

        formLayout_56->setWidget(0, QFormLayout::LabelRole, monitoringDeviceLabel);

        monitoringDevice = new QComboBox(audioAdvGroupBox);
        monitoringDevice->setObjectName("monitoringDevice");

        formLayout_56->setWidget(0, QFormLayout::FieldRole, monitoringDevice);

        disableAudioDucking = new QCheckBox(audioAdvGroupBox);
        disableAudioDucking->setObjectName("disableAudioDucking");

        formLayout_56->setWidget(1, QFormLayout::FieldRole, disableAudioDucking);

        horizontalSpacer_11 = new QSpacerItem(170, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_56->setItem(2, QFormLayout::LabelRole, horizontalSpacer_11);

        lowLatencyBuffering = new QCheckBox(audioAdvGroupBox);
        lowLatencyBuffering->setObjectName("lowLatencyBuffering");

        formLayout_56->setWidget(2, QFormLayout::FieldRole, lowLatencyBuffering);


        verticalLayout_51->addWidget(audioAdvGroupBox);

        audioHotkeysGroupBox = new QGroupBox(widget_50);
        audioHotkeysGroupBox->setObjectName("audioHotkeysGroupBox");
        audioSourceLayout = new QFormLayout(audioHotkeysGroupBox);
        audioSourceLayout->setObjectName("audioSourceLayout");
        audioSourceLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        audioSourceLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        audioSourceLayout->setContentsMargins(-1, 2, -1, -1);

        verticalLayout_51->addWidget(audioHotkeysGroupBox);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_51->addItem(verticalSpacer_4);


        verticalLayout_50->addWidget(widget_50);

        scrollArea_50->setWidget(scrollAreaWidgetContents_50);

        formLayout->addWidget(scrollArea_50);

        audioMsg = new QLabel(audioPage);
        audioMsg->setObjectName("audioMsg");
        audioMsg->setText(QString::fromUtf8(""));
        audioMsg->setWordWrap(true);

        formLayout->addWidget(audioMsg);

        audioMsg_2 = new QLabel(audioPage);
        audioMsg_2->setObjectName("audioMsg_2");
        audioMsg_2->setText(QString::fromUtf8(""));
        audioMsg_2->setWordWrap(true);
        audioMsg_2->setProperty("themeID", QVariant(QString::fromUtf8("warning")));

        formLayout->addWidget(audioMsg_2);

        settingsPages->addWidget(audioPage);
        videoPage = new QWidget();
        videoPage->setObjectName("videoPage");
        formLayout_3 = new QFormLayout(videoPage);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setContentsMargins(9, 0, -1, 0);
        label_8 = new QLabel(videoPage);
        label_8->setObjectName("label_8");
        label_8->setMinimumSize(QSize(170, 0));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        baseResolution = new QComboBox(videoPage);
        baseResolution->setObjectName("baseResolution");
        sizePolicy5.setHeightForWidth(baseResolution->sizePolicy().hasHeightForWidth());
        baseResolution->setSizePolicy(sizePolicy5);
        baseResolution->setEditable(true);
        baseResolution->setCurrentText(QString::fromUtf8(""));
        baseResolution->setDuplicatesEnabled(false);
        baseResolution->setFrame(true);

        horizontalLayout_29->addWidget(baseResolution);

        baseAspect = new QLabel(videoPage);
        baseAspect->setObjectName("baseAspect");

        horizontalLayout_29->addWidget(baseAspect);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_29);

        outputResLabel = new QLabel(videoPage);
        outputResLabel->setObjectName("outputResLabel");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, outputResLabel);

        label_11 = new QLabel(videoPage);
        label_11->setObjectName("label_11");

        formLayout_3->setWidget(5, QFormLayout::LabelRole, label_11);

        downscaleFilter = new QComboBox(videoPage);
        downscaleFilter->setObjectName("downscaleFilter");
        downscaleFilter->setEnabled(true);

        formLayout_3->setWidget(5, QFormLayout::FieldRole, downscaleFilter);

        fpsType = new QComboBox(videoPage);
        fpsType->addItem(QString());
        fpsType->addItem(QString());
        fpsType->addItem(QString());
        fpsType->setObjectName("fpsType");
        sizePolicy5.setHeightForWidth(fpsType->sizePolicy().hasHeightForWidth());
        fpsType->setSizePolicy(sizePolicy5);
        fpsType->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, fpsType);

        fpsTypes = new QStackedWidget(videoPage);
        fpsTypes->setObjectName("fpsTypes");
        page = new QWidget();
        page->setObjectName("page");
        horizontalLayout_2 = new QHBoxLayout(page);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        fpsCommon = new QComboBox(page);
        fpsCommon->addItem(QString::fromUtf8("10"));
        fpsCommon->addItem(QString::fromUtf8("20"));
        fpsCommon->addItem(QString());
        fpsCommon->addItem(QString());
        fpsCommon->addItem(QString::fromUtf8("29.97"));
        fpsCommon->addItem(QString::fromUtf8("30"));
        fpsCommon->addItem(QString::fromUtf8("48"));
        fpsCommon->addItem(QString());
        fpsCommon->addItem(QString::fromUtf8("59.94"));
        fpsCommon->addItem(QString::fromUtf8("60"));
        fpsCommon->setObjectName("fpsCommon");
        fpsCommon->setCurrentText(QString::fromUtf8("10"));

        horizontalLayout_2->addWidget(fpsCommon, 0, Qt::AlignTop);

        fpsTypes->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        horizontalLayout_3 = new QHBoxLayout(page_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        fpsInteger = new QSpinBox(page_3);
        fpsInteger->setObjectName("fpsInteger");
        fpsInteger->setMinimum(1);
        fpsInteger->setMaximum(120);
        fpsInteger->setValue(30);

        horizontalLayout_3->addWidget(fpsInteger, 0, Qt::AlignTop);

        fpsTypes->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        formLayout_4 = new QFormLayout(page_2);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        fpsNumerator = new QSpinBox(page_2);
        fpsNumerator->setObjectName("fpsNumerator");
        fpsNumerator->setMinimum(1);
        fpsNumerator->setMaximum(1000000);
        fpsNumerator->setValue(30);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, fpsNumerator);

        fpsDenominator = new QSpinBox(page_2);
        fpsDenominator->setObjectName("fpsDenominator");
        fpsDenominator->setMinimum(1);
        fpsDenominator->setMaximum(1000000);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, fpsDenominator);

        label_12 = new QLabel(page_2);
        label_12->setObjectName("label_12");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(page_2);
        label_13->setObjectName("label_13");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_13);

        fpsTypes->addWidget(page_2);

        formLayout_3->setWidget(6, QFormLayout::FieldRole, fpsTypes);

        videoMsg = new QLabel(videoPage);
        videoMsg->setObjectName("videoMsg");
        sizePolicy10.setHeightForWidth(videoMsg->sizePolicy().hasHeightForWidth());
        videoMsg->setSizePolicy(sizePolicy10);
        videoMsg->setText(QString::fromUtf8(""));
        videoMsg->setWordWrap(true);

        formLayout_3->setWidget(7, QFormLayout::FieldRole, videoMsg);

        outputResLayout = new QHBoxLayout();
        outputResLayout->setSpacing(6);
        outputResLayout->setObjectName("outputResLayout");
        outputResolution = new QComboBox(videoPage);
        outputResolution->setObjectName("outputResolution");
        sizePolicy5.setHeightForWidth(outputResolution->sizePolicy().hasHeightForWidth());
        outputResolution->setSizePolicy(sizePolicy5);
        outputResolution->setEditable(true);
        outputResolution->setCurrentText(QString::fromUtf8(""));

        outputResLayout->addWidget(outputResolution);

        scaledAspect = new QLabel(videoPage);
        scaledAspect->setObjectName("scaledAspect");

        outputResLayout->addWidget(scaledAspect);


        formLayout_3->setLayout(3, QFormLayout::FieldRole, outputResLayout);

        settingsPages->addWidget(videoPage);
        hotkeyPage = new QWidget();
        hotkeyPage->setObjectName("hotkeyPage");
        verticalLayout_25 = new QVBoxLayout(hotkeyPage);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(9, 0, -1, 0);
        hotkeySearchLayout = new QGridLayout();
        hotkeySearchLayout->setObjectName("hotkeySearchLayout");
        hotkeySearchLabel = new QLabel(hotkeyPage);
        hotkeySearchLabel->setObjectName("hotkeySearchLabel");

        hotkeySearchLayout->addWidget(hotkeySearchLabel, 0, 0, 1, 1);

        hotkeyFilterSearch = new QLineEdit(hotkeyPage);
        hotkeyFilterSearch->setObjectName("hotkeyFilterSearch");

        hotkeySearchLayout->addWidget(hotkeyFilterSearch, 0, 1, 1, 1);

        hotkeyFilterLabel = new QLabel(hotkeyPage);
        hotkeyFilterLabel->setObjectName("hotkeyFilterLabel");

        hotkeySearchLayout->addWidget(hotkeyFilterLabel, 0, 2, 1, 1);

        hotkeyFilterInput = new OBSHotkeyEdit(hotkeyPage);
        hotkeyFilterInput->setObjectName("hotkeyFilterInput");

        hotkeySearchLayout->addWidget(hotkeyFilterInput, 0, 3, 1, 1);

        hotkeyFilterReset = new QPushButton(hotkeyPage);
        hotkeyFilterReset->setObjectName("hotkeyFilterReset");
        QSizePolicy sizePolicy11(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(hotkeyFilterReset->sizePolicy().hasHeightForWidth());
        hotkeyFilterReset->setSizePolicy(sizePolicy11);
        hotkeyFilterReset->setMinimumSize(QSize(0, 0));
        hotkeyFilterReset->setMaximumSize(QSize(16777215, 16777215));
        hotkeyFilterReset->setBaseSize(QSize(0, 0));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/res/images/revert.svg"), QSize(), QIcon::Normal, QIcon::Off);
        hotkeyFilterReset->setIcon(icon9);
        hotkeyFilterReset->setIconSize(QSize(20, 20));
        hotkeyFilterReset->setFlat(false);
        hotkeyFilterReset->setProperty("toolButton", QVariant(true));

        hotkeySearchLayout->addWidget(hotkeyFilterReset, 0, 4, 1, 1);


        verticalLayout_25->addLayout(hotkeySearchLayout);

        hotkeyScrollArea = new QScrollArea(hotkeyPage);
        hotkeyScrollArea->setObjectName("hotkeyScrollArea");
        hotkeyScrollArea->setWidgetResizable(true);
        hotkeyScrollContents = new QWidget();
        hotkeyScrollContents->setObjectName("hotkeyScrollContents");
        hotkeyScrollContents->setGeometry(QRect(0, 0, 196, 28));
        hotkeyFormLayout = new QFormLayout(hotkeyScrollContents);
        hotkeyFormLayout->setObjectName("hotkeyFormLayout");
        hotkeyFormLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        hotkeyFormLayout->setVerticalSpacing(0);
        hotkeyFormLayout->setContentsMargins(9, 2, 9, 9);
        pleaseWaitLabel = new QLabel(hotkeyScrollContents);
        pleaseWaitLabel->setObjectName("pleaseWaitLabel");
        sizePolicy6.setHeightForWidth(pleaseWaitLabel->sizePolicy().hasHeightForWidth());
        pleaseWaitLabel->setSizePolicy(sizePolicy6);
        pleaseWaitLabel->setScaledContents(false);
        pleaseWaitLabel->setAlignment(Qt::AlignCenter);

        hotkeyFormLayout->setWidget(0, QFormLayout::SpanningRole, pleaseWaitLabel);

        hotkeyScrollArea->setWidget(hotkeyScrollContents);

        verticalLayout_25->addWidget(hotkeyScrollArea);

        settingsPages->addWidget(hotkeyPage);
        accessPage = new QWidget();
        accessPage->setObjectName("accessPage");
        formLayout_41 = new QVBoxLayout(accessPage);
        formLayout_41->setObjectName("formLayout_41");
        formLayout_41->setContentsMargins(0, 0, 0, 0);
        scrollArea_7 = new QScrollArea(accessPage);
        scrollArea_7->setObjectName("scrollArea_7");
        scrollArea_7->setFrameShape(QFrame::NoFrame);
        scrollArea_7->setFrameShadow(QFrame::Plain);
        scrollArea_7->setWidgetResizable(true);
        accessPageContents = new QWidget();
        accessPageContents->setObjectName("accessPageContents");
        accessPageContents->setGeometry(QRect(0, 0, 704, 347));
        verticalLayout_42 = new QVBoxLayout(accessPageContents);
        verticalLayout_42->setObjectName("verticalLayout_42");
        verticalLayout_42->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(9, -1, 0, -1);
        colorsGroupBox = new QGroupBox(accessPageContents);
        colorsGroupBox->setObjectName("colorsGroupBox");
        sizePolicy2.setHeightForWidth(colorsGroupBox->sizePolicy().hasHeightForWidth());
        colorsGroupBox->setSizePolicy(sizePolicy2);
        colorsGroupBox->setCheckable(true);
        colorsGroupBox->setChecked(false);
        formLayout_8 = new QFormLayout(colorsGroupBox);
        formLayout_8->setObjectName("formLayout_8");
        formLayout_8->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_8->setContentsMargins(-1, 2, -1, -1);
        colorPresetLabel = new QLabel(colorsGroupBox);
        colorPresetLabel->setObjectName("colorPresetLabel");

        formLayout_8->setWidget(0, QFormLayout::LabelRole, colorPresetLabel);

        colorPreset = new QComboBox(colorsGroupBox);
        colorPreset->addItem(QString());
        colorPreset->addItem(QString());
        colorPreset->addItem(QString());
        colorPreset->setObjectName("colorPreset");

        formLayout_8->setWidget(0, QFormLayout::FieldRole, colorPreset);

        colorSelectLabel_1 = new QLabel(colorsGroupBox);
        colorSelectLabel_1->setObjectName("colorSelectLabel_1");

        formLayout_8->setWidget(1, QFormLayout::LabelRole, colorSelectLabel_1);

        colorSelectLayout_1 = new QHBoxLayout();
        colorSelectLayout_1->setObjectName("colorSelectLayout_1");
        colorSelectLayout_1->setContentsMargins(0, 0, 0, 0);
        color1 = new QLabel(colorsGroupBox);
        color1->setObjectName("color1");
        sizePolicy6.setHeightForWidth(color1->sizePolicy().hasHeightForWidth());
        color1->setSizePolicy(sizePolicy6);
        color1->setMinimumSize(QSize(80, 0));
        color1->setMaximumSize(QSize(16777215, 16777215));
        color1->setText(QString::fromUtf8("color here"));
        color1->setAlignment(Qt::AlignCenter);

        colorSelectLayout_1->addWidget(color1);

        choose1 = new QPushButton(colorsGroupBox);
        choose1->setObjectName("choose1");
        choose1->setMinimumSize(QSize(0, 0));
        choose1->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_1->addWidget(choose1);

        colorSpacer_1 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorSelectLayout_1->addItem(colorSpacer_1);


        formLayout_8->setLayout(1, QFormLayout::FieldRole, colorSelectLayout_1);

        colorSelectLabel_2 = new QLabel(colorsGroupBox);
        colorSelectLabel_2->setObjectName("colorSelectLabel_2");

        formLayout_8->setWidget(2, QFormLayout::LabelRole, colorSelectLabel_2);

        colorSelectLayout_2 = new QHBoxLayout();
        colorSelectLayout_2->setObjectName("colorSelectLayout_2");
        colorSelectLayout_2->setContentsMargins(0, 0, 0, 0);
        color2 = new QLabel(colorsGroupBox);
        color2->setObjectName("color2");
        sizePolicy6.setHeightForWidth(color2->sizePolicy().hasHeightForWidth());
        color2->setSizePolicy(sizePolicy6);
        color2->setMinimumSize(QSize(80, 0));
        color2->setMaximumSize(QSize(16777215, 16777215));
        color2->setText(QString::fromUtf8("color here"));
        color2->setAlignment(Qt::AlignCenter);

        colorSelectLayout_2->addWidget(color2);

        choose2 = new QPushButton(colorsGroupBox);
        choose2->setObjectName("choose2");
        choose2->setMinimumSize(QSize(0, 0));
        choose2->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_2->addWidget(choose2);

        colorSpacer_2 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorSelectLayout_2->addItem(colorSpacer_2);


        formLayout_8->setLayout(2, QFormLayout::FieldRole, colorSelectLayout_2);

        colorSelectLabel_3 = new QLabel(colorsGroupBox);
        colorSelectLabel_3->setObjectName("colorSelectLabel_3");

        formLayout_8->setWidget(3, QFormLayout::LabelRole, colorSelectLabel_3);

        colorSelectLayout_3 = new QHBoxLayout();
        colorSelectLayout_3->setObjectName("colorSelectLayout_3");
        colorSelectLayout_3->setContentsMargins(0, 0, 0, 0);
        color3 = new QLabel(colorsGroupBox);
        color3->setObjectName("color3");
        sizePolicy6.setHeightForWidth(color3->sizePolicy().hasHeightForWidth());
        color3->setSizePolicy(sizePolicy6);
        color3->setMinimumSize(QSize(80, 0));
        color3->setMaximumSize(QSize(16777215, 16777215));
        color3->setText(QString::fromUtf8("color here"));
        color3->setAlignment(Qt::AlignCenter);

        colorSelectLayout_3->addWidget(color3);

        choose3 = new QPushButton(colorsGroupBox);
        choose3->setObjectName("choose3");
        choose3->setMinimumSize(QSize(0, 0));
        choose3->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_3->addWidget(choose3);

        colorSpacer_3 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorSelectLayout_3->addItem(colorSpacer_3);


        formLayout_8->setLayout(3, QFormLayout::FieldRole, colorSelectLayout_3);

        colorSelectLabel_4 = new QLabel(colorsGroupBox);
        colorSelectLabel_4->setObjectName("colorSelectLabel_4");

        formLayout_8->setWidget(4, QFormLayout::LabelRole, colorSelectLabel_4);

        colorSelectLayout_4 = new QHBoxLayout();
        colorSelectLayout_4->setObjectName("colorSelectLayout_4");
        colorSelectLayout_4->setContentsMargins(0, 0, 0, 0);
        color4 = new QLabel(colorsGroupBox);
        color4->setObjectName("color4");
        sizePolicy6.setHeightForWidth(color4->sizePolicy().hasHeightForWidth());
        color4->setSizePolicy(sizePolicy6);
        color4->setMinimumSize(QSize(80, 0));
        color4->setMaximumSize(QSize(16777215, 16777215));
        color4->setText(QString::fromUtf8("color here"));
        color4->setAlignment(Qt::AlignCenter);

        colorSelectLayout_4->addWidget(color4);

        choose4 = new QPushButton(colorsGroupBox);
        choose4->setObjectName("choose4");
        choose4->setMinimumSize(QSize(0, 0));
        choose4->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_4->addWidget(choose4);

        colorSpacer_4 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorSelectLayout_4->addItem(colorSpacer_4);


        formLayout_8->setLayout(4, QFormLayout::FieldRole, colorSelectLayout_4);

        colorSelectLabel_5 = new QLabel(colorsGroupBox);
        colorSelectLabel_5->setObjectName("colorSelectLabel_5");

        formLayout_8->setWidget(5, QFormLayout::LabelRole, colorSelectLabel_5);

        colorSelectLayout_5 = new QHBoxLayout();
        colorSelectLayout_5->setObjectName("colorSelectLayout_5");
        colorSelectLayout_5->setContentsMargins(0, 0, 0, 0);
        color5 = new QLabel(colorsGroupBox);
        color5->setObjectName("color5");
        sizePolicy6.setHeightForWidth(color5->sizePolicy().hasHeightForWidth());
        color5->setSizePolicy(sizePolicy6);
        color5->setMinimumSize(QSize(80, 0));
        color5->setMaximumSize(QSize(16777215, 16777215));
        color5->setText(QString::fromUtf8("color here"));
        color5->setAlignment(Qt::AlignCenter);

        colorSelectLayout_5->addWidget(color5);

        choose5 = new QPushButton(colorsGroupBox);
        choose5->setObjectName("choose5");
        choose5->setMinimumSize(QSize(0, 0));
        choose5->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_5->addWidget(choose5);

        colorSpacer_5 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorSelectLayout_5->addItem(colorSpacer_5);


        formLayout_8->setLayout(5, QFormLayout::FieldRole, colorSelectLayout_5);

        colorSelectLabel_6 = new QLabel(colorsGroupBox);
        colorSelectLabel_6->setObjectName("colorSelectLabel_6");

        formLayout_8->setWidget(6, QFormLayout::LabelRole, colorSelectLabel_6);

        colorSelectLayout_6 = new QHBoxLayout();
        colorSelectLayout_6->setObjectName("colorSelectLayout_6");
        colorSelectLayout_6->setContentsMargins(0, 0, 0, 0);
        color6 = new QLabel(colorsGroupBox);
        color6->setObjectName("color6");
        sizePolicy6.setHeightForWidth(color6->sizePolicy().hasHeightForWidth());
        color6->setSizePolicy(sizePolicy6);
        color6->setMinimumSize(QSize(80, 0));
        color6->setMaximumSize(QSize(16777215, 16777215));
        color6->setText(QString::fromUtf8("color here"));
        color6->setAlignment(Qt::AlignCenter);

        colorSelectLayout_6->addWidget(color6);

        choose6 = new QPushButton(colorsGroupBox);
        choose6->setObjectName("choose6");
        choose6->setMinimumSize(QSize(0, 0));
        choose6->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_6->addWidget(choose6);

        colorSpacer_6 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorSelectLayout_6->addItem(colorSpacer_6);


        formLayout_8->setLayout(6, QFormLayout::FieldRole, colorSelectLayout_6);

        colorSelectLabel_7 = new QLabel(colorsGroupBox);
        colorSelectLabel_7->setObjectName("colorSelectLabel_7");

        formLayout_8->setWidget(7, QFormLayout::LabelRole, colorSelectLabel_7);

        colorSelectLayout_7 = new QHBoxLayout();
        colorSelectLayout_7->setObjectName("colorSelectLayout_7");
        colorSelectLayout_7->setContentsMargins(0, 0, 0, 0);
        color7 = new QLabel(colorsGroupBox);
        color7->setObjectName("color7");
        sizePolicy6.setHeightForWidth(color7->sizePolicy().hasHeightForWidth());
        color7->setSizePolicy(sizePolicy6);
        color7->setMinimumSize(QSize(80, 0));
        color7->setMaximumSize(QSize(16777215, 16777215));
        color7->setText(QString::fromUtf8("color here"));
        color7->setAlignment(Qt::AlignCenter);

        colorSelectLayout_7->addWidget(color7);

        choose7 = new QPushButton(colorsGroupBox);
        choose7->setObjectName("choose7");
        choose7->setMinimumSize(QSize(0, 0));
        choose7->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_7->addWidget(choose7);

        colorSpacer_7 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorSelectLayout_7->addItem(colorSpacer_7);


        formLayout_8->setLayout(7, QFormLayout::FieldRole, colorSelectLayout_7);

        colorSelectLabel_8 = new QLabel(colorsGroupBox);
        colorSelectLabel_8->setObjectName("colorSelectLabel_8");

        formLayout_8->setWidget(8, QFormLayout::LabelRole, colorSelectLabel_8);

        colorSelectLayout_8 = new QHBoxLayout();
        colorSelectLayout_8->setObjectName("colorSelectLayout_8");
        colorSelectLayout_8->setContentsMargins(0, 0, 0, 0);
        color8 = new QLabel(colorsGroupBox);
        color8->setObjectName("color8");
        sizePolicy6.setHeightForWidth(color8->sizePolicy().hasHeightForWidth());
        color8->setSizePolicy(sizePolicy6);
        color8->setMinimumSize(QSize(80, 0));
        color8->setMaximumSize(QSize(16777215, 16777215));
        color8->setText(QString::fromUtf8("color here"));
        color8->setAlignment(Qt::AlignCenter);

        colorSelectLayout_8->addWidget(color8);

        choose8 = new QPushButton(colorsGroupBox);
        choose8->setObjectName("choose8");
        choose8->setMinimumSize(QSize(0, 0));
        choose8->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_8->addWidget(choose8);

        colorSpacer_8 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorSelectLayout_8->addItem(colorSpacer_8);


        formLayout_8->setLayout(8, QFormLayout::FieldRole, colorSelectLayout_8);

        colorSelectLabel_9 = new QLabel(colorsGroupBox);
        colorSelectLabel_9->setObjectName("colorSelectLabel_9");

        formLayout_8->setWidget(9, QFormLayout::LabelRole, colorSelectLabel_9);

        colorSelectLayout_9 = new QHBoxLayout();
        colorSelectLayout_9->setObjectName("colorSelectLayout_9");
        colorSelectLayout_9->setContentsMargins(0, 0, 0, 0);
        color9 = new QLabel(colorsGroupBox);
        color9->setObjectName("color9");
        sizePolicy6.setHeightForWidth(color9->sizePolicy().hasHeightForWidth());
        color9->setSizePolicy(sizePolicy6);
        color9->setMinimumSize(QSize(80, 0));
        color9->setMaximumSize(QSize(16777215, 16777215));
        color9->setText(QString::fromUtf8("color here"));
        color9->setAlignment(Qt::AlignCenter);

        colorSelectLayout_9->addWidget(color9);

        choose9 = new QPushButton(colorsGroupBox);
        choose9->setObjectName("choose9");
        choose9->setMinimumSize(QSize(0, 0));
        choose9->setMaximumSize(QSize(16777215, 16777215));

        colorSelectLayout_9->addWidget(choose9);

        colorSpacer_9 = new QSpacerItem(40, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        colorSelectLayout_9->addItem(colorSpacer_9);


        formLayout_8->setLayout(9, QFormLayout::FieldRole, colorSelectLayout_9);


        verticalLayout_7->addWidget(colorsGroupBox);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);


        verticalLayout_42->addLayout(verticalLayout_7);

        scrollArea_7->setWidget(accessPageContents);

        formLayout_41->addWidget(scrollArea_7);

        settingsPages->addWidget(accessPage);
        advancedPage = new QWidget();
        advancedPage->setObjectName("advancedPage");
        verticalLayout_16 = new QVBoxLayout(advancedPage);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(advancedPage);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 713, 955));
        verticalLayout_23 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_23->setObjectName("verticalLayout_23");
        verticalLayout_23->setContentsMargins(0, 0, 0, 9);
        widget_11 = new QFrame(scrollAreaWidgetContents);
        widget_11->setObjectName("widget_11");
        verticalLayout_24 = new QVBoxLayout(widget_11);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_24->setContentsMargins(9, 0, -1, 0);
        advancedGeneralGroupBox = new QGroupBox(widget_11);
        advancedGeneralGroupBox->setObjectName("advancedGeneralGroupBox");
        formLayout_22 = new QFormLayout(advancedGeneralGroupBox);
        formLayout_22->setObjectName("formLayout_22");
        formLayout_22->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_22->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_22->setContentsMargins(-1, 2, -1, -1);
        processPriorityLabel = new QLabel(advancedGeneralGroupBox);
        processPriorityLabel->setObjectName("processPriorityLabel");

        formLayout_22->setWidget(0, QFormLayout::LabelRole, processPriorityLabel);

        processPriority = new QComboBox(advancedGeneralGroupBox);
        processPriority->setObjectName("processPriority");

        formLayout_22->setWidget(0, QFormLayout::FieldRole, processPriority);

        horizontalSpacer_13 = new QSpacerItem(170, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_22->setItem(1, QFormLayout::LabelRole, horizontalSpacer_13);

        confirmOnExit = new QCheckBox(advancedGeneralGroupBox);
        confirmOnExit->setObjectName("confirmOnExit");

        formLayout_22->setWidget(2, QFormLayout::FieldRole, confirmOnExit);


        verticalLayout_24->addWidget(advancedGeneralGroupBox);

        advancedVideoContainer = new QGroupBox(widget_11);
        advancedVideoContainer->setObjectName("advancedVideoContainer");
        formLayout_14 = new QFormLayout(advancedVideoContainer);
        formLayout_14->setObjectName("formLayout_14");
        formLayout_14->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_14->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_14->setContentsMargins(-1, 2, -1, -1);
        rendererLabel = new QLabel(advancedVideoContainer);
        rendererLabel->setObjectName("rendererLabel");

        formLayout_14->setWidget(0, QFormLayout::LabelRole, rendererLabel);

        renderer = new QComboBox(advancedVideoContainer);
        renderer->setObjectName("renderer");
        renderer->setCurrentText(QString::fromUtf8(""));

        formLayout_14->setWidget(0, QFormLayout::FieldRole, renderer);

        adapterLabel = new QLabel(advancedVideoContainer);
        adapterLabel->setObjectName("adapterLabel");
        adapterLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_14->setWidget(1, QFormLayout::LabelRole, adapterLabel);

        adapter = new QComboBox(advancedVideoContainer);
        adapter->setObjectName("adapter");
        adapter->setEnabled(false);
        adapter->setCurrentText(QString::fromUtf8(""));

        formLayout_14->setWidget(1, QFormLayout::FieldRole, adapter);

        label_30 = new QLabel(advancedVideoContainer);
        label_30->setObjectName("label_30");
        label_30->setMinimumSize(QSize(0, 0));
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_14->setWidget(2, QFormLayout::LabelRole, label_30);

        colorFormat = new QComboBox(advancedVideoContainer);
        colorFormat->setObjectName("colorFormat");

        formLayout_14->setWidget(2, QFormLayout::FieldRole, colorFormat);

        label_33 = new QLabel(advancedVideoContainer);
        label_33->setObjectName("label_33");

        formLayout_14->setWidget(3, QFormLayout::LabelRole, label_33);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        colorSpace = new QComboBox(advancedVideoContainer);
        colorSpace->setObjectName("colorSpace");

        horizontalLayout_20->addWidget(colorSpace);

        label_34 = new QLabel(advancedVideoContainer);
        label_34->setObjectName("label_34");
        sizePolicy7.setHeightForWidth(label_34->sizePolicy().hasHeightForWidth());
        label_34->setSizePolicy(sizePolicy7);

        horizontalLayout_20->addWidget(label_34);

        colorRange = new QComboBox(advancedVideoContainer);
        colorRange->setObjectName("colorRange");

        horizontalLayout_20->addWidget(colorRange);


        formLayout_14->setLayout(3, QFormLayout::FieldRole, horizontalLayout_20);

        label_sdrWhiteLevel = new QLabel(advancedVideoContainer);
        label_sdrWhiteLevel->setObjectName("label_sdrWhiteLevel");

        formLayout_14->setWidget(4, QFormLayout::LabelRole, label_sdrWhiteLevel);

        horizontalLayout_sdrPaperWhite = new QHBoxLayout();
        horizontalLayout_sdrPaperWhite->setObjectName("horizontalLayout_sdrPaperWhite");
        horizontalLayout_sdrPaperWhite->setContentsMargins(0, 0, 0, 0);
        sdrWhiteLevel = new QSpinBox(advancedVideoContainer);
        sdrWhiteLevel->setObjectName("sdrWhiteLevel");
        sdrWhiteLevel->setSuffix(QString::fromUtf8(" nits"));
        sdrWhiteLevel->setMinimum(80);
        sdrWhiteLevel->setMaximum(480);

        horizontalLayout_sdrPaperWhite->addWidget(sdrWhiteLevel);

        label_hdrNominalPeakLevel = new QLabel(advancedVideoContainer);
        label_hdrNominalPeakLevel->setObjectName("label_hdrNominalPeakLevel");
        sizePolicy7.setHeightForWidth(label_hdrNominalPeakLevel->sizePolicy().hasHeightForWidth());
        label_hdrNominalPeakLevel->setSizePolicy(sizePolicy7);

        horizontalLayout_sdrPaperWhite->addWidget(label_hdrNominalPeakLevel);

        hdrNominalPeakLevel = new QSpinBox(advancedVideoContainer);
        hdrNominalPeakLevel->setObjectName("hdrNominalPeakLevel");
        hdrNominalPeakLevel->setSuffix(QString::fromUtf8(" nits"));
        hdrNominalPeakLevel->setMinimum(400);
        hdrNominalPeakLevel->setMaximum(10000);

        horizontalLayout_sdrPaperWhite->addWidget(hdrNominalPeakLevel);


        formLayout_14->setLayout(4, QFormLayout::FieldRole, horizontalLayout_sdrPaperWhite);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        disableOSXVSync = new QCheckBox(advancedVideoContainer);
        disableOSXVSync->setObjectName("disableOSXVSync");

        horizontalLayout_18->addWidget(disableOSXVSync);

        resetOSXVSync = new QCheckBox(advancedVideoContainer);
        resetOSXVSync->setObjectName("resetOSXVSync");

        horizontalLayout_18->addWidget(resetOSXVSync);


        formLayout_14->setLayout(5, QFormLayout::FieldRole, horizontalLayout_18);

        horizontalSpacer_12 = new QSpacerItem(170, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_14->setItem(6, QFormLayout::LabelRole, horizontalSpacer_12);


        verticalLayout_24->addWidget(advancedVideoContainer);

        groupBox_6 = new QGroupBox(widget_11);
        groupBox_6->setObjectName("groupBox_6");
        formLayout_17 = new QFormLayout(groupBox_6);
        formLayout_17->setObjectName("formLayout_17");
        formLayout_17->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_17->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_17->setContentsMargins(-1, 2, -1, -1);
        label_7 = new QLabel(groupBox_6);
        label_7->setObjectName("label_7");

        formLayout_17->setWidget(0, QFormLayout::LabelRole, label_7);

        filenameFormatting = new QLineEdit(groupBox_6);
        filenameFormatting->setObjectName("filenameFormatting");

        formLayout_17->setWidget(0, QFormLayout::FieldRole, filenameFormatting);

        overwriteIfExists = new QCheckBox(groupBox_6);
        overwriteIfExists->setObjectName("overwriteIfExists");

        formLayout_17->setWidget(1, QFormLayout::FieldRole, overwriteIfExists);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        simpleRBPrefix = new QLineEdit(groupBox_6);
        simpleRBPrefix->setObjectName("simpleRBPrefix");

        horizontalLayout_14->addWidget(simpleRBPrefix);

        label_58 = new QLabel(groupBox_6);
        label_58->setObjectName("label_58");

        horizontalLayout_14->addWidget(label_58);

        simpleRBSuffix = new QLineEdit(groupBox_6);
        simpleRBSuffix->setObjectName("simpleRBSuffix");

        horizontalLayout_14->addWidget(simpleRBSuffix);


        formLayout_17->setLayout(3, QFormLayout::FieldRole, horizontalLayout_14);

        label_57 = new QLabel(groupBox_6);
        label_57->setObjectName("label_57");

        formLayout_17->setWidget(3, QFormLayout::LabelRole, label_57);

        horizontalSpacer_10 = new QSpacerItem(170, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_17->setItem(1, QFormLayout::LabelRole, horizontalSpacer_10);

        autoRemux = new QCheckBox(groupBox_6);
        autoRemux->setObjectName("autoRemux");

        formLayout_17->setWidget(2, QFormLayout::FieldRole, autoRemux);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_17->setItem(2, QFormLayout::LabelRole, horizontalSpacer_16);


        verticalLayout_24->addWidget(groupBox_6);

        groupBox_5 = new QGroupBox(widget_11);
        groupBox_5->setObjectName("groupBox_5");
        formLayout_18 = new QFormLayout(groupBox_5);
        formLayout_18->setObjectName("formLayout_18");
        formLayout_18->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_18->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_18->setContentsMargins(-1, 2, -1, -1);
        label_56 = new QLabel(groupBox_5);
        label_56->setObjectName("label_56");

        formLayout_18->setWidget(1, QFormLayout::LabelRole, label_56);

        widget_12 = new QFrame(groupBox_5);
        widget_12->setObjectName("widget_12");
        widget_12->setEnabled(true);
        horizontalLayout_13 = new QHBoxLayout(widget_12);
        horizontalLayout_13->setSpacing(5);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        streamDelaySec = new QSpinBox(widget_12);
        streamDelaySec->setObjectName("streamDelaySec");
        streamDelaySec->setEnabled(true);
        sizePolicy3.setHeightForWidth(streamDelaySec->sizePolicy().hasHeightForWidth());
        streamDelaySec->setSizePolicy(sizePolicy3);
        streamDelaySec->setMinimumSize(QSize(80, 0));
        streamDelaySec->setSuffix(QString::fromUtf8(" s"));
        streamDelaySec->setMinimum(1);
        streamDelaySec->setMaximum(1800);

        horizontalLayout_13->addWidget(streamDelaySec);

        streamDelayInfo = new QLabel(widget_12);
        streamDelayInfo->setObjectName("streamDelayInfo");
        streamDelayInfo->setText(QString::fromUtf8("Estimated RAM goes here"));

        horizontalLayout_13->addWidget(streamDelayInfo);


        formLayout_18->setWidget(1, QFormLayout::FieldRole, widget_12);

        streamDelayPreserve = new QCheckBox(groupBox_5);
        streamDelayPreserve->setObjectName("streamDelayPreserve");

        formLayout_18->setWidget(2, QFormLayout::FieldRole, streamDelayPreserve);

        streamDelayEnable = new QCheckBox(groupBox_5);
        streamDelayEnable->setObjectName("streamDelayEnable");
        streamDelayEnable->setChecked(true);

        formLayout_18->setWidget(0, QFormLayout::FieldRole, streamDelayEnable);

        horizontalSpacer_9 = new QSpacerItem(170, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_18->setItem(2, QFormLayout::LabelRole, horizontalSpacer_9);


        verticalLayout_24->addWidget(groupBox_5);

        groupBox_7 = new QGroupBox(widget_11);
        groupBox_7->setObjectName("groupBox_7");
        formLayout_19 = new QFormLayout(groupBox_7);
        formLayout_19->setObjectName("formLayout_19");
        formLayout_19->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_19->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_19->setContentsMargins(-1, 2, -1, -1);
        reconnectEnable = new QCheckBox(groupBox_7);
        reconnectEnable->setObjectName("reconnectEnable");
        reconnectEnable->setChecked(true);

        formLayout_19->setWidget(0, QFormLayout::FieldRole, reconnectEnable);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        reconnectRetryDelay = new QSpinBox(groupBox_7);
        reconnectRetryDelay->setObjectName("reconnectRetryDelay");
        reconnectRetryDelay->setMinimum(1);
        reconnectRetryDelay->setMaximum(30);

        horizontalLayout_19->addWidget(reconnectRetryDelay);

        label_22 = new QLabel(groupBox_7);
        label_22->setObjectName("label_22");
        sizePolicy7.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy7);

        horizontalLayout_19->addWidget(label_22);

        reconnectMaxRetries = new QSpinBox(groupBox_7);
        reconnectMaxRetries->setObjectName("reconnectMaxRetries");
        reconnectMaxRetries->setMinimum(1);
        reconnectMaxRetries->setMaximum(10000);

        horizontalLayout_19->addWidget(reconnectMaxRetries);


        formLayout_19->setLayout(1, QFormLayout::FieldRole, horizontalLayout_19);

        label_17 = new QLabel(groupBox_7);
        label_17->setObjectName("label_17");

        formLayout_19->setWidget(1, QFormLayout::LabelRole, label_17);

        horizontalSpacer_8 = new QSpacerItem(170, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_19->setItem(0, QFormLayout::LabelRole, horizontalSpacer_8);


        verticalLayout_24->addWidget(groupBox_7);

        advNetworkGroupBox = new QGroupBox(widget_11);
        advNetworkGroupBox->setObjectName("advNetworkGroupBox");
        formLayout_23 = new QFormLayout(advNetworkGroupBox);
        formLayout_23->setObjectName("formLayout_23");
        formLayout_23->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_23->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_23->setContentsMargins(-1, 2, -1, -1);
        advNetworkDisabled = new QLabel(advNetworkGroupBox);
        advNetworkDisabled->setObjectName("advNetworkDisabled");

        formLayout_23->setWidget(0, QFormLayout::FieldRole, advNetworkDisabled);

        ipFamilyLabel = new QLabel(advNetworkGroupBox);
        ipFamilyLabel->setObjectName("ipFamilyLabel");

        formLayout_23->setWidget(1, QFormLayout::LabelRole, ipFamilyLabel);

        ipFamily = new QComboBox(advNetworkGroupBox);
        ipFamily->setObjectName("ipFamily");

        formLayout_23->setWidget(1, QFormLayout::FieldRole, ipFamily);

        bindToIPLabel = new QLabel(advNetworkGroupBox);
        bindToIPLabel->setObjectName("bindToIPLabel");

        formLayout_23->setWidget(2, QFormLayout::LabelRole, bindToIPLabel);

        bindToIP = new QComboBox(advNetworkGroupBox);
        bindToIP->setObjectName("bindToIP");

        formLayout_23->setWidget(2, QFormLayout::FieldRole, bindToIP);

        enableNewSocketLoop = new QCheckBox(advNetworkGroupBox);
        enableNewSocketLoop->setObjectName("enableNewSocketLoop");

        formLayout_23->setWidget(4, QFormLayout::FieldRole, enableNewSocketLoop);

        enableLowLatencyMode = new QCheckBox(advNetworkGroupBox);
        enableLowLatencyMode->setObjectName("enableLowLatencyMode");
        enableLowLatencyMode->setEnabled(false);

        formLayout_23->setWidget(5, QFormLayout::FieldRole, enableLowLatencyMode);

        horizontalSpacer_7 = new QSpacerItem(170, 1, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_23->setItem(4, QFormLayout::LabelRole, horizontalSpacer_7);

        dynBitrate = new QCheckBox(advNetworkGroupBox);
        dynBitrate->setObjectName("dynBitrate");

        formLayout_23->setWidget(3, QFormLayout::FieldRole, dynBitrate);


        verticalLayout_24->addWidget(advNetworkGroupBox);

        sourcesGroup = new QGroupBox(widget_11);
        sourcesGroup->setObjectName("sourcesGroup");
        formLayout_34 = new QFormLayout(sourcesGroup);
        formLayout_34->setObjectName("formLayout_34");
        formLayout_34->setContentsMargins(-1, 2, -1, -1);
        horizontalSpacer_15 = new QSpacerItem(170, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_34->setItem(0, QFormLayout::LabelRole, horizontalSpacer_15);

        browserHWAccel = new QCheckBox(sourcesGroup);
        browserHWAccel->setObjectName("browserHWAccel");

        formLayout_34->setWidget(0, QFormLayout::FieldRole, browserHWAccel);


        verticalLayout_24->addWidget(sourcesGroup);

        groupBox_17 = new QGroupBox(widget_11);
        groupBox_17->setObjectName("groupBox_17");
        formLayout_33 = new QFormLayout(groupBox_17);
        formLayout_33->setObjectName("formLayout_33");
        formLayout_33->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_33->setContentsMargins(-1, 2, -1, -1);
        label_21 = new QLabel(groupBox_17);
        label_21->setObjectName("label_21");

        formLayout_33->setWidget(0, QFormLayout::LabelRole, label_21);

        hotkeyFocusType = new QComboBox(groupBox_17);
        hotkeyFocusType->setObjectName("hotkeyFocusType");

        formLayout_33->setWidget(0, QFormLayout::FieldRole, hotkeyFocusType);

        horizontalSpacer_14 = new QSpacerItem(170, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout_33->setItem(1, QFormLayout::LabelRole, horizontalSpacer_14);


        verticalLayout_24->addWidget(groupBox_17);


        verticalLayout_23->addWidget(widget_11);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_16->addWidget(scrollArea);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(10, 10, 10, 10);
        advancedMsg = new QLabel(advancedPage);
        advancedMsg->setObjectName("advancedMsg");
        advancedMsg->setText(QString::fromUtf8(""));
        advancedMsg->setWordWrap(true);

        verticalLayout_17->addWidget(advancedMsg);

        advancedMsg2 = new QLabel(advancedPage);
        advancedMsg2->setObjectName("advancedMsg2");
        advancedMsg2->setText(QString::fromUtf8(""));
        advancedMsg2->setWordWrap(true);

        verticalLayout_17->addWidget(advancedMsg2);


        verticalLayout_16->addLayout(verticalLayout_17);

        settingsPages->addWidget(advancedPage);

        horizontalLayout->addWidget(settingsPages);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(OBSBasicSettings);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label->setBuddy(language);
        label_9->setBuddy(snapDistance);
        label_64->setBuddy(multiviewLayout);
        label_45->setBuddy(theme);
        label_10->setBuddy(themeVariant);
        serviceLabel->setBuddy(service);
        streamKeyLabel->setBuddy(key);
        authUsernameLabel->setBuddy(authUsername);
        authPwLabel->setBuddy(authPw);
        twitchAddonLabel->setBuddy(twitchAddonDropdown);
        outputModeLabel->setBuddy(outputMode);
        label_19->setBuddy(simpleOutputVBitrate);
        label_20->setBuddy(simpleOutputABitrate);
        simpleOutStrEncoderLabel->setBuddy(simpleOutRecEncoder);
        simpleOutPresetLabel->setBuddy(simpleOutPreset);
        label_23->setBuddy(simpleOutCustom);
        simpleOutStrAEncoderLabel->setBuddy(simpleOutStrAEncoder);
        label_18->setBuddy(simpleOutputPath);
        label_26->setBuddy(simpleOutRecQuality);
        simpleOutRecFormatLabel->setBuddy(simpleOutRecFormat);
        simpleOutRecEncoderLabel->setBuddy(simpleOutRecEncoder);
        simpleOutRecAEncoderLabel->setBuddy(simpleOutRecAEncoder);
        label_420->setBuddy(simpleOutMuxCustom);
        label_31->setBuddy(advOutRecType);
        label_55->setBuddy(advOutTrack1Name);
        label_25->setBuddy(advOutTrack1Bitrate);
        label_49->setBuddy(advOutTrack2Bitrate);
        label_50->setBuddy(advOutTrack2Name);
        label_51->setBuddy(advOutTrack3Bitrate);
        label_52->setBuddy(advOutTrack3Name);
        label_53->setBuddy(advOutTrack4Bitrate);
        label_54->setBuddy(advOutTrack4Name);
        label_59->setBuddy(advOutTrack5Bitrate);
        label_60->setBuddy(advOutTrack5Name);
        label_61->setBuddy(advOutTrack6Bitrate);
        label_62->setBuddy(advOutTrack6Name);
        label_14->setBuddy(sampleRate);
        label_15->setBuddy(channelSetup);
        label_2->setBuddy(desktopAudioDevice1);
        label_3->setBuddy(desktopAudioDevice2);
        label_4->setBuddy(auxAudioDevice1);
        label_5->setBuddy(auxAudioDevice2);
        label_6->setBuddy(auxAudioDevice3);
        label_67->setBuddy(auxAudioDevice4);
        label_65->setBuddy(meterDecayRate);
        label_66->setBuddy(peakMeterType);
        monitoringDeviceLabel->setBuddy(monitoringDevice);
        label_8->setBuddy(baseResolution);
        outputResLabel->setBuddy(outputResolution);
        label_11->setBuddy(downscaleFilter);
        colorPresetLabel->setBuddy(colorPreset);
        colorSelectLabel_1->setBuddy(choose1);
        colorSelectLabel_2->setBuddy(choose2);
        colorSelectLabel_3->setBuddy(choose3);
        colorSelectLabel_4->setBuddy(choose4);
        colorSelectLabel_5->setBuddy(choose5);
        colorSelectLabel_6->setBuddy(choose6);
        colorSelectLabel_7->setBuddy(choose7);
        colorSelectLabel_8->setBuddy(choose8);
        colorSelectLabel_9->setBuddy(choose9);
        processPriorityLabel->setBuddy(processPriority);
        rendererLabel->setBuddy(renderer);
        adapterLabel->setBuddy(adapter);
        label_30->setBuddy(colorFormat);
        label_33->setBuddy(colorSpace);
        label_34->setBuddy(colorRange);
        label_sdrWhiteLevel->setBuddy(sdrWhiteLevel);
        label_hdrNominalPeakLevel->setBuddy(hdrNominalPeakLevel);
        label_7->setBuddy(filenameFormatting);
        label_58->setBuddy(simpleRBSuffix);
        label_57->setBuddy(simpleRBPrefix);
        label_56->setBuddy(streamDelaySec);
        label_22->setBuddy(reconnectMaxRetries);
        label_17->setBuddy(reconnectRetryDelay);
        ipFamilyLabel->setBuddy(ipFamily);
        bindToIPLabel->setBuddy(bindToIP);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(listWidget, scrollArea_2);
        QWidget::setTabOrder(scrollArea_2, language);
        QWidget::setTabOrder(language, openStatsOnStartup);
        QWidget::setTabOrder(openStatsOnStartup, hideOBSFromCapture);
        QWidget::setTabOrder(hideOBSFromCapture, updateChannelBox);
        QWidget::setTabOrder(updateChannelBox, enableAutoUpdates);
        QWidget::setTabOrder(enableAutoUpdates, warnBeforeStreamStart);
        QWidget::setTabOrder(warnBeforeStreamStart, warnBeforeStreamStop);
        QWidget::setTabOrder(warnBeforeStreamStop, warnBeforeRecordStop);
        QWidget::setTabOrder(warnBeforeRecordStop, recordWhenStreaming);
        QWidget::setTabOrder(recordWhenStreaming, keepRecordStreamStops);
        QWidget::setTabOrder(keepRecordStreamStops, replayWhileStreaming);
        QWidget::setTabOrder(replayWhileStreaming, keepReplayStreamStops);
        QWidget::setTabOrder(keepReplayStreamStops, snappingEnabled);
        QWidget::setTabOrder(snappingEnabled, snapDistance);
        QWidget::setTabOrder(snapDistance, screenSnapping);
        QWidget::setTabOrder(screenSnapping, sourceSnapping);
        QWidget::setTabOrder(sourceSnapping, centerSnapping);
        QWidget::setTabOrder(centerSnapping, hideProjectorCursor);
        QWidget::setTabOrder(hideProjectorCursor, projectorAlwaysOnTop);
        QWidget::setTabOrder(projectorAlwaysOnTop, saveProjectors);
        QWidget::setTabOrder(saveProjectors, closeProjectors);
        QWidget::setTabOrder(closeProjectors, systemTrayEnabled);
        QWidget::setTabOrder(systemTrayEnabled, systemTrayWhenStarted);
        QWidget::setTabOrder(systemTrayWhenStarted, systemTrayAlways);
        QWidget::setTabOrder(systemTrayAlways, overflowHide);
        QWidget::setTabOrder(overflowHide, overflowAlwaysVisible);
        QWidget::setTabOrder(overflowAlwaysVisible, overflowSelectionHide);
        QWidget::setTabOrder(overflowSelectionHide, previewSafeAreas);
        QWidget::setTabOrder(previewSafeAreas, previewSpacingHelpers);
        QWidget::setTabOrder(previewSpacingHelpers, automaticSearch);
        QWidget::setTabOrder(automaticSearch, doubleClickSwitch);
        QWidget::setTabOrder(doubleClickSwitch, studioPortraitLayout);
        QWidget::setTabOrder(studioPortraitLayout, prevProgLabelToggle);
        QWidget::setTabOrder(prevProgLabelToggle, multiviewMouseSwitch);
        QWidget::setTabOrder(multiviewMouseSwitch, multiviewDrawNames);
        QWidget::setTabOrder(multiviewDrawNames, multiviewDrawAreas);
        QWidget::setTabOrder(multiviewDrawAreas, multiviewLayout);
        QWidget::setTabOrder(multiviewLayout, theme);
        QWidget::setTabOrder(theme, themeVariant);
        QWidget::setTabOrder(themeVariant, service);
        QWidget::setTabOrder(service, moreInfoButton);
        QWidget::setTabOrder(moreInfoButton, connectAccount);
        QWidget::setTabOrder(connectAccount, useStreamKey);
        QWidget::setTabOrder(useStreamKey, server);
        QWidget::setTabOrder(server, customServer);
        QWidget::setTabOrder(customServer, key);
        QWidget::setTabOrder(key, show);
        QWidget::setTabOrder(show, getStreamKeyButton);
        QWidget::setTabOrder(getStreamKeyButton, connectAccount2);
        QWidget::setTabOrder(connectAccount2, disconnectAccount);
        QWidget::setTabOrder(disconnectAccount, bandwidthTestEnable);
        QWidget::setTabOrder(bandwidthTestEnable, useAuth);
        QWidget::setTabOrder(useAuth, twitchAddonDropdown);
        QWidget::setTabOrder(twitchAddonDropdown, authUsername);
        QWidget::setTabOrder(authUsername, authPw);
        QWidget::setTabOrder(authPw, authPwShow);
        QWidget::setTabOrder(authPwShow, outputMode);
        QWidget::setTabOrder(outputMode, simpleOutputVBitrate);
        QWidget::setTabOrder(simpleOutputVBitrate, simpleOutputABitrate);
        QWidget::setTabOrder(simpleOutputABitrate, simpleOutStrEncoder);
        QWidget::setTabOrder(simpleOutStrEncoder, simpleOutPreset);
        QWidget::setTabOrder(simpleOutPreset, simpleOutAdvanced);
        QWidget::setTabOrder(simpleOutAdvanced, simpleOutCustom);
        QWidget::setTabOrder(simpleOutCustom, simpleOutRecTrack1);
        QWidget::setTabOrder(simpleOutRecTrack1, simpleOutRecTrack2);
        QWidget::setTabOrder(simpleOutRecTrack2, simpleOutRecTrack3);
        QWidget::setTabOrder(simpleOutRecTrack3, simpleOutRecTrack4);
        QWidget::setTabOrder(simpleOutRecTrack4, simpleOutRecTrack5);
        QWidget::setTabOrder(simpleOutRecTrack5, simpleOutRecTrack6);
        QWidget::setTabOrder(simpleOutRecTrack6, simpleOutputPath);
        QWidget::setTabOrder(simpleOutputPath, simpleOutputBrowse);
        QWidget::setTabOrder(simpleOutputBrowse, simpleNoSpace);
        QWidget::setTabOrder(simpleNoSpace, simpleOutRecQuality);
        QWidget::setTabOrder(simpleOutRecQuality, simpleOutRecFormat);
        QWidget::setTabOrder(simpleOutRecFormat, simpleOutRecEncoder);
        QWidget::setTabOrder(simpleOutRecEncoder, simpleOutMuxCustom);
        QWidget::setTabOrder(simpleOutMuxCustom, simpleReplayBuf);
        QWidget::setTabOrder(simpleReplayBuf, simpleRBSecMax);
        QWidget::setTabOrder(simpleRBSecMax, simpleRBMegsMax);
        QWidget::setTabOrder(simpleRBMegsMax, advOutTabs);
        QWidget::setTabOrder(advOutTabs, advOutTrack1);
        QWidget::setTabOrder(advOutTrack1, advOutTrack2);
        QWidget::setTabOrder(advOutTrack2, advOutTrack3);
        QWidget::setTabOrder(advOutTrack3, advOutTrack4);
        QWidget::setTabOrder(advOutTrack4, advOutTrack5);
        QWidget::setTabOrder(advOutTrack5, advOutTrack6);
        QWidget::setTabOrder(advOutTrack6, advOutMultiTrack1);
        QWidget::setTabOrder(advOutMultiTrack1, advOutMultiTrack2);
        QWidget::setTabOrder(advOutMultiTrack2, advOutMultiTrack3);
        QWidget::setTabOrder(advOutMultiTrack3, advOutMultiTrack4);
        QWidget::setTabOrder(advOutMultiTrack4, advOutMultiTrack5);
        QWidget::setTabOrder(advOutMultiTrack5, advOutMultiTrack6);
        QWidget::setTabOrder(advOutMultiTrack6, advOutEncoder);
        QWidget::setTabOrder(advOutEncoder, advOutRescaleFilter);
        QWidget::setTabOrder(advOutRescaleFilter, advOutRescale);
        QWidget::setTabOrder(advOutRescale, advOutRecType);
        QWidget::setTabOrder(advOutRecType, advOutRecPath);
        QWidget::setTabOrder(advOutRecPath, advOutRecPathBrowse);
        QWidget::setTabOrder(advOutRecPathBrowse, advOutNoSpace);
        QWidget::setTabOrder(advOutNoSpace, advOutRecFormat);
        QWidget::setTabOrder(advOutRecFormat, advOutRecTrack1);
        QWidget::setTabOrder(advOutRecTrack1, advOutRecTrack2);
        QWidget::setTabOrder(advOutRecTrack2, advOutRecTrack3);
        QWidget::setTabOrder(advOutRecTrack3, advOutRecTrack4);
        QWidget::setTabOrder(advOutRecTrack4, advOutRecTrack5);
        QWidget::setTabOrder(advOutRecTrack5, advOutRecTrack6);
        QWidget::setTabOrder(advOutRecTrack6, advOutRecEncoder);
        QWidget::setTabOrder(advOutRecEncoder, advOutRecRescaleFilter);
        QWidget::setTabOrder(advOutRecRescaleFilter, advOutRecRescale);
        QWidget::setTabOrder(advOutRecRescale, advOutMuxCustom);
        QWidget::setTabOrder(advOutMuxCustom, advOutSplitFile);
        QWidget::setTabOrder(advOutSplitFile, advOutSplitFileType);
        QWidget::setTabOrder(advOutSplitFileType, advOutSplitFileTime);
        QWidget::setTabOrder(advOutSplitFileTime, advOutSplitFileSize);
        QWidget::setTabOrder(advOutSplitFileSize, advOutTrack1Bitrate);
        QWidget::setTabOrder(advOutTrack1Bitrate, advOutTrack1Name);
        QWidget::setTabOrder(advOutTrack1Name, advOutTrack2Bitrate);
        QWidget::setTabOrder(advOutTrack2Bitrate, advOutTrack2Name);
        QWidget::setTabOrder(advOutTrack2Name, advOutTrack3Bitrate);
        QWidget::setTabOrder(advOutTrack3Bitrate, advOutTrack3Name);
        QWidget::setTabOrder(advOutTrack3Name, advOutTrack4Bitrate);
        QWidget::setTabOrder(advOutTrack4Bitrate, advOutTrack4Name);
        QWidget::setTabOrder(advOutTrack4Name, advOutTrack5Bitrate);
        QWidget::setTabOrder(advOutTrack5Bitrate, advOutTrack5Name);
        QWidget::setTabOrder(advOutTrack5Name, advOutTrack6Bitrate);
        QWidget::setTabOrder(advOutTrack6Bitrate, advOutTrack6Name);
        QWidget::setTabOrder(advOutTrack6Name, advRBSecMax);
        QWidget::setTabOrder(advRBSecMax, advRBMegsMax);
        QWidget::setTabOrder(advRBMegsMax, scrollArea_50);
        QWidget::setTabOrder(scrollArea_50, sampleRate);
        QWidget::setTabOrder(sampleRate, channelSetup);
        QWidget::setTabOrder(channelSetup, desktopAudioDevice1);
        QWidget::setTabOrder(desktopAudioDevice1, desktopAudioDevice2);
        QWidget::setTabOrder(desktopAudioDevice2, auxAudioDevice1);
        QWidget::setTabOrder(auxAudioDevice1, auxAudioDevice2);
        QWidget::setTabOrder(auxAudioDevice2, auxAudioDevice3);
        QWidget::setTabOrder(auxAudioDevice3, auxAudioDevice4);
        QWidget::setTabOrder(auxAudioDevice4, meterDecayRate);
        QWidget::setTabOrder(meterDecayRate, peakMeterType);
        QWidget::setTabOrder(peakMeterType, monitoringDevice);
        QWidget::setTabOrder(monitoringDevice, disableAudioDucking);
        QWidget::setTabOrder(disableAudioDucking, lowLatencyBuffering);
        QWidget::setTabOrder(lowLatencyBuffering, baseResolution);
        QWidget::setTabOrder(baseResolution, outputResolution);
        QWidget::setTabOrder(outputResolution, downscaleFilter);
        QWidget::setTabOrder(downscaleFilter, fpsType);
        QWidget::setTabOrder(fpsType, fpsCommon);
        QWidget::setTabOrder(fpsCommon, fpsInteger);
        QWidget::setTabOrder(fpsInteger, fpsNumerator);
        QWidget::setTabOrder(fpsNumerator, fpsDenominator);
        QWidget::setTabOrder(fpsDenominator, scrollArea);
        QWidget::setTabOrder(scrollArea, processPriority);
        QWidget::setTabOrder(processPriority, confirmOnExit);
        QWidget::setTabOrder(confirmOnExit, renderer);
        QWidget::setTabOrder(renderer, adapter);
        QWidget::setTabOrder(adapter, colorFormat);
        QWidget::setTabOrder(colorFormat, colorSpace);
        QWidget::setTabOrder(colorSpace, colorRange);
        QWidget::setTabOrder(colorRange, sdrWhiteLevel);
        QWidget::setTabOrder(sdrWhiteLevel, hdrNominalPeakLevel);
        QWidget::setTabOrder(hdrNominalPeakLevel, disableOSXVSync);
        QWidget::setTabOrder(disableOSXVSync, resetOSXVSync);
        QWidget::setTabOrder(resetOSXVSync, filenameFormatting);
        QWidget::setTabOrder(filenameFormatting, overwriteIfExists);
        QWidget::setTabOrder(overwriteIfExists, autoRemux);
        QWidget::setTabOrder(autoRemux, simpleRBPrefix);
        QWidget::setTabOrder(simpleRBPrefix, simpleRBSuffix);
        QWidget::setTabOrder(simpleRBSuffix, streamDelayEnable);
        QWidget::setTabOrder(streamDelayEnable, streamDelaySec);
        QWidget::setTabOrder(streamDelaySec, streamDelayPreserve);
        QWidget::setTabOrder(streamDelayPreserve, reconnectEnable);
        QWidget::setTabOrder(reconnectEnable, reconnectRetryDelay);
        QWidget::setTabOrder(reconnectRetryDelay, reconnectMaxRetries);
        QWidget::setTabOrder(reconnectMaxRetries, bindToIP);
        QWidget::setTabOrder(bindToIP, dynBitrate);
        QWidget::setTabOrder(dynBitrate, enableNewSocketLoop);
        QWidget::setTabOrder(enableNewSocketLoop, enableLowLatencyMode);
        QWidget::setTabOrder(enableLowLatencyMode, browserHWAccel);
        QWidget::setTabOrder(browserHWAccel, hotkeyFocusType);
        QWidget::setTabOrder(hotkeyFocusType, ignoreRecommended);
        QWidget::setTabOrder(ignoreRecommended, useStreamKeyAdv);
        QWidget::setTabOrder(useStreamKeyAdv, hotkeyFilterSearch);
        QWidget::setTabOrder(hotkeyFilterSearch, hotkeyFilterInput);
        QWidget::setTabOrder(hotkeyFilterInput, hotkeyFilterReset);
        QWidget::setTabOrder(hotkeyFilterReset, hotkeyScrollArea);

        retranslateUi(OBSBasicSettings);
        QObject::connect(listWidget, &QListWidget::currentRowChanged, settingsPages, &QStackedWidget::setCurrentIndex);
        QObject::connect(fpsType, &QComboBox::currentIndexChanged, fpsTypes, &QStackedWidget::setCurrentIndex);
        QObject::connect(outputMode, &QComboBox::currentIndexChanged, outputModePages, &QStackedWidget::setCurrentIndex);
        QObject::connect(simpleOutAdvanced, &QCheckBox::toggled, simpleOutCustom, &QLineEdit::setVisible);
        QObject::connect(simpleOutAdvanced, &QCheckBox::toggled, label_23, &QLabel::setVisible);
        QObject::connect(systemTrayEnabled, &QCheckBox::toggled, systemTrayWhenStarted, &QCheckBox::setEnabled);
        QObject::connect(systemTrayEnabled, &QCheckBox::toggled, systemTrayAlways, &QCheckBox::setEnabled);
        QObject::connect(enableNewSocketLoop, &QCheckBox::toggled, enableLowLatencyMode, &QCheckBox::setEnabled);
        QObject::connect(snappingEnabled, &QCheckBox::toggled, label_9, &QLabel::setEnabled);
        QObject::connect(snappingEnabled, &QCheckBox::toggled, snapDistance, &QDoubleSpinBox::setEnabled);
        QObject::connect(snappingEnabled, &QCheckBox::toggled, screenSnapping, &QCheckBox::setEnabled);
        QObject::connect(snappingEnabled, &QCheckBox::toggled, sourceSnapping, &QCheckBox::setEnabled);
        QObject::connect(snappingEnabled, &QCheckBox::toggled, centerSnapping, &QCheckBox::setEnabled);
        QObject::connect(recordWhenStreaming, &QCheckBox::toggled, keepRecordStreamStops, &QCheckBox::setEnabled);
        QObject::connect(replayWhileStreaming, &QCheckBox::toggled, keepReplayStreamStops, &QCheckBox::setEnabled);
        QObject::connect(streamDelayEnable, &QCheckBox::toggled, label_56, &QLabel::setEnabled);
        QObject::connect(streamDelayEnable, &QCheckBox::toggled, streamDelaySec, &QSpinBox::setEnabled);
        QObject::connect(streamDelayEnable, &QCheckBox::toggled, streamDelayInfo, &QLabel::setEnabled);
        QObject::connect(streamDelayEnable, &QCheckBox::toggled, streamDelayPreserve, &QCheckBox::setEnabled);
        QObject::connect(connectAccount2, &QPushButton::clicked, connectAccount, qOverload<>(&QPushButton::click));
        QObject::connect(advOutSplitFile, &QCheckBox::toggled, advOutSplitFileType, &QComboBox::setEnabled);
        QObject::connect(advOutRecType, &QComboBox::currentIndexChanged, stackedWidget, &QStackedWidget::setCurrentIndex);
        QObject::connect(advOutFFUseRescale, &QCheckBox::toggled, advOutFFRescale, &QComboBox::setEnabled);
        QObject::connect(advOutFFType, &QComboBox::currentIndexChanged, stackedWidget_2, &QStackedWidget::setCurrentIndex);

        listWidget->setCurrentRow(0);
        settingsPages->setCurrentIndex(0);
        streamStackWidget->setCurrentIndex(0);
        serverStackedWidget->setCurrentIndex(1);
        outputMode->setCurrentIndex(0);
        outputModePages->setCurrentIndex(0);
        simpleOutputABitrate->setCurrentIndex(8);
        simpleRecTrackWidget->setCurrentIndex(0);
        advOutTabs->setCurrentIndex(0);
        advStreamTrackWidget->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);
        advRecTrackWidget->setCurrentIndex(0);
        stackedWidget_2->setCurrentIndex(0);
        advOutTrack1Bitrate->setCurrentIndex(8);
        advOutTrack2Bitrate->setCurrentIndex(8);
        advOutTrack3Bitrate->setCurrentIndex(8);
        advOutTrack4Bitrate->setCurrentIndex(8);
        advOutTrack5Bitrate->setCurrentIndex(8);
        advOutTrack6Bitrate->setCurrentIndex(8);
        sampleRate->setCurrentIndex(0);
        channelSetup->setCurrentIndex(0);
        meterDecayRate->setCurrentIndex(0);
        peakMeterType->setCurrentIndex(0);
        fpsTypes->setCurrentIndex(1);
        fpsCommon->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(OBSBasicSettings);
    } // setupUi

    void retranslateUi(QDialog *OBSBasicSettings)
    {
        OBSBasicSettings->setWindowTitle(QCoreApplication::translate("OBSBasicSettings", "Settings", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Appearance", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        groupBox_15->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General", nullptr));
        label->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Language", nullptr));
        openStatsOnStartup->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.OpenStatsOnStartup", nullptr));
#if QT_CONFIG(tooltip)
        hideOBSFromCapture->setToolTip(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.HideOBSWindowsFromCapture.Tooltip", nullptr));
#endif // QT_CONFIG(tooltip)
        hideOBSFromCapture->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.HideOBSWindowsFromCapture", nullptr));
        updateSettingsGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Updater", nullptr));
        updateChannelLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.UpdateChannel", nullptr));
        updateChannelBox->setCurrentText(QString());
        enableAutoUpdates->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.EnableAutoUpdates", nullptr));
        groupBox_16->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output", nullptr));
        warnBeforeStreamStart->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.WarnBeforeStartingStream", nullptr));
        warnBeforeStreamStop->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.WarnBeforeStoppingStream", nullptr));
        warnBeforeRecordStop->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.WarnBeforeStoppingRecord", nullptr));
        recordWhenStreaming->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.RecordWhenStreaming", nullptr));
        keepRecordStreamStops->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.KeepRecordingWhenStreamStops", nullptr));
        replayWhileStreaming->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.ReplayBufferWhileStreaming", nullptr));
        keepReplayStreamStops->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.KeepReplayBufferStreamStops", nullptr));
        groupBox_10->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Snapping", nullptr));
        snappingEnabled->setText(QCoreApplication::translate("OBSBasicSettings", "Enable", nullptr));
        screenSnapping->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.ScreenSnapping", nullptr));
        centerSnapping->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.CenterSnapping", nullptr));
        sourceSnapping->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SourceSnapping", nullptr));
        label_9->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SnapDistance", nullptr));
        groupBox_14->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Projectors", nullptr));
        hideProjectorCursor->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.HideProjectorCursor", nullptr));
        projectorAlwaysOnTop->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.ProjectorAlwaysOnTop", nullptr));
        saveProjectors->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SaveProjectors", nullptr));
        closeProjectors->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.CloseExistingProjectors", nullptr));
        groupBox_13->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SysTray", nullptr));
        systemTrayEnabled->setText(QCoreApplication::translate("OBSBasicSettings", "Enable", nullptr));
        systemTrayWhenStarted->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SysTrayWhenStarted", nullptr));
        systemTrayAlways->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SystemTrayHideMinimize", nullptr));
        groupBox_18->setTitle(QCoreApplication::translate("OBSBasicSettings", "StudioMode.Preview", nullptr));
        overflowAlwaysVisible->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.OverflowAlwaysVisible", nullptr));
        overflowSelectionHide->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.OverflowSelectionHidden", nullptr));
        previewSafeAreas->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview.DrawSafeAreas", nullptr));
        previewSpacingHelpers->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SpacingHelpers", nullptr));
        overflowHide->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.OverflowHidden", nullptr));
        groupBox_19->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Importers", nullptr));
        automaticSearch->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.AutomaticCollectionSearch", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.TogglePreviewProgramMode", nullptr));
        doubleClickSwitch->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.SwitchOnDoubleClick", nullptr));
        studioPortraitLayout->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.StudioPortraitLayout", nullptr));
        prevProgLabelToggle->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.TogglePreviewProgramLabels", nullptr));
        groupBoxMultiview->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview", nullptr));
        multiviewMouseSwitch->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview.MouseSwitch", nullptr));
        multiviewDrawNames->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview.DrawSourceNames", nullptr));
        multiviewDrawAreas->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.Multiview.DrawSafeAreas", nullptr));
        label_64->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General.MultiviewLayout", nullptr));
        appearanceGeneral->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Appearance.General", nullptr));
        label_45->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Appearance.General.Theme", nullptr));
        label_10->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Appearance.General.Variant", nullptr));
        serviceLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.Service", nullptr));
        moreInfoButton->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.MoreInfo", nullptr));
        connectAccount->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.ConnectAccount", nullptr));
        useStreamKey->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.UseStreamKey", nullptr));
        serverLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.Server", nullptr));
        streamKeyLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.StreamKey", nullptr));
        show->setText(QCoreApplication::translate("OBSBasicSettings", "Show", nullptr));
#if QT_CONFIG(tooltip)
        getStreamKeyButton->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        getStreamKeyButton->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.GetStreamKey", nullptr));
        connectedAccountText->setText(QCoreApplication::translate("OBSBasicSettings", "Auth.LoadingChannel.Title", nullptr));
        disconnectAccount->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.DisconnectAccount", nullptr));
        bandwidthTestEnable->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.BandwidthTestMode", nullptr));
        useAuth->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.Custom.UseAuthentication", nullptr));
        authUsernameLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.Custom.Username", nullptr));
        authPwLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.Custom.Password", nullptr));
        authPwShow->setText(QCoreApplication::translate("OBSBasicSettings", "Show", nullptr));
        twitchAddonLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.TTVAddon", nullptr));
        ignoreRecommended->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Stream.IgnoreRecommended", nullptr));
        useStreamKeyAdv->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.UseStreamKeyAdvanced", nullptr));
        connectedAccountLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.ConnectedAccount", nullptr));
        connectAccount2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.AutoConfig.StreamPage.ConnectAccount", nullptr));
        outputModeLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode", nullptr));
        outputMode->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode.Simple", nullptr));
        outputMode->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Mode.Adv", nullptr));

        simpleStreamingGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Streaming", nullptr));
        label_19->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.VideoBitrate", nullptr));
        label_20->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        simpleOutputABitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        simpleOutputABitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        simpleOutputABitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        simpleOutputABitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        simpleOutputABitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        simpleOutputABitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        simpleOutputABitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        simpleOutputABitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        simpleOutputABitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        simpleOutputABitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        simpleOutputABitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        simpleOutStrEncoderLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder.Video", nullptr));
        simpleOutPresetLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.EncoderPreset", nullptr));
        simpleOutAdvanced->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Advanced", nullptr));
        label_23->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomEncoderSettings", nullptr));
        simpleOutStrAEncoderLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder.Audio", nullptr));
        simpleRecordingGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording", nullptr));
        label_18->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.SavePath", nullptr));
        simpleOutputBrowse->setText(QCoreApplication::translate("OBSBasicSettings", "Browse", nullptr));
        simpleNoSpace->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.NoSpaceFileName", nullptr));
        label_26->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.RecordingQuality", nullptr));
        simpleOutRecFormatLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Format", nullptr));
        simpleOutRecFormat->setCurrentText(QString());
        simpleOutRecEncoderLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder.Video", nullptr));
        simpleOutRecAEncoderLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder.Audio", nullptr));
        simplerectrack_label->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.RecAudioTrack", nullptr));
        simpleFlvTrack1->setText(QCoreApplication::translate("OBSBasicSettings", "1", nullptr));
        simpleFlvTrack2->setText(QCoreApplication::translate("OBSBasicSettings", "2", nullptr));
        simpleFlvTrack3->setText(QCoreApplication::translate("OBSBasicSettings", "3", nullptr));
        simpleFlvTrack4->setText(QCoreApplication::translate("OBSBasicSettings", "4", nullptr));
        simpleFlvTrack5->setText(QCoreApplication::translate("OBSBasicSettings", "5", nullptr));
        simpleFlvTrack6->setText(QCoreApplication::translate("OBSBasicSettings", "6", nullptr));
        label_420->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomMuxerSettings", nullptr));
        simpleReplayBuf->setTitle(QCoreApplication::translate("OBSBasicSettings", "ReplayBuffer", nullptr));
        label_35->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.SecondsMax", nullptr));
        simpleRBMegsMaxLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.MegabytesMax", nullptr));
        advOutTopContainer->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Streaming.Settings", nullptr));
        label_28->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.AudioTrack", nullptr));
        advOutAEncLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder.Audio", nullptr));
        advOutEncLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder.Video", nullptr));
        advOutUseRescale->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Rescale", nullptr));
        advOutEncoderProps->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Encoder", nullptr));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputStreamTab), QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Streaming", nullptr));
        label_31->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Type", nullptr));
        advOutRecType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Type.Standard", nullptr));
        advOutRecType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Type.FFmpegOutput", nullptr));

        advOutRecTopContainer->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Settings", nullptr));
        label_32->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Simple.SavePath", nullptr));
        advOutRecPathBrowse->setText(QCoreApplication::translate("OBSBasicSettings", "Browse", nullptr));
        advOutNoSpace->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.NoSpaceFileName", nullptr));
        label_43->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Format", nullptr));
        advOutRecFormat->setCurrentText(QString());
        label_29->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.AudioTrack", nullptr));
        flvTrack1->setText(QCoreApplication::translate("OBSBasicSettings", "1", nullptr));
        flvTrack2->setText(QCoreApplication::translate("OBSBasicSettings", "2", nullptr));
        flvTrack3->setText(QCoreApplication::translate("OBSBasicSettings", "3", nullptr));
        flvTrack4->setText(QCoreApplication::translate("OBSBasicSettings", "4", nullptr));
        flvTrack5->setText(QCoreApplication::translate("OBSBasicSettings", "5", nullptr));
        flvTrack6->setText(QCoreApplication::translate("OBSBasicSettings", "6", nullptr));
        advOutRecAEncLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder.Audio", nullptr));
        advOutRecEncLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Encoder.Video", nullptr));
        advOutRecUseRescale->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Rescale", nullptr));
        label_9001->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.CustomMuxerSettings", nullptr));
        advOutSplitFile->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.EnableSplitFile", nullptr));
        advOutSplitFileType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.TypeTime", nullptr));
        advOutSplitFileType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.TypeSize", nullptr));
        advOutSplitFileType->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.TypeManual", nullptr));

        advOutSplitFileTimeLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.Time", nullptr));
        advOutSplitFileTime->setSuffix(QCoreApplication::translate("OBSBasicSettings", " min", nullptr));
        advOutSplitFileSizeLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.SplitFile.Size", nullptr));
        advOutSplitFileSize->setSuffix(QCoreApplication::translate("OBSBasicSettings", " MB", nullptr));
        advOutRecEncoderProps->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Encoder", nullptr));
        advOutRecFFmpeg->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Settings", nullptr));
        label_48->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Type", nullptr));
        advOutFFType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Type.RecordToFile", nullptr));
        advOutFFType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Type.URL", nullptr));

        label_36->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.SavePathURL", nullptr));
        advOutFFPathBrowse->setText(QCoreApplication::translate("OBSBasicSettings", "Browse", nullptr));
        advOutFFNoSpace->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.NoSpaceFileName", nullptr));
        label_16->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.Format", nullptr));
        label_44->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.FormatDesc", nullptr));
        advOutFFFormatDesc->setText(QString());
        label_1337->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.MuxerSettings", nullptr));
        label_40->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.VideoBitrate", nullptr));
        label_63->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.GOPSize", nullptr));
        advOutFFUseRescale->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Rescale", nullptr));
        advOutFFIgnoreCompat->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.IgnoreCodecCompat", nullptr));
        label_37->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.VEncoder", nullptr));
        label_38->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.VEncoderSettings", nullptr));
        label_41->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        label_47->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.AudioTrack", nullptr));
        label_39->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.AEncoder", nullptr));
        label_46->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.FFmpeg.AEncoderSettings", nullptr));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputRecordTab), QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track1", nullptr));
        advOutTrack1Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack1Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack1Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack1Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack1Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack1Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack1Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack1Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack1Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack1Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack1Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_55->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        label_25->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track2", nullptr));
        label_49->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack2Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack2Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack2Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack2Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack2Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack2Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack2Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack2Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack2Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack2Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack2Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_50->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track3", nullptr));
        label_51->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack3Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack3Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack3Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack3Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack3Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack3Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack3Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack3Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack3Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack3Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack3Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_52->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track4", nullptr));
        label_53->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack4Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack4Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack4Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack4Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack4Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack4Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack4Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack4Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack4Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack4Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack4Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_54->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track5", nullptr));
        label_59->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack5Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack5Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack5Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack5Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack5Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack5Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack5Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack5Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack5Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack5Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack5Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_60->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Audio.Track6", nullptr));
        label_61->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.AudioBitrate", nullptr));
        advOutTrack6Bitrate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "32", nullptr));
        advOutTrack6Bitrate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48", nullptr));
        advOutTrack6Bitrate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "64", nullptr));
        advOutTrack6Bitrate->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "80", nullptr));
        advOutTrack6Bitrate->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "96", nullptr));
        advOutTrack6Bitrate->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "112", nullptr));
        advOutTrack6Bitrate->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "128", nullptr));
        advOutTrack6Bitrate->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "160", nullptr));
        advOutTrack6Bitrate->setItemText(8, QCoreApplication::translate("OBSBasicSettings", "192", nullptr));
        advOutTrack6Bitrate->setItemText(9, QCoreApplication::translate("OBSBasicSettings", "256", nullptr));
        advOutTrack6Bitrate->setItemText(10, QCoreApplication::translate("OBSBasicSettings", "320", nullptr));

        label_62->setText(QCoreApplication::translate("OBSBasicSettings", "Name", nullptr));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputAudioTracksTab), QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio", nullptr));
        advReplayBufCustomFFmpeg->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.UnavailableCustomFFmpeg", nullptr));
        advReplayBufCustomFFmpeg->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "warning", nullptr)));
        advReplayBuf->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.UseReplayBuffer", nullptr));
        advRBSecMaxLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.SecondsMax", nullptr));
        advRBMegsMax->setSuffix(QCoreApplication::translate("OBSBasicSettings", " MB", nullptr));
        advRBMegsMaxLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.MegabytesMax", nullptr));
        advOutTabs->setTabText(advOutTabs->indexOf(advOutputReplayTab), QCoreApplication::translate("OBSBasicSettings", "ReplayBuffer", nullptr));
        audioGeneralGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General", nullptr));
        label_14->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.SampleRate", nullptr));
        sampleRate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "44.1 kHz", nullptr));
        sampleRate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "48 kHz", nullptr));

        label_15->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.Channels", nullptr));
        channelSetup->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Mono", nullptr));
        channelSetup->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Stereo", nullptr));
        channelSetup->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "2.1", nullptr));
        channelSetup->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "4.0", nullptr));
        channelSetup->setItemText(4, QCoreApplication::translate("OBSBasicSettings", "4.1", nullptr));
        channelSetup->setItemText(5, QCoreApplication::translate("OBSBasicSettings", "5.1", nullptr));
        channelSetup->setItemText(6, QCoreApplication::translate("OBSBasicSettings", "7.1", nullptr));

        channelSetup->setCurrentText(QCoreApplication::translate("OBSBasicSettings", "Mono", nullptr));
        audioDevicesGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.Devices", nullptr));
        label_2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.DesktopDevice", nullptr));
        label_3->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.DesktopDevice2", nullptr));
        label_4->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice", nullptr));
        label_5->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice2", nullptr));
        label_6->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice3", nullptr));
        label_67->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.AuxDevice4", nullptr));
        audioMetersGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.Meters", nullptr));
        label_65->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate", nullptr));
        meterDecayRate->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate.Fast", nullptr));
        meterDecayRate->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate.Medium", nullptr));
        meterDecayRate->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate.Slow", nullptr));

        meterDecayRate->setCurrentText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.MeterDecayRate.Fast", nullptr));
        label_66->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.PeakMeterType", nullptr));
        peakMeterType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.PeakMeterType.SamplePeak", nullptr));
        peakMeterType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.PeakMeterType.TruePeak", nullptr));

        audioAdvGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced", nullptr));
        monitoringDeviceLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Audio.MonitoringDevice", nullptr));
        disableAudioDucking->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Audio.DisableAudioDucking", nullptr));
        lowLatencyBuffering->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Audio.LowLatencyBufferingMode", nullptr));
        audioHotkeysGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys", nullptr));
        audioMsg->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "error", nullptr)));
        label_8->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.BaseResolution", nullptr));
        baseAspect->setText(QCoreApplication::translate("OBSBasicSettings", "AspectRatio", nullptr));
        outputResLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.ScaledResolution", nullptr));
        label_11->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.DownscaleFilter", nullptr));
        fpsType->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSCommon", nullptr));
        fpsType->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSInteger", nullptr));
        fpsType->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSFraction", nullptr));

        fpsType->setCurrentText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.FPSCommon", nullptr));
        fpsCommon->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "24 NTSC", nullptr));
        fpsCommon->setItemText(3, QCoreApplication::translate("OBSBasicSettings", "25 PAL", nullptr));
        fpsCommon->setItemText(7, QCoreApplication::translate("OBSBasicSettings", "50 PAL", nullptr));

        label_12->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Numerator", nullptr));
        label_13->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Denominator", nullptr));
        videoMsg->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "error", nullptr)));
        scaledAspect->setText(QCoreApplication::translate("OBSBasicSettings", "AspectRatio", nullptr));
        hotkeySearchLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys.Filter", nullptr));
        hotkeyFilterLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys.FilterByHotkey", nullptr));
#if QT_CONFIG(tooltip)
        hotkeyFilterReset->setToolTip(QCoreApplication::translate("OBSBasicSettings", "Clear", nullptr));
#endif // QT_CONFIG(tooltip)
        hotkeyFilterReset->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "revertIcon", nullptr)));
        pleaseWaitLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys.PleaseWait", nullptr));
        colorsGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides", nullptr));
        colorPresetLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.Preset", nullptr));
        colorPreset->setItemText(0, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.Preset.Default", nullptr));
        colorPreset->setItemText(1, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.Preset.ColorBlind1", nullptr));
        colorPreset->setItemText(2, QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.Preset.Custom", nullptr));

        colorSelectLabel_1->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.SelectRed", nullptr));
        choose1->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.SelectGreen", nullptr));
        choose2->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_3->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.SelectBlue", nullptr));
        choose3->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_4->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerGreen", nullptr));
        choose4->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_5->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerYellow", nullptr));
        choose5->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_6->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerRed", nullptr));
        choose6->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_7->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerGreenActive", nullptr));
        choose7->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_8->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerYellowActive", nullptr));
        choose8->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        colorSelectLabel_9->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Accessibility.ColorOverrides.MixerRedActive", nullptr));
        choose9->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.PropertiesWindow.SelectColor", nullptr));
        advancedGeneralGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.General", nullptr));
        processPriorityLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.General.ProcessPriority", nullptr));
        confirmOnExit->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.General.ConfirmOnExit", nullptr));
        advancedVideoContainer->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video", nullptr));
        rendererLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Renderer", nullptr));
        adapterLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Video.Adapter", nullptr));
        label_30->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.ColorFormat", nullptr));
        label_33->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.ColorSpace", nullptr));
        label_34->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.ColorRange", nullptr));
        label_sdrWhiteLevel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.SdrWhiteLevel", nullptr));
        label_hdrNominalPeakLevel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Video.HdrNominalPeakLevel", nullptr));
        disableOSXVSync->setText(QCoreApplication::translate("OBSBasicSettings", "DisableOSXVSync", nullptr));
        resetOSXVSync->setText(QCoreApplication::translate("OBSBasicSettings", "ResetOSXVSyncOnExit", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording", nullptr));
        label_7->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.Filename", nullptr));
        overwriteIfExists->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Adv.Recording.OverwriteIfExists", nullptr));
        label_58->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.Suffix", nullptr));
        label_57->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.ReplayBuffer.Prefix", nullptr));
        autoRemux->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.AutoRemux", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.StreamDelay", nullptr));
        label_56->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.StreamDelay.Duration", nullptr));
        streamDelayPreserve->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.StreamDelay.Preserve", nullptr));
        streamDelayEnable->setText(QCoreApplication::translate("OBSBasicSettings", "Enable", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.Reconnect", nullptr));
        reconnectEnable->setText(QCoreApplication::translate("OBSBasicSettings", "Enable", nullptr));
        reconnectRetryDelay->setSuffix(QCoreApplication::translate("OBSBasicSettings", " s", nullptr));
        label_22->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.MaxRetries", nullptr));
        label_17->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.RetryDelay", nullptr));
        advNetworkGroupBox->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network", nullptr));
        advNetworkDisabled->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.Disabled", nullptr));
        ipFamilyLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.IPFamily", nullptr));
        bindToIPLabel->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.BindToIP", nullptr));
        enableNewSocketLoop->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.EnableNewSocketLoop", nullptr));
        enableLowLatencyMode->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Network.EnableLowLatencyMode", nullptr));
#if QT_CONFIG(tooltip)
        dynBitrate->setToolTip(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.DynamicBitrate.TT", nullptr));
#endif // QT_CONFIG(tooltip)
        dynBitrate->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Output.DynamicBitrate.Beta", nullptr));
        sourcesGroup->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Main.Sources", nullptr));
        browserHWAccel->setText(QCoreApplication::translate("OBSBasicSettings", "BrowserSource.EnableHardwareAcceleration", nullptr));
        groupBox_17->setTitle(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Hotkeys", nullptr));
        label_21->setText(QCoreApplication::translate("OBSBasicSettings", "Basic.Settings.Advanced.Hotkeys.HotkeyFocusBehavior", nullptr));
        advancedMsg->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "error", nullptr)));
        advancedMsg2->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasicSettings", "error", nullptr)));
    } // retranslateUi

};

namespace Ui {
    class OBSBasicSettings: public Ui_OBSBasicSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASICSETTINGS_H
