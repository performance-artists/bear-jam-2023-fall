/**************************************************************************/
/*  animation_player.cpp                                                  */
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

#include <godot_cpp/classes/animation_player.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/core/object.hpp>

namespace godot {

Error AnimationPlayer::add_animation_library(const StringName &name, const Ref<AnimationLibrary> &library) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("add_animation_library")._native_ptr(), 618909818);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Error(0));
	return (Error)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &name, (library != nullptr ? &library->_owner : nullptr));
}

void AnimationPlayer::remove_animation_library(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("remove_animation_library")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

void AnimationPlayer::rename_animation_library(const StringName &name, const StringName &newname) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("rename_animation_library")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &newname);
}

bool AnimationPlayer::has_animation_library(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("has_animation_library")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

Ref<AnimationLibrary> AnimationPlayer::get_animation_library(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_animation_library")._native_ptr(), 147342321);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<AnimationLibrary>());
	return Ref<AnimationLibrary>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<AnimationLibrary>(_gde_method_bind, _owner, &name));
}

TypedArray<StringName> AnimationPlayer::get_animation_library_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_animation_library_list")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, TypedArray<StringName>());
	return internal::_call_native_mb_ret<TypedArray<StringName>>(_gde_method_bind, _owner);
}

bool AnimationPlayer::has_animation(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("has_animation")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &name);
}

Ref<Animation> AnimationPlayer::get_animation(const StringName &name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_animation")._native_ptr(), 2933122410);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Animation>());
	return Ref<Animation>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Animation>(_gde_method_bind, _owner, &name));
}

PackedStringArray AnimationPlayer::get_animation_list() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_animation_list")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void AnimationPlayer::animation_set_next(const StringName &anim_from, const StringName &anim_to) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("animation_set_next")._native_ptr(), 3740211285);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &anim_from, &anim_to);
}

StringName AnimationPlayer::animation_get_next(const StringName &anim_from) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("animation_get_next")._native_ptr(), 1965194235);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, &anim_from);
}

void AnimationPlayer::set_blend_time(const StringName &anim_from, const StringName &anim_to, double sec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_blend_time")._native_ptr(), 3231131886);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sec_encoded;
	PtrToArg<double>::encode(sec, &sec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &anim_from, &anim_to, &sec_encoded);
}

double AnimationPlayer::get_blend_time(const StringName &anim_from, const StringName &anim_to) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_blend_time")._native_ptr(), 1958752504);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &anim_from, &anim_to);
}

void AnimationPlayer::set_default_blend_time(double sec) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_default_blend_time")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double sec_encoded;
	PtrToArg<double>::encode(sec, &sec_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &sec_encoded);
}

double AnimationPlayer::get_default_blend_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_default_blend_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AnimationPlayer::play(const StringName &name, double custom_blend, double custom_speed, bool from_end) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("play")._native_ptr(), 3118260607);
	CHECK_METHOD_BIND(_gde_method_bind);
	double custom_blend_encoded;
	PtrToArg<double>::encode(custom_blend, &custom_blend_encoded);
	double custom_speed_encoded;
	PtrToArg<double>::encode(custom_speed, &custom_speed_encoded);
	int8_t from_end_encoded;
	PtrToArg<bool>::encode(from_end, &from_end_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &custom_blend_encoded, &custom_speed_encoded, &from_end_encoded);
}

void AnimationPlayer::play_backwards(const StringName &name, double custom_blend) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("play_backwards")._native_ptr(), 2787282401);
	CHECK_METHOD_BIND(_gde_method_bind);
	double custom_blend_encoded;
	PtrToArg<double>::encode(custom_blend, &custom_blend_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &custom_blend_encoded);
}

void AnimationPlayer::pause() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("pause")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void AnimationPlayer::stop(bool keep_state) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("stop")._native_ptr(), 107499316);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t keep_state_encoded;
	PtrToArg<bool>::encode(keep_state, &keep_state_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &keep_state_encoded);
}

bool AnimationPlayer::is_playing() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("is_playing")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimationPlayer::set_current_animation(const String &anim) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_current_animation")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &anim);
}

String AnimationPlayer::get_current_animation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_current_animation")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void AnimationPlayer::set_assigned_animation(const String &anim) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_assigned_animation")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &anim);
}

String AnimationPlayer::get_assigned_animation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_assigned_animation")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void AnimationPlayer::queue(const StringName &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("queue")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

PackedStringArray AnimationPlayer::get_queue() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_queue")._native_ptr(), 2981934095);
	CHECK_METHOD_BIND_RET(_gde_method_bind, PackedStringArray());
	return internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void AnimationPlayer::clear_queue() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("clear_queue")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void AnimationPlayer::set_active(bool active) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t active_encoded;
	PtrToArg<bool>::encode(active, &active_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &active_encoded);
}

bool AnimationPlayer::is_active() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("is_active")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimationPlayer::set_speed_scale(double speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_speed_scale")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double speed_encoded;
	PtrToArg<double>::encode(speed, &speed_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &speed_encoded);
}

double AnimationPlayer::get_speed_scale() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_speed_scale")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double AnimationPlayer::get_playing_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_playing_speed")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AnimationPlayer::set_autoplay(const String &name) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_autoplay")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name);
}

String AnimationPlayer::get_autoplay() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_autoplay")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, String());
	return internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void AnimationPlayer::set_reset_on_save_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_reset_on_save_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool AnimationPlayer::is_reset_on_save_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("is_reset_on_save_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void AnimationPlayer::set_root(const NodePath &path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_root")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &path);
}

NodePath AnimationPlayer::get_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_root")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

StringName AnimationPlayer::find_animation(const Ref<Animation> &animation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("find_animation")._native_ptr(), 1559484580);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, (animation != nullptr ? &animation->_owner : nullptr));
}

StringName AnimationPlayer::find_animation_library(const Ref<Animation> &animation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("find_animation_library")._native_ptr(), 1559484580);
	CHECK_METHOD_BIND_RET(_gde_method_bind, StringName());
	return internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner, (animation != nullptr ? &animation->_owner : nullptr));
}

void AnimationPlayer::clear_caches() {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("clear_caches")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void AnimationPlayer::set_process_callback(AnimationPlayer::AnimationProcessCallback mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_process_callback")._native_ptr(), 1663839457);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AnimationPlayer::AnimationProcessCallback AnimationPlayer::get_process_callback() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_process_callback")._native_ptr(), 4207496604);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AnimationPlayer::AnimationProcessCallback(0));
	return (AnimationPlayer::AnimationProcessCallback)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationPlayer::set_method_call_mode(AnimationPlayer::AnimationMethodCallMode mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_method_call_mode")._native_ptr(), 3413514846);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &mode);
}

AnimationPlayer::AnimationMethodCallMode AnimationPlayer::get_method_call_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_method_call_mode")._native_ptr(), 3583380054);
	CHECK_METHOD_BIND_RET(_gde_method_bind, AnimationPlayer::AnimationMethodCallMode(0));
	return (AnimationPlayer::AnimationMethodCallMode)internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationPlayer::set_audio_max_polyphony(int32_t max_polyphony) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_audio_max_polyphony")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t max_polyphony_encoded;
	PtrToArg<int64_t>::encode(max_polyphony, &max_polyphony_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &max_polyphony_encoded);
}

int32_t AnimationPlayer::get_audio_max_polyphony() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_audio_max_polyphony")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0);
	return internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void AnimationPlayer::set_movie_quit_on_finish_enabled(bool enabled) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("set_movie_quit_on_finish_enabled")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t enabled_encoded;
	PtrToArg<bool>::encode(enabled, &enabled_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &enabled_encoded);
}

bool AnimationPlayer::is_movie_quit_on_finish_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("is_movie_quit_on_finish_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, false);
	return internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

double AnimationPlayer::get_current_animation_position() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_current_animation_position")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double AnimationPlayer::get_current_animation_length() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("get_current_animation_length")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, 0.0);
	return internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void AnimationPlayer::seek(double seconds, bool update) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("seek")._native_ptr(), 2087892650);
	CHECK_METHOD_BIND(_gde_method_bind);
	double seconds_encoded;
	PtrToArg<double>::encode(seconds, &seconds_encoded);
	int8_t update_encoded;
	PtrToArg<bool>::encode(update, &update_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &seconds_encoded, &update_encoded);
}

void AnimationPlayer::advance(double delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(AnimationPlayer::get_class_static()._native_ptr(), StringName("advance")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double delta_encoded;
	PtrToArg<double>::encode(delta, &delta_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &delta_encoded);
}

Variant AnimationPlayer::_post_process_key_value(const Ref<Animation> &animation, int32_t track, const Variant &value, Object *object, int32_t object_idx) const {
	return Variant();
}


} // namespace godot 