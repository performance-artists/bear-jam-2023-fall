/**************************************************************************/
/*  ip.cpp                                                                */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#include <godot_cpp/classes/ip.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

IP *IP::get_singleton() {
	static IP *singleton = nullptr;
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = internal::gdextension_interface_global_get_singleton(IP::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_COND_V(singleton_obj == nullptr, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<IP *>(internal::gdextension_interface_object_get_instance_binding(singleton_obj, internal::token, &IP::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_COND_V(singleton == nullptr, nullptr);
#endif // DEBUG_ENABLED
	}
	return singleton;
}

String IP::resolve_hostname(const String &host, IP::Type ip_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("resolve_hostname")._native_ptr(), 396864159);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &host, &ip_type);
}

PackedStringArray IP::resolve_hostname_addresses(const String &host, IP::Type ip_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("resolve_hostname_addresses")._native_ptr(), 3462780090);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner, &host, &ip_type);
}

int32_t IP::resolve_hostname_queue_item(const String &host, IP::Type ip_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("resolve_hostname_queue_item")._native_ptr(), 3936392508);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &host, &ip_type);
}

IP::ResolverStatus IP::get_resolve_item_status(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("get_resolve_item_status")._native_ptr(), 3812250196);
	CHECK_METHOD_BIND_RET(_gde_method_bind, IP::ResolverStatus(0));
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return (IP::ResolverStatus)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &id_encoded);
}

String IP::get_resolve_item_address(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("get_resolve_item_address")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &id_encoded);
}

Array IP::get_resolve_item_addresses(int32_t id) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("get_resolve_item_addresses")._native_ptr(), 663333327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner, &id_encoded);
}

void IP::erase_resolve_item(int32_t id) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("erase_resolve_item")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t id_encoded;
	PtrToArg<int64_t>::encode(id, &id_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &id_encoded);
}

PackedStringArray IP::get_local_addresses() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("get_local_addresses")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

TypedArray<Dictionary> IP::get_local_interfaces() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("get_local_interfaces")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<Dictionary>());
	return internal::_call_native_mb_ret<TypedArray<Dictionary>>(_gde_method_bind, _owner);
}

void IP::clear_cache(const String &hostname) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(IP::get_class_static()._native_ptr(), StringName("clear_cache")._native_ptr(), 3005725572);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &hostname);
}


} // namespace godot 