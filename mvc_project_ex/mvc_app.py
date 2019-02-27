import sys
from PyQt5.QtWidgets import QApplication
from model.model import Model
from controllers.main_ctrl import MainController
from views.main_view import MainView


# https://stackoverflow.com/questions/26698628/mvc-design-with-qt-designer-and-pyqt-pyside
'''
project/
    mvc_app.py              # main application with App class
    mvc_app_rc.py           # auto-generated resources file (using pyrcc.exe or equivalent)
    controllers/
        main_ctrl.py        # main controller with MainController class
        other_ctrl.py
    model/
        model.py            # model with Model class
    resources/
        mvc_app.qrc         # Qt resources file
        main_view.ui        # Qt designer files
        other_view.ui
        img/
            icon.png
    views/
        main_view.py        # main view with MainView class
        main_view_ui.py     # auto-generated ui file (using pyuic.exe or equivalent)
        other_view.py
        other_view_ui.py
'''

class App(QApplication):
    def __init__(self, sys_argv):
        super(App, self).__init__(sys_argv)
        self.model = Model()
        self.main_controller = MainController(self.model)
        #self.main_view = MainView(self.model, self.main_ctrl)
        self.main_view = MainView(self.model, self.main_controller)
        self.main_view.show()


if __name__ == '__main__':
    app = App(sys.argv)
    sys.exit(app.exec_())

