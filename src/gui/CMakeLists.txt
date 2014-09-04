
cmake_minimum_required(VERSION 2.8)

project (TimeReporterQT)


# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Tell CMake to run moc when necessary:
set(CMAKE_AUTOMOC ON)

# Widgets finds its own dependencies.
find_package(Qt5Widgets REQUIRED)


set ( SRC
        main.cpp
        mainwindow.cpp
        timerecordconrol.cpp
	)

set ( INC
        mainwindow.h
        timerecordconrol.h
	)

QT5_WRAP_UI(UIS_HDRS
		mainwindow.ui
	)


add_executable(TimeReporter ${INC} ${SRC} ${UIS_HDRS} )

target_link_libraries(TimeReporter Qt5::Widgets)



