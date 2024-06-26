  file( GLOB Sources "*.cpp" 
    "communicators/*cpp"
  )
 
add_library( my_example_library SHARED ${Sources})

find_package(CURL REQUIRED)
target_link_libraries(my_example_library CURL::libcurl)
  
target_include_directories( my_example_library PUBLIC ${PROJECT_SOURCE_DIR}/include )
target_include_directories( my_example_library PRIVATE ${PROJECT_SOURCE_DIR}/src )
