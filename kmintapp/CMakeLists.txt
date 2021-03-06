# Author: Jeroen de Haas <jah.dehaas@avans.nl>
cmake_minimum_required(VERSION 3.1.3)
project(kmintapp)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(MSVC)
    add_compile_options(/W3)
else()
    add_compile_options(-Wall -Wpedantic)
    set(CMAKE_CXX_FLAGS_DEBUG "-g")
endif()

  
add_executable(kmintapp
  src/main.cpp
  src/hare.cpp
  src/cow.cpp
  src/gun.cpp
  src/pill.cpp
  src/rectangle_drawable.cpp
  src/first_map.cpp
  src/dijkstra.cpp
  src/aStar.cpp
  src/states/Cow/CowWanderState.cpp
  )

target_compile_features(kmintapp PUBLIC cxx_std_17)
target_link_libraries(kmintapp PRIVATE kmint)
target_include_directories(kmintapp PRIVATE 
    src
	includes
	)

add_custom_target(resources ALL
  COMMAND ${CMAKE_COMMAND} -E copy_directory "${CMAKE_CURRENT_SOURCE_DIR}/resources" "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/resources")
