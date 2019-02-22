"""
module docstring
"""
import sys
from PyQt5.QtWidgets import QMainWindow

from ui_mainwindow import Ui_MainWindow

from ui_dialog import Ui_Dialog


from PyQt5.QtWidgets import QDialog

"""
class docstring
"""
class SufferMainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

    def slot1(self):
        print(__name__)

    def slot2(self):
        print(__name__)
        self.open_new_dialog()

    def open_new_dialog(self):
        self.nd = NewDialog(self)
        self.nd.show()

"""
class docstring
"""
class NewDialog(QDialog):
    def __init__(self, parent):
        super(NewDialog, self).__init__(parent)


if __name__ == "__main__":
    from PyQt5.QtWidgets import QApplication
    App = QApplication(sys.argv)
    ex = SufferMainWindow()
    ex.show()
    sys.exit(App.exec_())