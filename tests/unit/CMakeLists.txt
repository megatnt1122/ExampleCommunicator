foreach(PROG
    test_communicator_factory
)

  include_directories(${PROJECT_SOURCE_DIR}/src)
  file(GLOB ${PROG}_SOURCES ${PROG}.cpp)
  add_executable(unit_${PROG} ${${PROG}_SOURCES})
  target_link_libraries(unit_${PROG} PRIVATE ${BOOST_LIBRARIES} my_example_library) 
  
  add_test(unit_${PROG} unit_${PROG})
   
endforeach(PROG)

