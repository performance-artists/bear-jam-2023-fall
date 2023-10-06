/**************************************************************************/
/*  open_xr_interface.hpp                                                 */
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

#ifndef GODOT_CPP_OPEN_XR_INTERFACE_HPP
#define GODOT_CPP_OPEN_XR_INTERFACE_HPP

#include <godot_cpp/variant/array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/xr_interface.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class String;

class OpenXRInterface : public XRInterface {
	GDEXTENSION_CLASS(OpenXRInterface, XRInterface)

public:

	double get_display_refresh_rate() const;
	void set_display_refresh_rate(double refresh_rate);
	double get_render_target_size_multiplier() const;
	void set_render_target_size_multiplier(double multiplier);
	bool is_action_set_active(const String &name) const;
	void set_action_set_active(const String &name, bool active);
	Array get_action_sets() const;
	Array get_available_display_refresh_rates() const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		XRInterface::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_OPEN_XR_INTERFACE_HPP