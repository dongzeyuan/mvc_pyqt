# .SUFFIXES: .ui .py
# QTCC=pyuic5
# QTFLAGS=-o



OBJS = ui_mainwindow.py ui_dialog.py ui_popup.py ui_popup2.py

run: compile_pyqt
	python3 main.py

compile_pyqt: 
	pyuic5 ui_mainwindow.ui -o ui_mainwindow.py
	pyuic5 ui_dialog.ui -o ui_dialog.py
	pyuic5 ui_popup.ui -o ui_popup.py
	pyuic5 ui_popup2.ui -o ui_popup2.py

clean:
	rm -f ${OBJS}
	rm -rf __pycache__