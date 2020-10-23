cl.exe /c /EHsc main.cpp

rc.exe blueScreen.rc

link.exe main.obj blueScreen.res user32.lib gdi32.lib /SUBSYSTEM:WINDOWS

main