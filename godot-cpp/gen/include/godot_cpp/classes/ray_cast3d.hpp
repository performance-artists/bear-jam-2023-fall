/**************************************************************************/
/*  ray_cast3d.hpp                                                        */
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

#ifndef GODOT_CPP_RAY_CAST3D_HPP
#define GODOT_CPP_RAY_CAST3D_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/rid.hpp>
#include <godot_cpp/variant/vector3.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class CollisionObject3D;
class Object;

class RayCast3D : public Node3D {
	GDEXTENSION_CLASS(RayCast3D, Node3D)

public:

	void set_enabled(bool enabled);
	bool is_enabled() const;
	void set_target_position(const Vector3 &local_point);
	Vector3 get_target_position() const;
	bool is_colliding() const;
	void force_raycast_update();
	Object *get_collider() const;
	RID get_collider_rid() const;
	int32_t get_collider_shape() const;
	Vector3 get_collision_point() const;
	Vector3 get_collision_normal() const;
	void add_exception_rid(const RID &rid);
	void add_exception(CollisionObject3D *node);
	void remove_exception_rid(const RID &rid);
	void remove_exception(CollisionObject3D *node);
	void clear_exceptions();
	void set_collision_mask(uint32_t mask);
	uint32_t get_collision_mask() const;
	void set_collision_mask_value(int32_t layer_number, bool value);
	bool get_collision_mask_value(int32_t layer_number) const;
	void set_exclude_parent_body(bool mask);
	bool get_exclude_parent_body() const;
	void set_collide_with_areas(bool enable);
	bool is_collide_with_areas_enabled() const;
	void set_collide_with_bodies(bool enable);
	bool is_collide_with_bodies_enabled() const;
	void set_hit_from_inside(bool enable);
	bool is_hit_from_inside_enabled() const;
	void set_debug_shape_custom_color(const Color &debug_shape_custom_color);
	Color get_debug_shape_custom_color() const;
	void set_debug_shape_thickness(int32_t debug_shape_thickness);
	int32_t get_debug_shape_thickness() const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		Node3D::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_RAY_CAST3D_HPP