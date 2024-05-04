cmake_minimum_required(VERSION 2.8)
project(ffmpegapp)


include_directories(/usr/local/include)
# ffmpeg动态库
file(GLOB_RECURSE FFmpeg_LIBS
        /usr/local/lib/libav*.so
        /usr/local/lib/libsw*.so
        /usr/local/lib/libpostproc.so)

add_executable(01_file_info 01_file_info.cpp)
target_link_libraries(01_file_info ${FFmpeg_LIBS})