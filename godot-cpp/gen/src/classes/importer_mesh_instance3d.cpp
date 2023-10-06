/**************************************************************************/
/*  importer_mesh_instance3d.cpp                                          */
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

#include <godot_cpp/classes/importer_mesh_instance3d.hpp>

#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/skin.hpp>

namespace godot {

void ImporterMeshInstance3D::set_mesh(const Ref<ImporterMesh> &mesh) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMeshInstance3D::get_class_static()._native_ptr(), StringName("set_mesh")._native_ptr(), 2255166972);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (mesh != nullptr ? &mesh->_owner : nullptr));
}

Ref<ImporterMesh> ImporterMeshInstance3D::get_mesh() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMeshInstance3D::get_class_static()._native_ptr(), StringName("get_mesh")._native_ptr(), 3161779525);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<ImporterMesh>());
	return Ref<ImporterMesh>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<ImporterMesh>(_gde_method_bind, _owner));
}

void ImporterMeshInstance3D::set_skin(const Ref<Skin> &skin) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMeshInstance3D::get_class_static()._native_ptr(), StringName("set_skin")._native_ptr(), 3971435618);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (skin != nullptr ? &skin->_owner : nullptr));
}

Ref<Skin> ImporterMeshInstance3D::get_skin() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMeshInstance3D::get_class_static()._native_ptr(), StringName("get_skin")._native_ptr(), 2074563878);
	CHECK_METHOD_BIND_RET(_gde_method_bind, Ref<Skin>());
	return Ref<Skin>::_gde_internal_constructor(internal::_call_native_mb_ret_obj<Skin>(_gde_method_bind, _owner));
}

void ImporterMeshInstance3D::set_skeleton_path(const NodePath &skeleton_path) {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMeshInstance3D::get_class_static()._native_ptr(), StringName("set_skeleton_path")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &skeleton_path);
}

NodePath ImporterMeshInstance3D::get_skeleton_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = internal::gdextension_interface_classdb_get_method_bind(ImporterMeshInstance3D::get_class_static()._native_ptr(), StringName("get_skeleton_path")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, NodePath());
	return internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}


} // namespace godot 