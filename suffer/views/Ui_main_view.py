# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'd:\DevGim\desert\suffer\resources\main_view.ui'
#
# Created by: PyQt5 UI code generator 5.11.3
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(319, 345)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.gridLayout = QtWidgets.QGridLayout(self.centralwidget)
        self.gridLayout.setObjectName("gridLayout")
        self.verticalLayout = QtWidgets.QVBoxLayout()
        self.verticalLayout.setObjectName("verticalLayout")
        self.spinBox_amount = QtWidgets.QSpinBox(self.centralwidget)
        self.spinBox_amount.setObjectName("spinBox_amount")
        self.verticalLayout.addWidget(self.spinBox_amount)
        self.label_even_odd = QtWidgets.QLabel(self.centralwidget)
        self.label_even_odd.setObjectName("label_even_odd")
        self.verticalLayout.addWidget(self.label_even_odd)
        self.pushButton_manual = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_manual.setObjectName("pushButton_manual")
        self.verticalLayout.addWidget(self.pushButton_manual)
        self.pushButton_start = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_start.setObjectName("pushButton_start")
        self.verticalLayout.addWidget(self.pushButton_start)
        self.pushButton_stop = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_stop.setObjectName("pushButton_stop")
        self.verticalLayout.addWidget(self.pushButton_stop)
        self.pushButton_reset = QtWidgets.QPushButton(self.centralwidget)
        self.pushButton_reset.setObjectName("pushButton_reset")
        self.verticalLayout.addWidget(self.pushButton_reset)
        self.gridLayout.addLayout(self.verticalLayout, 0, 0, 1, 1)
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 319, 22))
        self.menubar.setObjectName("menubar")
        self.menulog = QtWidgets.QMenu(self.menubar)
        self.menulog.setObjectName("menulog")
        self.menuHelp = QtWidgets.QMenu(self.menubar)
        self.menuHelp.setObjectName("menuHelp")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)
        self.actionAbout_Suffer = QtWidgets.QAction(MainWindow)
        self.actionAbout_Suffer.setObjectName("actionAbout_Suffer")
        self.actionShow_Log = QtWidgets.QAction(MainWindow)
        self.actionShow_Log.setObjectName("actionShow_Log")
        self.actionQuit = QtWidgets.QAction(MainWindow)
        self.actionQuit.setObjectName("actionQuit")
        self.menulog.addAction(self.actionShow_Log)
        self.menulog.addSeparator()
        self.menulog.addAction(self.actionQuit)
        self.menuHelp.addAction(self.actionAbout_Suffer)
        self.menubar.addAction(self.menulog.menuAction())
        self.menubar.addAction(self.menuHelp.menuAction())

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.label_even_odd.setText(_translate("MainWindow", "TextLabel"))
        self.pushButton_manual.setText(_translate("MainWindow", "Manual"))
        self.pushButton_start.setText(_translate("MainWindow", "Start"))
        self.pushButton_stop.setText(_translate("MainWindow", "Stop"))
        self.pushButton_reset.setText(_translate("MainWindow", "PushButton"))
        self.menulog.setTitle(_translate("MainWindow", "suffer"))
        self.menuHelp.setTitle(_translate("MainWindow", "Help"))
        self.actionAbout_Suffer.setText(_translate("MainWindow", "About Suffer.."))
        self.actionShow_Log.setText(_translate("MainWindow", "Show Log"))
        self.actionQuit.setText(_translate("MainWindow", "Quit"))

