TARGET = main
HEADER1 = runlevel
HEADER2 = delay
HEADER3 = appx
HEADER4 = edge
HEADER5 = OneDrive

default:
	gcc -O3 -v -Wpedantic -Wall -Wextra -Wwrite-strings --extra-warnings -g3 -o $(TARGET).exe $(TARGET).c $(HEADER1).c $(HEADER2).c $(HEADER3).c $(HEADER4).c $(HEADER5).c
	 
run: $(TARGET).exe
	powershell -NoProfile -Command "Clear-Host"
	powershell -NoProfile -Command "& {.\$(TARGET).exe}" -v

clean: $(TARGET).exe
	powershell -NoProfile -Command "Remove-Item .\$(TARGET).exe"
