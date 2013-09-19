#include "CPUWidget.h"
#include "ui_CPUWidget.h"

CPUWidget::CPUWidget(QWidget *parent) :QWidget(parent), ui(new Ui::CPUWidget)
{
    ui->setupUi(this);
    setDefaultDisposition();

    //cw = new ColumnWidget(3, this);
}

CPUWidget::~CPUWidget()
{
    delete ui;
}

void CPUWidget::setDefaultDisposition(void)
{
    QList<int> sizesList;
    int wTotalSize;

    // Vertical Splitter
    wTotalSize = ui->mVSplitter->widget(0)->size().height() + ui->mVSplitter->widget(1)->size().height();

    sizesList.append(wTotalSize*70/100);
    sizesList.append(wTotalSize-wTotalSize*70/100);

    ui->mVSplitter->setSizes(sizesList);

    // Top Horizontal Splitter
    wTotalSize = ui->mTopHSplitter->widget(0)->size().height() + ui->mTopHSplitter->widget(1)->size().height();

    sizesList.append(wTotalSize*70/100);
    sizesList.append(wTotalSize-wTotalSize*70/100);

    ui->mTopHSplitter->setSizes(sizesList);

    // Bottom Horizontal Splitter
    wTotalSize = ui->mBotHSplitter->widget(0)->size().height() + ui->mBotHSplitter->widget(1)->size().height();

    sizesList.append(wTotalSize*70/100);
    sizesList.append(wTotalSize-wTotalSize*70/100);

    ui->mBotHSplitter->setSizes(sizesList);
}


QVBoxLayout* CPUWidget::getTopLeftWidget(void)
{
    return ui->mTopLeftFrameLayout;
}

QVBoxLayout* CPUWidget::getTopRightWidget(void)
{
    return ui->mTopRightFrameLayout;
}

QVBoxLayout* CPUWidget::getBotLeftWidget(void)
{
    return ui->mBotLeftFrameLayout;
}

QVBoxLayout* CPUWidget::getBotRightWidget(void)
{
    return ui->mBotRightFrameLayout;
}
