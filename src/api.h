#pragma once

#if defined _WIN32 || defined __CYGWIN__
#  define NewFSMController_DLLIMPORT __declspec(dllimport)
#  define NewFSMController_DLLEXPORT __declspec(dllexport)
#  define NewFSMController_DLLLOCAL
#else
// On Linux, for GCC >= 4, tag symbols using GCC extension.
#  if __GNUC__ >= 4
#    define NewFSMController_DLLIMPORT __attribute__((visibility("default")))
#    define NewFSMController_DLLEXPORT __attribute__((visibility("default")))
#    define NewFSMController_DLLLOCAL __attribute__((visibility("hidden")))
#  else
// Otherwise (GCC < 4 or another compiler is used), export everything.
#    define NewFSMController_DLLIMPORT
#    define NewFSMController_DLLEXPORT
#    define NewFSMController_DLLLOCAL
#  endif // __GNUC__ >= 4
#endif // defined _WIN32 || defined __CYGWIN__

#ifdef NewFSMController_STATIC
// If one is using the library statically, get rid of
// extra information.
#  define NewFSMController_DLLAPI
#  define NewFSMController_LOCAL
#else
// Depending on whether one is building or using the
// library define DLLAPI to import or export.
#  ifdef NewFSMController_EXPORTS
#    define NewFSMController_DLLAPI NewFSMController_DLLEXPORT
#  else
#    define NewFSMController_DLLAPI NewFSMController_DLLIMPORT
#  endif // NewFSMController_EXPORTS
#  define NewFSMController_LOCAL NewFSMController_DLLLOCAL
#endif // NewFSMController_STATIC
