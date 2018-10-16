UI_FILES_DIR = src/resources
PY_FILES_DIR = src/ui

# UI_FILES := ui_dialog.ui ui_popup.ui ui_mainwindow.ui
UI_DIR := resources

PYUIC = pyuic5


################################################################################


puicompile:
	make -C $(UI_FILES_DIR)

puicompile_clean:
	make -C $(UI_FILES_DIR) clean






all: puicompile
	@echo 0000
	echo $(RESOURCE_DIR)
	@echo 1111
	@echo 2222
	echo $(UIFILES)
	@echo 33333
	echo $(UI_DIR)/%.ui
	echo $(COMPILED_DIR)
	echo $(COMPILED_UI)

clean: puicompile_clean
	@echo "project clean"
# COMPILED_UI = $(UI_FILES:%.ui=$(COMPILED_DIR)/ui_%.py)
# COMPILED_RESOURCES = $(RESOURCES:%.qrc=$(COMPILED_DIR)/%_rc.py)


# run: compile_pyqt
# 	python3 main.py

# .PHONY: all
# all: $(PYFILES)

# %.py: %.ui
# 	pyuic5 $< --output $@

# clean:
# 	rm -f ${OBJS}
# 	rm -rf __pycache__