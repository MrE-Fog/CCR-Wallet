/********************************************************************************
** Form generated from reading UI file 'accountframe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTFRAME_H
#define UI_ACCOUNTFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AccountFrame
{
public:
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *m_addressLabel;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *m_copyButton;
    QToolButton *m_qrButton;
    QSpacerItem *horizontalSpacer;
    QLabel *totalBalance;
    QLabel *label_2;
    QLabel *addressStatusLabel;

    void setupUi(QFrame *AccountFrame)
    {
        if (AccountFrame->objectName().isEmpty())
            AccountFrame->setObjectName(QStringLiteral("AccountFrame"));
        AccountFrame->resize(800, 71);
        AccountFrame->setMinimumSize(QSize(0, 70));
        AccountFrame->setMaximumSize(QSize(16777215, 71));
        AccountFrame->setFrameShape(QFrame::StyledPanel);
        AccountFrame->setFrameShadow(QFrame::Plain);
        horizontalLayout_3 = new QHBoxLayout(AccountFrame);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 0, 5, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, 0, -1);
        label = new QLabel(AccountFrame);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 20));
        label->setMaximumSize(QSize(16777215, 20));
        label->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label->setMargin(0);
        label->setIndent(0);

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        m_addressLabel = new QLabel(AccountFrame);
        m_addressLabel->setObjectName(QStringLiteral("m_addressLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_addressLabel->sizePolicy().hasHeightForWidth());
        m_addressLabel->setSizePolicy(sizePolicy);
        m_addressLabel->setMinimumSize(QSize(100, 22));
        m_addressLabel->setMaximumSize(QSize(16777215, 22));
        m_addressLabel->setBaseSize(QSize(0, 22));
        m_addressLabel->setCursor(QCursor(Qt::IBeamCursor));
        m_addressLabel->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        m_addressLabel->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(m_addressLabel);

        horizontalSpacer_2 = new QSpacerItem(5, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        m_copyButton = new QToolButton(AccountFrame);
        m_copyButton->setObjectName(QStringLiteral("m_copyButton"));
        m_copyButton->setMinimumSize(QSize(0, 25));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/copy"), QSize(), QIcon::Normal, QIcon::Off);
        m_copyButton->setIcon(icon);

        horizontalLayout->addWidget(m_copyButton);

        m_qrButton = new QToolButton(AccountFrame);
        m_qrButton->setObjectName(QStringLiteral("m_qrButton"));
        m_qrButton->setMinimumSize(QSize(0, 25));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/qrcode"), QSize(), QIcon::Normal, QIcon::Off);
        m_qrButton->setIcon(icon1);

        horizontalLayout->addWidget(m_qrButton);

        horizontalSpacer = new QSpacerItem(0, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        totalBalance = new QLabel(AccountFrame);
        totalBalance->setObjectName(QStringLiteral("totalBalance"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(totalBalance->sizePolicy().hasHeightForWidth());
        totalBalance->setSizePolicy(sizePolicy1);
        totalBalance->setMaximumSize(QSize(16777215, 24));
        QFont font;
        font.setPointSize(13);
        font.setBold(false);
        font.setWeight(50);
        totalBalance->setFont(font);
        totalBalance->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        totalBalance->setMargin(0);
        totalBalance->setTextInteractionFlags(Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(totalBalance);

        label_2 = new QLabel(AccountFrame);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMinimumSize(QSize(30, 20));
        label_2->setMaximumSize(QSize(16777215, 20));
        label_2->setBaseSize(QSize(-1, 20));
        label_2->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        label_2->setMargin(0);

        horizontalLayout->addWidget(label_2);


        verticalLayout_3->addLayout(horizontalLayout);

        addressStatusLabel = new QLabel(AccountFrame);
        addressStatusLabel->setObjectName(QStringLiteral("addressStatusLabel"));
        addressStatusLabel->setMinimumSize(QSize(0, 20));
        addressStatusLabel->setMaximumSize(QSize(16777215, 20));
        addressStatusLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        addressStatusLabel->setMargin(0);
        addressStatusLabel->setIndent(0);

        verticalLayout_3->addWidget(addressStatusLabel);


        horizontalLayout_3->addLayout(verticalLayout_3);


        retranslateUi(AccountFrame);
        QObject::connect(m_copyButton, SIGNAL(clicked()), AccountFrame, SLOT(copyAddress()));
        QObject::connect(m_qrButton, SIGNAL(clicked()), AccountFrame, SLOT(showQR()));

        QMetaObject::connectSlotsByName(AccountFrame);
    } // setupUi

    void retranslateUi(QFrame *AccountFrame)
    {
        AccountFrame->setWindowTitle(QApplication::translate("AccountFrame", "Frame", Q_NULLPTR));
        label->setText(QApplication::translate("AccountFrame", "Your account:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_addressLabel->setToolTip(QApplication::translate("AccountFrame", "Your receiving address", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        m_addressLabel->setWhatsThis(QApplication::translate("AccountFrame", "This is your account address", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        m_addressLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        m_copyButton->setToolTip(QApplication::translate("AccountFrame", "Copy address", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        m_copyButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        m_copyButton->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        m_copyButton->setText(QApplication::translate("AccountFrame", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        m_qrButton->setToolTip(QApplication::translate("AccountFrame", "Show QR code", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        m_qrButton->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        m_qrButton->setText(QApplication::translate("AccountFrame", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        totalBalance->setToolTip(QApplication::translate("AccountFrame", "Total balance", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        totalBalance->setStatusTip(QApplication::translate("AccountFrame", "Total balance", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        totalBalance->setText(QApplication::translate("AccountFrame", "0.00", Q_NULLPTR));
        label_2->setText(QApplication::translate("AccountFrame", " ccr", Q_NULLPTR));
        addressStatusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AccountFrame: public Ui_AccountFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTFRAME_H
