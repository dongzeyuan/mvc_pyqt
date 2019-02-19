@ECHO off
::@ECHO on


REM simple loop
::for %%f in (.\*.ui) do @echo %%f


REM	extract filename
:: FOR %%i IN (./*.UI) DO (
:: 	ECHO filedrive=%%~di 
:: 	ECHO filepath=%%~pi 
:: 	ECHO filename=%%~ni 
:: 	ECHO fileextension=%%~xi 
:: ) 


REM clean. remove *.py
IF "%1" == "clean" (
	FOR %%i IN (./*.py) DO (
		ECHO del %%i
		del %%i
	)
	EXIT
)


REM convert *.ui to *.py
FOR %%i IN (./*.ui) DO (

	REM convert only
	REM pyuic5 %%i --output %%~ni.py

	REM convert with __main
	ECHO python -m PyQt5.uic.pyuic -x %%i -o %%~ni.py
	python -m PyQt5.uic.pyuic -x %%i -o %%~ni.py
) 