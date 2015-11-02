// Copyright (c) 2015 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ATOM_COMMON_NATIVE_MATE_CONVERTERS_CONTENT_CONVERTER_H_
#define ATOM_COMMON_NATIVE_MATE_CONVERTERS_CONTENT_CONVERTER_H_

#include "native_mate/converter.h"

namespace content {
struct ContextMenuParams;
struct MenuItem;
}

namespace mate {

template<>
struct Converter<content::MenuItem> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const content::MenuItem& val);
};

template<>
struct Converter<content::ContextMenuParams> {
  static v8::Local<v8::Value> ToV8(v8::Isolate* isolate,
                                   const content::ContextMenuParams& val);
};

}  // namespace mate

#endif  // ATOM_COMMON_NATIVE_MATE_CONVERTERS_CONTENT_CONVERTER_H_