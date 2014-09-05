
cmake_minimum_required(VERSION 2.8)

project (store)



set ( SRC
        Store.cpp
    )

set ( INC
        Store.h
    )


add_library( Store ${INC} ${SRC} )
