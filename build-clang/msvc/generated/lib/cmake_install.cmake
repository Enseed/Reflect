# Install script for directory: C:/Users/petit/Documents/Reflect_build123/llvm/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/LLVM")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/IR/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/IRReader/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/CodeGen/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/Bitcode/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/Transforms/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/Linker/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/Analysis/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/LTO/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/MC/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/Object/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/Option/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/DebugInfo/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/ExecutionEngine/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/Target/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/AsmParser/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/LineEditor/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/ProfileData/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/Fuzzer/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/Passes/cmake_install.cmake")
  include("C:/Users/petit/Documents/Reflect_build123/build-clang/msvc/generated/lib/LibDriver/cmake_install.cmake")

endif()

