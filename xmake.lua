add_rules("mode.debug", "mode.release")
add_requires("doctest")
target("source")
  set_kind("binary")
  set_languages("c++11")
  add_packages("doctest")
  add_files("source.cpp")

