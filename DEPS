vars = {
  "root_dir": "src",
  "googlecode_url": "http://%s.googlecode.com/svn",

  "skia_revision": "11070",
}

deps = {
  "src/third_party/skia/":
      (Var("googlecode_url") % "skia") + "/trunk@" + Var("skia_revision"),

  "src/tools/gyp":
      (Var("googlecode_url") % "gyp") + "/trunk@1700",

  "src/tools/":
      File((Var("googlecode_url") % "skia") + "/trunk/tools/find_mac_sdk.py@" +
          Var("skia_revision")),
}

hooks = [
  {
    # A change to a .gyp, .gypi or to GYP itself should run the generator.
    "name": "gyp",
    "pattern": ".",
    "action": ["python", "src/build/gyp_using_skia"]
  }
]
