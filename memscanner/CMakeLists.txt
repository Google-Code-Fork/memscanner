include(${QT_USE_FILE})

add_subdirectory(pList)


set(memscanner_SRCS
    main.cpp
    mainwindow.cpp
    ranges.cpp
    themes.cpp
    scan.cpp
)



set(memscanner_UIS
    mainwindow.ui
    themes.ui
)

QT4_WRAP_UI(memscanner_UIS_H ${memscanner_UIS})



set(memscanner_MOC_HDRS
    mainwindow.h
    themes.h
    scan.h
)

QT4_WRAP_CPP(memscanner_MOC_SRCS ${memscanner_MOC_HDRS})



set(memscanner_RCS
    resources.qrc
)

QT4_ADD_RESOURCES(memscanner_RC_SRCS ${memscanner_RCS})



add_executable(memscanner ${memscanner_SRCS} ${memscanner_UIS_H} ${memscanner_MOC_SRCS} ${memscanner_RC_SRCS})

target_link_libraries(memscanner ${QT_LIBRARIES} pList)



install(
    TARGETS memscanner
    RUNTIME DESTINATION /usr/bin
)

