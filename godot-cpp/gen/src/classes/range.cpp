/**************************************************************************/
/*  range.cpp                                                             */
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

#include <godot_cpp/classes/range.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/node.hpp>

namespace godot {

double Range::get_value() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("get_value")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Range::get_min() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("get_min")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Range::get_max() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("get_max")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Range::get_step() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("get_step")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Range::get_page() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("get_page")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double Range::get_as_ratio() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("get_as_ratio")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void Range::set_value(double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_value")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void Range::set_value_no_signal(double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_value_no_signal")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void Range::set_min(double minimum) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_min")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double minimum_encoded;
	PtrToArg<double>::encode(minimum, &minimum_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &minimum_encoded);
}

void Range::set_max(double maximum) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_max")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double maximum_encoded;
	PtrToArg<double>::encode(maximum, &maximum_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &maximum_encoded);
}

void Range::set_step(double step) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_step")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double step_encoded;
	PtrToArg<double>::encode(step, &step_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &step_encoded);
}

void Range::set_page(double pagesize) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_page")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double pagesize_encoded;
	PtrToArg<double>::encode(pagesize, &pagesize_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &pagesize_encoded);
}

void Range::set_as_ratio(double value) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_as_ratio")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double value_encoded;
	PtrToArg<double>::encode(value, &value_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &value_encoded);
}

void Range::set_use_rounded_values(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_use_rounded_values")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Range::is_using_rounded_values() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("is_using_rounded_values")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Range::set_exp_ratio(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_exp_ratio")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool Range::is_ratio_exp() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("is_ratio_exp")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Range::set_allow_greater(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_allow_greater")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool Range::is_greater_allowed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("is_greater_allowed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Range::set_allow_lesser(bool allow) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("set_allow_lesser")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t allow_encoded;
	PtrToArg<bool>::encode(allow, &allow_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &allow_encoded);
}

bool Range::is_lesser_allowed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("is_lesser_allowed")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void Range::share(Node *with) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("share")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (with != nullptr ? &with->_owner : nullptr));
}

void Range::unshare() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(Range::get_class_static()._native_ptr(), StringName("unshare")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void Range::_value_changed(double new_value) {}


} // namespace godot 