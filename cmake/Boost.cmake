
function(find_boost_library)
  if ( DEFINED ENV{BOOST_INC} AND DEFINED ENV{BOOST_LIB} )
    message( "BOOST_INC:" $ENV{BOOST_INC} )
    message( "BOOST_LIB:" $ENV{BOOST_LIB} )
    include_directories( $ENV{BOOST_INC} )
    link_directories( $ENV{BOOST_LIB} )
  else()
    if(NOT BUILD_SHARED_LIBS)
      set(Boost_USE_STATIC_LIBS ON)
    endif()
    find_package(Boost ${LOCAL_BOOST_VERSION} REQUIRED COMPONENTS date_time unit_test_framework system filesystem program_options)

    include_directories( ${Boost_INCLUDE_PATH} )
    get_target_property(Boost_DATE_TIME_LIBRARY_PATH ${Boost_DATE_TIME_LIBRARY} LOCATION)
    get_target_property(Boost_UNIT_TEST_FRAMEWORK_LIBRARY_PATH ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} LOCATION)
    get_target_property(Boost_SYSTEM_LIBRARY_PATH ${Boost_SYSTEM_LIBRARY} LOCATION)
    get_target_property(Boost_FILESYSTEM_LIBRARY_PATH ${Boost_FILESYSTEM_LIBRARY} LOCATION)
    get_target_property(Boost_PROGRAM_OPTIONS_LIBRARY_PATH ${Boost_PROGRAM_OPTIONS_LIBRARY} LOCATION)

    set(BOOST_LIBRARIES "${Boost_LIBRARIES}" PARENT_SCOPE)
  endif()

endfunction()

find_boost_library()
