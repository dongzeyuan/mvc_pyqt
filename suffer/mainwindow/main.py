import sys
from PyQt5.QtWidgets import QApplication, QDialog
from ui_dialog import Ui_Dialog

APP = QApplication(sys.argv)
WINDOW = QDialog()
UI = Ui_Dialog()
UI.setupUi(WINDOW)

WINDOW.show()
sys.exit(APP.exec_())
