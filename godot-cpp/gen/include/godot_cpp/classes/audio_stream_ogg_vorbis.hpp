/**************************************************************************/
/*  audio_stream_ogg_vorbis.hpp                                           */
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

#ifndef GODOT_CPP_AUDIO_STREAM_OGG_VORBIS_HPP
#define GODOT_CPP_AUDIO_STREAM_OGG_VORBIS_HPP

#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/ref.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class OggPacketSequence;

class AudioStreamOggVorbis : public AudioStream {
	GDEXTENSION_CLASS(AudioStreamOggVorbis, AudioStream)

public:

	void set_packet_sequence(const Ref<OggPacketSequence> &packet_sequence);
	Ref<OggPacketSequence> get_packet_sequence() const;
	void set_loop(bool enable);
	bool has_loop() const;
	void set_loop_offset(double seconds);
	double get_loop_offset() const;
	void set_bpm(double bpm);
	double get_bpm() const;
	void set_beat_count(int32_t count);
	int32_t get_beat_count() const;
	void set_bar_beats(int32_t count);
	int32_t get_bar_beats() const;
protected:
	template <class T, class B>
	static void register_virtuals() {
		AudioStream::register_virtuals<T, B>();
	}

public:

};

} // namespace godot

#endif // ! GODOT_CPP_AUDIO_STREAM_OGG_VORBIS_HPP