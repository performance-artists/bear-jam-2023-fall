/**************************************************************************/
/*  packed_string_array.cpp                                               */
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


#include <godot_cpp/variant/packed_string_array.hpp>

#include <godot_cpp/core/binder_common.hpp>

#include <godot_cpp/godot.hpp>

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_byte_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/builtin_ptrcall.hpp>

#include <utility>

namespace godot {

PackedStringArray::_MethodBindings PackedStringArray::_method_bindings;

void PackedStringArray::_init_bindings_constructors_destructor() {
	_method_bindings.constructor_0 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, 0);
	_method_bindings.constructor_1 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, 1);
	_method_bindings.constructor_2 = internal::gdextension_interface_variant_get_ptr_constructor(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, 2);
	_method_bindings.destructor = internal::gdextension_interface_variant_get_ptr_destructor(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY);
}
void PackedStringArray::init_bindings() {
	PackedStringArray::_init_bindings_constructors_destructor();
	StringName _gde_name;
	_gde_name = StringName("size");
	_method_bindings.method_size = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 3173160232);
	_gde_name = StringName("is_empty");
	_method_bindings.method_is_empty = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 3918633141);
	_gde_name = StringName("set");
	_method_bindings.method_set = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 725585539);
	_gde_name = StringName("push_back");
	_method_bindings.method_push_back = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 816187996);
	_gde_name = StringName("append");
	_method_bindings.method_append = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 816187996);
	_gde_name = StringName("append_array");
	_method_bindings.method_append_array = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 1120103966);
	_gde_name = StringName("remove_at");
	_method_bindings.method_remove_at = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 2823966027);
	_gde_name = StringName("insert");
	_method_bindings.method_insert = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 2432393153);
	_gde_name = StringName("fill");
	_method_bindings.method_fill = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 3174917410);
	_gde_name = StringName("resize");
	_method_bindings.method_resize = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 848867239);
	_gde_name = StringName("clear");
	_method_bindings.method_clear = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("has");
	_method_bindings.method_has = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 2566493496);
	_gde_name = StringName("reverse");
	_method_bindings.method_reverse = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("slice");
	_method_bindings.method_slice = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 2094601407);
	_gde_name = StringName("to_byte_array");
	_method_bindings.method_to_byte_array = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 247621236);
	_gde_name = StringName("sort");
	_method_bindings.method_sort = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 3218959716);
	_gde_name = StringName("bsearch");
	_method_bindings.method_bsearch = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 328976671);
	_gde_name = StringName("duplicate");
	_method_bindings.method_duplicate = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 2991231410);
	_gde_name = StringName("find");
	_method_bindings.method_find = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 1760645412);
	_gde_name = StringName("rfind");
	_method_bindings.method_rfind = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 1760645412);
	_gde_name = StringName("count");
	_method_bindings.method_count = internal::gdextension_interface_variant_get_ptr_builtin_method(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, _gde_name._native_ptr(), 2920860731);
	_method_bindings.indexed_setter = internal::gdextension_interface_variant_get_ptr_indexed_setter(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY);
	_method_bindings.indexed_getter = internal::gdextension_interface_variant_get_ptr_indexed_getter(GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY);
	_method_bindings.operator_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not_equal_Variant = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_not = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, GDEXTENSION_VARIANT_TYPE_NIL);
	_method_bindings.operator_in_Dictionary = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, GDEXTENSION_VARIANT_TYPE_DICTIONARY);
	_method_bindings.operator_in_Array = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_IN, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, GDEXTENSION_VARIANT_TYPE_ARRAY);
	_method_bindings.operator_equal_PackedStringArray = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_EQUAL, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY);
	_method_bindings.operator_not_equal_PackedStringArray = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_NOT_EQUAL, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY);
	_method_bindings.operator_add_PackedStringArray = internal::gdextension_interface_variant_get_ptr_operator_evaluator(GDEXTENSION_VARIANT_OP_ADD, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY, GDEXTENSION_VARIANT_TYPE_PACKED_STRING_ARRAY);
}

PackedStringArray::PackedStringArray() {
	internal::_call_builtin_constructor(_method_bindings.constructor_0, &opaque);
}

PackedStringArray::PackedStringArray(const PackedStringArray &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &from);
}

PackedStringArray::PackedStringArray(const Array &from) {
	internal::_call_builtin_constructor(_method_bindings.constructor_2, &opaque, &from);
}

PackedStringArray::PackedStringArray(PackedStringArray &&other) {
	std::swap(opaque, other.opaque);
}

PackedStringArray::~PackedStringArray() {
	_method_bindings.destructor(&opaque);
}

int64_t PackedStringArray::size() const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_size, (GDExtensionTypePtr)&opaque);
}

bool PackedStringArray::is_empty() const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_is_empty, (GDExtensionTypePtr)&opaque);
}

void PackedStringArray::set(int64_t index, const String &value){
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_set, (GDExtensionTypePtr)&opaque, &index_encoded, &value);
}

bool PackedStringArray::push_back(const String &value){
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_push_back, (GDExtensionTypePtr)&opaque, &value);
}

bool PackedStringArray::append(const String &value){
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_append, (GDExtensionTypePtr)&opaque, &value);
}

void PackedStringArray::append_array(const PackedStringArray &array){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_append_array, (GDExtensionTypePtr)&opaque, &array);
}

void PackedStringArray::remove_at(int64_t index){
	int64_t index_encoded;
	PtrToArg<int64_t>::encode(index, &index_encoded);
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_remove_at, (GDExtensionTypePtr)&opaque, &index_encoded);
}

int64_t PackedStringArray::insert(int64_t at_index, const String &value){
	int64_t at_index_encoded;
	PtrToArg<int64_t>::encode(at_index, &at_index_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_insert, (GDExtensionTypePtr)&opaque, &at_index_encoded, &value);
}

void PackedStringArray::fill(const String &value){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_fill, (GDExtensionTypePtr)&opaque, &value);
}

int64_t PackedStringArray::resize(int64_t new_size){
	int64_t new_size_encoded;
	PtrToArg<int64_t>::encode(new_size, &new_size_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_resize, (GDExtensionTypePtr)&opaque, &new_size_encoded);
}

void PackedStringArray::clear(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_clear, (GDExtensionTypePtr)&opaque);
}

bool PackedStringArray::has(const String &value) const{
	return internal::_call_builtin_method_ptr_ret<bool>(_method_bindings.method_has, (GDExtensionTypePtr)&opaque, &value);
}

void PackedStringArray::reverse(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_reverse, (GDExtensionTypePtr)&opaque);
}

PackedStringArray PackedStringArray::slice(int64_t begin, int64_t end) const{
	int64_t begin_encoded;
	PtrToArg<int64_t>::encode(begin, &begin_encoded);
	int64_t end_encoded;
	PtrToArg<int64_t>::encode(end, &end_encoded);
	return internal::_call_builtin_method_ptr_ret<PackedStringArray>(_method_bindings.method_slice, (GDExtensionTypePtr)&opaque, &begin_encoded, &end_encoded);
}

PackedByteArray PackedStringArray::to_byte_array() const{
	return internal::_call_builtin_method_ptr_ret<PackedByteArray>(_method_bindings.method_to_byte_array, (GDExtensionTypePtr)&opaque);
}

void PackedStringArray::sort(){
	internal::_call_builtin_method_ptr_no_ret(_method_bindings.method_sort, (GDExtensionTypePtr)&opaque);
}

int64_t PackedStringArray::bsearch(const String &value, bool before){
	int8_t before_encoded;
	PtrToArg<bool>::encode(before, &before_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_bsearch, (GDExtensionTypePtr)&opaque, &value, &before_encoded);
}

PackedStringArray PackedStringArray::duplicate(){
	return internal::_call_builtin_method_ptr_ret<PackedStringArray>(_method_bindings.method_duplicate, (GDExtensionTypePtr)&opaque);
}

int64_t PackedStringArray::find(const String &value, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_find, (GDExtensionTypePtr)&opaque, &value, &from_encoded);
}

int64_t PackedStringArray::rfind(const String &value, int64_t from) const{
	int64_t from_encoded;
	PtrToArg<int64_t>::encode(from, &from_encoded);
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_rfind, (GDExtensionTypePtr)&opaque, &value, &from_encoded);
}

int64_t PackedStringArray::count(const String &value) const{
	return internal::_call_builtin_method_ptr_ret<int64_t>(_method_bindings.method_count, (GDExtensionTypePtr)&opaque, &value);
}

bool PackedStringArray::operator==(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool PackedStringArray::operator!=(const Variant &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_Variant, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool PackedStringArray::operatornot() const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)nullptr);
}

bool PackedStringArray::operator==(const PackedStringArray &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_equal_PackedStringArray, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

bool PackedStringArray::operator!=(const PackedStringArray &other) const {
	return internal::_call_builtin_operator_ptr<int8_t>(_method_bindings.operator_not_equal_PackedStringArray, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

PackedStringArray PackedStringArray::operator+(const PackedStringArray &other) const {
	return internal::_call_builtin_operator_ptr<PackedStringArray>(_method_bindings.operator_add_PackedStringArray, (GDExtensionConstTypePtr)&opaque, (GDExtensionConstTypePtr)&other);
}

PackedStringArray &PackedStringArray::operator=(const PackedStringArray &other) {
	_method_bindings.destructor(&opaque);
	internal::_call_builtin_constructor(_method_bindings.constructor_1, &opaque, &other);
	return *this;
}

PackedStringArray &PackedStringArray::operator=(PackedStringArray &&other) {
	std::swap(opaque, other.opaque);
	return *this;
}

} //namespace godot