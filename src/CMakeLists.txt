aux_source_directory(. src_list)
add_executable(momichain ${src_list} node_service.cpp node_service.h http_service.cpp http_service.h block.cpp block.h block_service.cpp block_service.h)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)