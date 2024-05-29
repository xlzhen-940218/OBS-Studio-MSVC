/****************************************************************************
** Meta object code from reading C++ file 'window-basic-settings.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "window-basic-settings.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-settings.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSSilentUpdateCheckBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSilentUpdateCheckBoxENDCLASS = QtMocHelpers::stringData(
    "SilentUpdateCheckBox",
    "setCheckedSilently",
    "",
    "checked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSilentUpdateCheckBoxENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[21];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSilentUpdateCheckBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSilentUpdateCheckBoxENDCLASS_t qt_meta_stringdata_CLASSSilentUpdateCheckBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "SilentUpdateCheckBox"
        QT_MOC_LITERAL(21, 18),  // "setCheckedSilently"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 7)   // "checked"
    },
    "SilentUpdateCheckBox",
    "setCheckedSilently",
    "",
    "checked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSilentUpdateCheckBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject SilentUpdateCheckBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QCheckBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSSilentUpdateCheckBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSilentUpdateCheckBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSilentUpdateCheckBoxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SilentUpdateCheckBox, std::true_type>,
        // method 'setCheckedSilently'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void SilentUpdateCheckBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SilentUpdateCheckBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setCheckedSilently((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SilentUpdateCheckBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateCheckBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSilentUpdateCheckBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QCheckBox::qt_metacast(_clname);
}

int SilentUpdateCheckBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSSilentUpdateSpinBoxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSSilentUpdateSpinBoxENDCLASS = QtMocHelpers::stringData(
    "SilentUpdateSpinBox",
    "setValueSilently",
    "",
    "val"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSSilentUpdateSpinBoxENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[20];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSSilentUpdateSpinBoxENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSSilentUpdateSpinBoxENDCLASS_t qt_meta_stringdata_CLASSSilentUpdateSpinBoxENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "SilentUpdateSpinBox"
        QT_MOC_LITERAL(20, 16),  // "setValueSilently"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 3)   // "val"
    },
    "SilentUpdateSpinBox",
    "setValueSilently",
    "",
    "val"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSSilentUpdateSpinBoxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject SilentUpdateSpinBox::staticMetaObject = { {
    QMetaObject::SuperData::link<QSpinBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSSilentUpdateSpinBoxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSSilentUpdateSpinBoxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSSilentUpdateSpinBoxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SilentUpdateSpinBox, std::true_type>,
        // method 'setValueSilently'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void SilentUpdateSpinBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SilentUpdateSpinBox *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setValueSilently((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *SilentUpdateSpinBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SilentUpdateSpinBox::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSSilentUpdateSpinBoxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QSpinBox::qt_metacast(_clname);
}

int SilentUpdateSpinBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOBSBasicSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOBSBasicSettingsENDCLASS = QtMocHelpers::stringData(
    "OBSBasicSettings",
    "RecreateOutputResolutionWidget",
    "",
    "UpdateResFPSLimits",
    "DisplayEnforceWarning",
    "checked",
    "on_show_clicked",
    "on_authPwShow_clicked",
    "on_connectAccount_clicked",
    "on_disconnectAccount_clicked",
    "on_useStreamKey_clicked",
    "on_useAuth_toggled",
    "on_hotkeyFilterReset_clicked",
    "on_hotkeyFilterSearch_textChanged",
    "text",
    "on_hotkeyFilterInput_KeyChanged",
    "obs_key_combination_t",
    "combo",
    "on_theme_activated",
    "idx",
    "on_themeVariant_activated",
    "on_listWidget_itemSelectionChanged",
    "on_buttonBox_clicked",
    "QAbstractButton*",
    "button",
    "on_service_currentIndexChanged",
    "on_customServer_textChanged",
    "on_simpleOutputBrowse_clicked",
    "on_advOutRecPathBrowse_clicked",
    "on_advOutFFPathBrowse_clicked",
    "on_advOutEncoder_currentIndexChanged",
    "on_advOutRecEncoder_currentIndexChanged",
    "on_advOutFFIgnoreCompat_stateChanged",
    "state",
    "on_advOutFFFormat_currentIndexChanged",
    "on_advOutFFAEncoder_currentIndexChanged",
    "on_advOutFFVEncoder_currentIndexChanged",
    "on_advOutFFType_currentIndexChanged",
    "on_colorFormat_currentIndexChanged",
    "on_colorSpace_currentIndexChanged",
    "on_filenameFormatting_textEdited",
    "on_outputResolution_editTextChanged",
    "on_baseResolution_editTextChanged",
    "on_disableOSXVSync_clicked",
    "on_choose1_clicked",
    "on_choose2_clicked",
    "on_choose3_clicked",
    "on_choose4_clicked",
    "on_choose5_clicked",
    "on_choose6_clicked",
    "on_choose7_clicked",
    "on_choose8_clicked",
    "on_choose9_clicked",
    "on_colorPreset_currentIndexChanged",
    "GeneralChanged",
    "HideOBSWindowWarning",
    "AudioChanged",
    "AudioChangedRestart",
    "ReloadAudioSources",
    "SurroundWarning",
    "SpeakerLayoutChanged",
    "LowLatencyBufferingChanged",
    "UpdateAudioWarnings",
    "OutputsChanged",
    "Stream1Changed",
    "VideoChanged",
    "VideoChangedResolution",
    "HotkeysChanged",
    "ScanDuplicateHotkeys",
    "QFormLayout*",
    "layout",
    "ReloadHotkeys",
    "obs_hotkey_id",
    "ignoreKey",
    "A11yChanged",
    "AppearanceChanged",
    "AdvancedChanged",
    "AdvancedChangedRestart",
    "UpdateStreamDelayEstimate",
    "UpdateAutomaticReplayBufferCheckboxes",
    "AdvOutSplitFileChanged",
    "AdvOutRecCheckWarnings",
    "AdvOutRecCheckCodecs",
    "SimpleRecordingQualityChanged",
    "SimpleRecordingEncoderChanged",
    "SimpleRecordingQualityLosslessWarning",
    "SimpleReplayBufferChanged",
    "AdvReplayBufferChanged",
    "SimpleStreamingEncoderChanged",
    "SpawnTempService",
    "OBSService",
    "SetGeneralIcon",
    "icon",
    "SetAppearanceIcon",
    "SetStreamIcon",
    "SetOutputIcon",
    "SetAudioIcon",
    "SetVideoIcon",
    "SetHotkeysIcon",
    "SetAccessibilityIcon",
    "SetAdvancedIcon",
    "UseStreamKeyAdvClicked",
    "SimpleStreamAudioEncoderChanged",
    "AdvAudioEncodersChanged",
    "generalIcon",
    "appearanceIcon",
    "streamIcon",
    "outputIcon",
    "audioIcon",
    "videoIcon",
    "hotkeysIcon",
    "accessibilityIcon",
    "advancedIcon"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOBSBasicSettingsENDCLASS_t {
    uint offsetsAndSizes[226];
    char stringdata0[17];
    char stringdata1[31];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[22];
    char stringdata5[8];
    char stringdata6[16];
    char stringdata7[22];
    char stringdata8[26];
    char stringdata9[29];
    char stringdata10[24];
    char stringdata11[19];
    char stringdata12[29];
    char stringdata13[34];
    char stringdata14[5];
    char stringdata15[32];
    char stringdata16[22];
    char stringdata17[6];
    char stringdata18[19];
    char stringdata19[4];
    char stringdata20[26];
    char stringdata21[35];
    char stringdata22[21];
    char stringdata23[17];
    char stringdata24[7];
    char stringdata25[31];
    char stringdata26[28];
    char stringdata27[30];
    char stringdata28[31];
    char stringdata29[30];
    char stringdata30[37];
    char stringdata31[40];
    char stringdata32[37];
    char stringdata33[6];
    char stringdata34[38];
    char stringdata35[40];
    char stringdata36[40];
    char stringdata37[36];
    char stringdata38[35];
    char stringdata39[34];
    char stringdata40[33];
    char stringdata41[36];
    char stringdata42[34];
    char stringdata43[27];
    char stringdata44[19];
    char stringdata45[19];
    char stringdata46[19];
    char stringdata47[19];
    char stringdata48[19];
    char stringdata49[19];
    char stringdata50[19];
    char stringdata51[19];
    char stringdata52[19];
    char stringdata53[35];
    char stringdata54[15];
    char stringdata55[21];
    char stringdata56[13];
    char stringdata57[20];
    char stringdata58[19];
    char stringdata59[16];
    char stringdata60[21];
    char stringdata61[27];
    char stringdata62[20];
    char stringdata63[15];
    char stringdata64[15];
    char stringdata65[13];
    char stringdata66[23];
    char stringdata67[15];
    char stringdata68[21];
    char stringdata69[13];
    char stringdata70[7];
    char stringdata71[14];
    char stringdata72[14];
    char stringdata73[10];
    char stringdata74[12];
    char stringdata75[18];
    char stringdata76[16];
    char stringdata77[23];
    char stringdata78[26];
    char stringdata79[38];
    char stringdata80[23];
    char stringdata81[23];
    char stringdata82[21];
    char stringdata83[30];
    char stringdata84[30];
    char stringdata85[38];
    char stringdata86[26];
    char stringdata87[23];
    char stringdata88[30];
    char stringdata89[17];
    char stringdata90[11];
    char stringdata91[15];
    char stringdata92[5];
    char stringdata93[18];
    char stringdata94[14];
    char stringdata95[14];
    char stringdata96[13];
    char stringdata97[13];
    char stringdata98[15];
    char stringdata99[21];
    char stringdata100[16];
    char stringdata101[23];
    char stringdata102[32];
    char stringdata103[24];
    char stringdata104[12];
    char stringdata105[15];
    char stringdata106[11];
    char stringdata107[11];
    char stringdata108[10];
    char stringdata109[10];
    char stringdata110[12];
    char stringdata111[18];
    char stringdata112[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOBSBasicSettingsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOBSBasicSettingsENDCLASS_t qt_meta_stringdata_CLASSOBSBasicSettingsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "OBSBasicSettings"
        QT_MOC_LITERAL(17, 30),  // "RecreateOutputResolutionWidget"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 18),  // "UpdateResFPSLimits"
        QT_MOC_LITERAL(68, 21),  // "DisplayEnforceWarning"
        QT_MOC_LITERAL(90, 7),  // "checked"
        QT_MOC_LITERAL(98, 15),  // "on_show_clicked"
        QT_MOC_LITERAL(114, 21),  // "on_authPwShow_clicked"
        QT_MOC_LITERAL(136, 25),  // "on_connectAccount_clicked"
        QT_MOC_LITERAL(162, 28),  // "on_disconnectAccount_clicked"
        QT_MOC_LITERAL(191, 23),  // "on_useStreamKey_clicked"
        QT_MOC_LITERAL(215, 18),  // "on_useAuth_toggled"
        QT_MOC_LITERAL(234, 28),  // "on_hotkeyFilterReset_clicked"
        QT_MOC_LITERAL(263, 33),  // "on_hotkeyFilterSearch_textCha..."
        QT_MOC_LITERAL(297, 4),  // "text"
        QT_MOC_LITERAL(302, 31),  // "on_hotkeyFilterInput_KeyChanged"
        QT_MOC_LITERAL(334, 21),  // "obs_key_combination_t"
        QT_MOC_LITERAL(356, 5),  // "combo"
        QT_MOC_LITERAL(362, 18),  // "on_theme_activated"
        QT_MOC_LITERAL(381, 3),  // "idx"
        QT_MOC_LITERAL(385, 25),  // "on_themeVariant_activated"
        QT_MOC_LITERAL(411, 34),  // "on_listWidget_itemSelectionCh..."
        QT_MOC_LITERAL(446, 20),  // "on_buttonBox_clicked"
        QT_MOC_LITERAL(467, 16),  // "QAbstractButton*"
        QT_MOC_LITERAL(484, 6),  // "button"
        QT_MOC_LITERAL(491, 30),  // "on_service_currentIndexChanged"
        QT_MOC_LITERAL(522, 27),  // "on_customServer_textChanged"
        QT_MOC_LITERAL(550, 29),  // "on_simpleOutputBrowse_clicked"
        QT_MOC_LITERAL(580, 30),  // "on_advOutRecPathBrowse_clicked"
        QT_MOC_LITERAL(611, 29),  // "on_advOutFFPathBrowse_clicked"
        QT_MOC_LITERAL(641, 36),  // "on_advOutEncoder_currentIndex..."
        QT_MOC_LITERAL(678, 39),  // "on_advOutRecEncoder_currentIn..."
        QT_MOC_LITERAL(718, 36),  // "on_advOutFFIgnoreCompat_state..."
        QT_MOC_LITERAL(755, 5),  // "state"
        QT_MOC_LITERAL(761, 37),  // "on_advOutFFFormat_currentInde..."
        QT_MOC_LITERAL(799, 39),  // "on_advOutFFAEncoder_currentIn..."
        QT_MOC_LITERAL(839, 39),  // "on_advOutFFVEncoder_currentIn..."
        QT_MOC_LITERAL(879, 35),  // "on_advOutFFType_currentIndexC..."
        QT_MOC_LITERAL(915, 34),  // "on_colorFormat_currentIndexCh..."
        QT_MOC_LITERAL(950, 33),  // "on_colorSpace_currentIndexCha..."
        QT_MOC_LITERAL(984, 32),  // "on_filenameFormatting_textEdited"
        QT_MOC_LITERAL(1017, 35),  // "on_outputResolution_editTextC..."
        QT_MOC_LITERAL(1053, 33),  // "on_baseResolution_editTextCha..."
        QT_MOC_LITERAL(1087, 26),  // "on_disableOSXVSync_clicked"
        QT_MOC_LITERAL(1114, 18),  // "on_choose1_clicked"
        QT_MOC_LITERAL(1133, 18),  // "on_choose2_clicked"
        QT_MOC_LITERAL(1152, 18),  // "on_choose3_clicked"
        QT_MOC_LITERAL(1171, 18),  // "on_choose4_clicked"
        QT_MOC_LITERAL(1190, 18),  // "on_choose5_clicked"
        QT_MOC_LITERAL(1209, 18),  // "on_choose6_clicked"
        QT_MOC_LITERAL(1228, 18),  // "on_choose7_clicked"
        QT_MOC_LITERAL(1247, 18),  // "on_choose8_clicked"
        QT_MOC_LITERAL(1266, 18),  // "on_choose9_clicked"
        QT_MOC_LITERAL(1285, 34),  // "on_colorPreset_currentIndexCh..."
        QT_MOC_LITERAL(1320, 14),  // "GeneralChanged"
        QT_MOC_LITERAL(1335, 20),  // "HideOBSWindowWarning"
        QT_MOC_LITERAL(1356, 12),  // "AudioChanged"
        QT_MOC_LITERAL(1369, 19),  // "AudioChangedRestart"
        QT_MOC_LITERAL(1389, 18),  // "ReloadAudioSources"
        QT_MOC_LITERAL(1408, 15),  // "SurroundWarning"
        QT_MOC_LITERAL(1424, 20),  // "SpeakerLayoutChanged"
        QT_MOC_LITERAL(1445, 26),  // "LowLatencyBufferingChanged"
        QT_MOC_LITERAL(1472, 19),  // "UpdateAudioWarnings"
        QT_MOC_LITERAL(1492, 14),  // "OutputsChanged"
        QT_MOC_LITERAL(1507, 14),  // "Stream1Changed"
        QT_MOC_LITERAL(1522, 12),  // "VideoChanged"
        QT_MOC_LITERAL(1535, 22),  // "VideoChangedResolution"
        QT_MOC_LITERAL(1558, 14),  // "HotkeysChanged"
        QT_MOC_LITERAL(1573, 20),  // "ScanDuplicateHotkeys"
        QT_MOC_LITERAL(1594, 12),  // "QFormLayout*"
        QT_MOC_LITERAL(1607, 6),  // "layout"
        QT_MOC_LITERAL(1614, 13),  // "ReloadHotkeys"
        QT_MOC_LITERAL(1628, 13),  // "obs_hotkey_id"
        QT_MOC_LITERAL(1642, 9),  // "ignoreKey"
        QT_MOC_LITERAL(1652, 11),  // "A11yChanged"
        QT_MOC_LITERAL(1664, 17),  // "AppearanceChanged"
        QT_MOC_LITERAL(1682, 15),  // "AdvancedChanged"
        QT_MOC_LITERAL(1698, 22),  // "AdvancedChangedRestart"
        QT_MOC_LITERAL(1721, 25),  // "UpdateStreamDelayEstimate"
        QT_MOC_LITERAL(1747, 37),  // "UpdateAutomaticReplayBufferCh..."
        QT_MOC_LITERAL(1785, 22),  // "AdvOutSplitFileChanged"
        QT_MOC_LITERAL(1808, 22),  // "AdvOutRecCheckWarnings"
        QT_MOC_LITERAL(1831, 20),  // "AdvOutRecCheckCodecs"
        QT_MOC_LITERAL(1852, 29),  // "SimpleRecordingQualityChanged"
        QT_MOC_LITERAL(1882, 29),  // "SimpleRecordingEncoderChanged"
        QT_MOC_LITERAL(1912, 37),  // "SimpleRecordingQualityLossles..."
        QT_MOC_LITERAL(1950, 25),  // "SimpleReplayBufferChanged"
        QT_MOC_LITERAL(1976, 22),  // "AdvReplayBufferChanged"
        QT_MOC_LITERAL(1999, 29),  // "SimpleStreamingEncoderChanged"
        QT_MOC_LITERAL(2029, 16),  // "SpawnTempService"
        QT_MOC_LITERAL(2046, 10),  // "OBSService"
        QT_MOC_LITERAL(2057, 14),  // "SetGeneralIcon"
        QT_MOC_LITERAL(2072, 4),  // "icon"
        QT_MOC_LITERAL(2077, 17),  // "SetAppearanceIcon"
        QT_MOC_LITERAL(2095, 13),  // "SetStreamIcon"
        QT_MOC_LITERAL(2109, 13),  // "SetOutputIcon"
        QT_MOC_LITERAL(2123, 12),  // "SetAudioIcon"
        QT_MOC_LITERAL(2136, 12),  // "SetVideoIcon"
        QT_MOC_LITERAL(2149, 14),  // "SetHotkeysIcon"
        QT_MOC_LITERAL(2164, 20),  // "SetAccessibilityIcon"
        QT_MOC_LITERAL(2185, 15),  // "SetAdvancedIcon"
        QT_MOC_LITERAL(2201, 22),  // "UseStreamKeyAdvClicked"
        QT_MOC_LITERAL(2224, 31),  // "SimpleStreamAudioEncoderChanged"
        QT_MOC_LITERAL(2256, 23),  // "AdvAudioEncodersChanged"
        QT_MOC_LITERAL(2280, 11),  // "generalIcon"
        QT_MOC_LITERAL(2292, 14),  // "appearanceIcon"
        QT_MOC_LITERAL(2307, 10),  // "streamIcon"
        QT_MOC_LITERAL(2318, 10),  // "outputIcon"
        QT_MOC_LITERAL(2329, 9),  // "audioIcon"
        QT_MOC_LITERAL(2339, 9),  // "videoIcon"
        QT_MOC_LITERAL(2349, 11),  // "hotkeysIcon"
        QT_MOC_LITERAL(2361, 17),  // "accessibilityIcon"
        QT_MOC_LITERAL(2379, 12)   // "advancedIcon"
    },
    "OBSBasicSettings",
    "RecreateOutputResolutionWidget",
    "",
    "UpdateResFPSLimits",
    "DisplayEnforceWarning",
    "checked",
    "on_show_clicked",
    "on_authPwShow_clicked",
    "on_connectAccount_clicked",
    "on_disconnectAccount_clicked",
    "on_useStreamKey_clicked",
    "on_useAuth_toggled",
    "on_hotkeyFilterReset_clicked",
    "on_hotkeyFilterSearch_textChanged",
    "text",
    "on_hotkeyFilterInput_KeyChanged",
    "obs_key_combination_t",
    "combo",
    "on_theme_activated",
    "idx",
    "on_themeVariant_activated",
    "on_listWidget_itemSelectionChanged",
    "on_buttonBox_clicked",
    "QAbstractButton*",
    "button",
    "on_service_currentIndexChanged",
    "on_customServer_textChanged",
    "on_simpleOutputBrowse_clicked",
    "on_advOutRecPathBrowse_clicked",
    "on_advOutFFPathBrowse_clicked",
    "on_advOutEncoder_currentIndexChanged",
    "on_advOutRecEncoder_currentIndexChanged",
    "on_advOutFFIgnoreCompat_stateChanged",
    "state",
    "on_advOutFFFormat_currentIndexChanged",
    "on_advOutFFAEncoder_currentIndexChanged",
    "on_advOutFFVEncoder_currentIndexChanged",
    "on_advOutFFType_currentIndexChanged",
    "on_colorFormat_currentIndexChanged",
    "on_colorSpace_currentIndexChanged",
    "on_filenameFormatting_textEdited",
    "on_outputResolution_editTextChanged",
    "on_baseResolution_editTextChanged",
    "on_disableOSXVSync_clicked",
    "on_choose1_clicked",
    "on_choose2_clicked",
    "on_choose3_clicked",
    "on_choose4_clicked",
    "on_choose5_clicked",
    "on_choose6_clicked",
    "on_choose7_clicked",
    "on_choose8_clicked",
    "on_choose9_clicked",
    "on_colorPreset_currentIndexChanged",
    "GeneralChanged",
    "HideOBSWindowWarning",
    "AudioChanged",
    "AudioChangedRestart",
    "ReloadAudioSources",
    "SurroundWarning",
    "SpeakerLayoutChanged",
    "LowLatencyBufferingChanged",
    "UpdateAudioWarnings",
    "OutputsChanged",
    "Stream1Changed",
    "VideoChanged",
    "VideoChangedResolution",
    "HotkeysChanged",
    "ScanDuplicateHotkeys",
    "QFormLayout*",
    "layout",
    "ReloadHotkeys",
    "obs_hotkey_id",
    "ignoreKey",
    "A11yChanged",
    "AppearanceChanged",
    "AdvancedChanged",
    "AdvancedChangedRestart",
    "UpdateStreamDelayEstimate",
    "UpdateAutomaticReplayBufferCheckboxes",
    "AdvOutSplitFileChanged",
    "AdvOutRecCheckWarnings",
    "AdvOutRecCheckCodecs",
    "SimpleRecordingQualityChanged",
    "SimpleRecordingEncoderChanged",
    "SimpleRecordingQualityLosslessWarning",
    "SimpleReplayBufferChanged",
    "AdvReplayBufferChanged",
    "SimpleStreamingEncoderChanged",
    "SpawnTempService",
    "OBSService",
    "SetGeneralIcon",
    "icon",
    "SetAppearanceIcon",
    "SetStreamIcon",
    "SetOutputIcon",
    "SetAudioIcon",
    "SetVideoIcon",
    "SetHotkeysIcon",
    "SetAccessibilityIcon",
    "SetAdvancedIcon",
    "UseStreamKeyAdvClicked",
    "SimpleStreamAudioEncoderChanged",
    "AdvAudioEncodersChanged",
    "generalIcon",
    "appearanceIcon",
    "streamIcon",
    "outputIcon",
    "audioIcon",
    "videoIcon",
    "hotkeysIcon",
    "accessibilityIcon",
    "advancedIcon"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOBSBasicSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      89,   14, // methods
       9,  709, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  548,    2, 0x08,   10 /* Private */,
       3,    0,  549,    2, 0x08,   11 /* Private */,
       4,    1,  550,    2, 0x08,   12 /* Private */,
       6,    0,  553,    2, 0x08,   14 /* Private */,
       7,    0,  554,    2, 0x08,   15 /* Private */,
       8,    0,  555,    2, 0x08,   16 /* Private */,
       9,    0,  556,    2, 0x08,   17 /* Private */,
      10,    0,  557,    2, 0x08,   18 /* Private */,
      11,    0,  558,    2, 0x08,   19 /* Private */,
      12,    0,  559,    2, 0x08,   20 /* Private */,
      13,    1,  560,    2, 0x08,   21 /* Private */,
      15,    1,  563,    2, 0x08,   23 /* Private */,
      18,    1,  566,    2, 0x08,   25 /* Private */,
      20,    1,  569,    2, 0x08,   27 /* Private */,
      21,    0,  572,    2, 0x08,   29 /* Private */,
      22,    1,  573,    2, 0x08,   30 /* Private */,
      25,    1,  576,    2, 0x08,   32 /* Private */,
      26,    1,  579,    2, 0x08,   34 /* Private */,
      27,    0,  582,    2, 0x08,   36 /* Private */,
      28,    0,  583,    2, 0x08,   37 /* Private */,
      29,    0,  584,    2, 0x08,   38 /* Private */,
      30,    0,  585,    2, 0x08,   39 /* Private */,
      31,    1,  586,    2, 0x08,   40 /* Private */,
      32,    1,  589,    2, 0x08,   42 /* Private */,
      34,    1,  592,    2, 0x08,   44 /* Private */,
      35,    1,  595,    2, 0x08,   46 /* Private */,
      36,    1,  598,    2, 0x08,   48 /* Private */,
      37,    1,  601,    2, 0x08,   50 /* Private */,
      38,    1,  604,    2, 0x08,   52 /* Private */,
      39,    1,  607,    2, 0x08,   54 /* Private */,
      40,    1,  610,    2, 0x08,   56 /* Private */,
      41,    1,  613,    2, 0x08,   58 /* Private */,
      42,    1,  616,    2, 0x08,   60 /* Private */,
      43,    0,  619,    2, 0x08,   62 /* Private */,
      44,    0,  620,    2, 0x08,   63 /* Private */,
      45,    0,  621,    2, 0x08,   64 /* Private */,
      46,    0,  622,    2, 0x08,   65 /* Private */,
      47,    0,  623,    2, 0x08,   66 /* Private */,
      48,    0,  624,    2, 0x08,   67 /* Private */,
      49,    0,  625,    2, 0x08,   68 /* Private */,
      50,    0,  626,    2, 0x08,   69 /* Private */,
      51,    0,  627,    2, 0x08,   70 /* Private */,
      52,    0,  628,    2, 0x08,   71 /* Private */,
      53,    1,  629,    2, 0x08,   72 /* Private */,
      54,    0,  632,    2, 0x08,   74 /* Private */,
      55,    1,  633,    2, 0x08,   75 /* Private */,
      56,    0,  636,    2, 0x08,   77 /* Private */,
      57,    0,  637,    2, 0x08,   78 /* Private */,
      58,    0,  638,    2, 0x08,   79 /* Private */,
      59,    1,  639,    2, 0x08,   80 /* Private */,
      60,    1,  642,    2, 0x08,   82 /* Private */,
      61,    1,  645,    2, 0x08,   84 /* Private */,
      62,    0,  648,    2, 0x08,   86 /* Private */,
      63,    0,  649,    2, 0x08,   87 /* Private */,
      64,    0,  650,    2, 0x08,   88 /* Private */,
      65,    0,  651,    2, 0x08,   89 /* Private */,
      66,    0,  652,    2, 0x08,   90 /* Private */,
      67,    0,  653,    2, 0x08,   91 /* Private */,
      68,    1,  654,    2, 0x08,   92 /* Private */,
      71,    1,  657,    2, 0x08,   94 /* Private */,
      71,    0,  660,    2, 0x28,   96 /* Private | MethodCloned */,
      74,    0,  661,    2, 0x08,   97 /* Private */,
      75,    0,  662,    2, 0x08,   98 /* Private */,
      76,    0,  663,    2, 0x08,   99 /* Private */,
      77,    0,  664,    2, 0x08,  100 /* Private */,
      78,    0,  665,    2, 0x08,  101 /* Private */,
      79,    0,  666,    2, 0x08,  102 /* Private */,
      80,    0,  667,    2, 0x08,  103 /* Private */,
      81,    0,  668,    2, 0x08,  104 /* Private */,
      82,    0,  669,    2, 0x08,  105 /* Private */,
      83,    0,  670,    2, 0x08,  106 /* Private */,
      84,    0,  671,    2, 0x08,  107 /* Private */,
      85,    1,  672,    2, 0x08,  108 /* Private */,
      86,    0,  675,    2, 0x08,  110 /* Private */,
      87,    0,  676,    2, 0x08,  111 /* Private */,
      88,    0,  677,    2, 0x08,  112 /* Private */,
      89,    0,  678,    2, 0x08,  113 /* Private */,
      91,    1,  679,    2, 0x08,  114 /* Private */,
      93,    1,  682,    2, 0x08,  116 /* Private */,
      94,    1,  685,    2, 0x08,  118 /* Private */,
      95,    1,  688,    2, 0x08,  120 /* Private */,
      96,    1,  691,    2, 0x08,  122 /* Private */,
      97,    1,  694,    2, 0x08,  124 /* Private */,
      98,    1,  697,    2, 0x08,  126 /* Private */,
      99,    1,  700,    2, 0x08,  128 /* Private */,
     100,    1,  703,    2, 0x08,  130 /* Private */,
     101,    0,  706,    2, 0x08,  132 /* Private */,
     102,    0,  707,    2, 0x08,  133 /* Private */,
     103,    0,  708,    2, 0x08,  134 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
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
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 69,   70,
    QMetaType::Void, 0x80000000 | 72,   73,
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
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 90,
    QMetaType::Void, QMetaType::QIcon,   92,
    QMetaType::Void, QMetaType::QIcon,   92,
    QMetaType::Void, QMetaType::QIcon,   92,
    QMetaType::Void, QMetaType::QIcon,   92,
    QMetaType::Void, QMetaType::QIcon,   92,
    QMetaType::Void, QMetaType::QIcon,   92,
    QMetaType::Void, QMetaType::QIcon,   92,
    QMetaType::Void, QMetaType::QIcon,   92,
    QMetaType::Void, QMetaType::QIcon,   92,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
     104, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     105, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     106, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     107, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     108, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     109, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     110, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     111, QMetaType::QIcon, 0x00015003, uint(-1), 0,
     112, QMetaType::QIcon, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OBSBasicSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSOBSBasicSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOBSBasicSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOBSBasicSettingsENDCLASS_t,
        // property 'generalIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'appearanceIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'streamIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'outputIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'audioIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'videoIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'hotkeysIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'accessibilityIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'advancedIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OBSBasicSettings, std::true_type>,
        // method 'RecreateOutputResolutionWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateResFPSLimits'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'DisplayEnforceWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_show_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_authPwShow_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_connectAccount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_disconnectAccount_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_useStreamKey_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_useAuth_toggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hotkeyFilterReset_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hotkeyFilterSearch_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'on_hotkeyFilterInput_KeyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<obs_key_combination_t, std::false_type>,
        // method 'on_theme_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_themeVariant_activated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_listWidget_itemSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractButton *, std::false_type>,
        // method 'on_service_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_customServer_textChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_simpleOutputBrowse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_advOutRecPathBrowse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_advOutFFPathBrowse_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_advOutEncoder_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_advOutRecEncoder_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_advOutFFIgnoreCompat_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_advOutFFFormat_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_advOutFFAEncoder_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_advOutFFVEncoder_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_advOutFFType_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_colorFormat_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_colorSpace_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_filenameFormatting_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_outputResolution_editTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_baseResolution_editTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_disableOSXVSync_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose1_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose4_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose6_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose7_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose8_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_choose9_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_colorPreset_currentIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'GeneralChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HideOBSWindowWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'AudioChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AudioChangedRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReloadAudioSources'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SurroundWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SpeakerLayoutChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'LowLatencyBufferingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'UpdateAudioWarnings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'OutputsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'Stream1Changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'VideoChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'VideoChangedResolution'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'HotkeysChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ScanDuplicateHotkeys'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFormLayout *, std::false_type>,
        // method 'ReloadHotkeys'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<obs_hotkey_id, std::false_type>,
        // method 'ReloadHotkeys'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'A11yChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AppearanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AdvancedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AdvancedChangedRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateStreamDelayEstimate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateAutomaticReplayBufferCheckboxes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AdvOutSplitFileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AdvOutRecCheckWarnings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AdvOutRecCheckCodecs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SimpleRecordingQualityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SimpleRecordingEncoderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SimpleRecordingQualityLosslessWarning'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'SimpleReplayBufferChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AdvReplayBufferChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SimpleStreamingEncoderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SpawnTempService'
        QtPrivate::TypeAndForceComplete<OBSService, std::false_type>,
        // method 'SetGeneralIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetAppearanceIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetStreamIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetOutputIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetAudioIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetVideoIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetHotkeysIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetAccessibilityIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'SetAdvancedIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'UseStreamKeyAdvClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'SimpleStreamAudioEncoderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'AdvAudioEncodersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OBSBasicSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->RecreateOutputResolutionWidget(); break;
        case 1: { bool _r = _t->UpdateResFPSLimits();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->DisplayEnforceWarning((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->on_show_clicked(); break;
        case 4: _t->on_authPwShow_clicked(); break;
        case 5: _t->on_connectAccount_clicked(); break;
        case 6: _t->on_disconnectAccount_clicked(); break;
        case 7: _t->on_useStreamKey_clicked(); break;
        case 8: _t->on_useAuth_toggled(); break;
        case 9: _t->on_hotkeyFilterReset_clicked(); break;
        case 10: _t->on_hotkeyFilterSearch_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->on_hotkeyFilterInput_KeyChanged((*reinterpret_cast< std::add_pointer_t<obs_key_combination_t>>(_a[1]))); break;
        case 12: _t->on_theme_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_themeVariant_activated((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->on_listWidget_itemSelectionChanged(); break;
        case 15: _t->on_buttonBox_clicked((*reinterpret_cast< std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 16: _t->on_service_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_customServer_textChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->on_simpleOutputBrowse_clicked(); break;
        case 19: _t->on_advOutRecPathBrowse_clicked(); break;
        case 20: _t->on_advOutFFPathBrowse_clicked(); break;
        case 21: _t->on_advOutEncoder_currentIndexChanged(); break;
        case 22: _t->on_advOutRecEncoder_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->on_advOutFFIgnoreCompat_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 24: _t->on_advOutFFFormat_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 25: _t->on_advOutFFAEncoder_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 26: _t->on_advOutFFVEncoder_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_advOutFFType_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 28: _t->on_colorFormat_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->on_colorSpace_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 30: _t->on_filenameFormatting_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: _t->on_outputResolution_editTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 32: _t->on_baseResolution_editTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 33: _t->on_disableOSXVSync_clicked(); break;
        case 34: _t->on_choose1_clicked(); break;
        case 35: _t->on_choose2_clicked(); break;
        case 36: _t->on_choose3_clicked(); break;
        case 37: _t->on_choose4_clicked(); break;
        case 38: _t->on_choose5_clicked(); break;
        case 39: _t->on_choose6_clicked(); break;
        case 40: _t->on_choose7_clicked(); break;
        case 41: _t->on_choose8_clicked(); break;
        case 42: _t->on_choose9_clicked(); break;
        case 43: _t->on_colorPreset_currentIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 44: _t->GeneralChanged(); break;
        case 45: _t->HideOBSWindowWarning((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 46: _t->AudioChanged(); break;
        case 47: _t->AudioChangedRestart(); break;
        case 48: _t->ReloadAudioSources(); break;
        case 49: _t->SurroundWarning((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 50: _t->SpeakerLayoutChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 51: _t->LowLatencyBufferingChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 52: _t->UpdateAudioWarnings(); break;
        case 53: _t->OutputsChanged(); break;
        case 54: _t->Stream1Changed(); break;
        case 55: _t->VideoChanged(); break;
        case 56: _t->VideoChangedResolution(); break;
        case 57: _t->HotkeysChanged(); break;
        case 58: { bool _r = _t->ScanDuplicateHotkeys((*reinterpret_cast< std::add_pointer_t<QFormLayout*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 59: _t->ReloadHotkeys((*reinterpret_cast< std::add_pointer_t<obs_hotkey_id>>(_a[1]))); break;
        case 60: _t->ReloadHotkeys(); break;
        case 61: _t->A11yChanged(); break;
        case 62: _t->AppearanceChanged(); break;
        case 63: _t->AdvancedChanged(); break;
        case 64: _t->AdvancedChangedRestart(); break;
        case 65: _t->UpdateStreamDelayEstimate(); break;
        case 66: _t->UpdateAutomaticReplayBufferCheckboxes(); break;
        case 67: _t->AdvOutSplitFileChanged(); break;
        case 68: _t->AdvOutRecCheckWarnings(); break;
        case 69: _t->AdvOutRecCheckCodecs(); break;
        case 70: _t->SimpleRecordingQualityChanged(); break;
        case 71: _t->SimpleRecordingEncoderChanged(); break;
        case 72: _t->SimpleRecordingQualityLosslessWarning((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 73: _t->SimpleReplayBufferChanged(); break;
        case 74: _t->AdvReplayBufferChanged(); break;
        case 75: _t->SimpleStreamingEncoderChanged(); break;
        case 76: { OBSService _r = _t->SpawnTempService();
            if (_a[0]) *reinterpret_cast< OBSService*>(_a[0]) = std::move(_r); }  break;
        case 77: _t->SetGeneralIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 78: _t->SetAppearanceIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 79: _t->SetStreamIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 80: _t->SetOutputIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 81: _t->SetAudioIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 82: _t->SetVideoIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 83: _t->SetHotkeysIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 84: _t->SetAccessibilityIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 85: _t->SetAdvancedIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 86: _t->UseStreamKeyAdvClicked(); break;
        case 87: _t->SimpleStreamAudioEncoderChanged(); break;
        case 88: _t->AdvAudioEncodersChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->GetGeneralIcon(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->GetAppearanceIcon(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->GetStreamIcon(); break;
        case 3: *reinterpret_cast< QIcon*>(_v) = _t->GetOutputIcon(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->GetAudioIcon(); break;
        case 5: *reinterpret_cast< QIcon*>(_v) = _t->GetVideoIcon(); break;
        case 6: *reinterpret_cast< QIcon*>(_v) = _t->GetHotkeysIcon(); break;
        case 7: *reinterpret_cast< QIcon*>(_v) = _t->GetAccessibilityIcon(); break;
        case 8: *reinterpret_cast< QIcon*>(_v) = _t->GetAdvancedIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<OBSBasicSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->SetGeneralIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->SetAppearanceIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->SetStreamIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->SetOutputIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 4: _t->SetAudioIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 5: _t->SetVideoIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 6: _t->SetHotkeysIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 7: _t->SetAccessibilityIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 8: _t->SetAdvancedIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OBSBasicSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOBSBasicSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OBSBasicSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 89)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 89;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 89)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 89;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
