# OpenCV in C++
## COMMANDS TO INSTALL OPENCV IN LINUX:
- sudo apt install -y g++ cmake make git libgtk2.0-dev pkg-config 
- git clone "github opencv repository's url 
- mkdir -p build && cd build
- cmake ../opencv
- make -j4
- sudo make install

## LOCATION:
Header files will be located in Home file


### Once installed Create a folder and write a program in .cpp file, Ex: main.cpp

## COMPILATION:
g++ -std=c++11 main.cpp `pkg-config --libs --cflags opencv4` -o output

## EXECUTION:
./output


