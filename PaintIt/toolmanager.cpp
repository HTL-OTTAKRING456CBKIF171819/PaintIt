#include "toolmanager.h"

ToolManager::ToolManager(MyGraphicsScene *scene) : scene(scene) {
    myToolProperties = new MyToolProperties();
    activeTool = nullptr;
}

void ToolManager::setMyParticleCount(int particleCount) {
    myToolProperties->myParticleCount = particleCount;
}

void ToolManager::setActiveTool(ToolBase *tool) {
    delete activeTool;
    activeTool = tool;
}

void ToolManager::setColor(QColor color, int which) {
    (which == 0) ? myToolProperties->myPrimaryPen.setColor(color) : myToolProperties->mySecondaryPen.setColor(color);
}

QFont ToolManager::getFont() {
    return myToolProperties->myFont;
}

int ToolManager::getStampSize() {
    return myToolProperties->myStampSize;
}

int ToolManager::getMyParticleCount() {
    return myToolProperties->myParticleCount;
}

void ToolManager::setFont(QFont font) {
    myToolProperties->myFont = font;
}

QColor ToolManager::getColor(int which) {
    return (which == 0) ? myToolProperties->myPrimaryPen.color() : myToolProperties->mySecondaryPen.color();
}

void ToolManager::setStampSize(int stampSize) {
    myToolProperties->myStampSize = stampSize;
}

void ToolManager::mousePressed(QGraphicsSceneMouseEvent *event) {
    if(activeTool == nullptr) return;

    QGraphicsPathItem* newItem = (QGraphicsPathItem*)activeTool->mousePressed(event, myToolProperties);
    if(newItem == nullptr) return;

    scene->addItem(newItem);
}

void ToolManager::mouseReleased(QGraphicsSceneMouseEvent *event) {
    if(activeTool == nullptr) return;

    activeTool->mouseReleased(event);
}

void ToolManager::setLineWidth(int Width)
{
    myToolProperties->myLineWidth = Width;
}

int ToolManager::getLineWidth()
{
    return myToolProperties->myLineWidth;
}

void ToolManager::setStamp(QString Stampselect)
{
    myToolProperties->myStamp = Stampselect;
}

void ToolManager::mouseMoved(QGraphicsSceneMouseEvent *event) {
    if(activeTool == nullptr) return;

    activeTool->mouseMoved(event);
}
