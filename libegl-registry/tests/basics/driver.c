#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <KHR/khrplatform.h>

#undef NDEBUG
#include <assert.h>

int main (void)
{
  assert (EGL_EGLEXT_VERSION == 20260319);
  assert (EGL_VERSION_1_5);
  return 0;
}
