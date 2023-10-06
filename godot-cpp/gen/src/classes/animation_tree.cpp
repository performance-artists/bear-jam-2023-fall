/**************************************************************************/
/*  animation_tree.cpp                                                    */
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

#include <godot_cpp/classes/animation_tree.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/core/object.hpp>

namespace godot {

void AnimationTree::set_active(bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("set_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &active_encoded);
}

bool AnimationTree::is_active() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("is_active")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimationTree::set_tree_root(const Ref<AnimationNode> &root) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("set_tree_root")._native_ptr(), 712869711);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (root != nullptr ? &root->_owner : nullptr));
}

Ref<AnimationNode> AnimationTree::get_tree_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_tree_root")._native_ptr(), 1462070895);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AnimationNode>());
	return Ref<AnimationNode>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AnimationNode>(_gde_method_bind, _owner));
}

void AnimationTree::set_process_callback(AnimationTree::AnimationProcessCallback mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("set_process_callback")._native_ptr(), 1723352826);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AnimationTree::AnimationProcessCallback AnimationTree::get_process_callback() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_process_callback")._native_ptr(), 891317132);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AnimationTree::AnimationProcessCallback(0));
	return (AnimationTree::AnimationProcessCallback)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationTree::set_animation_player(const NodePath &root) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("set_animation_player")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &root);
}

NodePath AnimationTree::get_animation_player() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_animation_player")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void AnimationTree::set_advance_expression_base_node(const NodePath &node) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("set_advance_expression_base_node")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &node);
}

NodePath AnimationTree::get_advance_expression_base_node() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_advance_expression_base_node")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void AnimationTree::set_root_motion_track(const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("set_root_motion_track")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

NodePath AnimationTree::get_root_motion_track() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_root_motion_track")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void AnimationTree::set_audio_max_polyphony(int32_t max_polyphony) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("set_audio_max_polyphony")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_polyphony_encoded;
	PtrToArg<int64_t>::encode(max_polyphony, &max_polyphony_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_polyphony_encoded);
}

int32_t AnimationTree::get_audio_max_polyphony() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_audio_max_polyphony")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Vector3 AnimationTree::get_root_motion_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_root_motion_position")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Quaternion AnimationTree::get_root_motion_rotation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_root_motion_rotation")._native_ptr(), 1222331677);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Quaternion());
	return internal::_call_native_mb_ret<Quaternion>(_gde_method_bind, _owner);
}

Vector3 AnimationTree::get_root_motion_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_root_motion_scale")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Vector3 AnimationTree::get_root_motion_position_accumulator() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_root_motion_position_accumulator")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

Quaternion AnimationTree::get_root_motion_rotation_accumulator() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_root_motion_rotation_accumulator")._native_ptr(), 1222331677);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Quaternion());
	return internal::_call_native_mb_ret<Quaternion>(_gde_method_bind, _owner);
}

Vector3 AnimationTree::get_root_motion_scale_accumulator() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("get_root_motion_scale_accumulator")._native_ptr(), 3360562783);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Vector3());
	return internal::_call_native_mb_ret<Vector3>(_gde_method_bind, _owner);
}

void AnimationTree::advance(double delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationTree::get_class_static()._native_ptr(), StringName("advance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double delta_encoded;
	PtrToArg<double>::encode(delta, &delta_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &delta_encoded);
}

Variant AnimationTree::_post_process_key_value(const Ref<Animation> &animation, int32_t track, const Variant &value, Object *object, int32_t object_idx) const {
	return Variant();
}


} // namespace godot 