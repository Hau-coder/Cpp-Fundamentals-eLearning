:: Folder where the built objects are stored
mkdir build

:: Build and link main.cpp
cl /EHsc /Fobuild/ /Febuild/ /W4 main.cpp

:: You can not run the program at build\main.exe
