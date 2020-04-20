// Copyright (c) 2020 Dr. Colin Hirsch and Daniel Frey
// Please see LICENSE for license or visit https://github.com/taocpp/PEGTL/

#ifndef TAO_JSON_PEGTL_CONTRIB_FORWARD_HPP
#define TAO_JSON_PEGTL_CONTRIB_FORWARD_HPP

#include "../config.hpp"

namespace TAO_JSON_PEGTL_NAMESPACE
{
   template< typename Name, typename Rule, typename = void >
   struct analyze_traits;

   template< typename Name, typename Rule, typename = void >
   struct pretty_traits;

}  // namespace TAO_JSON_PEGTL_NAMESPACE

#endif