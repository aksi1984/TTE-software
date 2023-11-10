#ifndef SCENARIOEDITOR_H
#define SCENARIOEDITOR_H

#include <QDialog>
#include <QTimer>

#include "step.hpp"

namespace Ui {
class ScenarioEditor;
}

class ScenarioEditor : public QDialog
{
    Q_OBJECT

public:
    explicit ScenarioEditor(QWidget *parent = nullptr);
    ~ScenarioEditor();

    QString getScenarioTitle() const;

private slots:
    void addStep();
    void removeStep();
    void updateButtonsState();

private:
    void setConnections();

    Ui::ScenarioEditor *ui;

    QTimer timer_;
};

#endif // SCENARIOEDITOR_H