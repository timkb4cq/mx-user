QTDIR = /usr/share/qt4
TEMPLATE = app
TARGET = mx-user
TRANSLATIONS += translations/muser_ar.ts \
                translations/muser_ca.ts \
                translations/muser_de.ts \
                translations/muser_el.ts \
                translations/muser_es.ts \
                translations/muser_fr.ts \
                translations/muser_hi.ts \
                translations/muser_it.ts \
                translations/muser_ja.ts \
                translations/muser_ko.ts \
                translations/muser_nl.ts \
                translations/muser_pl.ts \
                translations/muser_pt.ts \
                translations/muser_pt_BR.ts \ 
                translations/muser_zh_CN.ts \
                translations/muser_zh_TW.ts 
FORMS += meconfig.ui
HEADERS += mconfig.h 
SOURCES += main.cpp mconfig.cpp
LIBS += -lcrypt
CONFIG += release warn_on thread qt
