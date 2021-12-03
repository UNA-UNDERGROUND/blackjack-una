test_sources = [
    'source.cpp',
]

test_dependencies = [
    catch2_dep,
    terminalpp_dep
]
test_inc = []

testexe = executable('testexe', test_sources,
                     include_directories : test_inc,
                     #link_with : terminalpp_lib,
                     dependencies: test_dependencies)
test('blackjack unit tests test', testexe)