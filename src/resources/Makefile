#for single folder
UI_FILES := $(wildcard *.ui)
PY_FILES := $(UI_FILES:.ui=.py)

PY_FILES_DIR = ../ui
PY_FILES_DIR ?= .

.PHONY: all
all: $(PY_FILES)

%.py: %.ui
	pyuic5 $< --output $(PY_FILES_DIR)/$@

clean:
	cd $(PY_FILES_DIR); \
		rm -f $(PY_FILES)
	# rm -rf __pycache__