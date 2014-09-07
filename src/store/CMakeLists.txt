
cmake_minimum_required(VERSION 2.8.12.2)

project (store)

find_package(Qt5Sql REQUIRED)


set ( SRC
        Store.cpp
    )

set ( INC
        Store.h
    )


add_library( Store ${INC} ${SRC} )

target_link_libraries(Store Qt5::Sql)
