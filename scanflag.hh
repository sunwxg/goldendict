#ifndef SCAN_FLAG_H
#define SCAN_FLAG_H

#include "config.hh"
#include <QMainWindow>
#include <QTimer>
#include "ui_scanflag.h"

#ifdef HAVE_X11

class ScanFlag : public QMainWindow
{
  Q_OBJECT

public:
  ScanFlag( QWidget *parent );

  ~ScanFlag();

signals:
  void showScanPopup ();

private:
  Ui::ScanFlag ui;
  QTimer hideTimer;

private slots:
  void showScanFlag();
  void pushButtonClicked();
  void hideWindow();

};

#endif // HAVE_X11

#endif // SCAN_FLAG_H
