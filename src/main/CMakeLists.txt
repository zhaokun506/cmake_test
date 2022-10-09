#用指定的源文件为项目生成可执行文件,一般一个程序用一个
#(生成的目标 源文件) 目标可以是exe/也可以是lib
add_executable(mycmake main.cc)

#
message(${CMAKE_SOURCE_DIR})
message(${PROJECT_SOURCE_DIR})

#路径表示的注意事项： 
#CMAKE_SOURCE_DIR 表示顶级CMakeLists.txt的文件夹。
#PROJECT_SOURCE_DIR 指的是CMakeLists.txt的文件夹，其中包含最新的 project()命令。
#如果设置了该目录，那么在程序中include则不需要写基于工程文件的相对路径？？？

#指定目标的头文件搜索路径，
#此处包含的../src/文件目录，程序中使用的include 要以此目录为基础书写
target_include_directories(mycmake PUBLIC
                        ${PROJECT_SOURCE_DIR} 
)

message(包含的头文件路径为 ${PROJECT_SOURCE_DIR})
message(包含的头文件路径为 ${PROJECT_SOURCE_DIR}/app/do_sub)

#为目标连接库 add sub后面是库名称
target_link_libraries(mycmake PUBLIC
    add
    sub
    do_add
    do_sub
)
