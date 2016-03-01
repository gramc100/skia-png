vars = {
  "root_dir": "src",
  'chromium_git': 'https://chromium.googlesource.com',

  "skia_revision": "819ab1028897c7ae8ea07cb342d48118d29daa5d",
}

deps = {
  "src/third_party/skia/":
      Var('chromium_git') + '/skia.git' + '@' +  Var('skia_revision'),

  'src/tools/gyp':
      Var('chromium_git') + '/external/gyp.git' + '@' + '5122240c5e5c4d8da12c543d82b03d6089eb77c5',
}

hooks = [
  {
    # A change to a .gyp, .gypi or to GYP itself should run the generator.
    "name": "gyp",
    "pattern": ".",
    "action": ["python", "src/build/gyp_using_skia"]
  }
]
