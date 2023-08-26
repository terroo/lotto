cmake_minimum_required(VERSION 3.10)
set_property(GLOBAL PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)

project(Lotto
  LANGUAGES CXX
  VERSION 0.0.1
)

add_compile_options(-Wall -Wextra -Wpedantic -O2)

set (CMAKE_CXX_STANDARD 17)
set(SOURCES src/main.cpp src/lotto.cpp)
add_executable(lotto ${SOURCES})

install(FILES ${CMAKE_CURRENT_LIST_DIR}/scripts/autolotto DESTINATION /etc/bash_completion.d)
install(TARGETS lotto DESTINATION bin)


add_custom_target("uninstall" COMMENT "Uninstall installed files")
add_custom_command(
    TARGET "uninstall"
    POST_BUILD
    COMMENT "Uninstall files with install_manifest.txt"
    COMMAND xargs rm -vf < install_manifest.txt || echo Nothing in
            install_manifest.txt to be uninstalled!
)
