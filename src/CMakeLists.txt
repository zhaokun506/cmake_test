cmake_minimum_required(VERSION 3.0)

#项目名是否只设置一个，一个和多个的区别,一般来说一个工程使用一个project
project(mycmake)

#设置在主CMakefiles.txt文件内起作用
#设置运行时目标文件（exe dll）的输出位置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
#设置存档时目标文件（lib a）的输出位置
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

#增加子文件夹，维护CMakeList.txt的文件结构，直接写文件是是指和当前文件同级的目录
add_subdirectory(main)
add_subdirectory(common)
add_subdirectory(app)
