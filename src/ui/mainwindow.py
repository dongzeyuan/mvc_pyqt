import sys
from PyQt5.QtWidgets import QMainWindow, QApplication

from src.ui.ui_mainwindow import Ui_MainWindow
# import os
# sys.path.append(os.getcwd())
# from ui_mainwindow import Ui_MainWindow


class SufferMainWindow(QMainWindow, Ui_MainWindow):
    def __init__(self):
        super().__init__()
        self.setupUi(self)

    def slot1(self):
        print(__name__)

    def slot2(self):
        print(__name__)


if __name__ == "__main__":
    app = QApplication(sys.argv)
    ex = Suffer()
    ex.show()
    sys.exit(app.exec_())