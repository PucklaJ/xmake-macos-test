add_rules("mode.debug", "mode.release")
target("source")
  set_kind("binary")
  set_languages("c++11")
  add_files("source.cpp")

