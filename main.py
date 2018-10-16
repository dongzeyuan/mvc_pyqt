'''
docstring
:parameter {type} : blah blah
:return {type} : blah blah
'''

import sys
from PyQt5.QtWidgets import QApplication
from src.ui.mainwindow import *


APP = QApplication(sys.argv)
MAIN_WINDOW = SufferMainWindow()
MAIN_WINDOW.show()
sys.exit(APP.exec_())

# if __name__ == "__main__":
    # app = QApplication(sys.argv)
    # ex = MyWindow()
    # ex.show()
    # sys.exit(app.exec_())



# from PyQt5.QtWidgets import QApplication, QLabel

# APP = QApplication([])
# LABEL = QLabel('ui ui ui ui!')
# LABEL.show()
# APP.exec_()




# class XDialog(QDialog, ui.Ui_Dialog):
#     def __init__(self):
#         QDialog.__init__(self)
#         self.setupUi(self)

#     # @pyqtSlot()
#     def slot1(self):
#         self.label.setText("1st button")
#     # @pyqtSlot()
#     def slot2(self):
#         self.label.setText("2nd button")
#     # @pyqtSlot()
#     def slot3(self):
#         self.label.setText("3rd button")

# app = QApplication(sys.argv)
# dlg = XDialog()
# dlg.show()
# app.exec()
