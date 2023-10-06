/**************************************************************************/
/*  graph_node.cpp                                                        */
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

#include <godot_cpp/classes/graph_node.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void GraphNode::set_title(const String &title) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_title")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &title);
}

String GraphNode::get_title() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_title")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void GraphNode::set_text_direction(Control::TextDirection direction) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_text_direction")._native_ptr(), 119160795);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &direction);
}

Control::TextDirection GraphNode::get_text_direction() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_text_direction")._native_ptr(), 797257663);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Control::TextDirection(0));
	return (Control::TextDirection)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void GraphNode::set_language(const String &language) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_language")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &language);
}

String GraphNode::get_language() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_language")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void GraphNode::set_slot(int32_t slot_index, bool enable_left_port, int32_t type_left, const Color &color_left, bool enable_right_port, int32_t type_right, const Color &color_right, const Ref<Texture2D> &custom_icon_left, const Ref<Texture2D> &custom_icon_right, bool draw_stylebox) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot")._native_ptr(), 902131739);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int8_t enable_left_port_encoded;
	PtrToArg<bool>::encode(enable_left_port, &enable_left_port_encoded);
	int64_t type_left_encoded;
	PtrToArg<int64_t>::encode(type_left, &type_left_encoded);
	int8_t enable_right_port_encoded;
	PtrToArg<bool>::encode(enable_right_port, &enable_right_port_encoded);
	int64_t type_right_encoded;
	PtrToArg<int64_t>::encode(type_right, &type_right_encoded);
	int8_t draw_stylebox_encoded;
	PtrToArg<bool>::encode(draw_stylebox, &draw_stylebox_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &enable_left_port_encoded, &type_left_encoded, &color_left, &enable_right_port_encoded, &type_right_encoded, &color_right, (custom_icon_left != nullptr ? &custom_icon_left->_owner : nullptr), (custom_icon_right != nullptr ? &custom_icon_right->_owner : nullptr), &draw_stylebox_encoded);
}

void GraphNode::clear_slot(int32_t slot_index) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("clear_slot")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::clear_all_slots() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("clear_all_slots")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void GraphNode::set_slot_enabled_left(int32_t slot_index, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_enabled_left")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &enable_encoded);
}

bool GraphNode::is_slot_enabled_left(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_slot_enabled_left")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_type_left(int32_t slot_index, int32_t type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_type_left")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &type_encoded);
}

int32_t GraphNode::get_slot_type_left(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_type_left")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_color_left(int32_t slot_index, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_color_left")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &color);
}

Color GraphNode::get_slot_color_left(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_color_left")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_enabled_right(int32_t slot_index, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_enabled_right")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &enable_encoded);
}

bool GraphNode::is_slot_enabled_right(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_slot_enabled_right")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_type_right(int32_t slot_index, int32_t type) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_type_right")._native_ptr(), 3937882851);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int64_t type_encoded;
	PtrToArg<int64_t>::encode(type, &type_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &type_encoded);
}

int32_t GraphNode::get_slot_type_right(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_type_right")._native_ptr(), 923996154);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_color_right(int32_t slot_index, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_color_right")._native_ptr(), 2878471219);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &color);
}

Color GraphNode::get_slot_color_right(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_slot_color_right")._native_ptr(), 3457211756);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &slot_index_encoded);
}

bool GraphNode::is_slot_draw_stylebox(int32_t slot_index) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_slot_draw_stylebox")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &slot_index_encoded);
}

void GraphNode::set_slot_draw_stylebox(int32_t slot_index, bool enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_slot_draw_stylebox")._native_ptr(), 300928843);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t slot_index_encoded;
	PtrToArg<int64_t>::encode(slot_index, &slot_index_encoded);
	int8_t enable_encoded;
	PtrToArg<bool>::encode(enable, &enable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &slot_index_encoded, &enable_encoded);
}

void GraphNode::set_position_offset(const Vector2 &offset) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_position_offset")._native_ptr(), 743155724);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &offset);
}

Vector2 GraphNode::get_position_offset() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_position_offset")._native_ptr(), 3341600327);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner);
}

void GraphNode::set_comment(bool comment) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_comment")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t comment_encoded;
	PtrToArg<bool>::encode(comment, &comment_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &comment_encoded);
}

bool GraphNode::is_comment() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_comment")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphNode::set_resizable(bool resizable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_resizable")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t resizable_encoded;
	PtrToArg<bool>::encode(resizable, &resizable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &resizable_encoded);
}

bool GraphNode::is_resizable() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_resizable")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphNode::set_draggable(bool draggable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_draggable")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t draggable_encoded;
	PtrToArg<bool>::encode(draggable, &draggable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &draggable_encoded);
}

bool GraphNode::is_draggable() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_draggable")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphNode::set_selectable(bool selectable) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_selectable")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t selectable_encoded;
	PtrToArg<bool>::encode(selectable, &selectable_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &selectable_encoded);
}

bool GraphNode::is_selectable() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_selectable")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphNode::set_selected(bool selected) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_selected")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t selected_encoded;
	PtrToArg<bool>::encode(selected, &selected_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &selected_encoded);
}

bool GraphNode::is_selected() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_selected")._native_ptr(), 2240911060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

int32_t GraphNode::get_connection_input_count() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_input_count")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t GraphNode::get_connection_input_height(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_input_height")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded);
}

Vector2 GraphNode::get_connection_input_position(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_input_position")._native_ptr(), 3114997196);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &port_encoded);
}

int32_t GraphNode::get_connection_input_type(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_input_type")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded);
}

Color GraphNode::get_connection_input_color(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_input_color")._native_ptr(), 2624840992);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &port_encoded);
}

int32_t GraphNode::get_connection_input_slot(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_input_slot")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded);
}

int32_t GraphNode::get_connection_output_count() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_output_count")._native_ptr(), 2455072627);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t GraphNode::get_connection_output_height(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_output_height")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded);
}

Vector2 GraphNode::get_connection_output_position(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_output_position")._native_ptr(), 3114997196);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector2());
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<Vector2>(_gde_method_bind, _owner, &port_encoded);
}

int32_t GraphNode::get_connection_output_type(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_output_type")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded);
}

Color GraphNode::get_connection_output_color(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_output_color")._native_ptr(), 2624840992);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Color());
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<Color>(_gde_method_bind, _owner, &port_encoded);
}

int32_t GraphNode::get_connection_output_slot(int32_t port) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_connection_output_slot")._native_ptr(), 3744713108);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	int64_t port_encoded;
	PtrToArg<int64_t>::encode(port, &port_encoded);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &port_encoded);
}

void GraphNode::set_show_close_button(bool show) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_show_close_button")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t show_encoded;
	PtrToArg<bool>::encode(show, &show_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &show_encoded);
}

bool GraphNode::is_close_button_visible() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("is_close_button_visible")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void GraphNode::set_overlay(GraphNode::Overlay overlay) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("set_overlay")._native_ptr(), 3144190109);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &overlay);
}

GraphNode::Overlay GraphNode::get_overlay() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(GraphNode::get_class_static()._native_ptr(), StringName("get_overlay")._native_ptr(), 2854257040);
	CHECK_METHOD_BIND_RET(_gde_method_bind, GraphNode::Overlay(0));
	return (GraphNode::Overlay)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}


} // namespace godot 