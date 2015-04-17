#ifndef __CERBERUS_COMMON_HPP__
#define __CERBERUS_COMMON_HPP__

#include <chrono>

#include "utils/typetraits.hpp"

#define VERSION "0.6.2-2015-04-17"

namespace cerb {

    typedef tp::UInt<1>::type byte;
    typedef tp::Int<8>::type rint;
    typedef unsigned int slot;
    typedef tp::UInt<8>::type msize_t;

    typedef std::chrono::high_resolution_clock Clock;
    typedef Clock::time_point Time;
    typedef std::chrono::duration<double> Interval;

    int const CLUSTER_SLOT_COUNT = 16384;

}

#endif /* __CERBERUS_COMMON_HPP__ */
