project('libhyper', 'cpp', version: 'master')

include = include_directories('include')

libgc_dep = dependency(
  'libgc',
  fallback: ['libgc', 'libgc_dep'],
  version: 'master',
)

libutils_dep = dependency(
  'libutils',
  fallback: ['libutils', 'libutils_dep'],
  version: 'master',
)

libhyper = library('libhyper', [
    'src/libhyper/hyperobject.cc',
    'src/libhyper/hypermap.cc',
    'src/libhyper/hyperint.cc',
    'src/libhyper/hyperbool.cc',
    'src/libhyper/hyperstring.cc',
    'src/libhyper/utils.cc'
  ], include_directories: include,
  dependencies: [libutils_dep])

main = executable('main.exe', [
    'src/main.cc'
  ], include_directories: include,
  link_with: [libhyper],
  dependencies: [libgc_dep])

libhyper_dep = declare_dependency(
  include_directories : include,
  link_with : libhyper)
