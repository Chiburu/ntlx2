#-------------------------------------------------
#
# Project created by QtCreator 2017-10-19T22:37:32
#
#-------------------------------------------------

QT       -= gui

VERSION = 2.0.0.0
TARGET = ntlx2_core
TARGET_EXT = .dll
TEMPLATE = lib

DEFINES += NTLX2_CORE_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        result.cpp \
    value.cpp \
    number.cpp \
    ntlx2.cpp

HEADERS += \
        result.h \
        ntlx2_core_global.h \
    ntlx2.h \
    value.h \
    number.h

#
# Notes API用マクロ定義
#
win32 {
    DEFINES += W W32 NT
    contains(QMAKE_TARGET.arch, x86_64) {
        DEFINES += W64 ND64 _AMD64_
    }
}
else:macx {
    # MACのDWORDをunsigned int(4バイト)にする
    # DEFINES += MAC
    DEFINES += MAC LONGIS64BIT
}
else:unix {
    DEFINES += UNIX LINUX W32
    QMAKE_CXXFLAGS += -std=c++0x
    target.path = /usr/lib
    INSTALLS += target
}

#
# ヘッダーインクルード＞qmake引数指定
# "INCLUDEPATH+=C:/Users/Public/notesapi/include" // Windows
# "INCLUDEPATH+=/Users/Shared/notesapi/include"
#

#
# Notesライブラリリンク
# 場所はビルドステップ、qmakeの引数に指定する。
# "LIBS+=-LC:/Users/Public/notesapi/lib/mswin32" // Win32
# "LIBS+=-LC:/Users/Public/notesapi/lib/mswin64" // Win64
# "LIBS+=-L'/Applications/IBM Notes.app/Contents/MacOS'" // Mac
#
LIBS += -lnotes

DISTFILES += \
    .gitignore
