  file( GLOB Sources "*.cpp" 
    "communicators/*cpp"
  )
 
add_library( my_example_library SHARED ${Sources})
  
target_include_directories( my_example_library PUBLIC ${PROJECT_SOURCE_DIR}/include )
target_include_directories( my_example_library PRIVATE ${PROJECT_SOURCE_DIR}/src )
