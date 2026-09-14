# libegl-registry - Khronos EGL API and extension headers

This is a `build2` package for the [`EGL-Registry`](https://github.com/KhronosGroup/EGL-Registry)
C headers. It provides the Khronos EGL API headers, extension headers,
`KHR/khrplatform.h`, the `egl.xml` API registry, extension specifications,
and API specifications.


## Usage

To start using `libegl-registry` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libegl-registry ~2026.3.19
```

Then import the library in your `buildfile`:

```
import libs = libegl-registry%lib{egl-registry}
```

The package version is `EGL_EGLEXT_VERSION` from `EGL/eglext.h` written as
`YYYY.M.DD`. That value is a registry snapshot date, not semantic versioning,
so prefer `~` over `^`.

This package is header-only. It does not link an EGL implementation. To link
the system EGL library, import `libopengl-meta%lib{opengl-egl}` or equivalent.


## Importable targets

This package provides the following importable targets:

```
lib{egl-registry}
```

A header-only library that adds the include path for `<EGL/egl.h>`,
`<EGL/eglext.h>`, `<EGL/eglplatform.h>`, and `<KHR/khrplatform.h>`.


## Configuration variables

This package has no configuration variables.
