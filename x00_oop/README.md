# x00_oop ![C++ Project](https://img.shields.io/badge/C++_Project-gray?logo=cplusplus&logoColor=skyblue&style=for-the-badge)

[![License GPL v3.0](https://img.shields.io/badge/License-GPL_v3.0-blue?logo=gnu&style=for-the-badge)]()&emsp;[![License AGPL v3.0](https://img.shields.io/badge/License-AGPL_v3.0-blue?logo=gnu&style=for-the-badge)]()

## Table of Contents
+ [Description](#description)
+ [Disclaimer](#disclaimer)
+ [Project Layout](#project-layout)
+ [Requirement](#requirement)
+ [Feature](#feature)
+ [Usage](#usage)
+ [License](#license)

## Description
A personal journey exploring C++. This project will talk about the four (4) pillars of Object Oriented Programming (OOP)

[^ToC](#table-of-contents)

## Disclaimer
> [!IMPORTANT]
> *All trademarks, third-party logos/assets, brand names are property of their respective owner. This project is an independent educational resource and not sanctioned, sponsored, manage by any third-party trademark holders.*

## Project Layout*
```bash
x00_oop/
|--- .gitignore
|--- README.md
|--- CMakeLists.txt
|--- build/
|--- install/
\--- src/
     |--- main/
     |    |--- CMakeLists.txt
     |    |--- cpp/x00_oop/
     |    |    |--- <pkg>/
     |    |    |    \--- <file_name>.cpp
     |    |    \--- main.cpp
     |    |--- private/x00_oop/
     |    |    \--- <pkg>/
     |    |         \--- <file_name>.internal.h
     |    |--- public/x00_oop/
     |    |    \--- <pkg>/
     |    |         \--- <file_name>.h
     |    \--- resources/
     |         |--- txt/tut.txt
     |         \--- .env.public
     \--- test/
          |--- CMakeLists.txt
          |--- unit/
          |    |--- CMakeLists.txt
          |    \--- cpp/x00_oop/
          |         \--- <pkg>/
          |              \--- <file_name>.cpp
          \--- integration/
               |--- CMakeLists.txt
               |--- cpp/x00_oop/
               |     \--- <pkg>/
               |          \--- <file_name>.cpp
               \--- resources/
                    |--- txt/tut.txt
                    \--- .env.public
```

## Requirement
+ [CMake *(>=3.28)*]()
+ [Ninja *(>=10.0)*]()
+ Compiler that support *C++ std (>=17)*

## Feature
+ [] [encapsulation*]()
+ [] [inheritance*]()
+ [] [polymorphism*]()
+ [] [abstraction*]()

## Usage
```bash
#REM: Configure-and-generate-time
$ cmake -S . -B build -G "Ninja Multi-Config" [--fresh]

#REM: Build-time
$ cmake --build build [--config <Debug|Release>]

#REM: Install-time
$ cmake --install build [--config <Debug|Release>]
```


## License
[![License GPL v3.0](https://img.shields.io/badge/License-GPL_v3.0-blue?logo=gnu&style=for-the-badge)]()&emsp;[![License AGPL v3.0](https://img.shields.io/badge/License-AGPL_v3.0-blue?logo=gnu&style=for-the-badge)]()
