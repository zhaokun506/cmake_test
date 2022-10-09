add_library(do_add do_add.cc)

target_include_directories(do_add PUBLIC
                            ${PROJECT_SOURCE_DIR}
)                      
target_link_libraries(do_add PUBLIC
    add
)