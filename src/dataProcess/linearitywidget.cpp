#include "linearitywidget.h"
#include <QGridLayout>

LinearityWidget::LinearityWidget() : TProcessBase()
{
    createWidgets();
    createPanel();
    createConnections();
}

void LinearityWidget::createWidgets()
{
    calculateButton = new QPushButton("Calculate");
    correctionFunctionLabel = new QLabel("label");
    correctionFunctionLabel->setText("Label 2");
    correctionFunctionLabel->setTextInteractionFlags(Qt::TextSelectableByMouse);
}


void LinearityWidget::createPanel()
{
    QGridLayout *mainLayout = new QGridLayout(this);
    mainLayout->addWidget(this->correctionFunctionLabel, 0, 0, 1, 1);
    mainLayout->addWidget(this->calculateButton, 0, 1, 1, 1);
}

void LinearityWidget::createConnections()
{
    connect(calculateButton, SIGNAL(clicked(bool)), this, SLOT(onCalculateButtonPushed()));
}

void LinearityWidget::onCalculateButtonPushed()
{
    correctionFunctionLabel->setText("pushed!");
}
