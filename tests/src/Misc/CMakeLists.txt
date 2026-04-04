# SPDX-License-Identifier: LGPL-2.1-or-later

add_executable(Misc_tests_run
        fmt.cpp
)

target_link_libraries(Misc_tests_run PRIVATE
    GTest::gtest_main
    GTest::gmock_main
    ${Google_Tests_LIBS}
)

if(MSVC)
    target_link_libraries(Misc_tests_run PRIVATE
            debug       fmtd.lib
            optimized   fmt.lib
    )
    target_compile_options(Misc_tests_run PRIVATE /utf-8)
    target_compile_options(Misc_tests_run PRIVATE /utf-8)
else()
    target_link_libraries(Misc_tests_run PRIVATE
        fmt::fmt
    )
endif()