cmake_minimum_required(VERSION 2.8)

project(BinaryDescriptors)

find_package (OpenCV REQUIRED)
find_package (VISP REQUIRED)

set(${PROJECT_NAME}_CPP
  main.cpp
	function_opencv.cpp
)
set(${PROJET_NAME}_H
	function_opencv.h
)

add_executable(${PROJECT_NAME}
	${${PROJECT_NAME}_CPP}
	${${PROJECT_NAME}_H}
)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} ${VISP_LIBRARIES})
