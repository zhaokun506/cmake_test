#target_include_directories(target_so PUBLIC /usr1/dirs)
#INTERFACE：target对应的头文件使用
#PRIVATE：target对应的源文件使用
#PUBLIC：target对应的头文件、源文件都使用

#此处已经在

add_library(do_sub do_sub.cc)

target_include_directories(do_sub PUBLIC
                            ${PROJECT_SOURCE_DIR}
)                      
target_link_libraries(do_sub PUBLIC
    sub
)