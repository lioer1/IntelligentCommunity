cmake_minimum_required(VERSION 3.27)
project(IntelligentCommunity3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_PREFIX_PATH "D:/SoftWare/Editor/QT5.14.2/5.14.2/mingw73_32")
# 启用 Qt 的自动处理功能
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# 查找 Qt5 组件 - 关键步骤！
find_package(Qt5 REQUIRED COMPONENTS Core Widgets Sql Gui)

# 查找所有源文件
file(GLOB_RECURSE SOURCES
        "src/*.cpp"
        "src/*/*.cpp"
)

file(GLOB_RECURSE HEADERS
        "src/*.h"
        "src/*/*.h"
)

file(GLOB_RECURSE FORMS
        "src/*.ui"
        "src/*/*.ui"
)
qt5_add_resources(RESOURCES src/resources/resources.qrc)
# 创建可执行文件
add_executable(IntelligentCommunity3
        ${SOURCES}
        ${HEADERS}
        ${FORMS}
        ${RESOURCES}
        src/widget/managermanage.cpp
        src/widget/managermanage.h
        src/widget/managermanage.ui
        src/widget/workerinfo.cpp
        src/widget/workerinfo.h
        src/widget/workerinfo.ui
        src/widget/initsystem.cpp
        src/widget/initsystem.h
        src/widget/initsystem.ui
        src/widget/logindialog.cpp
        src/widget/logindialog.h
        src/widget/logindialog.ui
        src/widget/workermanage.cpp
        src/widget/workermanage.h
        src/widget/workermanage.ui
        src/widget/ownerinfo.cpp
        src/widget/ownerinfo.h
        src/widget/ownerinfo.ui
        src/widget/houseinfo.cpp
        src/widget/houseinfo.h
        src/widget/houseinfo.ui
        src/widget/carstationinfo.cpp
        src/widget/carstationinfo.h
        src/widget/carstationinfo.ui
        src/widget/workerfree.cpp
        src/widget/workerfree.h
        src/widget/workerfree.ui
        src/widget/setowner.cpp
        src/widget/setowner.h
        src/widget/setowner.ui
        src/widget/pricemanage.cpp
        src/widget/pricemanage.h
        src/widget/pricemanage.ui
        src/widget/paymanage.cpp
        src/widget/paymanage.h
        src/widget/paymanage.ui
        src/widget/ownerpayself.cpp
        src/widget/ownerpayself.h
        src/widget/ownerpayself.ui
        src/widget/ownermanage.cpp
        src/widget/ownermanage.h
        src/widget/ownermanage.ui
        src/widget/issueinfo.cpp
        src/widget/issueinfo.h
        src/widget/issueinfo.ui
        src/widget/applycarstation.cpp
        src/widget/applycarstation.h
        src/widget/applycarstation.ui
        src/widget/issueassessment.cpp
        src/widget/issueassessment.h
        src/widget/issueassessment.ui
)

# 包含目录配置
target_include_directories(IntelligentCommunity3 PRIVATE
        ${CMAKE_SOURCE_DIR}/src
        ${CMAKE_CURRENT_BINARY_DIR}
)

# 链接 Qt 库 - 关键步骤！
target_link_libraries(IntelligentCommunity3
        Qt5::Core
        Qt5::Widgets
        Qt5::Sql
        Qt5::Gui
)
if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    foreach (QT_LIB Core Gui Widgets )
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()

