cmake_minimum_required(VERSION 3.24)
project(codewars)

set(CMAKE_CXX_STANDARD 17)

add_executable(codewars main.cpp YouCantCodeUnderPressureNumberOne.cpp counting_sheep.cpp counting_sheep.h challenge/generate_password.cpp challenge/generate_password.h)
