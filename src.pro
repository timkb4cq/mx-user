QTDIR = /usr/share/qt4
TEMPLATE = app
TARGET = mx-user
TRANSLATIONS += translations/mx-user_ar.ts \
                translations/mx-user_ca.ts \
                translations/mx-user_de.ts \
                translations/mx-user_el.ts \
                translations/mx-user_es.ts \
                translations/mx-user_fr.ts \
                translations/mx-user_hi.ts \
                translations/mx-user_it.ts \
                translations/mx-user_ja.ts \
                translations/mx-user_ko.ts \
                translations/mx-user_nl.ts \
                translations/mx-user_pl.ts \
                translations/mx-user_pt.ts \
                translations/mx-user_pt_BR.ts \
                translations/mx-user_ro.ts \
                translations/mx-user_zh_CN.ts \
                translations/mx-user_zh_TW.ts
FORMS += meconfig.ui
HEADERS += mconfig.h
SOURCES += main.cpp mconfig.cpp
LIBS += -lcrypt
CONFIG += release warn_on thread qt
QT += webkit
