#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

// #######################
// Menu-Bar
// #######################
void MainWindow::on_action_Beenden_triggered() {
    int ret = QMessageBox::warning(this, "Beenden", "Achtung! Nicht gespeicherte Inhalte gehen beim Beenden verloren.\nWollen Sie das Programm wirklich beenden?", QMessageBox::Yes | QMessageBox::No);

    switch (ret) {
        case QMessageBox::Yes:
            QCoreApplication::quit();
            break;
        case QMessageBox::No:
            break;
    }
}

void MainWindow::on_action_Speichern_unter_triggered()
{

    bool ok;
    QString file = QFileDialog::getSaveFileName(this,"Save image", QCoreApplication::applicationDirPath(), "JPEG (*.JPEG);;PNG (*.png)" );
    if(ok)
    {
        QPixmap pixMap = this->ui->graphicsView->grab();
        pixMap.save(file);
    }
    else
    {
        //User clicked not ok
    }
   // QMessageBox::information(this,"Information",file,QMessageBox::Ok);
}
    //QMessageBox::information(this,"Information","Speichern unter",QMessageBox::Ok);


// #######################
// Color-Buttons
// #######################
void MainWindow::on_tbtnForegroundColor_clicked() {
    QColor color = QColorDialog::getColor();
    QPixmap px(20, 20);
    px.fill(color);
    ui->tbtnForegroundColor->setIcon(px);
    scene->tm->setColor(color, 0);
    //QMessageBox::information(this,"Information",foregroundColor.name(),QMessageBox::Ok);
}

void MainWindow::on_tbtnBackgroundColor_clicked() {
    QColor color = QColorDialog::getColor();
    QPixmap px(20, 20);
    px.fill(color);
    ui->tbtnBackgroundColor->setIcon(px);
    scene->tm->setColor(color, 1);
    //QMessageBox::information(this,"Information",backgroundColor.name(),QMessageBox::Ok);
}

void MainWindow::on_tbtnSwapColors_clicked() {
    //swap colors in global vars
    QColor color = scene->tm->getColor(0);
    scene->tm->setColor(scene->tm->getColor(1), 0);
    scene->tm->setColor(color, 1);

    //swap colors on the color buttons
    QPixmap px(20, 20);
    px.fill(scene->tm->getColor(0));
    ui->tbtnForegroundColor->setIcon(px);
    px.fill(scene->tm->getColor(1));
    ui->tbtnBackgroundColor->setIcon(px);

    //QMessageBox::information(this,"Information",foregroundColor.name(),QMessageBox::Ok);
    //QMessageBox::information(this,"Information",backgroundColor.name(),QMessageBox::Ok);
}

// #######################
// Tool-BUTTONS
// #######################
void MainWindow::on_tbtnLine_clicked() {
    deselectPrevious();
    select(sender(),":/icons/icons/line2.png");
    selectedTool = "line";
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyLineTool()));
    //QMessageBox::information(this,"Information","LineTool is selected",QMessageBox::Ok);

    //Nessel Markus ####
    //##################

}

void MainWindow::on_tbtnStamp_clicked() {
    deselectPrevious();
    select(sender(),":/icons/icons/stamp2.png");
    selectedTool = "stamp";
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyStampTool()));
    //QMessageBox::information(this,"Information","Stamp is selected",QMessageBox::Ok);

    //Lager Benjamin ####
    //###################

}

void MainWindow::on_tbtnBrush_clicked() {
    deselectPrevious();
    select(sender(),":/icons/icons/brush2.png");
    selectedTool = "brush";
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyBrushTool()));
    //QMessageBox::information(this,"Information","Brush is selected",QMessageBox::Ok);

    //Hot Emir ####
    //#############

}


void MainWindow::on_tbtnFill_clicked() {
    deselectPrevious();
    select(sender(),":/icons/icons/fill2.png");
    selectedTool = "fill";
    QPixmap myPixmap = ui->graphicsView->grab();
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyFillingTool()));
    //QMessageBox::information(this,"Information","FillTool is selected",QMessageBox::Ok);

    //Koc Attila ####
    //###############

}

void MainWindow::on_tbtnText_clicked() {
    deselectPrevious();
    select(sender(),":/icons/icons/text2.png");
    selectedTool = "text";
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyTextTool()));
    //QMessageBox::information(this,"Information","TextTool is selected",QMessageBox::Ok);

    //Resch Dominic ####
    //##################

}

void MainWindow::on_tbtnSpray_clicked() {
    deselectPrevious();
    select(sender(),":/icons/icons/spray2.png");
    selectedTool = "spray";
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MySprayTool()));
    //QMessageBox::information(this,"Information","Spray is selected",QMessageBox::Ok);

    //Hübner Daniel ####
    //##################

}

void MainWindow::on_tbtnRect_clicked()
{
    deselectPrevious();
    select(sender(),":/icons/icons/rect2.png");
    selectedTool = "rect";
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyRectangleTool()));

    //Dobiasch Matthias ####
    //######################

}

void MainWindow::on_tbtnEllipse_clicked()
{
    deselectPrevious();
    select(sender(),":/icons/icons/ellipse2.png");
    selectedTool = "ellipse";
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyCircleTool()));

    //Akalin Ibrahim ####
    //###################

}

void MainWindow::on_tbtnEraser_clicked()
{
    deselectPrevious();
    select(sender(),":/icons/icons/eraser2.png");
    selectedTool = "eraser";
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyEraseTool()));

    //Bonengl Bernhard ####
    //#####################

}

void MainWindow::on_tbtnUndo_clicked()
{
    //Kawmi Youssef ####
        //##################
        //Prüft ob es schon ein Eintrag vorhanden ist, sonst stoppt das Programm
        if(scene->items().count() != 0) {
            //Löscht die letzte Eintrag
            scene->removeItem(scene->items().at(0));
        }
}

void MainWindow::on_tbtnFreeze_clicked()
{
    deselectPrevious();
    select(sender(),":/icons/icons/freeze2.png");
    selectedTool = "freeze";

    QPixmap myPixmap = ui->graphicsView->grab();
    scene->tm->setActiveTool(dynamic_cast<ToolBase*>(new MyFreezeTool(myPixmap)));

    //Hemmati Mohammed ####
    //#####################

}

// #######################
// Sonstige Elemente
// #######################
void MainWindow::on_spinBox_particleCount_valueChanged(int particleCount) {
    scene->tm->setMyParticleCount(particleCount);
}

void MainWindow::on_pb_fontDialog_clicked() {
    bool ok;
    QFont font = QFontDialog::getFont(&ok, scene->tm->getFont(), this);
    if(ok)
        scene->tm->setFont(font);
}

void MainWindow::on_spinBox_LineWidth_valueChanged(int arg1) {
    scene->tm->setLineWidth(arg1);
}

void MainWindow::on_action_ffnen_triggered() {
    QString imagePath = QFileDialog::getOpenFileName(this,tr("Open File"), "",tr("JPEG (*.jpg *.jpeg);;PNG (*.png)" ));

    imageObject = new QImage();
    imageObject->load(imagePath);
    image = QPixmap::fromImage(*imageObject);


    //scene = new QGraphicsScene(this);
    scene->addPixmap(image);
    scene->setSceneRect(image.rect());
    ui->graphicsView->setScene(scene);
}

void MainWindow::on_spinBox_stampSize_valueChanged(int arg1) {
    scene->tm->setStampSize(arg1);
}

void MainWindow::on_comboBox_currentIndexChanged(const QString &arg1) {
    if(arg1 == "Dreieck")
        scene->tm->setStamp("triangle");
    else if(arg1 == "Rechteck")
        scene->tm->setStamp("rectangle");
    else if(arg1 == "Stern")
        scene->tm->setStamp("star");
    else if(arg1 == "Pfeil-Links")
        scene->tm->setStamp("arrowLeft");
    else if(arg1 == "Pfeil-Rechts")
        scene->tm->setStamp("arrowRight");
    else if(arg1 == "Pfeil-Oben")
        scene->tm->setStamp("arrowUp");
    else
        scene->tm->setStamp("arrowDown");
}
