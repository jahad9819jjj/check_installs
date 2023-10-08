cmake_minimum_required(VERSION 3.18 FATAL_ERROR)
project(LibTorchCheck)
set(CMAKE_CXX_STANDARD 17)

find_package(Torch REQUIRED)
find_package( OpenCV REQUIRED )

add_executable(libtorch_check src/libtorch_check.cpp)
add_executable(libcv_check src/libcv_check.cpp)
target_link_libraries(libtorch_check "${TORCH_LIBRARIES}")
target_link_libraries(libcv_check "${OPENCV_LIBS}")
