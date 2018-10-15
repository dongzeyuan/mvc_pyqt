from PyQt5.QtWidgets import QDialog
import ui_dialog

class XDialog(QDialog, ui_dialog.Ui_Dialog):
    def __init__(self):
        QDialog.__init__(self)
        self.setupUi(self)

    # @pyqtSlot()
    def slot1(self):
        self.label.setText("1st button")
    # @pyqtSlot()
    def slot2(self):
        self.label.setText("2nd button")
