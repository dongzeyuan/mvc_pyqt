from PyQt5.QtWidgets import QApplication, QDialog

# APP = QApplication([])
# LABEL = QLabel('ui ui ui ui!')
# LABEL.show()
# APP.exec_()

# from PyQt5.QtGui import *

import ui
import sys


class XDialog(QDialog, ui.Ui_Dialog):
    def __init__(self):
        QDialog.__init__(self)
        self.setupUi(self)

    # @pyqtSlot()
    def slot1(self):
        self.label.setText("1st button")
    # @pyqtSlot()
    def slot2(self):
        self.label.setText("2nd button")
    # @pyqtSlot()
    def slot3(self):
        self.label.setText("3rd button")

app = QApplication(sys.argv)
dlg = XDialog()
dlg.show()
app.exec()
