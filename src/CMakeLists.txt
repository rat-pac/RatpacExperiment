add_library( slartibartfastobj OBJECT
  # Append each .cc file
  Slartibartfast.cc
)

target_include_directories( slartibartfastobj PUBLIC
  $<BUILD_INTERFACE:${SLARTIBARTFAST_INCLUDE_DIR}>
  $<INSTALL_INTERFACE:include>)

file(COPY include/ DESTINATION ${SLARTIBARTFAST_INCLUDE_DIR})

add_executable(slartibartfast slartibartfast.cpp)
target_link_libraries(slartibartfast PUBLIC 
  slartibartfastobj ${ROOT_LIBRARIES} ${Geant4_LIBRARIES} ${Ratpac_LIBRARIES})

set_target_properties(slartibartfastobj slartibartfast
    PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${SLARTIBARTFAST_LIBRARY_DIR}
    LIBRARY_OUTPUT_DIRECTORY ${SLARTIBARTFAST_LIBRARY_DIR})

install(TARGETS slartibartfastobj slartibartfast
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin)

install(DIRECTORY ${SLARTIBARTFAST_INCLUDE_DIR}
    DESTINATION ${CMAKE_INSTALL_PREFIX})
