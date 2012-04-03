// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#include "libcef_dll/cpptoc/callback_cpptoc.h"
#include "libcef_dll/cpptoc/request_cpptoc.h"
#include "libcef_dll/cpptoc/response_cpptoc.h"
#include "libcef_dll/ctocpp/resource_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefResourceHandlerCToCpp::ProcessRequest(CefRefPtr<CefRequest> request,
    CefRefPtr<CefCallback> callback) {
  if (CEF_MEMBER_MISSING(struct_, process_request))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: request; type: refptr_diff
  DCHECK(request.get());
  if (!request.get())
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;

  // Execute
  int _retval = struct_->process_request(struct_,
      CefRequestCppToC::Wrap(request),
      CefCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval?true:false;
}

void CefResourceHandlerCToCpp::GetResponseHeaders(
    CefRefPtr<CefResponse> response, int64& response_length,
    CefString& redirectUrl) {
  if (CEF_MEMBER_MISSING(struct_, get_response_headers))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: response; type: refptr_diff
  DCHECK(response.get());
  if (!response.get())
    return;

  // Execute
  struct_->get_response_headers(struct_,
      CefResponseCppToC::Wrap(response),
      &response_length,
      redirectUrl.GetWritableStruct());
}

bool CefResourceHandlerCToCpp::ReadResponse(void* data_out, int bytes_to_read,
    int& bytes_read, CefRefPtr<CefCallback> callback) {
  if (CEF_MEMBER_MISSING(struct_, read_response))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: data_out; type: simple_byaddr
  DCHECK(data_out);
  if (!data_out)
    return false;
  // Verify param: callback; type: refptr_diff
  DCHECK(callback.get());
  if (!callback.get())
    return false;

  // Execute
  int _retval = struct_->read_response(struct_,
      data_out,
      bytes_to_read,
      &bytes_read,
      CefCallbackCppToC::Wrap(callback));

  // Return type: bool
  return _retval?true:false;
}

void CefResourceHandlerCToCpp::Cancel() {
  if (CEF_MEMBER_MISSING(struct_, cancel))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  struct_->cancel(struct_);
}


#ifndef NDEBUG
template<> long CefCToCpp<CefResourceHandlerCToCpp, CefResourceHandler,
    cef_resource_handler_t>::DebugObjCt = 0;
#endif

