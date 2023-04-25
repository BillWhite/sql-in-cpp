add_executable(tests tests.cpp sql-in-cpp_t.cpp)
target_link_libraries(tests PUBLIC sql-in-cpp Catch2::Catch2)

# allow user to run tests with `make test` or `ctest`
catch_discover_tests(tests)
