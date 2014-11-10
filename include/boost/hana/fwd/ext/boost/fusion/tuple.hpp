/*!
@file
Forward declares `boost::hana::ext::boost::fusion::Tuple`.

@copyright Louis Dionne 2014
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#ifndef BOOST_HANA_FWD_EXT_BOOST_FUSION_TUPLE_HPP
#define BOOST_HANA_FWD_EXT_BOOST_FUSION_TUPLE_HPP

#include <boost/hana/fwd/ext/boost/fusion/vector.hpp>


namespace boost { namespace hana {
    namespace ext { namespace boost { namespace fusion {
        // In the current version of Boost.Fusion, `boost::fusion::tuple` is
        // basically an alias to `boost::fusion::vector`, hence the alias.
        using Tuple = Vector;
    }}}
}} // end namespace boost::hana

#endif // !BOOST_HANA_FWD_EXT_BOOST_FUSION_TUPLE_HPP
