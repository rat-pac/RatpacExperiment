add_library( slartibartfastobj OBJECT
  # Append each .cc file
)

target_include_directories( slartibartfastobj PUBLIC
  $<BUILD_INTERFACE:${SLARTIBARTFAST_INCLUDE_DIR}>
  $<INSTALL_INTERFACE:include>)

file(COPY include/ DESTINATION ${SLARTIBARTFAST_INCLUDE_DIR})

add_executable(slartibartfast slartibartfast.cpp)
target_link_libraries(slartibartfast PUBLIC 
  slartibartfastobj ${ROOT_LIBRARIES} ${Geant4_LIBRARIES} ${Ratpac_LIBRARIES})

install(TARGETS slartibartfast RUNTIME DESTINATION bin)
