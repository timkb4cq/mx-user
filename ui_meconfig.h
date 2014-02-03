/********************************************************************************
** Form generated from reading UI file 'meconfig.ui'
**
** Created: Mon Feb 3 07:55:48 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MECONFIG_H
#define UI_MECONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MEConfig
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *restoreGroupBox;
    QGridLayout *gridLayout1;
    QCheckBox *checkGroups;
    QCheckBox *checkQupzilla;
    QSpacerItem *spacerItem;
    QSpacerItem *spacerItem1;
    QComboBox *userComboBox;
    QLabel *userLabel;
    QSpacerItem *spacerItem2;
    QWidget *tab_4;
    QVBoxLayout *vboxLayout1;
    QGroupBox *copyDesktopsGroupBox;
    QGridLayout *gridLayout2;
    QRadioButton *syncRadioButton;
    QLabel *copyFromLabel;
    QLabel *copyToLabel;
    QComboBox *toUserComboBox;
    QRadioButton *copyRadioButton;
    QComboBox *fromUserComboBox;
    QGroupBox *whatGroupBox;
    QGridLayout *gridLayout3;
    QRadioButton *entireRadioButton;
    QRadioButton *qupRadioButton;
    QRadioButton *docsRadioButton;
    QRadioButton *sharedRadioButton;
    QGroupBox *syncProgressGroupBox;
    QGridLayout *gridLayout4;
    QLineEdit *syncStatusEdit;
    QLabel *syncStatusLabel;
    QProgressBar *syncProgressBar;
    QSpacerItem *spacerItem3;
    QWidget *tab_2;
    QGridLayout *gridLayout5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout6;
    QLabel *userPassword2Label;
    QLineEdit *userPasswordEdit;
    QLabel *userPasswordLabel;
    QLineEdit *userNameEdit;
    QLabel *userNameLabel;
    QLineEdit *userPassword2Edit;
    QSpacerItem *spacerItem4;
    QWidget *tab_3;
    QGridLayout *gridLayout7;
    QSpacerItem *spacerItem5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout8;
    QCheckBox *deleteHomeCheckBox;
    QLabel *deleteUserLabel;
    QComboBox *deleteUserCombo;
    QWidget *tab_5;
    QComboBox *fromUserComboBox_2;
    QLabel *deleteUserLabel_2;
    QFrame *line1;
    QGridLayout *gridLayout9;
    QPushButton *buttonOk;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *spacerItem6;
    QPushButton *buttonAbout;
    QPushButton *buttonApply;
    QPushButton *buttonCancel;
    QLabel *label;

    void setupUi(QDialog *MEConfig)
    {
        if (MEConfig->objectName().isEmpty())
            MEConfig->setObjectName(QString::fromUtf8("MEConfig"));
        MEConfig->resize(676, 537);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MEConfig->sizePolicy().hasHeightForWidth());
        MEConfig->setSizePolicy(sizePolicy);
        MEConfig->setMinimumSize(QSize(0, 537));
        QIcon icon;
        icon.addFile(QString::fromUtf8(""), QSize(), QIcon::Normal, QIcon::Off);
        MEConfig->setWindowIcon(icon);
        MEConfig->setSizeGripEnabled(false);
        vboxLayout = new QVBoxLayout(MEConfig);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        tabWidget = new QTabWidget(MEConfig);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        restoreGroupBox = new QGroupBox(tab);
        restoreGroupBox->setObjectName(QString::fromUtf8("restoreGroupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(restoreGroupBox->sizePolicy().hasHeightForWidth());
        restoreGroupBox->setSizePolicy(sizePolicy1);
        restoreGroupBox->setMinimumSize(QSize(500, 130));
        gridLayout1 = new QGridLayout(restoreGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        checkGroups = new QCheckBox(restoreGroupBox);
        checkGroups->setObjectName(QString::fromUtf8("checkGroups"));
        sizePolicy1.setHeightForWidth(checkGroups->sizePolicy().hasHeightForWidth());
        checkGroups->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(checkGroups, 0, 0, 1, 1);

        checkQupzilla = new QCheckBox(restoreGroupBox);
        checkQupzilla->setObjectName(QString::fromUtf8("checkQupzilla"));
        sizePolicy1.setHeightForWidth(checkQupzilla->sizePolicy().hasHeightForWidth());
        checkQupzilla->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(checkQupzilla, 1, 0, 1, 1);


        gridLayout->addWidget(restoreGroupBox, 1, 0, 1, 4);

        spacerItem = new QSpacerItem(241, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 2, 0, 1, 4);

        spacerItem1 = new QSpacerItem(271, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem1, 0, 3, 1, 1);

        userComboBox = new QComboBox(tab);
        userComboBox->setObjectName(QString::fromUtf8("userComboBox"));
        sizePolicy1.setHeightForWidth(userComboBox->sizePolicy().hasHeightForWidth());
        userComboBox->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(userComboBox, 0, 2, 1, 1);

        userLabel = new QLabel(tab);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(userLabel->sizePolicy().hasHeightForWidth());
        userLabel->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(userLabel, 0, 1, 1, 1);

        spacerItem2 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 0, 0, 1, 1);

        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../../../../../usr/share/icons/Tango/16x16/categories/package_development.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon1, QString());
        restoreGroupBox->raise();
        userComboBox->raise();
        userLabel->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        vboxLayout1 = new QVBoxLayout(tab_4);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        copyDesktopsGroupBox = new QGroupBox(tab_4);
        copyDesktopsGroupBox->setObjectName(QString::fromUtf8("copyDesktopsGroupBox"));
        sizePolicy1.setHeightForWidth(copyDesktopsGroupBox->sizePolicy().hasHeightForWidth());
        copyDesktopsGroupBox->setSizePolicy(sizePolicy1);
        gridLayout2 = new QGridLayout(copyDesktopsGroupBox);
        gridLayout2->setSpacing(6);
        gridLayout2->setContentsMargins(9, 9, 9, 9);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        syncRadioButton = new QRadioButton(copyDesktopsGroupBox);
        syncRadioButton->setObjectName(QString::fromUtf8("syncRadioButton"));
        sizePolicy1.setHeightForWidth(syncRadioButton->sizePolicy().hasHeightForWidth());
        syncRadioButton->setSizePolicy(sizePolicy1);
        syncRadioButton->setChecked(false);

        gridLayout2->addWidget(syncRadioButton, 1, 2, 1, 1);

        copyFromLabel = new QLabel(copyDesktopsGroupBox);
        copyFromLabel->setObjectName(QString::fromUtf8("copyFromLabel"));
        sizePolicy1.setHeightForWidth(copyFromLabel->sizePolicy().hasHeightForWidth());
        copyFromLabel->setSizePolicy(sizePolicy1);
        copyFromLabel->setFrameShape(QFrame::NoFrame);
        copyFromLabel->setFrameShadow(QFrame::Plain);

        gridLayout2->addWidget(copyFromLabel, 0, 0, 1, 1);

        copyToLabel = new QLabel(copyDesktopsGroupBox);
        copyToLabel->setObjectName(QString::fromUtf8("copyToLabel"));
        sizePolicy1.setHeightForWidth(copyToLabel->sizePolicy().hasHeightForWidth());
        copyToLabel->setSizePolicy(sizePolicy1);
        copyToLabel->setFrameShape(QFrame::NoFrame);
        copyToLabel->setFrameShadow(QFrame::Plain);

        gridLayout2->addWidget(copyToLabel, 0, 2, 1, 1);

        toUserComboBox = new QComboBox(copyDesktopsGroupBox);
        toUserComboBox->setObjectName(QString::fromUtf8("toUserComboBox"));
        sizePolicy1.setHeightForWidth(toUserComboBox->sizePolicy().hasHeightForWidth());
        toUserComboBox->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(toUserComboBox, 0, 3, 1, 1);

        copyRadioButton = new QRadioButton(copyDesktopsGroupBox);
        copyRadioButton->setObjectName(QString::fromUtf8("copyRadioButton"));
        sizePolicy1.setHeightForWidth(copyRadioButton->sizePolicy().hasHeightForWidth());
        copyRadioButton->setSizePolicy(sizePolicy1);
        copyRadioButton->setChecked(true);

        gridLayout2->addWidget(copyRadioButton, 1, 0, 1, 1);

        fromUserComboBox = new QComboBox(copyDesktopsGroupBox);
        fromUserComboBox->setObjectName(QString::fromUtf8("fromUserComboBox"));
        sizePolicy1.setHeightForWidth(fromUserComboBox->sizePolicy().hasHeightForWidth());
        fromUserComboBox->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(fromUserComboBox, 0, 1, 1, 1);


        vboxLayout1->addWidget(copyDesktopsGroupBox);

        whatGroupBox = new QGroupBox(tab_4);
        whatGroupBox->setObjectName(QString::fromUtf8("whatGroupBox"));
        sizePolicy1.setHeightForWidth(whatGroupBox->sizePolicy().hasHeightForWidth());
        whatGroupBox->setSizePolicy(sizePolicy1);
        gridLayout3 = new QGridLayout(whatGroupBox);
        gridLayout3->setSpacing(6);
        gridLayout3->setContentsMargins(9, 9, 9, 9);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        entireRadioButton = new QRadioButton(whatGroupBox);
        entireRadioButton->setObjectName(QString::fromUtf8("entireRadioButton"));
        sizePolicy1.setHeightForWidth(entireRadioButton->sizePolicy().hasHeightForWidth());
        entireRadioButton->setSizePolicy(sizePolicy1);
        entireRadioButton->setChecked(true);

        gridLayout3->addWidget(entireRadioButton, 0, 0, 1, 1);

        qupRadioButton = new QRadioButton(whatGroupBox);
        qupRadioButton->setObjectName(QString::fromUtf8("qupRadioButton"));
        sizePolicy1.setHeightForWidth(qupRadioButton->sizePolicy().hasHeightForWidth());
        qupRadioButton->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(qupRadioButton, 2, 0, 1, 1);

        docsRadioButton = new QRadioButton(whatGroupBox);
        docsRadioButton->setObjectName(QString::fromUtf8("docsRadioButton"));
        sizePolicy1.setHeightForWidth(docsRadioButton->sizePolicy().hasHeightForWidth());
        docsRadioButton->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(docsRadioButton, 0, 1, 1, 1);

        sharedRadioButton = new QRadioButton(whatGroupBox);
        sharedRadioButton->setObjectName(QString::fromUtf8("sharedRadioButton"));
        sizePolicy1.setHeightForWidth(sharedRadioButton->sizePolicy().hasHeightForWidth());
        sharedRadioButton->setSizePolicy(sizePolicy1);

        gridLayout3->addWidget(sharedRadioButton, 2, 1, 1, 1);


        vboxLayout1->addWidget(whatGroupBox);

        syncProgressGroupBox = new QGroupBox(tab_4);
        syncProgressGroupBox->setObjectName(QString::fromUtf8("syncProgressGroupBox"));
        sizePolicy1.setHeightForWidth(syncProgressGroupBox->sizePolicy().hasHeightForWidth());
        syncProgressGroupBox->setSizePolicy(sizePolicy1);
        gridLayout4 = new QGridLayout(syncProgressGroupBox);
        gridLayout4->setSpacing(6);
        gridLayout4->setContentsMargins(9, 9, 9, 9);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        syncStatusEdit = new QLineEdit(syncProgressGroupBox);
        syncStatusEdit->setObjectName(QString::fromUtf8("syncStatusEdit"));
        sizePolicy1.setHeightForWidth(syncStatusEdit->sizePolicy().hasHeightForWidth());
        syncStatusEdit->setSizePolicy(sizePolicy1);
        syncStatusEdit->setAcceptDrops(false);
        syncStatusEdit->setReadOnly(true);

        gridLayout4->addWidget(syncStatusEdit, 1, 1, 1, 1);

        syncStatusLabel = new QLabel(syncProgressGroupBox);
        syncStatusLabel->setObjectName(QString::fromUtf8("syncStatusLabel"));
        sizePolicy1.setHeightForWidth(syncStatusLabel->sizePolicy().hasHeightForWidth());
        syncStatusLabel->setSizePolicy(sizePolicy1);
        syncStatusLabel->setWordWrap(false);

        gridLayout4->addWidget(syncStatusLabel, 1, 0, 1, 1);

        syncProgressBar = new QProgressBar(syncProgressGroupBox);
        syncProgressBar->setObjectName(QString::fromUtf8("syncProgressBar"));
        sizePolicy1.setHeightForWidth(syncProgressBar->sizePolicy().hasHeightForWidth());
        syncProgressBar->setSizePolicy(sizePolicy1);
        syncProgressBar->setValue(0);
        syncProgressBar->setTextVisible(false);
        syncProgressBar->setOrientation(Qt::Horizontal);

        gridLayout4->addWidget(syncProgressBar, 0, 0, 1, 2);


        vboxLayout1->addWidget(syncProgressGroupBox);

        spacerItem3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem3);

        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../../../../../usr/share/icons/Tango/16x16/actions/edit-copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_4, icon2, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout5 = new QGridLayout(tab_2);
        gridLayout5->setSpacing(6);
        gridLayout5->setContentsMargins(9, 9, 9, 9);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout6 = new QGridLayout(groupBox);
        gridLayout6->setSpacing(6);
        gridLayout6->setContentsMargins(9, 9, 9, 9);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        userPassword2Label = new QLabel(groupBox);
        userPassword2Label->setObjectName(QString::fromUtf8("userPassword2Label"));
        sizePolicy1.setHeightForWidth(userPassword2Label->sizePolicy().hasHeightForWidth());
        userPassword2Label->setSizePolicy(sizePolicy1);

        gridLayout6->addWidget(userPassword2Label, 2, 0, 1, 1);

        userPasswordEdit = new QLineEdit(groupBox);
        userPasswordEdit->setObjectName(QString::fromUtf8("userPasswordEdit"));
        sizePolicy1.setHeightForWidth(userPasswordEdit->sizePolicy().hasHeightForWidth());
        userPasswordEdit->setSizePolicy(sizePolicy1);
        userPasswordEdit->setEchoMode(QLineEdit::Password);

        gridLayout6->addWidget(userPasswordEdit, 1, 1, 1, 1);

        userPasswordLabel = new QLabel(groupBox);
        userPasswordLabel->setObjectName(QString::fromUtf8("userPasswordLabel"));
        sizePolicy1.setHeightForWidth(userPasswordLabel->sizePolicy().hasHeightForWidth());
        userPasswordLabel->setSizePolicy(sizePolicy1);

        gridLayout6->addWidget(userPasswordLabel, 1, 0, 1, 1);

        userNameEdit = new QLineEdit(groupBox);
        userNameEdit->setObjectName(QString::fromUtf8("userNameEdit"));
        sizePolicy1.setHeightForWidth(userNameEdit->sizePolicy().hasHeightForWidth());
        userNameEdit->setSizePolicy(sizePolicy1);

        gridLayout6->addWidget(userNameEdit, 0, 1, 1, 1);

        userNameLabel = new QLabel(groupBox);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        sizePolicy1.setHeightForWidth(userNameLabel->sizePolicy().hasHeightForWidth());
        userNameLabel->setSizePolicy(sizePolicy1);

        gridLayout6->addWidget(userNameLabel, 0, 0, 1, 1);

        userPassword2Edit = new QLineEdit(groupBox);
        userPassword2Edit->setObjectName(QString::fromUtf8("userPassword2Edit"));
        sizePolicy1.setHeightForWidth(userPassword2Edit->sizePolicy().hasHeightForWidth());
        userPassword2Edit->setSizePolicy(sizePolicy1);
        userPassword2Edit->setEchoMode(QLineEdit::Password);

        gridLayout6->addWidget(userPassword2Edit, 2, 1, 1, 1);


        gridLayout5->addWidget(groupBox, 0, 0, 1, 1);

        spacerItem4 = new QSpacerItem(20, 241, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout5->addItem(spacerItem4, 1, 0, 1, 1);

        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../../../../../usr/share/icons/Tango/16x16/actions/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon3, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout7 = new QGridLayout(tab_3);
        gridLayout7->setSpacing(6);
        gridLayout7->setContentsMargins(9, 9, 9, 9);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout7->addItem(spacerItem5, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        gridLayout8 = new QGridLayout(groupBox_2);
        gridLayout8->setSpacing(6);
        gridLayout8->setContentsMargins(9, 9, 9, 9);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        deleteHomeCheckBox = new QCheckBox(groupBox_2);
        deleteHomeCheckBox->setObjectName(QString::fromUtf8("deleteHomeCheckBox"));
        sizePolicy1.setHeightForWidth(deleteHomeCheckBox->sizePolicy().hasHeightForWidth());
        deleteHomeCheckBox->setSizePolicy(sizePolicy1);
        deleteHomeCheckBox->setChecked(true);

        gridLayout8->addWidget(deleteHomeCheckBox, 1, 0, 1, 2);

        deleteUserLabel = new QLabel(groupBox_2);
        deleteUserLabel->setObjectName(QString::fromUtf8("deleteUserLabel"));
        sizePolicy1.setHeightForWidth(deleteUserLabel->sizePolicy().hasHeightForWidth());
        deleteUserLabel->setSizePolicy(sizePolicy1);
        deleteUserLabel->setFrameShape(QFrame::NoFrame);
        deleteUserLabel->setFrameShadow(QFrame::Plain);

        gridLayout8->addWidget(deleteUserLabel, 0, 0, 1, 1);

        deleteUserCombo = new QComboBox(groupBox_2);
        deleteUserCombo->setObjectName(QString::fromUtf8("deleteUserCombo"));
        sizePolicy1.setHeightForWidth(deleteUserCombo->sizePolicy().hasHeightForWidth());
        deleteUserCombo->setSizePolicy(sizePolicy1);

        gridLayout8->addWidget(deleteUserCombo, 0, 1, 1, 1);


        gridLayout7->addWidget(groupBox_2, 0, 0, 1, 1);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../../../../../usr/share/icons/Tango/16x16/actions/gtk-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        fromUserComboBox_2 = new QComboBox(tab_5);
        fromUserComboBox_2->setObjectName(QString::fromUtf8("fromUserComboBox_2"));
        fromUserComboBox_2->setGeometry(QRect(490, 10, 149, 23));
        sizePolicy1.setHeightForWidth(fromUserComboBox_2->sizePolicy().hasHeightForWidth());
        fromUserComboBox_2->setSizePolicy(sizePolicy1);
        deleteUserLabel_2 = new QLabel(tab_5);
        deleteUserLabel_2->setObjectName(QString::fromUtf8("deleteUserLabel_2"));
        deleteUserLabel_2->setGeometry(QRect(380, 10, 81, 31));
        sizePolicy1.setHeightForWidth(deleteUserLabel_2->sizePolicy().hasHeightForWidth());
        deleteUserLabel_2->setSizePolicy(sizePolicy1);
        deleteUserLabel_2->setFrameShape(QFrame::NoFrame);
        deleteUserLabel_2->setFrameShadow(QFrame::Plain);
        tabWidget->addTab(tab_5, QString());

        vboxLayout->addWidget(tabWidget);

        line1 = new QFrame(MEConfig);
        line1->setObjectName(QString::fromUtf8("line1"));
        line1->setFrameShape(QFrame::HLine);
        line1->setFrameShadow(QFrame::Sunken);
        line1->setFrameShape(QFrame::HLine);

        vboxLayout->addWidget(line1);

        gridLayout9 = new QGridLayout();
        gridLayout9->setSpacing(5);
        gridLayout9->setContentsMargins(0, 0, 0, 0);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        buttonOk = new QPushButton(MEConfig);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../../../../../usr/share/mx-user/icons/dialog-ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonOk->setIcon(icon5);
        buttonOk->setAutoDefault(true);
        buttonOk->setDefault(true);

        gridLayout9->addWidget(buttonOk, 0, 5, 1, 1);

        horizontalSpacer = new QSpacerItem(116, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(horizontalSpacer, 0, 1, 1, 1);

        spacerItem6 = new QSpacerItem(75, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(spacerItem6, 0, 4, 1, 1);

        buttonAbout = new QPushButton(MEConfig);
        buttonAbout->setObjectName(QString::fromUtf8("buttonAbout"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../../../../../usr/share/icons/Tango/16x16/apps/help-browser.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAbout->setIcon(icon6);
        buttonAbout->setAutoDefault(true);

        gridLayout9->addWidget(buttonAbout, 0, 0, 1, 1);

        buttonApply = new QPushButton(MEConfig);
        buttonApply->setObjectName(QString::fromUtf8("buttonApply"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../../../../../usr/share/mx-user/icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonApply->setIcon(icon7);

        gridLayout9->addWidget(buttonApply, 0, 6, 1, 1);

        buttonCancel = new QPushButton(MEConfig);
        buttonCancel->setObjectName(QString::fromUtf8("buttonCancel"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../../../../../usr/share/icons/Tango/16x16/actions/gtk-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonCancel->setIcon(icon8);
        buttonCancel->setAutoDefault(true);

        gridLayout9->addWidget(buttonCancel, 0, 7, 1, 1);

        label = new QLabel(MEConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(32, 32));
        label->setMidLineWidth(0);
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../usr/local/share/icons/mxfcelogo.png")));
        label->setScaledContents(true);

        gridLayout9->addWidget(label, 0, 2, 1, 1);


        vboxLayout->addLayout(gridLayout9);

        QWidget::setTabOrder(tabWidget, buttonAbout);
        QWidget::setTabOrder(buttonAbout, buttonOk);
        QWidget::setTabOrder(buttonOk, buttonApply);
        QWidget::setTabOrder(buttonApply, buttonCancel);
        QWidget::setTabOrder(buttonCancel, userComboBox);
        QWidget::setTabOrder(userComboBox, checkGroups);
        QWidget::setTabOrder(checkGroups, userNameEdit);
        QWidget::setTabOrder(userNameEdit, userPasswordEdit);
        QWidget::setTabOrder(userPasswordEdit, userPassword2Edit);
        QWidget::setTabOrder(userPassword2Edit, deleteUserCombo);
        QWidget::setTabOrder(deleteUserCombo, deleteHomeCheckBox);

        retranslateUi(MEConfig);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MEConfig);
    } // setupUi

    void retranslateUi(QDialog *MEConfig)
    {
        MEConfig->setWindowTitle(QApplication::translate("MEConfig", "MX User Assistant", 0, QApplication::UnicodeUTF8));
        restoreGroupBox->setTitle(QApplication::translate("MEConfig", "Restore Defaults", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkGroups->setToolTip(QApplication::translate("MEConfig", "Restore group memberships to MEPIS defaults", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkGroups->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        checkGroups->setText(QApplication::translate("MEConfig", "&Group memberships", 0, QApplication::UnicodeUTF8));
        checkGroups->setShortcut(QApplication::translate("MEConfig", "Alt+G", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkQupzilla->setToolTip(QApplication::translate("MEConfig", "Restore Firefox configs to MEPIS defaults", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        checkQupzilla->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        checkQupzilla->setText(QApplication::translate("MEConfig", "Qupzilla configs", 0, QApplication::UnicodeUTF8));
        checkQupzilla->setShortcut(QApplication::translate("MEConfig", "Alt+X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        userComboBox->setToolTip(QApplication::translate("MEConfig", "Select user to repair", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        userLabel->setToolTip(QApplication::translate("MEConfig", "Select user to repair", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        userLabel->setText(QApplication::translate("MEConfig", "User:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MEConfig", "Repair", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab), QApplication::translate("MEConfig", "Repair a user configuration", 0, QApplication::UnicodeUTF8));
        copyDesktopsGroupBox->setTitle(QApplication::translate("MEConfig", "Copy Between Desktops", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        syncRadioButton->setToolTip(QApplication::translate("MEConfig", "Select to copy and then delete differences", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        syncRadioButton->setText(QApplication::translate("MEConfig", "S&ync", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        copyFromLabel->setToolTip(QApplication::translate("MEConfig", "Select desktop to copy from", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        copyFromLabel->setText(QApplication::translate("MEConfig", "Copy from:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        copyToLabel->setToolTip(QApplication::translate("MEConfig", "Select desktop to copy to", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        copyToLabel->setText(QApplication::translate("MEConfig", "Copy to:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toUserComboBox->setToolTip(QApplication::translate("MEConfig", "Select desktop to copy to", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        copyRadioButton->setToolTip(QApplication::translate("MEConfig", "Select to only copy files", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        copyRadioButton->setText(QApplication::translate("MEConfig", "Copy only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fromUserComboBox->setToolTip(QApplication::translate("MEConfig", "Select desktop to copy from", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        whatGroupBox->setTitle(QApplication::translate("MEConfig", "What to Copy/Sync", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        entireRadioButton->setToolTip(QApplication::translate("MEConfig", "Select to copy/sync entire home", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        entireRadioButton->setText(QApplication::translate("MEConfig", "E&ntire home", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        qupRadioButton->setToolTip(QApplication::translate("MEConfig", "Select to copy/sync firefox/mozilla", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        qupRadioButton->setText(QApplication::translate("MEConfig", "Qupzilla folder", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        docsRadioButton->setToolTip(QApplication::translate("MEConfig", "Select to copy/sync Documents", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        docsRadioButton->setText(QApplication::translate("MEConfig", "Documents folder", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sharedRadioButton->setToolTip(QApplication::translate("MEConfig", "Select to copy/sync Shared", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        sharedRadioButton->setText(QApplication::translate("MEConfig", "Sh&ared folder", 0, QApplication::UnicodeUTF8));
        syncProgressGroupBox->setTitle(QApplication::translate("MEConfig", "Progress", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        syncStatusEdit->setToolTip(QApplication::translate("MEConfig", "Status of the changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        syncStatusLabel->setToolTip(QApplication::translate("MEConfig", "Status of the changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        syncStatusLabel->setText(QApplication::translate("MEConfig", "Status:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        syncProgressBar->setToolTip(QApplication::translate("MEConfig", "Progress of the changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MEConfig", "Copy/Sync", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MEConfig", "Add User Account", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        userPassword2Label->setToolTip(QApplication::translate("MEConfig", "Password for new user", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        userPassword2Label->setText(QApplication::translate("MEConfig", "Confirm user password:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        userPasswordEdit->setToolTip(QApplication::translate("MEConfig", "Enter password for new user", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        userPasswordEdit->setText(QString());
#ifndef QT_NO_TOOLTIP
        userPasswordLabel->setToolTip(QApplication::translate("MEConfig", "Password for new user", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        userPasswordLabel->setText(QApplication::translate("MEConfig", "User password:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        userNameEdit->setToolTip(QApplication::translate("MEConfig", "Enter username of new user", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        userNameEdit->setText(QApplication::translate("MEConfig", "username", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        userNameLabel->setToolTip(QApplication::translate("MEConfig", "Username of new user", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        userNameLabel->setText(QApplication::translate("MEConfig", "User login name:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        userPassword2Edit->setToolTip(QApplication::translate("MEConfig", "Reenter password for new user", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        userPassword2Edit->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MEConfig", "Add User", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_2), QApplication::translate("MEConfig", "Add a new user", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MEConfig", "Delete User Account", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteHomeCheckBox->setToolTip(QApplication::translate("MEConfig", "Also delete the user's home directory", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteHomeCheckBox->setText(QApplication::translate("MEConfig", "Delete user home director&y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteUserLabel->setToolTip(QApplication::translate("MEConfig", "Select user to delete", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteUserLabel->setText(QApplication::translate("MEConfig", "User to delete:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteUserCombo->setToolTip(QApplication::translate("MEConfig", "Select user to delete", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MEConfig", "Delete User", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabToolTip(tabWidget->indexOf(tab_3), QApplication::translate("MEConfig", "Delete a user", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fromUserComboBox_2->setToolTip(QApplication::translate("MEConfig", "Select desktop to copy from", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        deleteUserLabel_2->setToolTip(QApplication::translate("MEConfig", "Select user to delete", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deleteUserLabel_2->setText(QApplication::translate("MEConfig", "User Name:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MEConfig", "Manage Groups", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonOk->setToolTip(QApplication::translate("MEConfig", "Apply any changes then quit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonOk->setText(QApplication::translate("MEConfig", "&OK", 0, QApplication::UnicodeUTF8));
        buttonOk->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        buttonAbout->setToolTip(QApplication::translate("MEConfig", "About this application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonAbout->setText(QApplication::translate("MEConfig", "About...", 0, QApplication::UnicodeUTF8));
        buttonAbout->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        buttonApply->setToolTip(QApplication::translate("MEConfig", "Apply any changes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonApply->setText(QApplication::translate("MEConfig", "&Apply", 0, QApplication::UnicodeUTF8));
        buttonApply->setShortcut(QApplication::translate("MEConfig", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        buttonCancel->setToolTip(QApplication::translate("MEConfig", "Cancel any changes then quit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        buttonCancel->setText(QApplication::translate("MEConfig", "Ca&ncel", 0, QApplication::UnicodeUTF8));
        buttonCancel->setShortcut(QApplication::translate("MEConfig", "Alt+N", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MEConfig: public Ui_MEConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MECONFIG_H
