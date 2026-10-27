
cmake_minimum_required(VERSION 3.16)

project(lab4 VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# DLL с классами автомобилей — доменный слой
add_library(third_lab_lib SHARED
    src/AbstractVehicle.cpp
    src/Car.cpp
    src/Sedan.cpp
    src/SUV.cpp
    src/SportsCar.cpp
    src/ElectricCar.cpp
    src/Fleet.cpp
)

target_compile_definitions(third_lab_lib
    PRIVATE THIRD_LAB_EXPORTS
)

target_include_directories(third_lab_lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Отдельная библиотека логики приложения
add_library(vehicle_logic STATIC
    src/SedanFactory.cpp
    src/SUVFactory.cpp
    src/SportsCarFactory.cpp
    src/ElectricCarFactory.cpp
    src/VehicleService.cpp
    src/VehiclePrinter.cpp
)

target_include_directories(vehicle_logic
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(vehicle_logic
    PUBLIC third_lab_lib
)

# Консольный интерфейс
add_executable(third_lab
    main.cpp
    src/ConsoleUI.cpp
)

target_link_libraries(third_lab
    PRIVATE vehicle_logic
)

# Размещение DLL рядом с исполняемым файлом
add_custom_command(TARGET third_lab POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
    $<TARGET_FILE:third_lab_lib>
    $<TARGET_FILE_DIR:third_lab>
)
