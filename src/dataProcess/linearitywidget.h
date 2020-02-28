#ifndef LINEARITYWIDGET_H
#define LINEARITYWIDGET_H

#include <QLabel>
#include <QPushButton>
#include "processBase.h"

class LinearityWidget: public TProcessBase
{
    Q_OBJECT
public:
    explicit LinearityWidget();
    ~LinearityWidget(){}

    QLabel *correctionFunctionLabel;
    QPushButton *calculateButton;

    void createWidgets();
    void createConnections();
    void createPanel();
private slots:
    void onCalculateButtonPushed();
};

#endif // LINEARITYWIDGET_H
