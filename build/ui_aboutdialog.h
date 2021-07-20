/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *CCRcoin;
    QLabel *m_aboutLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_closeButton;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(550, 400);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        AboutDialog->setMinimumSize(QSize(550, 400));
        AboutDialog->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout->setRowWrapPolicy(QFormLayout::WrapLongRows);
        CCRcoin = new QLabel(AboutDialog);
        CCRcoin->setObjectName(QStringLiteral("CCRcoin"));
        CCRcoin->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(CCRcoin->sizePolicy().hasHeightForWidth());
        CCRcoin->setSizePolicy(sizePolicy1);
        CCRcoin->setMinimumSize(QSize(64, 64));
        CCRcoin->setMaximumSize(QSize(64, 64));
        CCRcoin->setBaseSize(QSize(64, 64));
        CCRcoin->setPixmap(QPixmap(QString::fromUtf8(":/images/cryptonote")));
        CCRcoin->setScaledContents(true);
        CCRcoin->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(0, QFormLayout::LabelRole, CCRcoin);

        m_aboutLabel = new QLabel(AboutDialog);
        m_aboutLabel->setObjectName(QStringLiteral("m_aboutLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_aboutLabel->sizePolicy().hasHeightForWidth());
        m_aboutLabel->setSizePolicy(sizePolicy2);
        m_aboutLabel->setMinimumSize(QSize(0, 250));
        m_aboutLabel->setTextFormat(Qt::RichText);
        m_aboutLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        m_aboutLabel->setWordWrap(true);
        m_aboutLabel->setOpenExternalLinks(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, m_aboutLabel);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_closeButton = new QPushButton(AboutDialog);
        m_closeButton->setObjectName(QStringLiteral("m_closeButton"));

        horizontalLayout->addWidget(m_closeButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(m_closeButton, SIGNAL(clicked()), AboutDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About %1", Q_NULLPTR));
        CCRcoin->setText(QString());
        m_aboutLabel->setText(QApplication::translate("AboutDialog", "<html><head/><body><p>Concord v. %1</p><p>This is the next generation anonymous cryptocurrency based on CryptoNote.</p><p>Copyright (c) 2012-2015. CryptoNote Developers</p><p>Copyright (c) 2012-2016. Bytecoin Developers</p><p>Copyright (c) 2015-2016. DigitalNote Developers</p><p>Copyright (c) 2016-2018. Karbo (Karbowanec) Developers</p><p>Copyright (c) 2018-2019. Concord Developers</p><p><a href=\"http://opensource.org/licenses/MIT\"><span style=\" text-decoration: underline; color:#0000ff;\">http://opensource.org/licenses/MIT</span></a></p><p><a href=\"https://cryptonote.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">https://cryptonote.org/</span></a></p><p><a href=\"http://concord.cash\"><span style=\" text-decoration: underline; color:#0000ff;\">http://concord.cash/</span></a></p><p>THE SOFTWARE IS PROVIDED &quot;AS IS&quot;, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEME"
                        "NT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.</p></body></html>", Q_NULLPTR));
        m_closeButton->setText(QApplication::translate("AboutDialog", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
