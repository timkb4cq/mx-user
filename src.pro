QTDIR = /usr/share/qt4
TEMPLATE = app
TARGET = mx-user
TRANSLATIONS += muser_ar.ts muser_ca.ts muser_de.ts muser_el.ts \
  muser_es.ts muser_fr.ts muser_hi.ts muser_it.ts muser_ja.ts \
  muser_ko.ts muser_nl.ts muser_pl.ts muser_pt.ts muser_pt_BR.ts \ 
  muser_zh_CN.ts muser_zh_TW.ts 
FORMS += meconfig.ui
HEADERS += mconfig.h 
SOURCES += main.cpp mconfig.cpp
LIBS += -lcrypt
CONFIG += release warn_on thread qt
