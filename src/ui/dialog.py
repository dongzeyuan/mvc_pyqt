import sys
from PyQt5.QtWidgets import QDialog

from ui_dialog import Ui_Dialog


class NewDialog(QDialog, Ui_Dialog):
    def __init__(self):
        QDialog.__init__(self)
        self.setupUi(self)



if __name__ == "__main__":
    from PyQt5.QtWidgets import QApplication
    app = QApplication(sys.argv)
    dlg = NewDialog()
    dlg.show()
    sys.exit(app.exec_())