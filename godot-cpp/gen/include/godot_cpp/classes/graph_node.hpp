/**************************************************************************/
/*  graph_node.hpp                                                        */
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

#ifndef GODOT_CPP_GRAPH_NODE_HPP
#define GODOT_CPP_GRAPH_NODE_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class GraphNode : public Container {
	GDEXTENSION_CLASS(GraphNode, Container)

public:

	enum Overlay {
		OVERLAY_DISABLED = 0,
		OVERLAY_BREAKPOINT = 1,
		OVERLAY_POSITION = 2,
	};

	void set_title(const String &title);
	String get_title() const;
	void set_text_direction(Control::TextDirection direction);
	Control::TextDirection get_text_direction() const;
	void set_language(const String &language);
	String get_language() const;
	void set_slot(int32_t slot_index, bool enable_left_port, int32_t type_left, const Color &color_left, bool enable_right_port, int32_t type_right, const Color &color_right, const Ref<Texture2D> &custom_icon_left = nullptr, const Ref<Texture2D> &custom_icon_right = nullptr, bool draw_stylebox = true);
	void clear_slot(int32_t slot_index);
	void clear_all_slots();
	void set_slot_enabled_left(int32_t slot_index, bool enable);
	bool is_slot_enabled_left(int32_t slot_index) const;
	void set_slot_type_left(int32_t slot_index, int32_t type);
	int32_t get_slot_type_left(int32_t slot_index) const;
	void set_slot_color_left(int32_t slot_index, const Color &color);
	Color get_slot_color_left(int32_t slot_index) const;
	void set_slot_enabled_right(int32_t slot_index, bool enable);
	bool is_slot_enabled_right(int32_t slot_index) const;
	void set_slot_type_right(int32_t slot_index, int32_t type);
	int32_t get_slot_type_right(int32_t slot_index) const;
	void set_slot_color_right(int32_t slot_index, const Color &color);
	Color get_slot_color_right(int32_t slot_index) const;
	bool is_slot_draw_stylebox(int32_t slot_index) const;
	void set_slot_draw_stylebox(int32_t slot_index, bool enable);
	void set_position_offset(const Vector2 &offset);
	Vector2 get_position_offset() const;
	void set_comment(bool comment);
	bool is_comment() const;
	void set_resizable(bool resizable);
	bool is_resizable() const;
	void set_draggable(bool draggable);
	bool is_draggable();
	void set_selectable(bool selectable);
	bool is_selectable();
	void set_selected(bool selected);
	bool is_selected();
	int32_t get_connection_input_count();
	int32_t get_connection_input_height(int32_t port);
	Vector2 get_connection_input_position(int32_t port);
	int32_t get_connection_input_type(int32_t port);
	Color get_connection_input_color(int32_t port);
	int32_t get_connection_input_slot(int32_t port);
	int32_t get_connection_output_count();
	int32_t get_connection_output_height(int32_t port);
	Vector2 get_connection_output_position(int32_t port);
	int32_t get_connection_output_type(int32_t port);
	Color get_connection_output_color(int32_t port);
	int32_t get_connection_output_slot(int32_t port);
	void set_show_close_button(bool show);
	bool is_close_button_visible() const;
	void set_overlay(GraphNode::Overlay overlay);
	GraphNode::Overlay get_overlay() const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		Container::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(GraphNode::Overlay);

#endif // ! GODOT_CPP_GRAPH_NODE_HPP