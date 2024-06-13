cmake_minimum_required(VERSION 3.16)
project(h264)

set(CMAKE_CXX_STANDARD 17)

add_executable(h264 main.cpp AnnexB/AnnexBReader.cpp AnnexB/AnnexBReader.h)
