//
// MessagePack for C++ static resolution routine
//
// Copyright (C) 2008-2009 FURUHASHI Sadayuki
//
//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at
//
//        http://www.apache.org/licenses/LICENSE-2.0
//
//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//
#ifndef MSGPACK_TYPE_PAIR_FWD_HPP
#define MSGPACK_TYPE_PAIR_FWD_HPP

#include "../versioning.hpp"
#include "../object_fwd.hpp"
#include <utility>

namespace msgpack {

MSGPACK_API_VERSION_NAMESPACE(v1) {

template <typename T1, typename T2>
object const& operator>> (object const& o, std::pair<T1, T2>& v);

template <typename Stream, typename T1, typename T2>
packer<Stream>& operator<< (packer<Stream>& o, const std::pair<T1, T2>& v);

template <typename T1, typename T2>
void operator<< (object::with_zone& o, const std::pair<T1, T2>& v);

}  // MSGPACK_API_VERSION_NAMESPACE(v1)

}  // namespace msgpack

#endif // MSGPACK_TYPE_PAIR_FWD_HPP
