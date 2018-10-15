import sys
from PyQt5.QtWidgets import QApplication, QDialog
from dialog import XDialog

APP = QApplication(sys.argv)

dlg = XDialog()
dlg.show()

sys.exit(APP.exec_())


