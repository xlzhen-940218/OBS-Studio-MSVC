/********************************************************************************
** Form generated from reading UI file 'OBSBasic.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBSBASIC_H
#define UI_OBSBASIC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "horizontal-scroll-area.hpp"
#include "record-button.hpp"
#include "scene-tree.hpp"
#include "source-tree.hpp"
#include "vertical-scroll-area.hpp"
#include "window-basic-preview.hpp"
#include "window-basic-status-bar.hpp"
#include "window-dock.hpp"

QT_BEGIN_NAMESPACE

class Ui_OBSBasic
{
public:
    QAction *actionAddScene;
    QAction *actionAddSource;
    QAction *actionRemoveScene;
    QAction *actionRemoveSource;
    QAction *actionSourceProperties;
    QAction *actionSceneUp;
    QAction *actionSourceUp;
    QAction *actionSceneDown;
    QAction *actionSourceDown;
    QAction *actionShow_Recordings;
    QAction *actionRemux;
    QAction *action_Settings;
    QAction *actionE_xit;
    QAction *actionShowLogs;
    QAction *actionUploadLastLog;
    QAction *actionUploadCurrentLog;
    QAction *actionViewCurrentLog;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionEditTransform;
    QAction *actionCopyTransform;
    QAction *actionPasteTransform;
    QAction *actionRotate90CW;
    QAction *actionRotate90CCW;
    QAction *actionRotate180;
    QAction *actionFitToScreen;
    QAction *actionStretchToScreen;
    QAction *actionResetTransform;
    QAction *actionCenterToScreen;
    QAction *actionVerticalCenter;
    QAction *actionHorizontalCenter;
    QAction *actionFlipHorizontal;
    QAction *actionFlipVertical;
    QAction *actionMoveUp;
    QAction *actionMoveDown;
    QAction *actionMoveToTop;
    QAction *actionMoveToBottom;
    QAction *actionCheckForUpdates;
    QAction *actionShowMacPermissions;
    QAction *actionRepair;
    QAction *actionRestartSafe;
    QAction *actionReleaseNotes;
    QAction *actionInteract;
    QAction *actionAdvAudioProperties;
    QAction *actionWebsite;
    QAction *actionNewSceneCollection;
    QAction *actionDupSceneCollection;
    QAction *actionRenameSceneCollection;
    QAction *actionRemoveSceneCollection;
    QAction *actionImportSceneCollection;
    QAction *actionExportSceneCollection;
    QAction *actionShowMissingFiles;
    QAction *actionNewProfile;
    QAction *actionDupProfile;
    QAction *actionRenameProfile;
    QAction *actionRemoveProfile;
    QAction *actionImportProfile;
    QAction *actionExportProfile;
    QAction *actionShowSettingsFolder;
    QAction *actionShowProfileFolder;
    QAction *actionAlwaysOnTop;
    QAction *toggleListboxToolbars;
    QAction *toggleStatusBar;
    QAction *actionLockPreview;
    QAction *actionScaleWindow;
    QAction *actionScaleCanvas;
    QAction *actionScaleOutput;
    QAction *actionPasteDup;
    QAction *autoConfigure2;
    QAction *autoConfigure;
    QAction *stats;
    QAction *multiviewProjectorWindowed;
    QAction *resetDocks;
    QAction *lockDocks;
    QAction *sideDocks;
    QAction *actionHelpPortal;
    QAction *actionShowCrashLogs;
    QAction *actionUploadLastCrashLog;
    QAction *actionDiscord;
    QAction *actionShowWhatsNew;
    QAction *actionShowAbout;
    QAction *toggleSourceIcons;
    QAction *toggleContextToolbars;
    QAction *toggleContextBar;
    QAction *actionMainUndo;
    QAction *actionMainRedo;
    QAction *actionMixerToolbarAdvAudio;
    QAction *actionMixerToolbarMenu;
    QAction *actionSceneFilters;
    QAction *actionSceneGridMode;
    QAction *actionSceneListMode;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *previewLayout;
    QFrame *previewDisabledWidget;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *enablePreviewButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *previewTextLayout;
    QLabel *previewLabel;
    OBSBasicPreview *preview;
    QFrame *contextContainer;
    QHBoxLayout *horizontalLayout9;
    QFrame *contextSubContainer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *contextSourceIcon;
    QLabel *contextSourceLabel;
    QLabel *contextSourceIconSpacer;
    QFrame *line_3;
    QPushButton *sourcePropertiesButton;
    QPushButton *sourceFiltersButton;
    QPushButton *sourceInteractButton;
    QFrame *line;
    QFrame *emptySpace;
    QHBoxLayout *horizontalLayout_6;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuBasic_MainMenu_Help;
    QMenu *menuLogFiles;
    QMenu *menuCrashLogs;
    QMenu *menuBasic_MainMenu_Edit;
    QAction *actionCopySource;
    QAction *actionPasteRef;
    QAction *actionCopyFilters;
    QAction *actionPasteFilters;
    QMenu *transformMenu;
    QMenu *orderMenu;
    QMenu *scalingMenu;
    QMenu *profileMenu;
    QMenu *sceneCollectionMenu;
    QMenu *viewMenu;
    QAction *resetUI;
    QAction *actionFullscreenInterface;
    QMenu *sceneListModeMenu;
    QMenu *multiviewProjectorMenu;
    QMenu *menuTools;
    QMenu *menuDocks;
    OBSBasicStatusBar *statusbar;
    OBSDock *scenesDock;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_6;
    QFrame *scenesFrame;
    QVBoxLayout *verticalLayout_12;
    SceneTree *scenes;
    QToolBar *scenesToolbar;
    QSpacerItem *scenesFixedSizeHSpacer;
    OBSDock *sourcesDock;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_5;
    QFrame *sourcesFrame;
    QVBoxLayout *verticalLayout_17;
    SourceTree *sources;
    QToolBar *sourcesToolbar;
    QSpacerItem *sourcesFixedSizeHSpacer;
    OBSDock *mixerDock;
    QWidget *dockWidgetContents_7;
    QVBoxLayout *verticalLayout_4;
    QFrame *mixerFrame;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedMixerArea;
    VScrollArea *hMixerScrollArea;
    QWidget *hVolumeWidgets;
    QVBoxLayout *hVolControlLayout;
    HScrollArea *vMixerScrollArea;
    QWidget *vVolumeWidgets;
    QHBoxLayout *vVolControlLayout;
    QToolBar *mixerToolbar;
    OBSDock *transitionsDock;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_3;
    QFrame *transitionsFrame;
    QVBoxLayout *verticalLayout_8;
    QComboBox *transitions;
    QHBoxLayout *horizontalLayout_3;
    QLabel *transitionDurationLabel;
    QSpinBox *transitionDuration;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *transitionAdd;
    QPushButton *transitionRemove;
    QPushButton *transitionProps;
    QSpacerItem *verticalSpacer;
    OBSDock *controlsDock;
    QWidget *controlsDockContents;
    QVBoxLayout *verticalLayout_9;
    QFrame *controlsFrame;
    QVBoxLayout *buttonsVLayout;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *streamButton;
    QPushButton *broadcastButton;
    QHBoxLayout *recordingLayout;
    RecordButton *recordButton;
    QPushButton *modeSwitch;
    QPushButton *settingsButton;
    QPushButton *exitButton;
    QSpacerItem *expVSpacer;

    void setupUi(QMainWindow *OBSBasic)
    {
        if (OBSBasic->objectName().isEmpty())
            OBSBasic->setObjectName("OBSBasic");
        OBSBasic->resize(1086, 729);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OBSBasic->sizePolicy().hasHeightForWidth());
        OBSBasic->setSizePolicy(sizePolicy);
        OBSBasic->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/images/obs.png"), QSize(), QIcon::Normal, QIcon::Off);
        OBSBasic->setWindowIcon(icon);
        OBSBasic->setStyleSheet(QString::fromUtf8(""));
        OBSBasic->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionAddScene = new QAction(OBSBasic);
        actionAddScene->setObjectName("actionAddScene");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/images/plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddScene->setIcon(icon1);
        actionAddScene->setProperty("themeID", QVariant(QString::fromUtf8("addIconSmall")));
        actionAddSource = new QAction(OBSBasic);
        actionAddSource->setObjectName("actionAddSource");
        actionAddSource->setIcon(icon1);
        actionAddSource->setProperty("themeID", QVariant(QString::fromUtf8("addIconSmall")));
        actionRemoveScene = new QAction(OBSBasic);
        actionRemoveScene->setObjectName("actionRemoveScene");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/images/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemoveScene->setIcon(icon2);
        actionRemoveScene->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        actionRemoveScene->setIconVisibleInMenu(false);
        actionRemoveScene->setProperty("themeID", QVariant(QString::fromUtf8("removeIconSmall")));
        actionRemoveSource = new QAction(OBSBasic);
        actionRemoveSource->setObjectName("actionRemoveSource");
        actionRemoveSource->setIcon(icon2);
        actionRemoveSource->setShortcutContext(Qt::WidgetWithChildrenShortcut);
        actionRemoveSource->setIconVisibleInMenu(false);
        actionRemoveSource->setProperty("themeID", QVariant(QString::fromUtf8("removeIconSmall")));
        actionSourceProperties = new QAction(OBSBasic);
        actionSourceProperties->setObjectName("actionSourceProperties");
        actionSourceProperties->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/settings/images/settings/general.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSourceProperties->setIcon(icon3);
        actionSourceProperties->setProperty("themeID", QVariant(QString::fromUtf8("propertiesIconSmall")));
        actionSceneUp = new QAction(OBSBasic);
        actionSceneUp->setObjectName("actionSceneUp");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/images/up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneUp->setIcon(icon4);
        actionSceneUp->setProperty("themeID", QVariant(QString::fromUtf8("upArrowIconSmall")));
        actionSourceUp = new QAction(OBSBasic);
        actionSourceUp->setObjectName("actionSourceUp");
        actionSourceUp->setEnabled(true);
        actionSourceUp->setIcon(icon4);
        actionSourceUp->setProperty("themeID", QVariant(QString::fromUtf8("upArrowIconSmall")));
        actionSceneDown = new QAction(OBSBasic);
        actionSceneDown->setObjectName("actionSceneDown");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/res/images/down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneDown->setIcon(icon5);
        actionSceneDown->setProperty("themeID", QVariant(QString::fromUtf8("downArrowIconSmall")));
        actionSourceDown = new QAction(OBSBasic);
        actionSourceDown->setObjectName("actionSourceDown");
        actionSourceDown->setEnabled(true);
        actionSourceDown->setIcon(icon5);
        actionSourceDown->setProperty("themeID", QVariant(QString::fromUtf8("downArrowIconSmall")));
        actionShow_Recordings = new QAction(OBSBasic);
        actionShow_Recordings->setObjectName("actionShow_Recordings");
        actionRemux = new QAction(OBSBasic);
        actionRemux->setObjectName("actionRemux");
        action_Settings = new QAction(OBSBasic);
        action_Settings->setObjectName("action_Settings");
        actionE_xit = new QAction(OBSBasic);
        actionE_xit->setObjectName("actionE_xit");
        actionShowLogs = new QAction(OBSBasic);
        actionShowLogs->setObjectName("actionShowLogs");
        actionUploadLastLog = new QAction(OBSBasic);
        actionUploadLastLog->setObjectName("actionUploadLastLog");
        actionUploadCurrentLog = new QAction(OBSBasic);
        actionUploadCurrentLog->setObjectName("actionUploadCurrentLog");
        actionViewCurrentLog = new QAction(OBSBasic);
        actionViewCurrentLog->setObjectName("actionViewCurrentLog");
        actionUndo = new QAction(OBSBasic);
        actionUndo->setObjectName("actionUndo");
        actionUndo->setEnabled(false);
        actionRedo = new QAction(OBSBasic);
        actionRedo->setObjectName("actionRedo");
        actionRedo->setEnabled(false);
        actionEditTransform = new QAction(OBSBasic);
        actionEditTransform->setObjectName("actionEditTransform");
        actionCopyTransform = new QAction(OBSBasic);
        actionCopyTransform->setObjectName("actionCopyTransform");
        actionPasteTransform = new QAction(OBSBasic);
        actionPasteTransform->setObjectName("actionPasteTransform");
        actionPasteTransform->setEnabled(false);
        actionRotate90CW = new QAction(OBSBasic);
        actionRotate90CW->setObjectName("actionRotate90CW");
        actionRotate90CCW = new QAction(OBSBasic);
        actionRotate90CCW->setObjectName("actionRotate90CCW");
        actionRotate180 = new QAction(OBSBasic);
        actionRotate180->setObjectName("actionRotate180");
        actionFitToScreen = new QAction(OBSBasic);
        actionFitToScreen->setObjectName("actionFitToScreen");
        actionStretchToScreen = new QAction(OBSBasic);
        actionStretchToScreen->setObjectName("actionStretchToScreen");
        actionResetTransform = new QAction(OBSBasic);
        actionResetTransform->setObjectName("actionResetTransform");
        actionCenterToScreen = new QAction(OBSBasic);
        actionCenterToScreen->setObjectName("actionCenterToScreen");
        actionVerticalCenter = new QAction(OBSBasic);
        actionVerticalCenter->setObjectName("actionVerticalCenter");
        actionHorizontalCenter = new QAction(OBSBasic);
        actionHorizontalCenter->setObjectName("actionHorizontalCenter");
        actionFlipHorizontal = new QAction(OBSBasic);
        actionFlipHorizontal->setObjectName("actionFlipHorizontal");
        actionFlipVertical = new QAction(OBSBasic);
        actionFlipVertical->setObjectName("actionFlipVertical");
        actionMoveUp = new QAction(OBSBasic);
        actionMoveUp->setObjectName("actionMoveUp");
        actionMoveDown = new QAction(OBSBasic);
        actionMoveDown->setObjectName("actionMoveDown");
        actionMoveToTop = new QAction(OBSBasic);
        actionMoveToTop->setObjectName("actionMoveToTop");
        actionMoveToBottom = new QAction(OBSBasic);
        actionMoveToBottom->setObjectName("actionMoveToBottom");
        actionCheckForUpdates = new QAction(OBSBasic);
        actionCheckForUpdates->setObjectName("actionCheckForUpdates");
        actionShowMacPermissions = new QAction(OBSBasic);
        actionShowMacPermissions->setObjectName("actionShowMacPermissions");
        actionRepair = new QAction(OBSBasic);
        actionRepair->setObjectName("actionRepair");
        actionRestartSafe = new QAction(OBSBasic);
        actionRestartSafe->setObjectName("actionRestartSafe");
        actionReleaseNotes = new QAction(OBSBasic);
        actionReleaseNotes->setObjectName("actionReleaseNotes");
        actionReleaseNotes->setVisible(false);
        actionInteract = new QAction(OBSBasic);
        actionInteract->setObjectName("actionInteract");
        actionAdvAudioProperties = new QAction(OBSBasic);
        actionAdvAudioProperties->setObjectName("actionAdvAudioProperties");
        actionWebsite = new QAction(OBSBasic);
        actionWebsite->setObjectName("actionWebsite");
        actionNewSceneCollection = new QAction(OBSBasic);
        actionNewSceneCollection->setObjectName("actionNewSceneCollection");
        actionDupSceneCollection = new QAction(OBSBasic);
        actionDupSceneCollection->setObjectName("actionDupSceneCollection");
        actionRenameSceneCollection = new QAction(OBSBasic);
        actionRenameSceneCollection->setObjectName("actionRenameSceneCollection");
        actionRemoveSceneCollection = new QAction(OBSBasic);
        actionRemoveSceneCollection->setObjectName("actionRemoveSceneCollection");
        actionImportSceneCollection = new QAction(OBSBasic);
        actionImportSceneCollection->setObjectName("actionImportSceneCollection");
        actionExportSceneCollection = new QAction(OBSBasic);
        actionExportSceneCollection->setObjectName("actionExportSceneCollection");
        actionShowMissingFiles = new QAction(OBSBasic);
        actionShowMissingFiles->setObjectName("actionShowMissingFiles");
        actionNewProfile = new QAction(OBSBasic);
        actionNewProfile->setObjectName("actionNewProfile");
        actionDupProfile = new QAction(OBSBasic);
        actionDupProfile->setObjectName("actionDupProfile");
        actionRenameProfile = new QAction(OBSBasic);
        actionRenameProfile->setObjectName("actionRenameProfile");
        actionRemoveProfile = new QAction(OBSBasic);
        actionRemoveProfile->setObjectName("actionRemoveProfile");
        actionImportProfile = new QAction(OBSBasic);
        actionImportProfile->setObjectName("actionImportProfile");
        actionExportProfile = new QAction(OBSBasic);
        actionExportProfile->setObjectName("actionExportProfile");
        actionShowSettingsFolder = new QAction(OBSBasic);
        actionShowSettingsFolder->setObjectName("actionShowSettingsFolder");
        actionShowProfileFolder = new QAction(OBSBasic);
        actionShowProfileFolder->setObjectName("actionShowProfileFolder");
        actionAlwaysOnTop = new QAction(OBSBasic);
        actionAlwaysOnTop->setObjectName("actionAlwaysOnTop");
        actionAlwaysOnTop->setCheckable(true);
        toggleListboxToolbars = new QAction(OBSBasic);
        toggleListboxToolbars->setObjectName("toggleListboxToolbars");
        toggleListboxToolbars->setCheckable(true);
        toggleListboxToolbars->setChecked(true);
        toggleStatusBar = new QAction(OBSBasic);
        toggleStatusBar->setObjectName("toggleStatusBar");
        toggleStatusBar->setCheckable(true);
        toggleStatusBar->setChecked(true);
        actionLockPreview = new QAction(OBSBasic);
        actionLockPreview->setObjectName("actionLockPreview");
        actionLockPreview->setCheckable(true);
        actionScaleWindow = new QAction(OBSBasic);
        actionScaleWindow->setObjectName("actionScaleWindow");
        actionScaleWindow->setCheckable(true);
        actionScaleCanvas = new QAction(OBSBasic);
        actionScaleCanvas->setObjectName("actionScaleCanvas");
        actionScaleCanvas->setCheckable(true);
        actionScaleOutput = new QAction(OBSBasic);
        actionScaleOutput->setObjectName("actionScaleOutput");
        actionScaleOutput->setCheckable(true);
        actionPasteDup = new QAction(OBSBasic);
        actionPasteDup->setObjectName("actionPasteDup");
        autoConfigure2 = new QAction(OBSBasic);
        autoConfigure2->setObjectName("autoConfigure2");
        autoConfigure = new QAction(OBSBasic);
        autoConfigure->setObjectName("autoConfigure");
        stats = new QAction(OBSBasic);
        stats->setObjectName("stats");
        multiviewProjectorWindowed = new QAction(OBSBasic);
        multiviewProjectorWindowed->setObjectName("multiviewProjectorWindowed");
        resetDocks = new QAction(OBSBasic);
        resetDocks->setObjectName("resetDocks");
        lockDocks = new QAction(OBSBasic);
        lockDocks->setObjectName("lockDocks");
        lockDocks->setCheckable(true);
        lockDocks->setChecked(true);
        sideDocks = new QAction(OBSBasic);
        sideDocks->setObjectName("sideDocks");
        sideDocks->setCheckable(true);
        sideDocks->setChecked(false);
        actionHelpPortal = new QAction(OBSBasic);
        actionHelpPortal->setObjectName("actionHelpPortal");
        actionShowCrashLogs = new QAction(OBSBasic);
        actionShowCrashLogs->setObjectName("actionShowCrashLogs");
        actionUploadLastCrashLog = new QAction(OBSBasic);
        actionUploadLastCrashLog->setObjectName("actionUploadLastCrashLog");
        actionDiscord = new QAction(OBSBasic);
        actionDiscord->setObjectName("actionDiscord");
        actionShowWhatsNew = new QAction(OBSBasic);
        actionShowWhatsNew->setObjectName("actionShowWhatsNew");
        actionShowAbout = new QAction(OBSBasic);
        actionShowAbout->setObjectName("actionShowAbout");
        toggleSourceIcons = new QAction(OBSBasic);
        toggleSourceIcons->setObjectName("toggleSourceIcons");
        toggleSourceIcons->setCheckable(true);
        toggleSourceIcons->setChecked(true);
        toggleContextToolbars = new QAction(OBSBasic);
        toggleContextToolbars->setObjectName("toggleContextToolbars");
        toggleContextToolbars->setCheckable(true);
        toggleContextBar = new QAction(OBSBasic);
        toggleContextBar->setObjectName("toggleContextBar");
        toggleContextBar->setCheckable(true);
        toggleContextBar->setChecked(true);
        actionMainUndo = new QAction(OBSBasic);
        actionMainUndo->setObjectName("actionMainUndo");
        actionMainUndo->setEnabled(false);
        actionMainRedo = new QAction(OBSBasic);
        actionMainRedo->setObjectName("actionMainRedo");
        actionMainRedo->setEnabled(false);
        actionMixerToolbarAdvAudio = new QAction(OBSBasic);
        actionMixerToolbarAdvAudio->setObjectName("actionMixerToolbarAdvAudio");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/settings/images/settings/advanced.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMixerToolbarAdvAudio->setIcon(icon6);
        actionMixerToolbarMenu = new QAction(OBSBasic);
        actionMixerToolbarMenu->setObjectName("actionMixerToolbarMenu");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/res/images/dots-vert.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionMixerToolbarMenu->setIcon(icon7);
        actionSceneFilters = new QAction(OBSBasic);
        actionSceneFilters->setObjectName("actionSceneFilters");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/res/images/filter.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSceneFilters->setIcon(icon8);
        actionSceneGridMode = new QAction(OBSBasic);
        actionSceneGridMode->setObjectName("actionSceneGridMode");
        actionSceneGridMode->setCheckable(true);
        actionSceneListMode = new QAction(OBSBasic);
        actionSceneListMode->setObjectName("actionSceneListMode");
        actionSceneListMode->setCheckable(true);
        centralwidget = new QWidget(OBSBasic);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(4, 0, 4, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        previewLayout = new QHBoxLayout();
        previewLayout->setSpacing(2);
        previewLayout->setObjectName("previewLayout");
        previewDisabledWidget = new QFrame(centralwidget);
        previewDisabledWidget->setObjectName("previewDisabledWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(previewDisabledWidget->sizePolicy().hasHeightForWidth());
        previewDisabledWidget->setSizePolicy(sizePolicy1);
        verticalLayout_7 = new QVBoxLayout(previewDisabledWidget);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        label = new QLabel(previewDisabledWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        enablePreviewButton = new QPushButton(previewDisabledWidget);
        enablePreviewButton->setObjectName("enablePreviewButton");

        horizontalLayout->addWidget(enablePreviewButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_7->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        previewLayout->addWidget(previewDisabledWidget);

        previewTextLayout = new QVBoxLayout();
        previewTextLayout->setSpacing(0);
        previewTextLayout->setObjectName("previewTextLayout");
        previewLabel = new QLabel(centralwidget);
        previewLabel->setObjectName("previewLabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(previewLabel->sizePolicy().hasHeightForWidth());
        previewLabel->setSizePolicy(sizePolicy3);
        previewLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        previewTextLayout->addWidget(previewLabel);

        preview = new OBSBasicPreview(centralwidget);
        preview->setObjectName("preview");
        sizePolicy1.setHeightForWidth(preview->sizePolicy().hasHeightForWidth());
        preview->setSizePolicy(sizePolicy1);
        preview->setMinimumSize(QSize(32, 32));
        preview->setFocusPolicy(Qt::ClickFocus);
        preview->setContextMenuPolicy(Qt::CustomContextMenu);

        previewTextLayout->addWidget(preview);


        previewLayout->addLayout(previewTextLayout);


        horizontalLayout_2->addLayout(previewLayout);


        verticalLayout->addLayout(horizontalLayout_2);

        contextContainer = new QFrame(centralwidget);
        contextContainer->setObjectName("contextContainer");
        sizePolicy2.setHeightForWidth(contextContainer->sizePolicy().hasHeightForWidth());
        contextContainer->setSizePolicy(sizePolicy2);
        contextContainer->setMinimumSize(QSize(0, 0));
        horizontalLayout9 = new QHBoxLayout(contextContainer);
        horizontalLayout9->setSpacing(6);
        horizontalLayout9->setObjectName("horizontalLayout9");
        horizontalLayout9->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout9->setContentsMargins(6, 4, 6, 4);
        contextSubContainer = new QFrame(contextContainer);
        contextSubContainer->setObjectName("contextSubContainer");
        sizePolicy2.setHeightForWidth(contextSubContainer->sizePolicy().hasHeightForWidth());
        contextSubContainer->setSizePolicy(sizePolicy2);
        contextSubContainer->setMinimumSize(QSize(0, 0));
        horizontalLayout_5 = new QHBoxLayout(contextSubContainer);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        contextSourceIcon = new QLabel(contextSubContainer);
        contextSourceIcon->setObjectName("contextSourceIcon");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(contextSourceIcon->sizePolicy().hasHeightForWidth());
        contextSourceIcon->setSizePolicy(sizePolicy4);
        contextSourceIcon->setMinimumSize(QSize(22, 22));
        contextSourceIcon->setMaximumSize(QSize(22, 22));

        horizontalLayout_5->addWidget(contextSourceIcon);

        contextSourceLabel = new QLabel(contextSubContainer);
        contextSourceLabel->setObjectName("contextSourceLabel");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(contextSourceLabel->sizePolicy().hasHeightForWidth());
        contextSourceLabel->setSizePolicy(sizePolicy5);
        contextSourceLabel->setMinimumSize(QSize(160, 22));
        contextSourceLabel->setMaximumSize(QSize(160, 22));

        horizontalLayout_5->addWidget(contextSourceLabel);

        contextSourceIconSpacer = new QLabel(contextSubContainer);
        contextSourceIconSpacer->setObjectName("contextSourceIconSpacer");
        sizePolicy4.setHeightForWidth(contextSourceIconSpacer->sizePolicy().hasHeightForWidth());
        contextSourceIconSpacer->setSizePolicy(sizePolicy4);
        contextSourceIconSpacer->setMinimumSize(QSize(22, 22));
        contextSourceIconSpacer->setMaximumSize(QSize(22, 22));

        horizontalLayout_5->addWidget(contextSourceIconSpacer);

        line_3 = new QFrame(contextSubContainer);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line_3);

        sourcePropertiesButton = new QPushButton(contextSubContainer);
        sourcePropertiesButton->setObjectName("sourcePropertiesButton");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(sourcePropertiesButton->sizePolicy().hasHeightForWidth());
        sourcePropertiesButton->setSizePolicy(sizePolicy6);
        sourcePropertiesButton->setMinimumSize(QSize(0, 22));
        sourcePropertiesButton->setIcon(icon3);
        sourcePropertiesButton->setFlat(false);
        sourcePropertiesButton->setProperty("themeID2", QVariant(QString::fromUtf8("contextBarButton")));

        horizontalLayout_5->addWidget(sourcePropertiesButton);

        sourceFiltersButton = new QPushButton(contextSubContainer);
        sourceFiltersButton->setObjectName("sourceFiltersButton");
        sourceFiltersButton->setMinimumSize(QSize(0, 22));
        sourceFiltersButton->setIcon(icon8);
        sourceFiltersButton->setFlat(false);
        sourceFiltersButton->setProperty("themeID2", QVariant(QString::fromUtf8("contextBarButton")));

        horizontalLayout_5->addWidget(sourceFiltersButton);

        sourceInteractButton = new QPushButton(contextSubContainer);
        sourceInteractButton->setObjectName("sourceInteractButton");
        sourceInteractButton->setMinimumSize(QSize(0, 22));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/res/images/interact.svg"), QSize(), QIcon::Normal, QIcon::Off);
        sourceInteractButton->setIcon(icon9);
        sourceInteractButton->setFlat(false);
        sourceInteractButton->setProperty("themeID2", QVariant(QString::fromUtf8("contextBarButton")));

        horizontalLayout_5->addWidget(sourceInteractButton);

        line = new QFrame(contextSubContainer);
        line->setObjectName("line");
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_5->addWidget(line);


        horizontalLayout9->addWidget(contextSubContainer);

        emptySpace = new QFrame(contextContainer);
        emptySpace->setObjectName("emptySpace");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(emptySpace->sizePolicy().hasHeightForWidth());
        emptySpace->setSizePolicy(sizePolicy7);
        emptySpace->setMinimumSize(QSize(0, 22));
        horizontalLayout_6 = new QHBoxLayout(emptySpace);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);

        horizontalLayout9->addWidget(emptySpace);


        verticalLayout->addWidget(contextContainer);

        OBSBasic->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OBSBasic);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1086, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName("menu_File");
        menuBasic_MainMenu_Help = new QMenu(menubar);
        menuBasic_MainMenu_Help->setObjectName("menuBasic_MainMenu_Help");
        menuLogFiles = new QMenu(menuBasic_MainMenu_Help);
        menuLogFiles->setObjectName("menuLogFiles");
        menuCrashLogs = new QMenu(menuBasic_MainMenu_Help);
        menuCrashLogs->setObjectName("menuCrashLogs");
        menuBasic_MainMenu_Edit = new QMenu(menubar);
        menuBasic_MainMenu_Edit->setObjectName("menuBasic_MainMenu_Edit");
        actionCopySource = new QAction(menuBasic_MainMenu_Edit);
        actionCopySource->setObjectName("actionCopySource");
        actionPasteRef = new QAction(menuBasic_MainMenu_Edit);
        actionPasteRef->setObjectName("actionPasteRef");
        actionPasteRef->setEnabled(false);
        actionCopyFilters = new QAction(menuBasic_MainMenu_Edit);
        actionCopyFilters->setObjectName("actionCopyFilters");
        actionPasteFilters = new QAction(menuBasic_MainMenu_Edit);
        actionPasteFilters->setObjectName("actionPasteFilters");
        actionPasteFilters->setEnabled(false);
        transformMenu = new QMenu(menuBasic_MainMenu_Edit);
        transformMenu->setObjectName("transformMenu");
        orderMenu = new QMenu(menuBasic_MainMenu_Edit);
        orderMenu->setObjectName("orderMenu");
        scalingMenu = new QMenu(menuBasic_MainMenu_Edit);
        scalingMenu->setObjectName("scalingMenu");
        profileMenu = new QMenu(menubar);
        profileMenu->setObjectName("profileMenu");
        sceneCollectionMenu = new QMenu(menubar);
        sceneCollectionMenu->setObjectName("sceneCollectionMenu");
        viewMenu = new QMenu(menubar);
        viewMenu->setObjectName("viewMenu");
        resetUI = new QAction(viewMenu);
        resetUI->setObjectName("resetUI");
        actionFullscreenInterface = new QAction(viewMenu);
        actionFullscreenInterface->setObjectName("actionFullscreenInterface");
        sceneListModeMenu = new QMenu(viewMenu);
        sceneListModeMenu->setObjectName("sceneListModeMenu");
        multiviewProjectorMenu = new QMenu(viewMenu);
        multiviewProjectorMenu->setObjectName("multiviewProjectorMenu");
        menuTools = new QMenu(menubar);
        menuTools->setObjectName("menuTools");
        menuDocks = new QMenu(menubar);
        menuDocks->setObjectName("menuDocks");
        OBSBasic->setMenuBar(menubar);
        statusbar = new OBSBasicStatusBar(OBSBasic);
        statusbar->setObjectName("statusbar");
        OBSBasic->setStatusBar(statusbar);
        scenesDock = new OBSDock(OBSBasic);
        scenesDock->setObjectName("scenesDock");
        scenesDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName("dockWidgetContents_2");
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(1, 0, 1, 1);
        scenesFrame = new QFrame(dockWidgetContents_2);
        scenesFrame->setObjectName("scenesFrame");
        verticalLayout_12 = new QVBoxLayout(scenesFrame);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        scenes = new SceneTree(scenesFrame);
        scenes->setObjectName("scenes");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(scenes->sizePolicy().hasHeightForWidth());
        scenes->setSizePolicy(sizePolicy8);
        scenes->setContextMenuPolicy(Qt::CustomContextMenu);
        scenes->setFrameShape(QFrame::NoFrame);
        scenes->setFrameShadow(QFrame::Plain);
        scenes->setProperty("showDropIndicator", QVariant(true));
        scenes->setDragEnabled(true);
        scenes->setDragDropMode(QAbstractItemView::InternalMove);
        scenes->setDefaultDropAction(Qt::TargetMoveAction);
        scenes->setSpacing(0);

        verticalLayout_12->addWidget(scenes);

        scenesToolbar = new QToolBar(scenesFrame);
        scenesToolbar->setObjectName("scenesToolbar");
        scenesToolbar->setIconSize(QSize(16, 16));
        scenesToolbar->setFloatable(false);

        verticalLayout_12->addWidget(scenesToolbar);

        scenesFixedSizeHSpacer = new QSpacerItem(150, 0, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        verticalLayout_12->addItem(scenesFixedSizeHSpacer);


        verticalLayout_6->addWidget(scenesFrame);

        scenesDock->setWidget(dockWidgetContents_2);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, scenesDock);
        sourcesDock = new OBSDock(OBSBasic);
        sourcesDock->setObjectName("sourcesDock");
        sourcesDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName("dockWidgetContents_6");
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents_6);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(1, 0, 1, 1);
        sourcesFrame = new QFrame(dockWidgetContents_6);
        sourcesFrame->setObjectName("sourcesFrame");
        verticalLayout_17 = new QVBoxLayout(sourcesFrame);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        sources = new SourceTree(sourcesFrame);
        sources->setObjectName("sources");
        sizePolicy8.setHeightForWidth(sources->sizePolicy().hasHeightForWidth());
        sources->setSizePolicy(sizePolicy8);
        sources->setContextMenuPolicy(Qt::CustomContextMenu);
        sources->setFrameShape(QFrame::NoFrame);
        sources->setProperty("showDropIndicator", QVariant(true));
        sources->setDragEnabled(true);
        sources->setDragDropMode(QAbstractItemView::InternalMove);
        sources->setDefaultDropAction(Qt::TargetMoveAction);
        sources->setSelectionMode(QAbstractItemView::ExtendedSelection);
        sources->setSpacing(0);

        verticalLayout_17->addWidget(sources);

        sourcesToolbar = new QToolBar(sourcesFrame);
        sourcesToolbar->setObjectName("sourcesToolbar");
        sourcesToolbar->setIconSize(QSize(16, 16));
        sourcesToolbar->setFloatable(false);

        verticalLayout_17->addWidget(sourcesToolbar);

        sourcesFixedSizeHSpacer = new QSpacerItem(150, 0, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        verticalLayout_17->addItem(sourcesFixedSizeHSpacer);


        verticalLayout_5->addWidget(sourcesFrame);

        sourcesDock->setWidget(dockWidgetContents_6);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, sourcesDock);
        mixerDock = new OBSDock(OBSBasic);
        mixerDock->setObjectName("mixerDock");
        mixerDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName("dockWidgetContents_7");
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_7);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(1, 0, 1, 1);
        mixerFrame = new QFrame(dockWidgetContents_7);
        mixerFrame->setObjectName("mixerFrame");
        verticalLayout_2 = new QVBoxLayout(mixerFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedMixerArea = new QStackedWidget(mixerFrame);
        stackedMixerArea->setObjectName("stackedMixerArea");
        hMixerScrollArea = new VScrollArea();
        hMixerScrollArea->setObjectName("hMixerScrollArea");
        hMixerScrollArea->setContextMenuPolicy(Qt::CustomContextMenu);
        hMixerScrollArea->setFrameShape(QFrame::NoFrame);
        hMixerScrollArea->setFrameShadow(QFrame::Plain);
        hMixerScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        hMixerScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hMixerScrollArea->setWidgetResizable(true);
        hVolumeWidgets = new QWidget();
        hVolumeWidgets->setObjectName("hVolumeWidgets");
        hVolumeWidgets->setGeometry(QRect(0, 0, 225, 16));
        QSizePolicy sizePolicy9(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(hVolumeWidgets->sizePolicy().hasHeightForWidth());
        hVolumeWidgets->setSizePolicy(sizePolicy9);
        hVolControlLayout = new QVBoxLayout(hVolumeWidgets);
        hVolControlLayout->setSpacing(0);
        hVolControlLayout->setObjectName("hVolControlLayout");
        hVolControlLayout->setContentsMargins(0, 0, 0, 0);
        hMixerScrollArea->setWidget(hVolumeWidgets);
        stackedMixerArea->addWidget(hMixerScrollArea);
        vMixerScrollArea = new HScrollArea();
        vMixerScrollArea->setObjectName("vMixerScrollArea");
        vMixerScrollArea->setContextMenuPolicy(Qt::CustomContextMenu);
        vMixerScrollArea->setFrameShape(QFrame::NoFrame);
        vMixerScrollArea->setFrameShadow(QFrame::Plain);
        vMixerScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        vMixerScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        vMixerScrollArea->setWidgetResizable(true);
        vVolumeWidgets = new QWidget();
        vVolumeWidgets->setObjectName("vVolumeWidgets");
        vVolumeWidgets->setGeometry(QRect(0, 0, 16, 192));
        QSizePolicy sizePolicy10(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(vVolumeWidgets->sizePolicy().hasHeightForWidth());
        vVolumeWidgets->setSizePolicy(sizePolicy10);
        vVolControlLayout = new QHBoxLayout(vVolumeWidgets);
        vVolControlLayout->setSpacing(0);
        vVolControlLayout->setObjectName("vVolControlLayout");
        vVolControlLayout->setContentsMargins(0, 0, 0, 0);
        vMixerScrollArea->setWidget(vVolumeWidgets);
        stackedMixerArea->addWidget(vMixerScrollArea);

        verticalLayout_2->addWidget(stackedMixerArea);

        mixerToolbar = new QToolBar(mixerFrame);
        mixerToolbar->setObjectName("mixerToolbar");
        mixerToolbar->setIconSize(QSize(16, 16));
        mixerToolbar->setFloatable(false);

        verticalLayout_2->addWidget(mixerToolbar);


        verticalLayout_4->addWidget(mixerFrame);

        mixerDock->setWidget(dockWidgetContents_7);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, mixerDock);
        transitionsDock = new OBSDock(OBSBasic);
        transitionsDock->setObjectName("transitionsDock");
        transitionsDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName("dockWidgetContents_5");
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(1, 0, 1, 1);
        transitionsFrame = new QFrame(dockWidgetContents_5);
        transitionsFrame->setObjectName("transitionsFrame");
        verticalLayout_8 = new QVBoxLayout(transitionsFrame);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        transitions = new QComboBox(transitionsFrame);
        transitions->setObjectName("transitions");
        transitions->setMinimumSize(QSize(120, 0));

        verticalLayout_8->addWidget(transitions);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        transitionDurationLabel = new QLabel(transitionsFrame);
        transitionDurationLabel->setObjectName("transitionDurationLabel");
        sizePolicy10.setHeightForWidth(transitionDurationLabel->sizePolicy().hasHeightForWidth());
        transitionDurationLabel->setSizePolicy(sizePolicy10);

        horizontalLayout_3->addWidget(transitionDurationLabel);

        transitionDuration = new QSpinBox(transitionsFrame);
        transitionDuration->setObjectName("transitionDuration");
        transitionDuration->setMinimum(50);
        transitionDuration->setMaximum(20000);
        transitionDuration->setSingleStep(50);
        transitionDuration->setValue(300);

        horizontalLayout_3->addWidget(transitionDuration);


        verticalLayout_8->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        transitionAdd = new QPushButton(transitionsFrame);
        transitionAdd->setObjectName("transitionAdd");
        QSizePolicy sizePolicy11(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(transitionAdd->sizePolicy().hasHeightForWidth());
        transitionAdd->setSizePolicy(sizePolicy11);
        transitionAdd->setText(QString::fromUtf8(""));
        transitionAdd->setIcon(icon1);
        transitionAdd->setFlat(false);
        transitionAdd->setProperty("themeID", QVariant(QString::fromUtf8("addIconSmall")));
        transitionAdd->setProperty("toolButton", QVariant(true));

        horizontalLayout_4->addWidget(transitionAdd);

        transitionRemove = new QPushButton(transitionsFrame);
        transitionRemove->setObjectName("transitionRemove");
        sizePolicy11.setHeightForWidth(transitionRemove->sizePolicy().hasHeightForWidth());
        transitionRemove->setSizePolicy(sizePolicy11);
        transitionRemove->setText(QString::fromUtf8(""));
        transitionRemove->setIcon(icon2);
        transitionRemove->setFlat(false);
        transitionRemove->setProperty("themeID", QVariant(QString::fromUtf8("removeIconSmall")));
        transitionRemove->setProperty("toolButton", QVariant(true));

        horizontalLayout_4->addWidget(transitionRemove);

        transitionProps = new QPushButton(transitionsFrame);
        transitionProps->setObjectName("transitionProps");
        sizePolicy11.setHeightForWidth(transitionProps->sizePolicy().hasHeightForWidth());
        transitionProps->setSizePolicy(sizePolicy11);
        transitionProps->setText(QString::fromUtf8(""));
        transitionProps->setIcon(icon3);
        transitionProps->setFlat(false);
        transitionProps->setProperty("themeID", QVariant(QString::fromUtf8("menuIconSmall")));
        transitionProps->setProperty("toolButton", QVariant(QString::fromUtf8("true")));

        horizontalLayout_4->addWidget(transitionProps);


        verticalLayout_8->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);


        verticalLayout_3->addWidget(transitionsFrame);

        transitionsDock->setWidget(dockWidgetContents_5);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, transitionsDock);
        controlsDock = new OBSDock(OBSBasic);
        controlsDock->setObjectName("controlsDock");
        controlsDock->setFeatures(QDockWidget::DockWidgetClosable|QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        controlsDockContents = new QWidget();
        controlsDockContents->setObjectName("controlsDockContents");
        verticalLayout_9 = new QVBoxLayout(controlsDockContents);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(1, 0, 1, 1);
        controlsFrame = new QFrame(controlsDockContents);
        controlsFrame->setObjectName("controlsFrame");
        buttonsVLayout = new QVBoxLayout(controlsFrame);
        buttonsVLayout->setSpacing(0);
        buttonsVLayout->setObjectName("buttonsVLayout");
        buttonsVLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        streamButton = new QPushButton(controlsFrame);
        streamButton->setObjectName("streamButton");
        streamButton->setEnabled(true);
        QSizePolicy sizePolicy12(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Fixed);
        sizePolicy12.setHorizontalStretch(0);
        sizePolicy12.setVerticalStretch(0);
        sizePolicy12.setHeightForWidth(streamButton->sizePolicy().hasHeightForWidth());
        streamButton->setSizePolicy(sizePolicy12);
        streamButton->setMinimumSize(QSize(150, 0));
        streamButton->setCheckable(true);

        horizontalLayout_7->addWidget(streamButton);

        broadcastButton = new QPushButton(controlsFrame);
        broadcastButton->setObjectName("broadcastButton");
        broadcastButton->setEnabled(true);
        sizePolicy12.setHeightForWidth(broadcastButton->sizePolicy().hasHeightForWidth());
        broadcastButton->setSizePolicy(sizePolicy12);
        broadcastButton->setMinimumSize(QSize(150, 0));
        broadcastButton->setCheckable(true);

        horizontalLayout_7->addWidget(broadcastButton);


        buttonsVLayout->addLayout(horizontalLayout_7);

        recordingLayout = new QHBoxLayout();
        recordingLayout->setSpacing(2);
        recordingLayout->setObjectName("recordingLayout");
        recordingLayout->setContentsMargins(0, 0, 0, 0);
        recordButton = new RecordButton(controlsFrame);
        recordButton->setObjectName("recordButton");
        recordButton->setEnabled(true);
        sizePolicy12.setHeightForWidth(recordButton->sizePolicy().hasHeightForWidth());
        recordButton->setSizePolicy(sizePolicy12);
        recordButton->setMinimumSize(QSize(0, 0));
        recordButton->setCheckable(true);

        recordingLayout->addWidget(recordButton);


        buttonsVLayout->addLayout(recordingLayout);

        modeSwitch = new QPushButton(controlsFrame);
        modeSwitch->setObjectName("modeSwitch");
        sizePolicy12.setHeightForWidth(modeSwitch->sizePolicy().hasHeightForWidth());
        modeSwitch->setSizePolicy(sizePolicy12);
        modeSwitch->setMinimumSize(QSize(150, 0));
        modeSwitch->setCheckable(true);

        buttonsVLayout->addWidget(modeSwitch);

        settingsButton = new QPushButton(controlsFrame);
        settingsButton->setObjectName("settingsButton");
        sizePolicy12.setHeightForWidth(settingsButton->sizePolicy().hasHeightForWidth());
        settingsButton->setSizePolicy(sizePolicy12);
        settingsButton->setMinimumSize(QSize(150, 0));

        buttonsVLayout->addWidget(settingsButton);

        exitButton = new QPushButton(controlsFrame);
        exitButton->setObjectName("exitButton");
        sizePolicy12.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy12);
        exitButton->setMinimumSize(QSize(150, 0));

        buttonsVLayout->addWidget(exitButton);

        expVSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        buttonsVLayout->addItem(expVSpacer);


        verticalLayout_9->addWidget(controlsFrame);

        controlsDock->setWidget(controlsDockContents);
        OBSBasic->addDockWidget(Qt::BottomDockWidgetArea, controlsDock);
#if QT_CONFIG(shortcut)
        transitionDurationLabel->setBuddy(transitionDuration);
#endif // QT_CONFIG(shortcut)

        preview->addAction(actionRemoveSource);
        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuBasic_MainMenu_Edit->menuAction());
        menubar->addAction(viewMenu->menuAction());
        menubar->addAction(menuDocks->menuAction());
        menubar->addAction(profileMenu->menuAction());
        menubar->addAction(sceneCollectionMenu->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuBasic_MainMenu_Help->menuAction());
        menu_File->addAction(actionShow_Recordings);
        menu_File->addAction(actionRemux);
        menu_File->addSeparator();
        menu_File->addAction(action_Settings);
        menu_File->addAction(actionShowSettingsFolder);
        menu_File->addAction(actionShowProfileFolder);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menuBasic_MainMenu_Help->addAction(actionHelpPortal);
        menuBasic_MainMenu_Help->addAction(actionWebsite);
        menuBasic_MainMenu_Help->addAction(actionDiscord);
        menuBasic_MainMenu_Help->addSeparator();
        menuBasic_MainMenu_Help->addAction(menuLogFiles->menuAction());
        menuBasic_MainMenu_Help->addAction(menuCrashLogs->menuAction());
        menuBasic_MainMenu_Help->addSeparator();
        menuBasic_MainMenu_Help->addAction(actionRepair);
        menuBasic_MainMenu_Help->addAction(actionCheckForUpdates);
        menuBasic_MainMenu_Help->addAction(actionRestartSafe);
        menuBasic_MainMenu_Help->addAction(actionShowMacPermissions);
        menuBasic_MainMenu_Help->addSeparator();
        menuBasic_MainMenu_Help->addAction(actionShowWhatsNew);
        menuBasic_MainMenu_Help->addAction(actionReleaseNotes);
        menuBasic_MainMenu_Help->addAction(actionShowAbout);
        menuBasic_MainMenu_Help->addSeparator();
        menuLogFiles->addAction(actionShowLogs);
        menuLogFiles->addAction(actionUploadCurrentLog);
        menuLogFiles->addAction(actionUploadLastLog);
        menuLogFiles->addAction(actionViewCurrentLog);
        menuCrashLogs->addAction(actionShowCrashLogs);
        menuCrashLogs->addAction(actionUploadLastCrashLog);
        menuBasic_MainMenu_Edit->addAction(actionMainUndo);
        menuBasic_MainMenu_Edit->addAction(actionMainRedo);
        menuBasic_MainMenu_Edit->addSeparator();
        menuBasic_MainMenu_Edit->addAction(actionCopySource);
        menuBasic_MainMenu_Edit->addAction(actionPasteRef);
        menuBasic_MainMenu_Edit->addAction(actionPasteDup);
        menuBasic_MainMenu_Edit->addSeparator();
        menuBasic_MainMenu_Edit->addAction(actionCopyFilters);
        menuBasic_MainMenu_Edit->addAction(actionPasteFilters);
        menuBasic_MainMenu_Edit->addSeparator();
        menuBasic_MainMenu_Edit->addAction(transformMenu->menuAction());
        menuBasic_MainMenu_Edit->addAction(orderMenu->menuAction());
        menuBasic_MainMenu_Edit->addAction(scalingMenu->menuAction());
        menuBasic_MainMenu_Edit->addAction(actionLockPreview);
        menuBasic_MainMenu_Edit->addSeparator();
        menuBasic_MainMenu_Edit->addAction(actionAdvAudioProperties);
        menuBasic_MainMenu_Edit->addSeparator();
        transformMenu->addAction(actionEditTransform);
        transformMenu->addAction(actionCopyTransform);
        transformMenu->addAction(actionPasteTransform);
        transformMenu->addAction(actionResetTransform);
        transformMenu->addSeparator();
        transformMenu->addAction(actionRotate90CW);
        transformMenu->addAction(actionRotate90CCW);
        transformMenu->addAction(actionRotate180);
        transformMenu->addSeparator();
        transformMenu->addAction(actionFlipHorizontal);
        transformMenu->addAction(actionFlipVertical);
        transformMenu->addSeparator();
        transformMenu->addAction(actionFitToScreen);
        transformMenu->addAction(actionStretchToScreen);
        transformMenu->addAction(actionCenterToScreen);
        transformMenu->addAction(actionVerticalCenter);
        transformMenu->addAction(actionHorizontalCenter);
        orderMenu->addAction(actionMoveUp);
        orderMenu->addAction(actionMoveDown);
        orderMenu->addSeparator();
        orderMenu->addAction(actionMoveToTop);
        orderMenu->addAction(actionMoveToBottom);
        scalingMenu->addAction(actionScaleWindow);
        scalingMenu->addAction(actionScaleCanvas);
        scalingMenu->addAction(actionScaleOutput);
        profileMenu->addAction(actionNewProfile);
        profileMenu->addAction(actionDupProfile);
        profileMenu->addAction(actionRenameProfile);
        profileMenu->addAction(actionRemoveProfile);
        profileMenu->addAction(actionImportProfile);
        profileMenu->addAction(actionExportProfile);
        profileMenu->addSeparator();
        sceneCollectionMenu->addAction(actionNewSceneCollection);
        sceneCollectionMenu->addAction(actionDupSceneCollection);
        sceneCollectionMenu->addAction(actionRenameSceneCollection);
        sceneCollectionMenu->addAction(actionRemoveSceneCollection);
        sceneCollectionMenu->addAction(actionImportSceneCollection);
        sceneCollectionMenu->addAction(actionExportSceneCollection);
        sceneCollectionMenu->addSeparator();
        sceneCollectionMenu->addAction(actionShowMissingFiles);
        sceneCollectionMenu->addSeparator();
        viewMenu->addAction(resetUI);
        viewMenu->addAction(actionFullscreenInterface);
        viewMenu->addSeparator();
        viewMenu->addAction(sceneListModeMenu->menuAction());
        viewMenu->addAction(toggleListboxToolbars);
        viewMenu->addAction(toggleContextBar);
        viewMenu->addAction(toggleSourceIcons);
        viewMenu->addAction(toggleStatusBar);
        viewMenu->addSeparator();
        viewMenu->addAction(stats);
        viewMenu->addSeparator();
        viewMenu->addAction(multiviewProjectorMenu->menuAction());
        viewMenu->addAction(multiviewProjectorWindowed);
        viewMenu->addSeparator();
        viewMenu->addAction(actionAlwaysOnTop);
        sceneListModeMenu->addAction(actionSceneListMode);
        sceneListModeMenu->addAction(actionSceneGridMode);
        menuTools->addAction(autoConfigure);
        menuTools->addSeparator();
        menuDocks->addAction(lockDocks);
        menuDocks->addAction(sideDocks);
        menuDocks->addAction(resetDocks);
        menuDocks->addSeparator();
        scenes->addAction(actionRemoveScene);
        scenesToolbar->addAction(actionAddScene);
        scenesToolbar->addAction(actionRemoveScene);
        scenesToolbar->addSeparator();
        scenesToolbar->addAction(actionSceneFilters);
        scenesToolbar->addSeparator();
        scenesToolbar->addAction(actionSceneUp);
        scenesToolbar->addAction(actionSceneDown);
        sources->addAction(actionRemoveSource);
        sourcesToolbar->addAction(actionAddSource);
        sourcesToolbar->addAction(actionRemoveSource);
        sourcesToolbar->addSeparator();
        sourcesToolbar->addAction(actionSourceProperties);
        sourcesToolbar->addSeparator();
        sourcesToolbar->addAction(actionSourceUp);
        sourcesToolbar->addAction(actionSourceDown);
        mixerToolbar->addAction(actionMixerToolbarAdvAudio);
        mixerToolbar->addSeparator();
        mixerToolbar->addAction(actionMixerToolbarMenu);

        retranslateUi(OBSBasic);
        QObject::connect(actionE_xit, &QAction::triggered, OBSBasic, qOverload<>(&QMainWindow::close));
        QObject::connect(exitButton, &QPushButton::clicked, OBSBasic, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(OBSBasic);
    } // setupUi

    void retranslateUi(QMainWindow *OBSBasic)
    {
        OBSBasic->setWindowTitle(QCoreApplication::translate("OBSBasic", ".MainWindow", nullptr));
        actionAddScene->setText(QCoreApplication::translate("OBSBasic", "Add", nullptr));
#if QT_CONFIG(tooltip)
        actionAddScene->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.Main.AddSceneDlg.Title", nullptr));
#endif // QT_CONFIG(tooltip)
        actionAddSource->setText(QCoreApplication::translate("OBSBasic", "Add", nullptr));
#if QT_CONFIG(tooltip)
        actionAddSource->setToolTip(QCoreApplication::translate("OBSBasic", "AddSource", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRemoveScene->setText(QCoreApplication::translate("OBSBasic", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveScene->setToolTip(QCoreApplication::translate("OBSBasic", "RemoveScene", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRemoveScene->setShortcut(QCoreApplication::translate("OBSBasic", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemoveSource->setText(QCoreApplication::translate("OBSBasic", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveSource->setToolTip(QCoreApplication::translate("OBSBasic", "RemoveSource", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRemoveSource->setShortcut(QCoreApplication::translate("OBSBasic", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSourceProperties->setText(QCoreApplication::translate("OBSBasic", "Properties", nullptr));
#if QT_CONFIG(tooltip)
        actionSourceProperties->setToolTip(QCoreApplication::translate("OBSBasic", "SourceProperties", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSceneUp->setText(QCoreApplication::translate("OBSBasic", "MoveUp", nullptr));
#if QT_CONFIG(tooltip)
        actionSceneUp->setToolTip(QCoreApplication::translate("OBSBasic", "MoveSceneUp", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSourceUp->setText(QCoreApplication::translate("OBSBasic", "MoveUp", nullptr));
#if QT_CONFIG(tooltip)
        actionSourceUp->setToolTip(QCoreApplication::translate("OBSBasic", "MoveSourceUp", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSceneDown->setText(QCoreApplication::translate("OBSBasic", "MoveDown", nullptr));
#if QT_CONFIG(tooltip)
        actionSceneDown->setToolTip(QCoreApplication::translate("OBSBasic", "MoveSceneDown", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSourceDown->setText(QCoreApplication::translate("OBSBasic", "MoveDown", nullptr));
#if QT_CONFIG(tooltip)
        actionSourceDown->setToolTip(QCoreApplication::translate("OBSBasic", "MoveSourceDown", nullptr));
#endif // QT_CONFIG(tooltip)
        actionShow_Recordings->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowRecordings", nullptr));
        actionRemux->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.Remux", nullptr));
        action_Settings->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.Settings", nullptr));
        actionE_xit->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.Exit", nullptr));
        actionShowLogs->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.ShowLogs", nullptr));
        actionUploadLastLog->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.UploadLastLog", nullptr));
        actionUploadCurrentLog->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.UploadCurrentLog", nullptr));
        actionViewCurrentLog->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs.ViewCurrentLog", nullptr));
        actionUndo->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Redo", nullptr));
        actionEditTransform->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.EditTransform", nullptr));
#if QT_CONFIG(shortcut)
        actionEditTransform->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopyTransform->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.CopyTransform", nullptr));
#if QT_CONFIG(shortcut)
        actionCopyTransform->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPasteTransform->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.PasteTransform", nullptr));
#if QT_CONFIG(shortcut)
        actionPasteTransform->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Shift+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRotate90CW->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.Rotate90CW", nullptr));
        actionRotate90CCW->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.Rotate90CCW", nullptr));
        actionRotate180->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.Rotate180", nullptr));
        actionFitToScreen->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.FitToScreen", nullptr));
#if QT_CONFIG(shortcut)
        actionFitToScreen->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStretchToScreen->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.StretchToScreen", nullptr));
#if QT_CONFIG(shortcut)
        actionStretchToScreen->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionResetTransform->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.ResetTransform", nullptr));
#if QT_CONFIG(shortcut)
        actionResetTransform->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCenterToScreen->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.CenterToScreen", nullptr));
#if QT_CONFIG(shortcut)
        actionCenterToScreen->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVerticalCenter->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.VerticalCenter", nullptr));
        actionHorizontalCenter->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.HorizontalCenter", nullptr));
        actionFlipHorizontal->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.FlipHorizontal", nullptr));
        actionFlipVertical->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform.FlipVertical", nullptr));
        actionMoveUp->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveUp", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveUp->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveDown->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveDown", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveDown->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveToTop->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveToTop", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveToTop->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+Home", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMoveToBottom->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order.MoveToBottom", nullptr));
#if QT_CONFIG(shortcut)
        actionMoveToBottom->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+End", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCheckForUpdates->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.CheckForUpdates", nullptr));
        actionShowMacPermissions->setText(QCoreApplication::translate("OBSBasic", "MacPermissions.MenuAction", nullptr));
        actionRepair->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Repair", nullptr));
        actionRestartSafe->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.RestartSafeMode", nullptr));
        actionReleaseNotes->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.ReleaseNotes", nullptr));
        actionInteract->setText(QCoreApplication::translate("OBSBasic", "Interact", nullptr));
        actionAdvAudioProperties->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.AdvAudio", nullptr));
        actionWebsite->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Website", nullptr));
        actionNewSceneCollection->setText(QCoreApplication::translate("OBSBasic", "New", nullptr));
        actionDupSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Duplicate", nullptr));
        actionRenameSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Rename", nullptr));
        actionRemoveSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Remove", nullptr));
        actionImportSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Import", nullptr));
        actionExportSceneCollection->setText(QCoreApplication::translate("OBSBasic", "Export", nullptr));
        actionShowMissingFiles->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowMissingFiles", nullptr));
        actionNewProfile->setText(QCoreApplication::translate("OBSBasic", "New", nullptr));
        actionDupProfile->setText(QCoreApplication::translate("OBSBasic", "Duplicate", nullptr));
        actionRenameProfile->setText(QCoreApplication::translate("OBSBasic", "Rename", nullptr));
        actionRemoveProfile->setText(QCoreApplication::translate("OBSBasic", "Remove", nullptr));
        actionImportProfile->setText(QCoreApplication::translate("OBSBasic", "Import", nullptr));
        actionExportProfile->setText(QCoreApplication::translate("OBSBasic", "Export", nullptr));
        actionShowSettingsFolder->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowSettingsFolder", nullptr));
        actionShowProfileFolder->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File.ShowProfileFolder", nullptr));
        actionAlwaysOnTop->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.AlwaysOnTop", nullptr));
        toggleListboxToolbars->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.ListboxToolbars", nullptr));
        toggleStatusBar->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.StatusBar", nullptr));
        actionLockPreview->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.LockPreview", nullptr));
        actionScaleWindow->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Scale.Window", nullptr));
        actionScaleCanvas->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Scale.Canvas", nullptr));
        actionScaleOutput->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Scale.Output", nullptr));
        actionPasteDup->setText(QCoreApplication::translate("OBSBasic", "PasteDuplicate", nullptr));
        autoConfigure2->setText(QCoreApplication::translate("OBSBasic", "Basic.AutoConfig", nullptr));
        autoConfigure->setText(QCoreApplication::translate("OBSBasic", "Basic.AutoConfig", nullptr));
        stats->setText(QCoreApplication::translate("OBSBasic", "Basic.Stats", nullptr));
        multiviewProjectorWindowed->setText(QCoreApplication::translate("OBSBasic", "MultiviewWindowed", nullptr));
        resetDocks->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Docks.ResetDocks", nullptr));
        lockDocks->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Docks.LockDocks", nullptr));
        sideDocks->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Docks.SideDocks", nullptr));
        actionHelpPortal->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.HelpPortal", nullptr));
        actionShowCrashLogs->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.CrashLogs.ShowLogs", nullptr));
        actionUploadLastCrashLog->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.CrashLogs.UploadLastLog", nullptr));
        actionDiscord->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Discord", nullptr));
        actionShowWhatsNew->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.WhatsNew", nullptr));
        actionShowAbout->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.About", nullptr));
        toggleSourceIcons->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.SourceIcons", nullptr));
        toggleContextToolbars->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.Toolbars.Context", nullptr));
        toggleContextBar->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.ContextBar", nullptr));
        actionMainUndo->setText(QCoreApplication::translate("OBSBasic", "Undo.Undo", nullptr));
        actionMainRedo->setText(QCoreApplication::translate("OBSBasic", "Undo.Redo", nullptr));
        actionMixerToolbarAdvAudio->setText(QCoreApplication::translate("OBSBasic", "AdvAudioProps", nullptr));
#if QT_CONFIG(tooltip)
        actionMixerToolbarAdvAudio->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.AdvAudio", nullptr));
#endif // QT_CONFIG(tooltip)
        actionMixerToolbarAdvAudio->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasic", "cogsIcon", nullptr)));
        actionMixerToolbarMenu->setText(QCoreApplication::translate("OBSBasic", "MixerToolbarMenu", nullptr));
        actionMixerToolbarMenu->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasic", "menuIconSmall", nullptr)));
        actionSceneFilters->setText(QCoreApplication::translate("OBSBasic", "SceneFilters", nullptr));
#if QT_CONFIG(tooltip)
        actionSceneFilters->setToolTip(QCoreApplication::translate("OBSBasic", "SceneFilters", nullptr));
#endif // QT_CONFIG(tooltip)
        actionSceneFilters->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasic", "filtersIcon", nullptr)));
        actionSceneGridMode->setText(QCoreApplication::translate("OBSBasic", "Grid", nullptr));
        actionSceneListMode->setText(QCoreApplication::translate("OBSBasic", "List", nullptr));
        label->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.PreviewDisabled", nullptr));
        enablePreviewButton->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.PreviewConextMenu.Enable", nullptr));
        previewLabel->setText(QCoreApplication::translate("OBSBasic", "StudioMode.PreviewSceneName", nullptr));
        previewLabel->setProperty("themeID", QVariant(QCoreApplication::translate("OBSBasic", "previewProgramLabels", nullptr)));
        contextSourceIcon->setText(QString());
        contextSourceLabel->setText(QCoreApplication::translate("OBSBasic", "TextLabel", nullptr));
        contextSourceIconSpacer->setText(QString());
#if QT_CONFIG(tooltip)
        sourcePropertiesButton->setToolTip(QCoreApplication::translate("OBSBasic", "SourceProperties", nullptr));
#endif // QT_CONFIG(tooltip)
        sourcePropertiesButton->setText(QCoreApplication::translate("OBSBasic", "Properties", nullptr));
#if QT_CONFIG(tooltip)
        sourceFiltersButton->setToolTip(QCoreApplication::translate("OBSBasic", "SourceFilters", nullptr));
#endif // QT_CONFIG(tooltip)
        sourceFiltersButton->setText(QCoreApplication::translate("OBSBasic", "Filters", nullptr));
#if QT_CONFIG(tooltip)
        sourceInteractButton->setToolTip(QCoreApplication::translate("OBSBasic", "Interact", nullptr));
#endif // QT_CONFIG(tooltip)
        sourceInteractButton->setText(QCoreApplication::translate("OBSBasic", "Interact", nullptr));
        menu_File->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.File", nullptr));
        menuBasic_MainMenu_Help->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help", nullptr));
        menuLogFiles->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.Logs", nullptr));
        menuCrashLogs->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Help.CrashLogs", nullptr));
        menuBasic_MainMenu_Edit->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit", nullptr));
        actionCopySource->setText(QCoreApplication::translate("OBSBasic", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actionCopySource->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPasteRef->setText(QCoreApplication::translate("OBSBasic", "PasteReference", nullptr));
        actionPasteRef->setIconText(QCoreApplication::translate("OBSBasic", "PasteReference", nullptr));
#if QT_CONFIG(tooltip)
        actionPasteRef->setToolTip(QCoreApplication::translate("OBSBasic", "PasteReference", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionPasteRef->setShortcut(QCoreApplication::translate("OBSBasic", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopyFilters->setText(QCoreApplication::translate("OBSBasic", "Copy.Filters", nullptr));
        actionPasteFilters->setText(QCoreApplication::translate("OBSBasic", "Paste.Filters", nullptr));
        transformMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Transform", nullptr));
        orderMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Order", nullptr));
        scalingMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Edit.Scale", nullptr));
        profileMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Profile", nullptr));
        sceneCollectionMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.SceneCollection", nullptr));
        viewMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View", nullptr));
        resetUI->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.ResetUI", nullptr));
        actionFullscreenInterface->setText(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.Fullscreen.Interface", nullptr));
#if QT_CONFIG(shortcut)
        actionFullscreenInterface->setShortcut(QCoreApplication::translate("OBSBasic", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        sceneListModeMenu->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.View.SceneListMode", nullptr));
        multiviewProjectorMenu->setTitle(QCoreApplication::translate("OBSBasic", "MultiviewProjector", nullptr));
        menuTools->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Tools", nullptr));
        menuDocks->setTitle(QCoreApplication::translate("OBSBasic", "Basic.MainMenu.Docks", nullptr));
        scenesDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Basic.Main.Scenes", nullptr));
        sourcesDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Basic.Main.Sources", nullptr));
        mixerDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Mixer", nullptr));
        transitionsDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Basic.SceneTransitions", nullptr));
#if QT_CONFIG(accessibility)
        transitions->setAccessibleName(QCoreApplication::translate("OBSBasic", "Transition", nullptr));
#endif // QT_CONFIG(accessibility)
        transitionDurationLabel->setText(QCoreApplication::translate("OBSBasic", "Basic.TransitionDuration", nullptr));
#if QT_CONFIG(accessibility)
        transitionDuration->setAccessibleName(QCoreApplication::translate("OBSBasic", "Basic.TransitionDuration", nullptr));
#endif // QT_CONFIG(accessibility)
        transitionDuration->setSuffix(QCoreApplication::translate("OBSBasic", " ms", nullptr));
#if QT_CONFIG(tooltip)
        transitionAdd->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.AddTransition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        transitionAdd->setAccessibleName(QCoreApplication::translate("OBSBasic", "Basic.AddTransition", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        transitionRemove->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.RemoveTransition", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        transitionRemove->setAccessibleName(QCoreApplication::translate("OBSBasic", "Basic.RemoveTransition", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(tooltip)
        transitionProps->setToolTip(QCoreApplication::translate("OBSBasic", "Basic.TransitionProperties", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        transitionProps->setAccessibleName(QCoreApplication::translate("OBSBasic", "Basic.TransitionProperties", nullptr));
#endif // QT_CONFIG(accessibility)
        controlsDock->setWindowTitle(QCoreApplication::translate("OBSBasic", "Basic.Main.Controls", nullptr));
        streamButton->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.StartStreaming", nullptr));
        broadcastButton->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.StartBroadcast", nullptr));
        recordButton->setText(QCoreApplication::translate("OBSBasic", "Basic.Main.StartRecording", nullptr));
        modeSwitch->setText(QCoreApplication::translate("OBSBasic", "Basic.TogglePreviewProgramMode", nullptr));
        settingsButton->setText(QCoreApplication::translate("OBSBasic", "Settings", nullptr));
        exitButton->setText(QCoreApplication::translate("OBSBasic", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OBSBasic: public Ui_OBSBasic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBSBASIC_H
