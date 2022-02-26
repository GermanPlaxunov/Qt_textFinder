/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.3.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // C:/Users/PlaksunovGV/QtApps/TextFinder/input.txt
  0x0,0x0,0x0,0x2f,
  0x68,
  0x65,0x6c,0x6c,0x6f,0x2c,0x20,0x77,0x6f,0x72,0x6c,0x64,0xd,0xa,0x72,0x64,0x72,
  0x79,0x63,0x66,0x67,0x76,0x75,0x68,0x62,0x69,0x6a,0x6e,0x6f,0x6b,0x6d,0x70,0x6c,
  0x2c,0x6b,0x6d,0x6a,0x6e,0x69,0x75,0x68,0x67,0x79,0x74,0x66,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // input.txt
  0x0,0x9,
  0x7,0xc7,0xbb,0x54,
  0x0,0x69,
  0x0,0x6e,0x0,0x70,0x0,0x75,0x0,0x74,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/input.txt
  0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x7f,0x36,0xe2,0x44,0x71,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_textFinder)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_textFinder)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_textFinder)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_textFinder)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_textFinder)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_textFinder)(); }
   } dummy;
}
