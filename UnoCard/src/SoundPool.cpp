////////////////////////////////////////////////////////////////////////////////
//
// Uno Card Game 4 PC
// Author: Hikari Toyama
// Compile Environment: Qt 5 with Qt Creator
// COPYRIGHT HIKARI TOYAMA, 1992-2022. ALL RIGHTS RESERVED.
//
////////////////////////////////////////////////////////////////////////////////

#include <QUrl>
#include <QObject>
#include <QString>
#include <QThread>
#include <QSoundEffect>
#include "include/SoundPool.h"

SoundPool::SoundPool(QObject* parent) : QObject(parent) {
    sndUno = new QSoundEffect;
    sndWin = new QSoundEffect;
    sndLose = new QSoundEffect;
    sndDraw = new QSoundEffect;
    sndPlay = new QSoundEffect;
    sndUno->setSource(QUrl::fromLocalFile("resource/snd_uno.wav"));
    sndWin->setSource(QUrl::fromLocalFile("resource/snd_win.wav"));
    sndLose->setSource(QUrl::fromLocalFile("resource/snd_lose.wav"));
    sndDraw->setSource(QUrl::fromLocalFile("resource/snd_draw.wav"));
    sndPlay->setSource(QUrl::fromLocalFile("resource/snd_play.wav"));
    sndUno->moveToThread(&thread);
    sndWin->moveToThread(&thread);
    sndLose->moveToThread(&thread);
    sndDraw->moveToThread(&thread);
    sndPlay->moveToThread(&thread);
    connect(this, SIGNAL(playSndUno()), sndUno, SLOT(play()));
    connect(this, SIGNAL(playSndWin()), sndWin, SLOT(play()));
    connect(this, SIGNAL(playSndLose()), sndLose, SLOT(play()));
    connect(this, SIGNAL(playSndDraw()), sndDraw, SLOT(play()));
    connect(this, SIGNAL(playSndPlay()), sndPlay, SLOT(play()));
    enabled = true;
    thread.start();
} // SoundPool(QObject*) (Class Constructor)

void SoundPool::setEnabled(bool enabled) {
    this->enabled = enabled;
} // setEnabled(bool)

bool SoundPool::isEnabled() {
    return enabled;
} // isEnabled()

void SoundPool::play(int which) {
    if (enabled) {
        switch (which) {
        case SND_UNO:
            emit this->playSndUno();
            break; // case SND_UNO

        case SND_WIN:
            emit this->playSndWin();
            break; // case SND_WIN

        case SND_LOSE:
            emit this->playSndLose();
            break; // case SND_LOSE

        case SND_DRAW:
            emit this->playSndDraw();
            break; // case SND_DRAW

        case SND_PLAY:
            emit this->playSndPlay();
            break; // case SND_PLAY

        default:
            break; // default
        } // switch (which)
    } // if (enabled)
} // play(int)

SoundPool::~SoundPool() {
    sndPlay->deleteLater();
    sndDraw->deleteLater();
    sndLose->deleteLater();
    sndWin->deleteLater();
    sndUno->deleteLater();
    if (thread.isRunning()) {
        thread.terminate();
        thread.deleteLater();
        thread.wait();
    } // if (thread.isRunning())
} // ~SoundPool() (Class Destructor)

// E.O.F