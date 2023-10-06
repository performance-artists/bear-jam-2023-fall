/**************************************************************************/
/*  open_xr_interface.cpp                                                 */
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

#include <godot_cpp/classes/open_xr_interface.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/variant/string.hpp>

namespace godot {

double OpenXRInterface::get_display_refresh_rate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInterface::get_class_static()._native_ptr(), StringName("get_display_refresh_rate")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void OpenXRInterface::set_display_refresh_rate(double refresh_rate) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInterface::get_class_static()._native_ptr(), StringName("set_display_refresh_rate")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double refresh_rate_encoded;
	PtrToArg<double>::encode(refresh_rate, &refresh_rate_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &refresh_rate_encoded);
}

double OpenXRInterface::get_render_target_size_multiplier() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInterface::get_class_static()._native_ptr(), StringName("get_render_target_size_multiplier")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void OpenXRInterface::set_render_target_size_multiplier(double multiplier) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInterface::get_class_static()._native_ptr(), StringName("set_render_target_size_multiplier")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double multiplier_encoded;
	PtrToArg<double>::encode(multiplier, &multiplier_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &multiplier_encoded);
}

bool OpenXRInterface::is_action_set_active(const String &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInterface::get_class_static()._native_ptr(), StringName("is_action_set_active")._native_ptr(), 3927539163);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

void OpenXRInterface::set_action_set_active(const String &name, bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInterface::get_class_static()._native_ptr(), StringName("set_action_set_active")._native_ptr(), 2678287736);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &active_encoded);
}

Array OpenXRInterface::get_action_sets() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInterface::get_class_static()._native_ptr(), StringName("get_action_sets")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}

Array OpenXRInterface::get_available_display_refresh_rates() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(OpenXRInterface::get_class_static()._native_ptr(), StringName("get_available_display_refresh_rates")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Array());
	return internal::_call_native_mb_ret<Array>(_gde_method_bind, _owner);
}


} // namespace godot 