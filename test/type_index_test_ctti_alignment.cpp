//
// Copyright 2012-2021 Antony Polukhin.
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <boost/type_index/ctti_type_index.hpp>
#include <type_traits>

int main() {
    static_assert(
        std::alignment_of<boost::typeindex::detail::ctti_data>::value == std::alignment_of<char>::value,
        "Alignments of boost::typeindex::detail::ctti_data and char differ. "
        "It is unsafe to reinterpret_cast between them."
    );
}

