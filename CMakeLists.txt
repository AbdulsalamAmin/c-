cmake_minimum_required(VERSION 3.5)

project(tamrin2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(tamrin2 src/main.cpp
src/circle.cpp src/rectangle.cpp src/square.cpp
include/circle.h include/rectangle.h include/square.h


)

include(GNUInstallDirs)
install(TARGETS tamrin2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
