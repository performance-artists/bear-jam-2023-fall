/**************************************************************************/
/*  animation_tree.hpp                                                    */
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

#ifndef GODOT_CPP_ANIMATION_TREE_HPP
#define GODOT_CPP_ANIMATION_TREE_HPP

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/node_path.hpp>
#include <godot_cpp/variant/quaternion.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Animation;
class AnimationNode;
class Object;

class AnimationTree : public Node {
	GDEXTENSION_CLASS(AnimationTree, Node)

public:

	enum AnimationProcessCallback {
		ANIMATION_PROCESS_PHYSICS = 0,
		ANIMATION_PROCESS_IDLE = 1,
		ANIMATION_PROCESS_MANUAL = 2,
	};

	void set_active(bool active);
	bool is_active() const;
	void set_tree_root(const Ref<AnimationNode> &root);
	Ref<AnimationNode> get_tree_root() const;
	void set_process_callback(AnimationTree::AnimationProcessCallback mode);
	AnimationTree::AnimationProcessCallback get_process_callback() const;
	void set_animation_player(const NodePath &root);
	NodePath get_animation_player() const;
	void set_advance_expression_base_node(const NodePath &node);
	NodePath get_advance_expression_base_node() const;
	void set_root_motion_track(const NodePath &path);
	NodePath get_root_motion_track() const;
	void set_audio_max_polyphony(int32_t max_polyphony);
	int32_t get_audio_max_polyphony() const;
	Vector3 get_root_motion_position() const;
	Quaternion get_root_motion_rotation() const;
	Vector3 get_root_motion_scale() const;
	Vector3 get_root_motion_position_accumulator() const;
	Quaternion get_root_motion_rotation_accumulator() const;
	Vector3 get_root_motion_scale_accumulator() const;
	void advance(double delta);
	virtual Variant _post_process_key_value(const Ref<Animation> &animation, int32_t track, const Variant &value, Object *object, int32_t object_idx) const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		Node::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_post_process_key_value),decltype(&T::_post_process_key_value)>) {
			BIND_VIRTUAL_METHOD(T, _post_process_key_value);
		}
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(AnimationTree::AnimationProcessCallback);

#endif // ! GODOT_CPP_ANIMATION_TREE_HPP