# Copyright (c) 2013 dan sinclair. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

{
  'variables': {
    'skia_shared_lib': 1
  },
  'targets': [
    {
      'configurations': {
        'Debug': {
        },
        'Release': {
        }
      },
      'target_name': 'using_skia',
      'type': 'executable',
      'dependencies': [
        'third_party/skia/gyp/skia_lib.gyp:skia_lib'
      ],
      'include_dirs': [
        'third_party/skia/include/config',
        'third_party/skia/include/core',
      ],
      'sources': [
        'app/main.cpp'
      ],
      'ldflags': [
        '-std=c++11'
      ],
      'cflags': [
        '-Werror',
        '-W',
        '-Wall',
        '-Wextra',
        '-Wno-unused-parameter',
        '-g',
        '-O0'
      ]
    }
  ]
}
