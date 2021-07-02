file(GLOB SOURCES ./*.cpp)
file(GLOB HEADERS ./*.h)

if(UNIX)
  add_library(surface_mesh STATIC ${SOURCES} ${HEADERS})
elseif(WIN32)
  add_library(surface_mesh STATIC ${SOURCES} ${HEADERS})
endif()

set_target_properties(surface_mesh PROPERTIES VERSION 1.0)

install(TARGETS surface_mesh DESTINATION ${PROJECT_SOURCE_DIR}/lib)

install(FILES ${HEADERS} DESTINATION ${PROJECT_SOURCE_DIR}/include/surface_mesh/)
