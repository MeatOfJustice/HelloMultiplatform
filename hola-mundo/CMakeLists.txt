cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(HolaMundo LANGUAGES CXX)

# Configuración estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Crear ejecutable
add_executable(hola_mundo src/main.cpp)

# Opciones específicas para Windows o Linux (opcional)
if (WIN32)
    message(STATUS "Compilando en Windows")
elseif (UNIX)
    message(STATUS "Compilando en Linux")
endif()