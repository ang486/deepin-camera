#ifndef MYSCENE_H
#define MYSCENE_H

#include <QGraphicsScene>
#include <QWindow>
#include <QObject>

class MyScene : public QGraphicsScene
{
    Q_OBJECT
public:
    explicit MyScene(QObject *parent = 0);

    QString getSceneName();
    void setSceneName(QString name);

private:
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

signals:
    void selectEff(QString name);

public slots:

private:
    QString  sceneName;
};

#endif // MYSCENE_H
