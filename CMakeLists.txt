cmake_minimum_required(VERSION 3.22)

project(QtTemplate)

find_package(Qt5 COMPONENTS Core Network Svg Qml Quick QuickWidgets REQUIRED)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(LIBS Qt5::Core Qt5::Widgets Qt5::Svg Qt5::Qml Qt5::Quick Qt5::QuickWidgets )

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} WIN32 main.cpp ${RC_FILE} ${RESOURCES})
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Widgets)