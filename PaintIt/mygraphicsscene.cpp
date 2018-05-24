#include "mygraphicsscene.h"

MyGraphicsScene::MyGraphicsScene(QMainWindow *_parent, QGraphicsView *_graphicsView) {
    setParent(_parent);
    setSceneRect(0, 0, _graphicsView->contentsRect().width() - 2, _graphicsView->contentsRect().height() - 2);
    tm = new ToolManager(this);
    tm->setActiveTool(dynamic_cast<ToolBase*>(new MyBrushTool()));
}

void MyGraphicsScene::setActiveTool(ToolBase *tool) {
    tm->setActiveTool(tool);
}

void MyGraphicsScene::setColor(QColor color, int which) {
    tm->setColor(color, which);
}

void MyGraphicsScene::setPenWidth(int width) {
    tm->setPenWidth(width);
}

void MyGraphicsScene::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    tm->mousePressed(event);
}

void MyGraphicsScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    tm->mouseMoved(event);
}
