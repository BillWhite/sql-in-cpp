add_library(sql-in-cpp sql-in-cpp.cpp)
target_include_directories(sql-in-cpp PUBLIC
  $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)
