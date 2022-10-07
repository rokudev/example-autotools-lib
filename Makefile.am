AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS}

include_HEADERS = src/jupiter.h

lib_LTLIBRARIES = libjupiter.la libeuropa.la

libjupiter_la_SOURCES = src/jupiter.cpp

libeuropa_la_SOURCES = src/europa.cpp

libjupiter_la_CXXFLAGS= -Wall -Werror -Wextra -Wno-unused-variable -std=gnu++14
libeuropa_la_CXXFLAGS= -Wall -Werror -Wextra -Wno-unused-variable -std=gnu++14
