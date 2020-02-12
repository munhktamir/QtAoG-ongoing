/****************************************************************************
** Meta object code from reading C++ file 'formgps.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formgps.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formgps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FormGPS_t {
    QByteArrayData data[44];
    char stringdata0[908];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormGPS_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormGPS_t qt_meta_stringdata_FormGPS = {
    {
QT_MOC_LITERAL(0, 0, 7), // "FormGPS"
QT_MOC_LITERAL(1, 8, 8), // "simTimer"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 19), // "onGLControl_clicked"
QT_MOC_LITERAL(4, 38, 5), // "event"
QT_MOC_LITERAL(5, 44, 23), // "onBtnMinMaxZoom_clicked"
QT_MOC_LITERAL(6, 68, 22), // "onBtnPerimeter_clicked"
QT_MOC_LITERAL(7, 91, 22), // "onBtnAutoSteer_clicked"
QT_MOC_LITERAL(8, 114, 17), // "onBtnFlag_clicked"
QT_MOC_LITERAL(9, 132, 19), // "onBtnABLine_clicked"
QT_MOC_LITERAL(10, 152, 20), // "onBtnContour_clicked"
QT_MOC_LITERAL(11, 173, 24), // "onBtnManualOffOn_clicked"
QT_MOC_LITERAL(12, 198, 29), // "onBtnSectionOffAutoOn_clicked"
QT_MOC_LITERAL(13, 228, 21), // "onBtnTiltDown_clicked"
QT_MOC_LITERAL(14, 250, 19), // "onBtnTiltUp_clicked"
QT_MOC_LITERAL(15, 270, 19), // "onBtnZoomIn_clicked"
QT_MOC_LITERAL(16, 290, 20), // "onBtnZoomOut_clicked"
QT_MOC_LITERAL(17, 311, 17), // "onBtnSnap_clicked"
QT_MOC_LITERAL(18, 329, 25), // "onBtnTripOdometer_clicked"
QT_MOC_LITERAL(19, 355, 20), // "onBtnGPSData_clicked"
QT_MOC_LITERAL(20, 376, 21), // "onBtnSettings_clicked"
QT_MOC_LITERAL(21, 398, 16), // "onBtnJob_clicked"
QT_MOC_LITERAL(22, 415, 25), // "onBtnBoundaryMenu_clicked"
QT_MOC_LITERAL(23, 441, 17), // "onBtnComm_clicked"
QT_MOC_LITERAL(24, 459, 18), // "onBtnUnits_clicked"
QT_MOC_LITERAL(25, 478, 25), // "onBtnFileExplorer_clicked"
QT_MOC_LITERAL(26, 504, 28), // "onBtnAutoSteerConfig_clicked"
QT_MOC_LITERAL(27, 533, 21), // "onBtnAreaSide_clicked"
QT_MOC_LITERAL(28, 555, 23), // "onBtnSectionMan_clicked"
QT_MOC_LITERAL(29, 579, 10), // "sectNumber"
QT_MOC_LITERAL(30, 590, 20), // "onBtnRedFlag_clicked"
QT_MOC_LITERAL(31, 611, 22), // "onBtnGreenFlag_clicked"
QT_MOC_LITERAL(32, 634, 23), // "onBtnYellowFlag_clicked"
QT_MOC_LITERAL(33, 658, 23), // "onBtnDeleteFlag_clicked"
QT_MOC_LITERAL(34, 682, 27), // "onBtnDeleteAllFlags_clicked"
QT_MOC_LITERAL(35, 710, 19), // "tmrWatchdog_timeout"
QT_MOC_LITERAL(36, 730, 18), // "openGLControl_Draw"
QT_MOC_LITERAL(37, 749, 25), // "openGLControl_Initialized"
QT_MOC_LITERAL(38, 775, 22), // "openGLControl_Shutdown"
QT_MOC_LITERAL(39, 798, 22), // "openGLControlBack_Draw"
QT_MOC_LITERAL(40, 821, 29), // "openGLControlBack_Initialized"
QT_MOC_LITERAL(41, 851, 22), // "udpServerReadDatagrams"
QT_MOC_LITERAL(42, 874, 23), // "processSectionLookahead"
QT_MOC_LITERAL(43, 898, 9) // "readMyCom"

    },
    "FormGPS\0simTimer\0\0onGLControl_clicked\0"
    "event\0onBtnMinMaxZoom_clicked\0"
    "onBtnPerimeter_clicked\0onBtnAutoSteer_clicked\0"
    "onBtnFlag_clicked\0onBtnABLine_clicked\0"
    "onBtnContour_clicked\0onBtnManualOffOn_clicked\0"
    "onBtnSectionOffAutoOn_clicked\0"
    "onBtnTiltDown_clicked\0onBtnTiltUp_clicked\0"
    "onBtnZoomIn_clicked\0onBtnZoomOut_clicked\0"
    "onBtnSnap_clicked\0onBtnTripOdometer_clicked\0"
    "onBtnGPSData_clicked\0onBtnSettings_clicked\0"
    "onBtnJob_clicked\0onBtnBoundaryMenu_clicked\0"
    "onBtnComm_clicked\0onBtnUnits_clicked\0"
    "onBtnFileExplorer_clicked\0"
    "onBtnAutoSteerConfig_clicked\0"
    "onBtnAreaSide_clicked\0onBtnSectionMan_clicked\0"
    "sectNumber\0onBtnRedFlag_clicked\0"
    "onBtnGreenFlag_clicked\0onBtnYellowFlag_clicked\0"
    "onBtnDeleteFlag_clicked\0"
    "onBtnDeleteAllFlags_clicked\0"
    "tmrWatchdog_timeout\0openGLControl_Draw\0"
    "openGLControl_Initialized\0"
    "openGLControl_Shutdown\0openGLControlBack_Draw\0"
    "openGLControlBack_Initialized\0"
    "udpServerReadDatagrams\0processSectionLookahead\0"
    "readMyCom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormGPS[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  214,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,  215,    2, 0x0a /* Public */,
       5,    0,  218,    2, 0x0a /* Public */,
       6,    0,  219,    2, 0x0a /* Public */,
       7,    0,  220,    2, 0x0a /* Public */,
       8,    0,  221,    2, 0x0a /* Public */,
       9,    0,  222,    2, 0x0a /* Public */,
      10,    0,  223,    2, 0x0a /* Public */,
      11,    0,  224,    2, 0x0a /* Public */,
      12,    0,  225,    2, 0x0a /* Public */,
      13,    0,  226,    2, 0x0a /* Public */,
      14,    0,  227,    2, 0x0a /* Public */,
      15,    0,  228,    2, 0x0a /* Public */,
      16,    0,  229,    2, 0x0a /* Public */,
      17,    0,  230,    2, 0x0a /* Public */,
      18,    0,  231,    2, 0x0a /* Public */,
      19,    0,  232,    2, 0x0a /* Public */,
      20,    0,  233,    2, 0x0a /* Public */,
      21,    0,  234,    2, 0x0a /* Public */,
      22,    0,  235,    2, 0x0a /* Public */,
      23,    0,  236,    2, 0x0a /* Public */,
      24,    0,  237,    2, 0x0a /* Public */,
      25,    0,  238,    2, 0x0a /* Public */,
      26,    0,  239,    2, 0x0a /* Public */,
      27,    0,  240,    2, 0x0a /* Public */,
      28,    1,  241,    2, 0x0a /* Public */,
      30,    0,  244,    2, 0x0a /* Public */,
      31,    0,  245,    2, 0x0a /* Public */,
      32,    0,  246,    2, 0x0a /* Public */,
      33,    0,  247,    2, 0x0a /* Public */,
      34,    0,  248,    2, 0x0a /* Public */,
      35,    0,  249,    2, 0x0a /* Public */,
      36,    0,  250,    2, 0x0a /* Public */,
      37,    0,  251,    2, 0x0a /* Public */,
      38,    0,  252,    2, 0x0a /* Public */,
      39,    0,  253,    2, 0x0a /* Public */,
      40,    0,  254,    2, 0x0a /* Public */,
      41,    0,  255,    2, 0x0a /* Public */,
      42,    0,  256,    2, 0x0a /* Public */,
      43,    0,  257,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    4,
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
    QMetaType::Void, QMetaType::Int,   29,
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

       0        // eod
};

void FormGPS::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormGPS *_t = static_cast<FormGPS *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->simTimer(); break;
        case 1: _t->onGLControl_clicked((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 2: _t->onBtnMinMaxZoom_clicked(); break;
        case 3: _t->onBtnPerimeter_clicked(); break;
        case 4: _t->onBtnAutoSteer_clicked(); break;
        case 5: _t->onBtnFlag_clicked(); break;
        case 6: _t->onBtnABLine_clicked(); break;
        case 7: _t->onBtnContour_clicked(); break;
        case 8: _t->onBtnManualOffOn_clicked(); break;
        case 9: _t->onBtnSectionOffAutoOn_clicked(); break;
        case 10: _t->onBtnTiltDown_clicked(); break;
        case 11: _t->onBtnTiltUp_clicked(); break;
        case 12: _t->onBtnZoomIn_clicked(); break;
        case 13: _t->onBtnZoomOut_clicked(); break;
        case 14: _t->onBtnSnap_clicked(); break;
        case 15: _t->onBtnTripOdometer_clicked(); break;
        case 16: _t->onBtnGPSData_clicked(); break;
        case 17: _t->onBtnSettings_clicked(); break;
        case 18: _t->onBtnJob_clicked(); break;
        case 19: _t->onBtnBoundaryMenu_clicked(); break;
        case 20: _t->onBtnComm_clicked(); break;
        case 21: _t->onBtnUnits_clicked(); break;
        case 22: _t->onBtnFileExplorer_clicked(); break;
        case 23: _t->onBtnAutoSteerConfig_clicked(); break;
        case 24: _t->onBtnAreaSide_clicked(); break;
        case 25: _t->onBtnSectionMan_clicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->onBtnRedFlag_clicked(); break;
        case 27: _t->onBtnGreenFlag_clicked(); break;
        case 28: _t->onBtnYellowFlag_clicked(); break;
        case 29: _t->onBtnDeleteFlag_clicked(); break;
        case 30: _t->onBtnDeleteAllFlags_clicked(); break;
        case 31: _t->tmrWatchdog_timeout(); break;
        case 32: _t->openGLControl_Draw(); break;
        case 33: _t->openGLControl_Initialized(); break;
        case 34: _t->openGLControl_Shutdown(); break;
        case 35: _t->openGLControlBack_Draw(); break;
        case 36: _t->openGLControlBack_Initialized(); break;
        case 37: _t->udpServerReadDatagrams(); break;
        case 38: _t->processSectionLookahead(); break;
        case 39: _t->readMyCom(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FormGPS::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FormGPS::simTimer)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject FormGPS::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FormGPS.data,
      qt_meta_data_FormGPS,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FormGPS::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormGPS::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FormGPS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int FormGPS::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 40;
    }
    return _id;
}

// SIGNAL 0
void FormGPS::simTimer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
