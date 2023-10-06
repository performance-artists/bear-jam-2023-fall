/**************************************************************************/
/*  editor_node3d_gizmo_plugin.cpp                                        */
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

#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/variant/plane.hpp>
#include <godot_cpp/classes/standard_material3d.hpp>
#include <godot_cpp/variant/vector2.hpp>

namespace godot {

void EditorNode3DGizmoPlugin::create_material(const String &name, const Color &color, bool billboard, bool on_top, bool use_vertex_color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmoPlugin::get_class_static()._native_ptr(), StringName("create_material")._native_ptr(), 3486012546);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t billboard_encoded;
	PtrToArg<bool>::encode(billboard, &billboard_encoded);
	int8_t on_top_encoded;
	PtrToArg<bool>::encode(on_top, &on_top_encoded);
	int8_t use_vertex_color_encoded;
	PtrToArg<bool>::encode(use_vertex_color, &use_vertex_color_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &color, &billboard_encoded, &on_top_encoded, &use_vertex_color_encoded);
}

void EditorNode3DGizmoPlugin::create_icon_material(const String &name, const Ref<Texture2D> &texture, bool on_top, const Color &color) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmoPlugin::get_class_static()._native_ptr(), StringName("create_icon_material")._native_ptr(), 2976007329);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t on_top_encoded;
	PtrToArg<bool>::encode(on_top, &on_top_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, (texture != nullptr ? &texture->_owner : nullptr), &on_top_encoded, &color);
}

void EditorNode3DGizmoPlugin::create_handle_material(const String &name, bool billboard, const Ref<Texture2D> &texture) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmoPlugin::get_class_static()._native_ptr(), StringName("create_handle_material")._native_ptr(), 2486475223);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t billboard_encoded;
	PtrToArg<bool>::encode(billboard, &billboard_encoded);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, &billboard_encoded, (texture != nullptr ? &texture->_owner : nullptr));
}

void EditorNode3DGizmoPlugin::add_material(const String &name, const Ref<StandardMaterial3D> &material) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmoPlugin::get_class_static()._native_ptr(), StringName("add_material")._native_ptr(), 1374068695);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &name, (material != nullptr ? &material->_owner : nullptr));
}

Ref<StandardMaterial3D> EditorNode3DGizmoPlugin::get_material(const String &name, const Ref<EditorNode3DGizmo> &gizmo) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(EditorNode3DGizmoPlugin::get_class_static()._native_ptr(), StringName("get_material")._native_ptr(), 3501703615);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<StandardMaterial3D>());
	return Ref<StandardMaterial3D>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<StandardMaterial3D>(_gde_method_bind, _owner, &name, (gizmo != nullptr ? &gizmo->_owner : nullptr)));
}

bool EditorNode3DGizmoPlugin::_has_gizmo(Node3D *for_node_3d) const {
	return false;
}

Ref<EditorNode3DGizmo> EditorNode3DGizmoPlugin::_create_gizmo(Node3D *for_node_3d) const {
	return Ref<EditorNode3DGizmo>();
}

String EditorNode3DGizmoPlugin::_get_gizmo_name() const {
	return String();
}

int32_t EditorNode3DGizmoPlugin::_get_priority() const {
	return 0;
}

bool EditorNode3DGizmoPlugin::_can_be_hidden() const {
	return false;
}

bool EditorNode3DGizmoPlugin::_is_selectable_when_hidden() const {
	return false;
}

void EditorNode3DGizmoPlugin::_redraw(const Ref<EditorNode3DGizmo> &gizmo) {}

String EditorNode3DGizmoPlugin::_get_handle_name(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary) const {
	return String();
}

bool EditorNode3DGizmoPlugin::_is_handle_highlighted(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary) const {
	return false;
}

Variant EditorNode3DGizmoPlugin::_get_handle_value(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary) const {
	return Variant();
}

void EditorNode3DGizmoPlugin::_set_handle(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary, Camera3D *camera, const Vector2 &screen_pos) {}

void EditorNode3DGizmoPlugin::_commit_handle(const Ref<EditorNode3DGizmo> &gizmo, int32_t handle_id, bool secondary, const Variant &restore, bool cancel) {}

int32_t EditorNode3DGizmoPlugin::_subgizmos_intersect_ray(const Ref<EditorNode3DGizmo> &gizmo, Camera3D *camera, const Vector2 &screen_pos) const {
	return 0;
}

PackedInt32Array EditorNode3DGizmoPlugin::_subgizmos_intersect_frustum(const Ref<EditorNode3DGizmo> &gizmo, Camera3D *camera, const TypedArray<Plane> &frustum_planes) const {
	return PackedInt32Array();
}

Transform3D EditorNode3DGizmoPlugin::_get_subgizmo_transform(const Ref<EditorNode3DGizmo> &gizmo, int32_t subgizmo_id) const {
	return Transform3D();
}

void EditorNode3DGizmoPlugin::_set_subgizmo_transform(const Ref<EditorNode3DGizmo> &gizmo, int32_t subgizmo_id, const Transform3D &transform) {}

void EditorNode3DGizmoPlugin::_commit_subgizmos(const Ref<EditorNode3DGizmo> &gizmo, const PackedInt32Array &ids, const TypedArray<Transform3D> &restores, bool cancel) {}


} // namespace godot 