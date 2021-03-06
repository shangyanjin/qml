#include "govaluetype.h"

#define DEFINE_GOVALUETYPE(N) \
    template<> QMetaObject GoValueType<N>::staticMetaObject = QMetaObject(); \
    template<> GoTypeInfo *GoValueType<N>::typeInfo = 0; \
    template<> GoTypeSpec_ *GoValueType<N>::typeSpec = 0;

DEFINE_GOVALUETYPE(1)
DEFINE_GOVALUETYPE(2)
DEFINE_GOVALUETYPE(3)
DEFINE_GOVALUETYPE(4)
DEFINE_GOVALUETYPE(5)
DEFINE_GOVALUETYPE(6)
DEFINE_GOVALUETYPE(7)
DEFINE_GOVALUETYPE(8)
DEFINE_GOVALUETYPE(9)
DEFINE_GOVALUETYPE(10)
DEFINE_GOVALUETYPE(11)
DEFINE_GOVALUETYPE(12)
DEFINE_GOVALUETYPE(13)
DEFINE_GOVALUETYPE(14)
DEFINE_GOVALUETYPE(15)
DEFINE_GOVALUETYPE(16)
DEFINE_GOVALUETYPE(17)
DEFINE_GOVALUETYPE(18)
DEFINE_GOVALUETYPE(19)
DEFINE_GOVALUETYPE(20)
DEFINE_GOVALUETYPE(21)
DEFINE_GOVALUETYPE(22)
DEFINE_GOVALUETYPE(23)
DEFINE_GOVALUETYPE(24)
DEFINE_GOVALUETYPE(25)
DEFINE_GOVALUETYPE(26)
DEFINE_GOVALUETYPE(27)
DEFINE_GOVALUETYPE(28)
DEFINE_GOVALUETYPE(29)
DEFINE_GOVALUETYPE(30)

static int goValueTypeN = 0;

template<int N>
int registerSingletonN(char *location, int major, int minor, char *name, GoTypeInfo *info, GoTypeSpec_ *spec) {
    GoValueType<N>::init(info, spec);
    return qmlRegisterSingletonType< GoValueType<N> >(location, major, minor, name, [](QQmlEngine *qmlEngine, QJSEngine *jsEngine) -> QObject* {
        QObject *singleton = new GoValueType<N>();
        QQmlEngine::setContextForObject(singleton, qmlEngine->rootContext());
        return singleton;
    });
}

#define GOVALUETYPE_CASE_SINGLETON(N) \
        case N: return registerSingletonN<N>(location, major, minor, name, info, spec);

int registerSingleton(char *location, int major, int minor, char *name, GoTypeInfo *info, GoTypeSpec_ *spec)
{
    switch (++goValueTypeN) {
    GOVALUETYPE_CASE_SINGLETON(1)
    GOVALUETYPE_CASE_SINGLETON(2)
    GOVALUETYPE_CASE_SINGLETON(3)
    GOVALUETYPE_CASE_SINGLETON(4)
    GOVALUETYPE_CASE_SINGLETON(5)
    GOVALUETYPE_CASE_SINGLETON(6)
    GOVALUETYPE_CASE_SINGLETON(7)
    GOVALUETYPE_CASE_SINGLETON(8)
    GOVALUETYPE_CASE_SINGLETON(9)
    GOVALUETYPE_CASE_SINGLETON(10)
    GOVALUETYPE_CASE_SINGLETON(11)
    GOVALUETYPE_CASE_SINGLETON(12)
    GOVALUETYPE_CASE_SINGLETON(13)
    GOVALUETYPE_CASE_SINGLETON(14)
    GOVALUETYPE_CASE_SINGLETON(15)
    GOVALUETYPE_CASE_SINGLETON(16)
    GOVALUETYPE_CASE_SINGLETON(17)
    GOVALUETYPE_CASE_SINGLETON(18)
    GOVALUETYPE_CASE_SINGLETON(19)
    GOVALUETYPE_CASE_SINGLETON(20)
    GOVALUETYPE_CASE_SINGLETON(21)
    GOVALUETYPE_CASE_SINGLETON(22)
    GOVALUETYPE_CASE_SINGLETON(23)
    GOVALUETYPE_CASE_SINGLETON(24)
    GOVALUETYPE_CASE_SINGLETON(25)
    GOVALUETYPE_CASE_SINGLETON(26)
    GOVALUETYPE_CASE_SINGLETON(27)
    GOVALUETYPE_CASE_SINGLETON(28)
    GOVALUETYPE_CASE_SINGLETON(29)
    GOVALUETYPE_CASE_SINGLETON(30)
    }
    panicf("too many registered types; please contact the Go QML developers");
    return 0;
}

#define GOVALUETYPE_CASE(N) \
    case N: GoValueType<N>::init(info, spec); return qmlRegisterType< GoValueType<N> >(location, major, minor, name);

int registerType(char *location, int major, int minor, char *name, GoTypeInfo *info, GoTypeSpec_ *spec)
{
    switch (++goValueTypeN) {
    GOVALUETYPE_CASE(1)
    GOVALUETYPE_CASE(2)
    GOVALUETYPE_CASE(3)
    GOVALUETYPE_CASE(4)
    GOVALUETYPE_CASE(5)
    GOVALUETYPE_CASE(6)
    GOVALUETYPE_CASE(7)
    GOVALUETYPE_CASE(8)
    GOVALUETYPE_CASE(9)
    GOVALUETYPE_CASE(10)
    GOVALUETYPE_CASE(11)
    GOVALUETYPE_CASE(12)
    GOVALUETYPE_CASE(13)
    GOVALUETYPE_CASE(14)
    GOVALUETYPE_CASE(15)
    GOVALUETYPE_CASE(16)
    GOVALUETYPE_CASE(17)
    GOVALUETYPE_CASE(18)
    GOVALUETYPE_CASE(19)
    GOVALUETYPE_CASE(20)
    GOVALUETYPE_CASE(21)
    GOVALUETYPE_CASE(22)
    GOVALUETYPE_CASE(23)
    GOVALUETYPE_CASE(24)
    GOVALUETYPE_CASE(25)
    GOVALUETYPE_CASE(26)
    GOVALUETYPE_CASE(27)
    GOVALUETYPE_CASE(28)
    GOVALUETYPE_CASE(29)
    GOVALUETYPE_CASE(30)
    }
    panicf("too many registered types; please contact the Go QML developers");
    return 0;
}

// vim:sw=4:st=4:et:ft=cpp
