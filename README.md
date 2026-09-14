# EGL-Registry - Khronos EGL API and extension headers

This is a `build2` package repository for [`EGL-Registry`](https://github.com/KhronosGroup/EGL-Registry),
the Khronos EGL API and extension registry.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`EGL-Registry` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libegl-registry/PACKAGE-README.md) file.

The development setup for `EGL-Registry` uses the standard `bdep`-based workflow.
For example:

```
git clone --recursive https://github.com/build2-packaging/EGL-Registry.git
cd EGL-Registry

bdep init -C @gcc cc config.c=gcc
bdep update
bdep test
```
