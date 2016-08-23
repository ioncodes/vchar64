/****************************************************************************
Copyright 2016 Ricardo Quesada

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
****************************************************************************/

#pragma once

#include <QObject>

class Preferences: public QObject
{
    Q_OBJECT

public:
    static Preferences& getInstance();

    Preferences(Preferences const&)     = delete;
    void operator=(Preferences const&)  = delete;

    void setColorGrid(const QColor& color);
    QColor getColorGrid() const;

    void setSaveSession(bool enableIt);
    bool getSaveSession() const;

    void setCheckUpdates(bool enableIt);
    bool getCheckUpdates() const;

private:
    Preferences();
    ~Preferences();
};
