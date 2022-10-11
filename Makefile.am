AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}

include_HEADERS = src/jupiter.h

lib_LTLIBRARIES = libjupiter.la libeuropa.la

libjupiter_la_SOURCES = src/jupiter.cpp

libeuropa_la_SOURCES = src/europa.cpp

projectCXXFLAGS = -Wall -Werror -Wextra -Wno-unused-variable -std=gnu++14

libjupiter_la_CXXFLAGS = ${projectCXXFLAGS}
libeuropa_la_CXXFLAGS = ${projectCXXFLAGS}
