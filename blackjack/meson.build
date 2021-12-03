blackjack_inc = include_directories('include')

blackjack_sources = [
    'src/source.cpp',
]
blackjack_args = []
blackjack_link = [
]
blackjack_deps = [
    terminalpp_dep
]


## demo executable
blackjack_exe = executable('blackjack',
                            blackjack_sources,
                            include_directories: blackjack_inc,
                            cpp_args: blackjack_args,
                            dependencies: blackjack_deps,
                            link_with: blackjack_link)