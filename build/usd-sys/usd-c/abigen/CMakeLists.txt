file(GLOB_RECURSE ABIGEN_SOURCE *.cpp)
add_executable(abigen ${ABIGEN_SOURCE})
target_include_directories(abigen PRIVATE /home/luke/packages/usd-v21.11/include)
target_include_directories(abigen PRIVATE /include)
target_include_directories(abigen PRIVATE /usr/include/python2.7)
target_include_directories(abigen PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/..)
target_link_libraries(abigen PRIVATE usd)
target_link_libraries(abigen PRIVATE tf)
target_link_libraries(abigen PRIVATE gf)
target_link_libraries(abigen PRIVATE vt)
target_link_libraries(abigen PRIVATE sdf)
target_link_libraries(abigen PRIVATE usdGeom)
