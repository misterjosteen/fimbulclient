include_directories (.)

file (GLOB BASE_FILES *.c *.cpp *.h *.hpp)

add_executable (testclient
    ${BASE_FILES}
)
target_link_libraries (testclient ragnarok ya3de)
set_target_properties (testclient PROPERTIES COTIRE_ADD_UNITY_BUILD FALSE)
# cotire (testclient)

source_group ("testclient" FILES ${BASE_FILES})
