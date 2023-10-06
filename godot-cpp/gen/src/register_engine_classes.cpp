/**************************************************************************/
/*  register_engine_classes.cpp                                           */
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

#include <godot_cpp/godot.hpp>

#include <godot_cpp/classes/aes_context.hpp>
#include <godot_cpp/classes/a_star2d.hpp>
#include <godot_cpp/classes/a_star3d.hpp>
#include <godot_cpp/classes/a_star_grid2d.hpp>
#include <godot_cpp/classes/accept_dialog.hpp>
#include <godot_cpp/classes/animatable_body2d.hpp>
#include <godot_cpp/classes/animatable_body3d.hpp>
#include <godot_cpp/classes/animated_sprite2d.hpp>
#include <godot_cpp/classes/animated_sprite3d.hpp>
#include <godot_cpp/classes/animated_texture.hpp>
#include <godot_cpp/classes/animation.hpp>
#include <godot_cpp/classes/animation_library.hpp>
#include <godot_cpp/classes/animation_node.hpp>
#include <godot_cpp/classes/animation_node_add2.hpp>
#include <godot_cpp/classes/animation_node_add3.hpp>
#include <godot_cpp/classes/animation_node_animation.hpp>
#include <godot_cpp/classes/animation_node_blend2.hpp>
#include <godot_cpp/classes/animation_node_blend3.hpp>
#include <godot_cpp/classes/animation_node_blend_space1_d.hpp>
#include <godot_cpp/classes/animation_node_blend_space2d.hpp>
#include <godot_cpp/classes/animation_node_blend_tree.hpp>
#include <godot_cpp/classes/animation_node_one_shot.hpp>
#include <godot_cpp/classes/animation_node_output.hpp>
#include <godot_cpp/classes/animation_node_state_machine.hpp>
#include <godot_cpp/classes/animation_node_state_machine_playback.hpp>
#include <godot_cpp/classes/animation_node_state_machine_transition.hpp>
#include <godot_cpp/classes/animation_node_sub2.hpp>
#include <godot_cpp/classes/animation_node_sync.hpp>
#include <godot_cpp/classes/animation_node_time_scale.hpp>
#include <godot_cpp/classes/animation_node_time_seek.hpp>
#include <godot_cpp/classes/animation_node_transition.hpp>
#include <godot_cpp/classes/animation_player.hpp>
#include <godot_cpp/classes/animation_root_node.hpp>
#include <godot_cpp/classes/animation_tree.hpp>
#include <godot_cpp/classes/area2d.hpp>
#include <godot_cpp/classes/area3d.hpp>
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/array_occluder3d.hpp>
#include <godot_cpp/classes/aspect_ratio_container.hpp>
#include <godot_cpp/classes/atlas_texture.hpp>
#include <godot_cpp/classes/audio_bus_layout.hpp>
#include <godot_cpp/classes/audio_effect.hpp>
#include <godot_cpp/classes/audio_effect_amplify.hpp>
#include <godot_cpp/classes/audio_effect_band_limit_filter.hpp>
#include <godot_cpp/classes/audio_effect_band_pass_filter.hpp>
#include <godot_cpp/classes/audio_effect_capture.hpp>
#include <godot_cpp/classes/audio_effect_chorus.hpp>
#include <godot_cpp/classes/audio_effect_compressor.hpp>
#include <godot_cpp/classes/audio_effect_delay.hpp>
#include <godot_cpp/classes/audio_effect_distortion.hpp>
#include <godot_cpp/classes/audio_effect_eq.hpp>
#include <godot_cpp/classes/audio_effect_eq10.hpp>
#include <godot_cpp/classes/audio_effect_eq21.hpp>
#include <godot_cpp/classes/audio_effect_eq6.hpp>
#include <godot_cpp/classes/audio_effect_filter.hpp>
#include <godot_cpp/classes/audio_effect_high_pass_filter.hpp>
#include <godot_cpp/classes/audio_effect_high_shelf_filter.hpp>
#include <godot_cpp/classes/audio_effect_instance.hpp>
#include <godot_cpp/classes/audio_effect_limiter.hpp>
#include <godot_cpp/classes/audio_effect_low_pass_filter.hpp>
#include <godot_cpp/classes/audio_effect_low_shelf_filter.hpp>
#include <godot_cpp/classes/audio_effect_notch_filter.hpp>
#include <godot_cpp/classes/audio_effect_panner.hpp>
#include <godot_cpp/classes/audio_effect_phaser.hpp>
#include <godot_cpp/classes/audio_effect_pitch_shift.hpp>
#include <godot_cpp/classes/audio_effect_record.hpp>
#include <godot_cpp/classes/audio_effect_reverb.hpp>
#include <godot_cpp/classes/audio_effect_spectrum_analyzer.hpp>
#include <godot_cpp/classes/audio_effect_spectrum_analyzer_instance.hpp>
#include <godot_cpp/classes/audio_effect_stereo_enhance.hpp>
#include <godot_cpp/classes/audio_listener2d.hpp>
#include <godot_cpp/classes/audio_listener3d.hpp>
#include <godot_cpp/classes/audio_server.hpp>
#include <godot_cpp/classes/audio_stream.hpp>
#include <godot_cpp/classes/audio_stream_generator.hpp>
#include <godot_cpp/classes/audio_stream_generator_playback.hpp>
#include <godot_cpp/classes/audio_stream_mp3.hpp>
#include <godot_cpp/classes/audio_stream_microphone.hpp>
#include <godot_cpp/classes/audio_stream_ogg_vorbis.hpp>
#include <godot_cpp/classes/audio_stream_playback.hpp>
#include <godot_cpp/classes/audio_stream_playback_ogg_vorbis.hpp>
#include <godot_cpp/classes/audio_stream_playback_polyphonic.hpp>
#include <godot_cpp/classes/audio_stream_playback_resampled.hpp>
#include <godot_cpp/classes/audio_stream_player.hpp>
#include <godot_cpp/classes/audio_stream_player2d.hpp>
#include <godot_cpp/classes/audio_stream_player3d.hpp>
#include <godot_cpp/classes/audio_stream_polyphonic.hpp>
#include <godot_cpp/classes/audio_stream_randomizer.hpp>
#include <godot_cpp/classes/audio_stream_wav.hpp>
#include <godot_cpp/classes/back_buffer_copy.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/base_material3d.hpp>
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/classes/bone2d.hpp>
#include <godot_cpp/classes/bone_attachment3d.hpp>
#include <godot_cpp/classes/bone_map.hpp>
#include <godot_cpp/classes/box_container.hpp>
#include <godot_cpp/classes/box_mesh.hpp>
#include <godot_cpp/classes/box_occluder3d.hpp>
#include <godot_cpp/classes/box_shape3d.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/button_group.hpp>
#include <godot_cpp/classes/cpu_particles2d.hpp>
#include <godot_cpp/classes/cpu_particles3d.hpp>
#include <godot_cpp/classes/csg_box3d.hpp>
#include <godot_cpp/classes/csg_combiner3d.hpp>
#include <godot_cpp/classes/csg_cylinder3d.hpp>
#include <godot_cpp/classes/csg_mesh3d.hpp>
#include <godot_cpp/classes/csg_polygon3d.hpp>
#include <godot_cpp/classes/csg_primitive3d.hpp>
#include <godot_cpp/classes/csg_shape3d.hpp>
#include <godot_cpp/classes/csg_sphere3d.hpp>
#include <godot_cpp/classes/csg_torus3d.hpp>
#include <godot_cpp/classes/callback_tweener.hpp>
#include <godot_cpp/classes/camera2d.hpp>
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/camera_attributes_physical.hpp>
#include <godot_cpp/classes/camera_attributes_practical.hpp>
#include <godot_cpp/classes/camera_feed.hpp>
#include <godot_cpp/classes/camera_server.hpp>
#include <godot_cpp/classes/camera_texture.hpp>
#include <godot_cpp/classes/canvas_group.hpp>
#include <godot_cpp/classes/canvas_item.hpp>
#include <godot_cpp/classes/canvas_item_material.hpp>
#include <godot_cpp/classes/canvas_layer.hpp>
#include <godot_cpp/classes/canvas_modulate.hpp>
#include <godot_cpp/classes/canvas_texture.hpp>
#include <godot_cpp/classes/capsule_mesh.hpp>
#include <godot_cpp/classes/capsule_shape2d.hpp>
#include <godot_cpp/classes/capsule_shape3d.hpp>
#include <godot_cpp/classes/center_container.hpp>
#include <godot_cpp/classes/char_fx_transform.hpp>
#include <godot_cpp/classes/character_body2d.hpp>
#include <godot_cpp/classes/character_body3d.hpp>
#include <godot_cpp/classes/check_box.hpp>
#include <godot_cpp/classes/check_button.hpp>
#include <godot_cpp/classes/circle_shape2d.hpp>
#include <godot_cpp/classes/class_db_singleton.hpp>
#include <godot_cpp/classes/code_edit.hpp>
#include <godot_cpp/classes/code_highlighter.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/collision_polygon2d.hpp>
#include <godot_cpp/classes/collision_polygon3d.hpp>
#include <godot_cpp/classes/collision_shape2d.hpp>
#include <godot_cpp/classes/collision_shape3d.hpp>
#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/classes/color_picker_button.hpp>
#include <godot_cpp/classes/color_rect.hpp>
#include <godot_cpp/classes/compressed_cubemap.hpp>
#include <godot_cpp/classes/compressed_cubemap_array.hpp>
#include <godot_cpp/classes/compressed_texture2d.hpp>
#include <godot_cpp/classes/compressed_texture2d_array.hpp>
#include <godot_cpp/classes/compressed_texture3d.hpp>
#include <godot_cpp/classes/compressed_texture_layered.hpp>
#include <godot_cpp/classes/concave_polygon_shape2d.hpp>
#include <godot_cpp/classes/concave_polygon_shape3d.hpp>
#include <godot_cpp/classes/cone_twist_joint3d.hpp>
#include <godot_cpp/classes/config_file.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/container.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/convex_polygon_shape2d.hpp>
#include <godot_cpp/classes/convex_polygon_shape3d.hpp>
#include <godot_cpp/classes/crypto.hpp>
#include <godot_cpp/classes/crypto_key.hpp>
#include <godot_cpp/classes/cubemap.hpp>
#include <godot_cpp/classes/cubemap_array.hpp>
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/curve2d.hpp>
#include <godot_cpp/classes/curve3d.hpp>
#include <godot_cpp/classes/curve_texture.hpp>
#include <godot_cpp/classes/curve_xyz_texture.hpp>
#include <godot_cpp/classes/cylinder_mesh.hpp>
#include <godot_cpp/classes/cylinder_shape3d.hpp>
#include <godot_cpp/classes/dtls_server.hpp>
#include <godot_cpp/classes/damped_spring_joint2d.hpp>
#include <godot_cpp/classes/decal.hpp>
#include <godot_cpp/classes/dir_access.hpp>
#include <godot_cpp/classes/directional_light2d.hpp>
#include <godot_cpp/classes/directional_light3d.hpp>
#include <godot_cpp/classes/display_server.hpp>
#include <godot_cpp/classes/e_net_connection.hpp>
#include <godot_cpp/classes/e_net_multiplayer_peer.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/classes/editor_command_palette.hpp>
#include <godot_cpp/classes/editor_debugger_plugin.hpp>
#include <godot_cpp/classes/editor_debugger_session.hpp>
#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/editor_export_platform_android.hpp>
#include <godot_cpp/classes/editor_export_platform_ios.hpp>
#include <godot_cpp/classes/editor_export_platform_linux_bsd.hpp>
#include <godot_cpp/classes/editor_export_platform_mac_os.hpp>
#include <godot_cpp/classes/editor_export_platform_pc.hpp>
#include <godot_cpp/classes/editor_export_platform_web.hpp>
#include <godot_cpp/classes/editor_export_platform_windows.hpp>
#include <godot_cpp/classes/editor_export_plugin.hpp>
#include <godot_cpp/classes/editor_feature_profile.hpp>
#include <godot_cpp/classes/editor_file_dialog.hpp>
#include <godot_cpp/classes/editor_file_system.hpp>
#include <godot_cpp/classes/editor_file_system_directory.hpp>
#include <godot_cpp/classes/editor_file_system_import_format_support_query.hpp>
#include <godot_cpp/classes/editor_import_plugin.hpp>
#include <godot_cpp/classes/editor_inspector.hpp>
#include <godot_cpp/classes/editor_inspector_plugin.hpp>
#include <godot_cpp/classes/editor_interface.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo.hpp>
#include <godot_cpp/classes/editor_node3d_gizmo_plugin.hpp>
#include <godot_cpp/classes/editor_paths.hpp>
#include <godot_cpp/classes/editor_plugin.hpp>
#include <godot_cpp/classes/editor_property.hpp>
#include <godot_cpp/classes/editor_resource_conversion_plugin.hpp>
#include <godot_cpp/classes/editor_resource_picker.hpp>
#include <godot_cpp/classes/editor_resource_preview.hpp>
#include <godot_cpp/classes/editor_resource_preview_generator.hpp>
#include <godot_cpp/classes/editor_resource_tooltip_plugin.hpp>
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/classes/editor_scene_format_importer_blend.hpp>
#include <godot_cpp/classes/editor_scene_format_importer_fbx.hpp>
#include <godot_cpp/classes/editor_scene_format_importer_gltf.hpp>
#include <godot_cpp/classes/editor_scene_post_import.hpp>
#include <godot_cpp/classes/editor_scene_post_import_plugin.hpp>
#include <godot_cpp/classes/editor_script.hpp>
#include <godot_cpp/classes/editor_script_picker.hpp>
#include <godot_cpp/classes/editor_selection.hpp>
#include <godot_cpp/classes/editor_settings.hpp>
#include <godot_cpp/classes/editor_spin_slider.hpp>
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/editor_translation_parser_plugin.hpp>
#include <godot_cpp/classes/editor_undo_redo_manager.hpp>
#include <godot_cpp/classes/editor_vcs_interface.hpp>
#include <godot_cpp/classes/encoded_object_as_id.hpp>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/engine_debugger.hpp>
#include <godot_cpp/classes/engine_profiler.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/expression.hpp>
#include <godot_cpp/classes/fast_noise_lite.hpp>
#include <godot_cpp/classes/file_access.hpp>
#include <godot_cpp/classes/file_dialog.hpp>
#include <godot_cpp/classes/file_system_dock.hpp>
#include <godot_cpp/classes/flow_container.hpp>
#include <godot_cpp/classes/fog_material.hpp>
#include <godot_cpp/classes/fog_volume.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/font_file.hpp>
#include <godot_cpp/classes/font_variation.hpp>
#include <godot_cpp/classes/framebuffer_cache_rd.hpp>
#include <godot_cpp/classes/gd_extension.hpp>
#include <godot_cpp/classes/gd_extension_manager.hpp>
#include <godot_cpp/classes/gd_script.hpp>
#include <godot_cpp/classes/gd_script_editor_translation_parser_plugin.hpp>
#include <godot_cpp/classes/gd_script_native_class.hpp>
#include <godot_cpp/classes/gltf_accessor.hpp>
#include <godot_cpp/classes/gltf_animation.hpp>
#include <godot_cpp/classes/gltf_buffer_view.hpp>
#include <godot_cpp/classes/gltf_camera.hpp>
#include <godot_cpp/classes/gltf_document.hpp>
#include <godot_cpp/classes/gltf_document_extension.hpp>
#include <godot_cpp/classes/gltf_document_extension_convert_importer_mesh.hpp>
#include <godot_cpp/classes/gltf_document_extension_physics.hpp>
#include <godot_cpp/classes/gltf_document_extension_texture_web_p.hpp>
#include <godot_cpp/classes/gltf_light.hpp>
#include <godot_cpp/classes/gltf_mesh.hpp>
#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/classes/gltf_physics_body.hpp>
#include <godot_cpp/classes/gltf_physics_shape.hpp>
#include <godot_cpp/classes/gltf_skeleton.hpp>
#include <godot_cpp/classes/gltf_skin.hpp>
#include <godot_cpp/classes/gltf_spec_gloss.hpp>
#include <godot_cpp/classes/gltf_state.hpp>
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/gltf_texture_sampler.hpp>
#include <godot_cpp/classes/gpu_particles2d.hpp>
#include <godot_cpp/classes/gpu_particles3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor_box3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor_sphere3d.hpp>
#include <godot_cpp/classes/gpu_particles_attractor_vector_field3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision_box3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision_height_field3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision_sdf3d.hpp>
#include <godot_cpp/classes/gpu_particles_collision_sphere3d.hpp>
#include <godot_cpp/classes/generic6_dof_joint3d.hpp>
#include <godot_cpp/classes/geometry2d.hpp>
#include <godot_cpp/classes/geometry3d.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/godot_physics_server2d.hpp>
#include <godot_cpp/classes/godot_physics_server3d.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/gradient_texture1_d.hpp>
#include <godot_cpp/classes/gradient_texture2d.hpp>
#include <godot_cpp/classes/graph_edit.hpp>
#include <godot_cpp/classes/graph_node.hpp>
#include <godot_cpp/classes/grid_container.hpp>
#include <godot_cpp/classes/grid_map.hpp>
#include <godot_cpp/classes/groove_joint2d.hpp>
#include <godot_cpp/classes/h_box_container.hpp>
#include <godot_cpp/classes/h_flow_container.hpp>
#include <godot_cpp/classes/hmac_context.hpp>
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/h_separator.hpp>
#include <godot_cpp/classes/h_slider.hpp>
#include <godot_cpp/classes/h_split_container.hpp>
#include <godot_cpp/classes/http_client.hpp>
#include <godot_cpp/classes/http_request.hpp>
#include <godot_cpp/classes/hashing_context.hpp>
#include <godot_cpp/classes/height_map_shape3d.hpp>
#include <godot_cpp/classes/hinge_joint3d.hpp>
#include <godot_cpp/classes/ip.hpp>
#include <godot_cpp/classes/ip_unix.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/image_format_loader.hpp>
#include <godot_cpp/classes/image_format_loader_extension.hpp>
#include <godot_cpp/classes/image_texture.hpp>
#include <godot_cpp/classes/image_texture3d.hpp>
#include <godot_cpp/classes/image_texture_layered.hpp>
#include <godot_cpp/classes/immediate_mesh.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/importer_mesh_instance3d.hpp>
#include <godot_cpp/classes/input.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_action.hpp>
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/classes/input_event_gesture.hpp>
#include <godot_cpp/classes/input_event_joypad_button.hpp>
#include <godot_cpp/classes/input_event_joypad_motion.hpp>
#include <godot_cpp/classes/input_event_key.hpp>
#include <godot_cpp/classes/input_event_midi.hpp>
#include <godot_cpp/classes/input_event_magnify_gesture.hpp>
#include <godot_cpp/classes/input_event_mouse.hpp>
#include <godot_cpp/classes/input_event_mouse_button.hpp>
#include <godot_cpp/classes/input_event_mouse_motion.hpp>
#include <godot_cpp/classes/input_event_pan_gesture.hpp>
#include <godot_cpp/classes/input_event_screen_drag.hpp>
#include <godot_cpp/classes/input_event_screen_touch.hpp>
#include <godot_cpp/classes/input_event_shortcut.hpp>
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/classes/input_map.hpp>
#include <godot_cpp/classes/instance_placeholder.hpp>
#include <godot_cpp/classes/interval_tweener.hpp>
#include <godot_cpp/classes/item_list.hpp>
#include <godot_cpp/classes/jni_singleton.hpp>
#include <godot_cpp/classes/json.hpp>
#include <godot_cpp/classes/jsonrpc.hpp>
#include <godot_cpp/classes/java_class.hpp>
#include <godot_cpp/classes/java_class_wrapper.hpp>
#include <godot_cpp/classes/java_script_bridge.hpp>
#include <godot_cpp/classes/java_script_object.hpp>
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/kinematic_collision2d.hpp>
#include <godot_cpp/classes/kinematic_collision3d.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/classes/label3d.hpp>
#include <godot_cpp/classes/label_settings.hpp>
#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/light_occluder2d.hpp>
#include <godot_cpp/classes/lightmap_gi.hpp>
#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/classes/lightmap_probe.hpp>
#include <godot_cpp/classes/lightmapper.hpp>
#include <godot_cpp/classes/lightmapper_rd.hpp>
#include <godot_cpp/classes/line2d.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/link_button.hpp>
#include <godot_cpp/classes/main_loop.hpp>
#include <godot_cpp/classes/margin_container.hpp>
#include <godot_cpp/classes/marker2d.hpp>
#include <godot_cpp/classes/marker3d.hpp>
#include <godot_cpp/classes/marshalls.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/menu_bar.hpp>
#include <godot_cpp/classes/menu_button.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>
#include <godot_cpp/classes/mesh_data_tool.hpp>
#include <godot_cpp/classes/mesh_instance2d.hpp>
#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/mesh_library.hpp>
#include <godot_cpp/classes/mesh_texture.hpp>
#include <godot_cpp/classes/method_tweener.hpp>
#include <godot_cpp/classes/missing_node.hpp>
#include <godot_cpp/classes/missing_resource.hpp>
#include <godot_cpp/classes/mobile_vr_interface.hpp>
#include <godot_cpp/classes/movie_writer.hpp>
#include <godot_cpp/classes/movie_writer_mjpeg.hpp>
#include <godot_cpp/classes/movie_writer_pngwav.hpp>
#include <godot_cpp/classes/multi_mesh.hpp>
#include <godot_cpp/classes/multi_mesh_instance2d.hpp>
#include <godot_cpp/classes/multi_mesh_instance3d.hpp>
#include <godot_cpp/classes/multiplayer_api.hpp>
#include <godot_cpp/classes/multiplayer_api_extension.hpp>
#include <godot_cpp/classes/multiplayer_peer.hpp>
#include <godot_cpp/classes/multiplayer_peer_extension.hpp>
#include <godot_cpp/classes/multiplayer_spawner.hpp>
#include <godot_cpp/classes/multiplayer_synchronizer.hpp>
#include <godot_cpp/classes/mutex.hpp>
#include <godot_cpp/classes/navigation_agent2d.hpp>
#include <godot_cpp/classes/navigation_agent3d.hpp>
#include <godot_cpp/classes/navigation_link2d.hpp>
#include <godot_cpp/classes/navigation_link3d.hpp>
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_generator.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/navigation_obstacle2d.hpp>
#include <godot_cpp/classes/navigation_obstacle3d.hpp>
#include <godot_cpp/classes/navigation_path_query_parameters2d.hpp>
#include <godot_cpp/classes/navigation_path_query_parameters3d.hpp>
#include <godot_cpp/classes/navigation_path_query_result2d.hpp>
#include <godot_cpp/classes/navigation_path_query_result3d.hpp>
#include <godot_cpp/classes/navigation_polygon.hpp>
#include <godot_cpp/classes/navigation_region2d.hpp>
#include <godot_cpp/classes/navigation_region3d.hpp>
#include <godot_cpp/classes/navigation_server2d.hpp>
#include <godot_cpp/classes/navigation_server3d.hpp>
#include <godot_cpp/classes/nine_patch_rect.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/node3d_gizmo.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/noise_texture2d.hpp>
#include <godot_cpp/classes/noise_texture3d.hpp>
#include <godot_cpp/classes/orm_material3d.hpp>
#include <godot_cpp/classes/os.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/occluder3d.hpp>
#include <godot_cpp/classes/occluder_instance3d.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/classes/offline_multiplayer_peer.hpp>
#include <godot_cpp/classes/ogg_packet_sequence.hpp>
#include <godot_cpp/classes/ogg_packet_sequence_playback.hpp>
#include <godot_cpp/classes/omni_light3d.hpp>
#include <godot_cpp/classes/open_xr_action.hpp>
#include <godot_cpp/classes/open_xr_action_map.hpp>
#include <godot_cpp/classes/open_xr_action_set.hpp>
#include <godot_cpp/classes/open_xr_hand.hpp>
#include <godot_cpp/classes/open_xrip_binding.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile.hpp>
#include <godot_cpp/classes/open_xr_interaction_profile_metadata.hpp>
#include <godot_cpp/classes/open_xr_interface.hpp>
#include <godot_cpp/classes/optimized_translation.hpp>
#include <godot_cpp/classes/option_button.hpp>
#include <godot_cpp/classes/pck_packer.hpp>
#include <godot_cpp/classes/packed_data_container.hpp>
#include <godot_cpp/classes/packed_data_container_ref.hpp>
#include <godot_cpp/classes/packed_scene.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_dtls.hpp>
#include <godot_cpp/classes/packet_peer_extension.hpp>
#include <godot_cpp/classes/packet_peer_stream.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/panel.hpp>
#include <godot_cpp/classes/panel_container.hpp>
#include <godot_cpp/classes/panorama_sky_material.hpp>
#include <godot_cpp/classes/parallax_background.hpp>
#include <godot_cpp/classes/parallax_layer.hpp>
#include <godot_cpp/classes/particle_process_material.hpp>
#include <godot_cpp/classes/path2d.hpp>
#include <godot_cpp/classes/path3d.hpp>
#include <godot_cpp/classes/path_follow2d.hpp>
#include <godot_cpp/classes/path_follow3d.hpp>
#include <godot_cpp/classes/performance.hpp>
#include <godot_cpp/classes/physical_bone2d.hpp>
#include <godot_cpp/classes/physical_bone3d.hpp>
#include <godot_cpp/classes/physical_sky_material.hpp>
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d_extension.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d_extension.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d_extension.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d_extension.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/physics_point_query_parameters2d.hpp>
#include <godot_cpp/classes/physics_point_query_parameters3d.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters2d.hpp>
#include <godot_cpp/classes/physics_ray_query_parameters3d.hpp>
#include <godot_cpp/classes/physics_server2d.hpp>
#include <godot_cpp/classes/physics_server2d_extension.hpp>
#include <godot_cpp/classes/physics_server2d_manager.hpp>
#include <godot_cpp/classes/physics_server3d.hpp>
#include <godot_cpp/classes/physics_server3d_extension.hpp>
#include <godot_cpp/classes/physics_server3d_manager.hpp>
#include <godot_cpp/classes/physics_server3d_rendering_server_handler.hpp>
#include <godot_cpp/classes/physics_shape_query_parameters2d.hpp>
#include <godot_cpp/classes/physics_shape_query_parameters3d.hpp>
#include <godot_cpp/classes/physics_test_motion_parameters2d.hpp>
#include <godot_cpp/classes/physics_test_motion_parameters3d.hpp>
#include <godot_cpp/classes/physics_test_motion_result2d.hpp>
#include <godot_cpp/classes/physics_test_motion_result3d.hpp>
#include <godot_cpp/classes/pin_joint2d.hpp>
#include <godot_cpp/classes/pin_joint3d.hpp>
#include <godot_cpp/classes/placeholder_cubemap.hpp>
#include <godot_cpp/classes/placeholder_cubemap_array.hpp>
#include <godot_cpp/classes/placeholder_material.hpp>
#include <godot_cpp/classes/placeholder_mesh.hpp>
#include <godot_cpp/classes/placeholder_texture2d.hpp>
#include <godot_cpp/classes/placeholder_texture2d_array.hpp>
#include <godot_cpp/classes/placeholder_texture3d.hpp>
#include <godot_cpp/classes/placeholder_texture_layered.hpp>
#include <godot_cpp/classes/plane_mesh.hpp>
#include <godot_cpp/classes/point_light2d.hpp>
#include <godot_cpp/classes/point_mesh.hpp>
#include <godot_cpp/classes/polygon2d.hpp>
#include <godot_cpp/classes/polygon_occluder3d.hpp>
#include <godot_cpp/classes/polygon_path_finder.hpp>
#include <godot_cpp/classes/popup.hpp>
#include <godot_cpp/classes/popup_menu.hpp>
#include <godot_cpp/classes/popup_panel.hpp>
#include <godot_cpp/classes/portable_compressed_texture2d.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/classes/prism_mesh.hpp>
#include <godot_cpp/classes/procedural_sky_material.hpp>
#include <godot_cpp/classes/progress_bar.hpp>
#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/classes/property_tweener.hpp>
#include <godot_cpp/classes/quad_mesh.hpp>
#include <godot_cpp/classes/quad_occluder3d.hpp>
#include <godot_cpp/classes/rd_attachment_format.hpp>
#include <godot_cpp/classes/rd_framebuffer_pass.hpp>
#include <godot_cpp/classes/rd_pipeline_color_blend_state.hpp>
#include <godot_cpp/classes/rd_pipeline_color_blend_state_attachment.hpp>
#include <godot_cpp/classes/rd_pipeline_depth_stencil_state.hpp>
#include <godot_cpp/classes/rd_pipeline_multisample_state.hpp>
#include <godot_cpp/classes/rd_pipeline_rasterization_state.hpp>
#include <godot_cpp/classes/rd_pipeline_specialization_constant.hpp>
#include <godot_cpp/classes/rd_sampler_state.hpp>
#include <godot_cpp/classes/rd_shader_file.hpp>
#include <godot_cpp/classes/rd_shader_spirv.hpp>
#include <godot_cpp/classes/rd_shader_source.hpp>
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/classes/rd_vertex_attribute.hpp>
#include <godot_cpp/classes/random_number_generator.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/ray_cast2d.hpp>
#include <godot_cpp/classes/ray_cast3d.hpp>
#include <godot_cpp/classes/rectangle_shape2d.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/reference_rect.hpp>
#include <godot_cpp/classes/reflection_probe.hpp>
#include <godot_cpp/classes/reg_ex.hpp>
#include <godot_cpp/classes/reg_ex_match.hpp>
#include <godot_cpp/classes/remote_transform2d.hpp>
#include <godot_cpp/classes/remote_transform3d.hpp>
#include <godot_cpp/classes/rendering_device.hpp>
#include <godot_cpp/classes/rendering_server.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_importer_saver.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>
#include <godot_cpp/classes/resource_format_saver.hpp>
#include <godot_cpp/classes/resource_importer.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/classes/resource_preloader.hpp>
#include <godot_cpp/classes/resource_saver.hpp>
#include <godot_cpp/classes/resource_uid.hpp>
#include <godot_cpp/classes/ribbon_trail_mesh.hpp>
#include <godot_cpp/classes/rich_text_effect.hpp>
#include <godot_cpp/classes/rich_text_label.hpp>
#include <godot_cpp/classes/rigid_body2d.hpp>
#include <godot_cpp/classes/rigid_body3d.hpp>
#include <godot_cpp/classes/root_motion_view.hpp>
#include <godot_cpp/classes/scene_multiplayer.hpp>
#include <godot_cpp/classes/scene_replication_config.hpp>
#include <godot_cpp/classes/scene_state.hpp>
#include <godot_cpp/classes/scene_tree.hpp>
#include <godot_cpp/classes/scene_tree_timer.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_create_dialog.hpp>
#include <godot_cpp/classes/script_editor.hpp>
#include <godot_cpp/classes/script_editor_base.hpp>
#include <godot_cpp/classes/script_extension.hpp>
#include <godot_cpp/classes/script_language.hpp>
#include <godot_cpp/classes/script_language_extension.hpp>
#include <godot_cpp/classes/scroll_bar.hpp>
#include <godot_cpp/classes/scroll_container.hpp>
#include <godot_cpp/classes/segment_shape2d.hpp>
#include <godot_cpp/classes/semaphore.hpp>
#include <godot_cpp/classes/separation_ray_shape2d.hpp>
#include <godot_cpp/classes/separation_ray_shape3d.hpp>
#include <godot_cpp/classes/separator.hpp>
#include <godot_cpp/classes/shader.hpp>
#include <godot_cpp/classes/shader_globals_override.hpp>
#include <godot_cpp/classes/shader_include.hpp>
#include <godot_cpp/classes/shader_material.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/shape_cast2d.hpp>
#include <godot_cpp/classes/shape_cast3d.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/classes/skeleton2d.hpp>
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/classes/skeleton_ik3d.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2dccdik.hpp>
#include <godot_cpp/classes/skeleton_modification2dfabrik.hpp>
#include <godot_cpp/classes/skeleton_modification2d_jiggle.hpp>
#include <godot_cpp/classes/skeleton_modification2d_look_at.hpp>
#include <godot_cpp/classes/skeleton_modification2d_physical_bones.hpp>
#include <godot_cpp/classes/skeleton_modification2d_stack_holder.hpp>
#include <godot_cpp/classes/skeleton_modification2d_two_bone_ik.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <godot_cpp/classes/skeleton_profile.hpp>
#include <godot_cpp/classes/skeleton_profile_humanoid.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/slider.hpp>
#include <godot_cpp/classes/slider_joint3d.hpp>
#include <godot_cpp/classes/soft_body3d.hpp>
#include <godot_cpp/classes/sphere_mesh.hpp>
#include <godot_cpp/classes/sphere_occluder3d.hpp>
#include <godot_cpp/classes/sphere_shape3d.hpp>
#include <godot_cpp/classes/spin_box.hpp>
#include <godot_cpp/classes/split_container.hpp>
#include <godot_cpp/classes/spot_light3d.hpp>
#include <godot_cpp/classes/spring_arm3d.hpp>
#include <godot_cpp/classes/sprite2d.hpp>
#include <godot_cpp/classes/sprite3d.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/sprite_frames.hpp>
#include <godot_cpp/classes/standard_material3d.hpp>
#include <godot_cpp/classes/static_body2d.hpp>
#include <godot_cpp/classes/static_body3d.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_buffer.hpp>
#include <godot_cpp/classes/stream_peer_extension.hpp>
#include <godot_cpp/classes/stream_peer_gzip.hpp>
#include <godot_cpp/classes/stream_peer_tcp.hpp>
#include <godot_cpp/classes/stream_peer_tls.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/style_box_empty.hpp>
#include <godot_cpp/classes/style_box_flat.hpp>
#include <godot_cpp/classes/style_box_line.hpp>
#include <godot_cpp/classes/style_box_texture.hpp>
#include <godot_cpp/classes/sub_viewport.hpp>
#include <godot_cpp/classes/sub_viewport_container.hpp>
#include <godot_cpp/classes/surface_tool.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/system_font.hpp>
#include <godot_cpp/classes/tcp_server.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/tab_bar.hpp>
#include <godot_cpp/classes/tab_container.hpp>
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/classes/text_line.hpp>
#include <godot_cpp/classes/text_mesh.hpp>
#include <godot_cpp/classes/text_paragraph.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/text_server_advanced.hpp>
#include <godot_cpp/classes/text_server_dummy.hpp>
#include <godot_cpp/classes/text_server_extension.hpp>
#include <godot_cpp/classes/text_server_manager.hpp>
#include <godot_cpp/classes/texture.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture2d_array.hpp>
#include <godot_cpp/classes/texture3d.hpp>
#include <godot_cpp/classes/texture_button.hpp>
#include <godot_cpp/classes/texture_layered.hpp>
#include <godot_cpp/classes/texture_progress_bar.hpp>
#include <godot_cpp/classes/texture_rect.hpp>
#include <godot_cpp/classes/theme.hpp>
#include <godot_cpp/classes/theme_db.hpp>
#include <godot_cpp/classes/thread.hpp>
#include <godot_cpp/classes/tile_data.hpp>
#include <godot_cpp/classes/tile_map.hpp>
#include <godot_cpp/classes/tile_map_pattern.hpp>
#include <godot_cpp/classes/tile_set.hpp>
#include <godot_cpp/classes/tile_set_atlas_source.hpp>
#include <godot_cpp/classes/tile_set_scenes_collection_source.hpp>
#include <godot_cpp/classes/tile_set_source.hpp>
#include <godot_cpp/classes/time.hpp>
#include <godot_cpp/classes/timer.hpp>
#include <godot_cpp/classes/torus_mesh.hpp>
#include <godot_cpp/classes/touch_screen_button.hpp>
#include <godot_cpp/classes/translation.hpp>
#include <godot_cpp/classes/translation_server.hpp>
#include <godot_cpp/classes/tree.hpp>
#include <godot_cpp/classes/tree_item.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/classes/tube_trail_mesh.hpp>
#include <godot_cpp/classes/tween.hpp>
#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/classes/udp_server.hpp>
#include <godot_cpp/classes/upnp.hpp>
#include <godot_cpp/classes/upnp_device.hpp>
#include <godot_cpp/classes/undo_redo.hpp>
#include <godot_cpp/classes/uniform_set_cache_rd.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/v_flow_container.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/classes/v_separator.hpp>
#include <godot_cpp/classes/v_slider.hpp>
#include <godot_cpp/classes/v_split_container.hpp>
#include <godot_cpp/classes/vehicle_body3d.hpp>
#include <godot_cpp/classes/vehicle_wheel3d.hpp>
#include <godot_cpp/classes/video_stream.hpp>
#include <godot_cpp/classes/video_stream_playback.hpp>
#include <godot_cpp/classes/video_stream_player.hpp>
#include <godot_cpp/classes/video_stream_theora.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/classes/viewport_texture.hpp>
#include <godot_cpp/classes/visible_on_screen_enabler2d.hpp>
#include <godot_cpp/classes/visible_on_screen_enabler3d.hpp>
#include <godot_cpp/classes/visible_on_screen_notifier2d.hpp>
#include <godot_cpp/classes/visible_on_screen_notifier3d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/visual_shader.hpp>
#include <godot_cpp/classes/visual_shader_node.hpp>
#include <godot_cpp/classes/visual_shader_node_billboard.hpp>
#include <godot_cpp/classes/visual_shader_node_boolean_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_boolean_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_clamp.hpp>
#include <godot_cpp/classes/visual_shader_node_color_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_color_func.hpp>
#include <godot_cpp/classes/visual_shader_node_color_op.hpp>
#include <godot_cpp/classes/visual_shader_node_color_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_comment.hpp>
#include <godot_cpp/classes/visual_shader_node_compare.hpp>
#include <godot_cpp/classes/visual_shader_node_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_cubemap.hpp>
#include <godot_cpp/classes/visual_shader_node_cubemap_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_curve_texture.hpp>
#include <godot_cpp/classes/visual_shader_node_curve_xyz_texture.hpp>
#include <godot_cpp/classes/visual_shader_node_custom.hpp>
#include <godot_cpp/classes/visual_shader_node_derivative_func.hpp>
#include <godot_cpp/classes/visual_shader_node_determinant.hpp>
#include <godot_cpp/classes/visual_shader_node_distance_fade.hpp>
#include <godot_cpp/classes/visual_shader_node_dot_product.hpp>
#include <godot_cpp/classes/visual_shader_node_expression.hpp>
#include <godot_cpp/classes/visual_shader_node_face_forward.hpp>
#include <godot_cpp/classes/visual_shader_node_float_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_float_func.hpp>
#include <godot_cpp/classes/visual_shader_node_float_op.hpp>
#include <godot_cpp/classes/visual_shader_node_float_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_fresnel.hpp>
#include <godot_cpp/classes/visual_shader_node_global_expression.hpp>
#include <godot_cpp/classes/visual_shader_node_group_base.hpp>
#include <godot_cpp/classes/visual_shader_node_if.hpp>
#include <godot_cpp/classes/visual_shader_node_input.hpp>
#include <godot_cpp/classes/visual_shader_node_int_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_int_func.hpp>
#include <godot_cpp/classes/visual_shader_node_int_op.hpp>
#include <godot_cpp/classes/visual_shader_node_int_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_is.hpp>
#include <godot_cpp/classes/visual_shader_node_linear_scene_depth.hpp>
#include <godot_cpp/classes/visual_shader_node_mix.hpp>
#include <godot_cpp/classes/visual_shader_node_multiply_add.hpp>
#include <godot_cpp/classes/visual_shader_node_outer_product.hpp>
#include <godot_cpp/classes/visual_shader_node_output.hpp>
#include <godot_cpp/classes/visual_shader_node_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_parameter_ref.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_accelerator.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_box_emitter.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_cone_velocity.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_emit.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_emitter.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_mesh_emitter.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_multiply_by_axis_angle.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_output.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_randomness.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_ring_emitter.hpp>
#include <godot_cpp/classes/visual_shader_node_particle_sphere_emitter.hpp>
#include <godot_cpp/classes/visual_shader_node_proximity_fade.hpp>
#include <godot_cpp/classes/visual_shader_node_random_range.hpp>
#include <godot_cpp/classes/visual_shader_node_remap.hpp>
#include <godot_cpp/classes/visual_shader_node_resizable_base.hpp>
#include <godot_cpp/classes/visual_shader_node_sdf_raymarch.hpp>
#include <godot_cpp/classes/visual_shader_node_sdf_to_screen_uv.hpp>
#include <godot_cpp/classes/visual_shader_node_sample3d.hpp>
#include <godot_cpp/classes/visual_shader_node_screen_uv_to_sdf.hpp>
#include <godot_cpp/classes/visual_shader_node_smooth_step.hpp>
#include <godot_cpp/classes/visual_shader_node_step.hpp>
#include <godot_cpp/classes/visual_shader_node_switch.hpp>
#include <godot_cpp/classes/visual_shader_node_texture.hpp>
#include <godot_cpp/classes/visual_shader_node_texture2d_array.hpp>
#include <godot_cpp/classes/visual_shader_node_texture2d_array_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_texture2d_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_texture3d.hpp>
#include <godot_cpp/classes/visual_shader_node_texture3d_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_texture_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_texture_parameter_triplanar.hpp>
#include <godot_cpp/classes/visual_shader_node_texture_sdf.hpp>
#include <godot_cpp/classes/visual_shader_node_texture_sdf_normal.hpp>
#include <godot_cpp/classes/visual_shader_node_transform_compose.hpp>
#include <godot_cpp/classes/visual_shader_node_transform_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_transform_decompose.hpp>
#include <godot_cpp/classes/visual_shader_node_transform_func.hpp>
#include <godot_cpp/classes/visual_shader_node_transform_op.hpp>
#include <godot_cpp/classes/visual_shader_node_transform_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_transform_vec_mult.hpp>
#include <godot_cpp/classes/visual_shader_node_u_int_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_u_int_func.hpp>
#include <godot_cpp/classes/visual_shader_node_u_int_op.hpp>
#include <godot_cpp/classes/visual_shader_node_u_int_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_uv_func.hpp>
#include <godot_cpp/classes/visual_shader_node_uv_polar_coord.hpp>
#include <godot_cpp/classes/visual_shader_node_varying.hpp>
#include <godot_cpp/classes/visual_shader_node_varying_getter.hpp>
#include <godot_cpp/classes/visual_shader_node_varying_setter.hpp>
#include <godot_cpp/classes/visual_shader_node_vec2_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_vec2_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_vec3_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_vec3_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_vec4_constant.hpp>
#include <godot_cpp/classes/visual_shader_node_vec4_parameter.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_base.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_compose.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_decompose.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_distance.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_func.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_len.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_op.hpp>
#include <godot_cpp/classes/visual_shader_node_vector_refract.hpp>
#include <godot_cpp/classes/voxel_gi.hpp>
#include <godot_cpp/classes/voxel_gi_data.hpp>
#include <godot_cpp/classes/weak_ref.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_data_channel_extension.hpp>
#include <godot_cpp/classes/web_rtc_multiplayer_peer.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection_extension.hpp>
#include <godot_cpp/classes/web_socket_multiplayer_peer.hpp>
#include <godot_cpp/classes/web_socket_peer.hpp>
#include <godot_cpp/classes/web_xr_interface.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/worker_thread_pool.hpp>
#include <godot_cpp/classes/world2d.hpp>
#include <godot_cpp/classes/world3d.hpp>
#include <godot_cpp/classes/world_boundary_shape2d.hpp>
#include <godot_cpp/classes/world_boundary_shape3d.hpp>
#include <godot_cpp/classes/world_environment.hpp>
#include <godot_cpp/classes/x509_certificate.hpp>
#include <godot_cpp/classes/xml_parser.hpp>
#include <godot_cpp/classes/xr_anchor3d.hpp>
#include <godot_cpp/classes/xr_camera3d.hpp>
#include <godot_cpp/classes/xr_controller3d.hpp>
#include <godot_cpp/classes/xr_interface.hpp>
#include <godot_cpp/classes/xr_interface_extension.hpp>
#include <godot_cpp/classes/xr_node3d.hpp>
#include <godot_cpp/classes/xr_origin3d.hpp>
#include <godot_cpp/classes/xr_pose.hpp>
#include <godot_cpp/classes/xr_positional_tracker.hpp>
#include <godot_cpp/classes/xr_server.hpp>
#include <godot_cpp/classes/zip_packer.hpp>
#include <godot_cpp/classes/zip_reader.hpp>

namespace godot {

void GDExtensionBinding::register_engine_classes() {
	ClassDB::register_engine_class<AESContext>();
	ClassDB::register_engine_class<AStar2D>();
	ClassDB::register_engine_class<AStar3D>();
	ClassDB::register_engine_class<AStarGrid2D>();
	ClassDB::register_engine_class<AcceptDialog>();
	ClassDB::register_engine_class<AnimatableBody2D>();
	ClassDB::register_engine_class<AnimatableBody3D>();
	ClassDB::register_engine_class<AnimatedSprite2D>();
	ClassDB::register_engine_class<AnimatedSprite3D>();
	ClassDB::register_engine_class<AnimatedTexture>();
	ClassDB::register_engine_class<Animation>();
	ClassDB::register_engine_class<AnimationLibrary>();
	ClassDB::register_engine_class<AnimationNode>();
	ClassDB::register_engine_class<AnimationNodeAdd2>();
	ClassDB::register_engine_class<AnimationNodeAdd3>();
	ClassDB::register_engine_class<AnimationNodeAnimation>();
	ClassDB::register_engine_class<AnimationNodeBlend2>();
	ClassDB::register_engine_class<AnimationNodeBlend3>();
	ClassDB::register_engine_class<AnimationNodeBlendSpace1D>();
	ClassDB::register_engine_class<AnimationNodeBlendSpace2D>();
	ClassDB::register_engine_class<AnimationNodeBlendTree>();
	ClassDB::register_engine_class<AnimationNodeOneShot>();
	ClassDB::register_engine_class<AnimationNodeOutput>();
	ClassDB::register_engine_class<AnimationNodeStateMachine>();
	ClassDB::register_engine_class<AnimationNodeStateMachinePlayback>();
	ClassDB::register_engine_class<AnimationNodeStateMachineTransition>();
	ClassDB::register_engine_class<AnimationNodeSub2>();
	ClassDB::register_engine_class<AnimationNodeSync>();
	ClassDB::register_engine_class<AnimationNodeTimeScale>();
	ClassDB::register_engine_class<AnimationNodeTimeSeek>();
	ClassDB::register_engine_class<AnimationNodeTransition>();
	ClassDB::register_engine_class<AnimationPlayer>();
	ClassDB::register_engine_class<AnimationRootNode>();
	ClassDB::register_engine_class<AnimationTree>();
	ClassDB::register_engine_class<Area2D>();
	ClassDB::register_engine_class<Area3D>();
	ClassDB::register_engine_class<ArrayMesh>();
	ClassDB::register_engine_class<ArrayOccluder3D>();
	ClassDB::register_engine_class<AspectRatioContainer>();
	ClassDB::register_engine_class<AtlasTexture>();
	ClassDB::register_engine_class<AudioBusLayout>();
	ClassDB::register_engine_class<AudioEffect>();
	ClassDB::register_engine_class<AudioEffectAmplify>();
	ClassDB::register_engine_class<AudioEffectBandLimitFilter>();
	ClassDB::register_engine_class<AudioEffectBandPassFilter>();
	ClassDB::register_engine_class<AudioEffectCapture>();
	ClassDB::register_engine_class<AudioEffectChorus>();
	ClassDB::register_engine_class<AudioEffectCompressor>();
	ClassDB::register_engine_class<AudioEffectDelay>();
	ClassDB::register_engine_class<AudioEffectDistortion>();
	ClassDB::register_engine_class<AudioEffectEQ>();
	ClassDB::register_engine_class<AudioEffectEQ10>();
	ClassDB::register_engine_class<AudioEffectEQ21>();
	ClassDB::register_engine_class<AudioEffectEQ6>();
	ClassDB::register_engine_class<AudioEffectFilter>();
	ClassDB::register_engine_class<AudioEffectHighPassFilter>();
	ClassDB::register_engine_class<AudioEffectHighShelfFilter>();
	ClassDB::register_engine_class<AudioEffectInstance>();
	ClassDB::register_engine_class<AudioEffectLimiter>();
	ClassDB::register_engine_class<AudioEffectLowPassFilter>();
	ClassDB::register_engine_class<AudioEffectLowShelfFilter>();
	ClassDB::register_engine_class<AudioEffectNotchFilter>();
	ClassDB::register_engine_class<AudioEffectPanner>();
	ClassDB::register_engine_class<AudioEffectPhaser>();
	ClassDB::register_engine_class<AudioEffectPitchShift>();
	ClassDB::register_engine_class<AudioEffectRecord>();
	ClassDB::register_engine_class<AudioEffectReverb>();
	ClassDB::register_engine_class<AudioEffectSpectrumAnalyzer>();
	ClassDB::register_engine_class<AudioEffectSpectrumAnalyzerInstance>();
	ClassDB::register_engine_class<AudioEffectStereoEnhance>();
	ClassDB::register_engine_class<AudioListener2D>();
	ClassDB::register_engine_class<AudioListener3D>();
	ClassDB::register_engine_class<AudioServer>();
	ClassDB::register_engine_class<AudioStream>();
	ClassDB::register_engine_class<AudioStreamGenerator>();
	ClassDB::register_engine_class<AudioStreamGeneratorPlayback>();
	ClassDB::register_engine_class<AudioStreamMP3>();
	ClassDB::register_engine_class<AudioStreamMicrophone>();
	ClassDB::register_engine_class<AudioStreamOggVorbis>();
	ClassDB::register_engine_class<AudioStreamPlayback>();
	ClassDB::register_engine_class<AudioStreamPlaybackOggVorbis>();
	ClassDB::register_engine_class<AudioStreamPlaybackPolyphonic>();
	ClassDB::register_engine_class<AudioStreamPlaybackResampled>();
	ClassDB::register_engine_class<AudioStreamPlayer>();
	ClassDB::register_engine_class<AudioStreamPlayer2D>();
	ClassDB::register_engine_class<AudioStreamPlayer3D>();
	ClassDB::register_engine_class<AudioStreamPolyphonic>();
	ClassDB::register_engine_class<AudioStreamRandomizer>();
	ClassDB::register_engine_class<AudioStreamWAV>();
	ClassDB::register_engine_class<BackBufferCopy>();
	ClassDB::register_engine_class<BaseButton>();
	ClassDB::register_engine_class<BaseMaterial3D>();
	ClassDB::register_engine_class<BitMap>();
	ClassDB::register_engine_class<Bone2D>();
	ClassDB::register_engine_class<BoneAttachment3D>();
	ClassDB::register_engine_class<BoneMap>();
	ClassDB::register_engine_class<BoxContainer>();
	ClassDB::register_engine_class<BoxMesh>();
	ClassDB::register_engine_class<BoxOccluder3D>();
	ClassDB::register_engine_class<BoxShape3D>();
	ClassDB::register_engine_class<Button>();
	ClassDB::register_engine_class<ButtonGroup>();
	ClassDB::register_engine_class<CPUParticles2D>();
	ClassDB::register_engine_class<CPUParticles3D>();
	ClassDB::register_engine_class<CSGBox3D>();
	ClassDB::register_engine_class<CSGCombiner3D>();
	ClassDB::register_engine_class<CSGCylinder3D>();
	ClassDB::register_engine_class<CSGMesh3D>();
	ClassDB::register_engine_class<CSGPolygon3D>();
	ClassDB::register_engine_class<CSGPrimitive3D>();
	ClassDB::register_engine_class<CSGShape3D>();
	ClassDB::register_engine_class<CSGSphere3D>();
	ClassDB::register_engine_class<CSGTorus3D>();
	ClassDB::register_engine_class<CallbackTweener>();
	ClassDB::register_engine_class<Camera2D>();
	ClassDB::register_engine_class<Camera3D>();
	ClassDB::register_engine_class<CameraAttributes>();
	ClassDB::register_engine_class<CameraAttributesPhysical>();
	ClassDB::register_engine_class<CameraAttributesPractical>();
	ClassDB::register_engine_class<CameraFeed>();
	ClassDB::register_engine_class<CameraServer>();
	ClassDB::register_engine_class<CameraTexture>();
	ClassDB::register_engine_class<CanvasGroup>();
	ClassDB::register_engine_class<CanvasItem>();
	ClassDB::register_engine_class<CanvasItemMaterial>();
	ClassDB::register_engine_class<CanvasLayer>();
	ClassDB::register_engine_class<CanvasModulate>();
	ClassDB::register_engine_class<CanvasTexture>();
	ClassDB::register_engine_class<CapsuleMesh>();
	ClassDB::register_engine_class<CapsuleShape2D>();
	ClassDB::register_engine_class<CapsuleShape3D>();
	ClassDB::register_engine_class<CenterContainer>();
	ClassDB::register_engine_class<CharFXTransform>();
	ClassDB::register_engine_class<CharacterBody2D>();
	ClassDB::register_engine_class<CharacterBody3D>();
	ClassDB::register_engine_class<CheckBox>();
	ClassDB::register_engine_class<CheckButton>();
	ClassDB::register_engine_class<CircleShape2D>();
	ClassDB::register_engine_class<ClassDBSingleton>();
	ClassDB::register_engine_class<CodeEdit>();
	ClassDB::register_engine_class<CodeHighlighter>();
	ClassDB::register_engine_class<CollisionObject2D>();
	ClassDB::register_engine_class<CollisionObject3D>();
	ClassDB::register_engine_class<CollisionPolygon2D>();
	ClassDB::register_engine_class<CollisionPolygon3D>();
	ClassDB::register_engine_class<CollisionShape2D>();
	ClassDB::register_engine_class<CollisionShape3D>();
	ClassDB::register_engine_class<ColorPicker>();
	ClassDB::register_engine_class<ColorPickerButton>();
	ClassDB::register_engine_class<ColorRect>();
	ClassDB::register_engine_class<CompressedCubemap>();
	ClassDB::register_engine_class<CompressedCubemapArray>();
	ClassDB::register_engine_class<CompressedTexture2D>();
	ClassDB::register_engine_class<CompressedTexture2DArray>();
	ClassDB::register_engine_class<CompressedTexture3D>();
	ClassDB::register_engine_class<CompressedTextureLayered>();
	ClassDB::register_engine_class<ConcavePolygonShape2D>();
	ClassDB::register_engine_class<ConcavePolygonShape3D>();
	ClassDB::register_engine_class<ConeTwistJoint3D>();
	ClassDB::register_engine_class<ConfigFile>();
	ClassDB::register_engine_class<ConfirmationDialog>();
	ClassDB::register_engine_class<Container>();
	ClassDB::register_engine_class<Control>();
	ClassDB::register_engine_class<ConvexPolygonShape2D>();
	ClassDB::register_engine_class<ConvexPolygonShape3D>();
	ClassDB::register_engine_class<Crypto>();
	ClassDB::register_engine_class<CryptoKey>();
	ClassDB::register_engine_class<Cubemap>();
	ClassDB::register_engine_class<CubemapArray>();
	ClassDB::register_engine_class<Curve>();
	ClassDB::register_engine_class<Curve2D>();
	ClassDB::register_engine_class<Curve3D>();
	ClassDB::register_engine_class<CurveTexture>();
	ClassDB::register_engine_class<CurveXYZTexture>();
	ClassDB::register_engine_class<CylinderMesh>();
	ClassDB::register_engine_class<CylinderShape3D>();
	ClassDB::register_engine_class<DTLSServer>();
	ClassDB::register_engine_class<DampedSpringJoint2D>();
	ClassDB::register_engine_class<Decal>();
	ClassDB::register_engine_class<DirAccess>();
	ClassDB::register_engine_class<DirectionalLight2D>();
	ClassDB::register_engine_class<DirectionalLight3D>();
	ClassDB::register_engine_class<DisplayServer>();
	ClassDB::register_engine_class<ENetConnection>();
	ClassDB::register_engine_class<ENetMultiplayerPeer>();
	ClassDB::register_engine_class<ENetPacketPeer>();
	ClassDB::register_engine_class<EditorCommandPalette>();
	ClassDB::register_engine_class<EditorDebuggerPlugin>();
	ClassDB::register_engine_class<EditorDebuggerSession>();
	ClassDB::register_engine_class<EditorExportPlatform>();
	ClassDB::register_engine_class<EditorExportPlatformAndroid>();
	ClassDB::register_engine_class<EditorExportPlatformIOS>();
	ClassDB::register_engine_class<EditorExportPlatformLinuxBSD>();
	ClassDB::register_engine_class<EditorExportPlatformMacOS>();
	ClassDB::register_engine_class<EditorExportPlatformPC>();
	ClassDB::register_engine_class<EditorExportPlatformWeb>();
	ClassDB::register_engine_class<EditorExportPlatformWindows>();
	ClassDB::register_engine_class<EditorExportPlugin>();
	ClassDB::register_engine_class<EditorFeatureProfile>();
	ClassDB::register_engine_class<EditorFileDialog>();
	ClassDB::register_engine_class<EditorFileSystem>();
	ClassDB::register_engine_class<EditorFileSystemDirectory>();
	ClassDB::register_engine_class<EditorFileSystemImportFormatSupportQuery>();
	ClassDB::register_engine_class<EditorImportPlugin>();
	ClassDB::register_engine_class<EditorInspector>();
	ClassDB::register_engine_class<EditorInspectorPlugin>();
	ClassDB::register_engine_class<EditorInterface>();
	ClassDB::register_engine_class<EditorNode3DGizmo>();
	ClassDB::register_engine_class<EditorNode3DGizmoPlugin>();
	ClassDB::register_engine_class<EditorPaths>();
	ClassDB::register_engine_class<EditorPlugin>();
	ClassDB::register_engine_class<EditorProperty>();
	ClassDB::register_engine_class<EditorResourceConversionPlugin>();
	ClassDB::register_engine_class<EditorResourcePicker>();
	ClassDB::register_engine_class<EditorResourcePreview>();
	ClassDB::register_engine_class<EditorResourcePreviewGenerator>();
	ClassDB::register_engine_class<EditorResourceTooltipPlugin>();
	ClassDB::register_engine_class<EditorSceneFormatImporter>();
	ClassDB::register_engine_class<EditorSceneFormatImporterBlend>();
	ClassDB::register_engine_class<EditorSceneFormatImporterFBX>();
	ClassDB::register_engine_class<EditorSceneFormatImporterGLTF>();
	ClassDB::register_engine_class<EditorScenePostImport>();
	ClassDB::register_engine_class<EditorScenePostImportPlugin>();
	ClassDB::register_engine_class<EditorScript>();
	ClassDB::register_engine_class<EditorScriptPicker>();
	ClassDB::register_engine_class<EditorSelection>();
	ClassDB::register_engine_class<EditorSettings>();
	ClassDB::register_engine_class<EditorSpinSlider>();
	ClassDB::register_engine_class<EditorSyntaxHighlighter>();
	ClassDB::register_engine_class<EditorTranslationParserPlugin>();
	ClassDB::register_engine_class<EditorUndoRedoManager>();
	ClassDB::register_engine_class<EditorVCSInterface>();
	ClassDB::register_engine_class<EncodedObjectAsID>();
	ClassDB::register_engine_class<Engine>();
	ClassDB::register_engine_class<EngineDebugger>();
	ClassDB::register_engine_class<EngineProfiler>();
	ClassDB::register_engine_class<Environment>();
	ClassDB::register_engine_class<Expression>();
	ClassDB::register_engine_class<FastNoiseLite>();
	ClassDB::register_engine_class<FileAccess>();
	ClassDB::register_engine_class<FileDialog>();
	ClassDB::register_engine_class<FileSystemDock>();
	ClassDB::register_engine_class<FlowContainer>();
	ClassDB::register_engine_class<FogMaterial>();
	ClassDB::register_engine_class<FogVolume>();
	ClassDB::register_engine_class<Font>();
	ClassDB::register_engine_class<FontFile>();
	ClassDB::register_engine_class<FontVariation>();
	ClassDB::register_engine_class<FramebufferCacheRD>();
	ClassDB::register_engine_class<GDExtension>();
	ClassDB::register_engine_class<GDExtensionManager>();
	ClassDB::register_engine_class<GDScript>();
	ClassDB::register_engine_class<GDScriptEditorTranslationParserPlugin>();
	ClassDB::register_engine_class<GDScriptNativeClass>();
	ClassDB::register_engine_class<GLTFAccessor>();
	ClassDB::register_engine_class<GLTFAnimation>();
	ClassDB::register_engine_class<GLTFBufferView>();
	ClassDB::register_engine_class<GLTFCamera>();
	ClassDB::register_engine_class<GLTFDocument>();
	ClassDB::register_engine_class<GLTFDocumentExtension>();
	ClassDB::register_engine_class<GLTFDocumentExtensionConvertImporterMesh>();
	ClassDB::register_engine_class<GLTFDocumentExtensionPhysics>();
	ClassDB::register_engine_class<GLTFDocumentExtensionTextureWebP>();
	ClassDB::register_engine_class<GLTFLight>();
	ClassDB::register_engine_class<GLTFMesh>();
	ClassDB::register_engine_class<GLTFNode>();
	ClassDB::register_engine_class<GLTFPhysicsBody>();
	ClassDB::register_engine_class<GLTFPhysicsShape>();
	ClassDB::register_engine_class<GLTFSkeleton>();
	ClassDB::register_engine_class<GLTFSkin>();
	ClassDB::register_engine_class<GLTFSpecGloss>();
	ClassDB::register_engine_class<GLTFState>();
	ClassDB::register_engine_class<GLTFTexture>();
	ClassDB::register_engine_class<GLTFTextureSampler>();
	ClassDB::register_engine_class<GPUParticles2D>();
	ClassDB::register_engine_class<GPUParticles3D>();
	ClassDB::register_engine_class<GPUParticlesAttractor3D>();
	ClassDB::register_engine_class<GPUParticlesAttractorBox3D>();
	ClassDB::register_engine_class<GPUParticlesAttractorSphere3D>();
	ClassDB::register_engine_class<GPUParticlesAttractorVectorField3D>();
	ClassDB::register_engine_class<GPUParticlesCollision3D>();
	ClassDB::register_engine_class<GPUParticlesCollisionBox3D>();
	ClassDB::register_engine_class<GPUParticlesCollisionHeightField3D>();
	ClassDB::register_engine_class<GPUParticlesCollisionSDF3D>();
	ClassDB::register_engine_class<GPUParticlesCollisionSphere3D>();
	ClassDB::register_engine_class<Generic6DOFJoint3D>();
	ClassDB::register_engine_class<Geometry2D>();
	ClassDB::register_engine_class<Geometry3D>();
	ClassDB::register_engine_class<GeometryInstance3D>();
	ClassDB::register_engine_class<GodotPhysicsServer2D>();
	ClassDB::register_engine_class<GodotPhysicsServer3D>();
	ClassDB::register_engine_class<Gradient>();
	ClassDB::register_engine_class<GradientTexture1D>();
	ClassDB::register_engine_class<GradientTexture2D>();
	ClassDB::register_engine_class<GraphEdit>();
	ClassDB::register_engine_class<GraphNode>();
	ClassDB::register_engine_class<GridContainer>();
	ClassDB::register_engine_class<GridMap>();
	ClassDB::register_engine_class<GrooveJoint2D>();
	ClassDB::register_engine_class<HBoxContainer>();
	ClassDB::register_engine_class<HFlowContainer>();
	ClassDB::register_engine_class<HMACContext>();
	ClassDB::register_engine_class<HScrollBar>();
	ClassDB::register_engine_class<HSeparator>();
	ClassDB::register_engine_class<HSlider>();
	ClassDB::register_engine_class<HSplitContainer>();
	ClassDB::register_engine_class<HTTPClient>();
	ClassDB::register_engine_class<HTTPRequest>();
	ClassDB::register_engine_class<HashingContext>();
	ClassDB::register_engine_class<HeightMapShape3D>();
	ClassDB::register_engine_class<HingeJoint3D>();
	ClassDB::register_engine_class<IP>();
	ClassDB::register_engine_class<IPUnix>();
	ClassDB::register_engine_class<Image>();
	ClassDB::register_engine_class<ImageFormatLoader>();
	ClassDB::register_engine_class<ImageFormatLoaderExtension>();
	ClassDB::register_engine_class<ImageTexture>();
	ClassDB::register_engine_class<ImageTexture3D>();
	ClassDB::register_engine_class<ImageTextureLayered>();
	ClassDB::register_engine_class<ImmediateMesh>();
	ClassDB::register_engine_class<ImporterMesh>();
	ClassDB::register_engine_class<ImporterMeshInstance3D>();
	ClassDB::register_engine_class<Input>();
	ClassDB::register_engine_class<InputEvent>();
	ClassDB::register_engine_class<InputEventAction>();
	ClassDB::register_engine_class<InputEventFromWindow>();
	ClassDB::register_engine_class<InputEventGesture>();
	ClassDB::register_engine_class<InputEventJoypadButton>();
	ClassDB::register_engine_class<InputEventJoypadMotion>();
	ClassDB::register_engine_class<InputEventKey>();
	ClassDB::register_engine_class<InputEventMIDI>();
	ClassDB::register_engine_class<InputEventMagnifyGesture>();
	ClassDB::register_engine_class<InputEventMouse>();
	ClassDB::register_engine_class<InputEventMouseButton>();
	ClassDB::register_engine_class<InputEventMouseMotion>();
	ClassDB::register_engine_class<InputEventPanGesture>();
	ClassDB::register_engine_class<InputEventScreenDrag>();
	ClassDB::register_engine_class<InputEventScreenTouch>();
	ClassDB::register_engine_class<InputEventShortcut>();
	ClassDB::register_engine_class<InputEventWithModifiers>();
	ClassDB::register_engine_class<InputMap>();
	ClassDB::register_engine_class<InstancePlaceholder>();
	ClassDB::register_engine_class<IntervalTweener>();
	ClassDB::register_engine_class<ItemList>();
	ClassDB::register_engine_class<JNISingleton>();
	ClassDB::register_engine_class<JSON>();
	ClassDB::register_engine_class<JSONRPC>();
	ClassDB::register_engine_class<JavaClass>();
	ClassDB::register_engine_class<JavaClassWrapper>();
	ClassDB::register_engine_class<JavaScriptBridge>();
	ClassDB::register_engine_class<JavaScriptObject>();
	ClassDB::register_engine_class<Joint2D>();
	ClassDB::register_engine_class<Joint3D>();
	ClassDB::register_engine_class<KinematicCollision2D>();
	ClassDB::register_engine_class<KinematicCollision3D>();
	ClassDB::register_engine_class<Label>();
	ClassDB::register_engine_class<Label3D>();
	ClassDB::register_engine_class<LabelSettings>();
	ClassDB::register_engine_class<Light2D>();
	ClassDB::register_engine_class<Light3D>();
	ClassDB::register_engine_class<LightOccluder2D>();
	ClassDB::register_engine_class<LightmapGI>();
	ClassDB::register_engine_class<LightmapGIData>();
	ClassDB::register_engine_class<LightmapProbe>();
	ClassDB::register_engine_class<Lightmapper>();
	ClassDB::register_engine_class<LightmapperRD>();
	ClassDB::register_engine_class<Line2D>();
	ClassDB::register_engine_class<LineEdit>();
	ClassDB::register_engine_class<LinkButton>();
	ClassDB::register_engine_class<MainLoop>();
	ClassDB::register_engine_class<MarginContainer>();
	ClassDB::register_engine_class<Marker2D>();
	ClassDB::register_engine_class<Marker3D>();
	ClassDB::register_engine_class<Marshalls>();
	ClassDB::register_engine_class<Material>();
	ClassDB::register_engine_class<MenuBar>();
	ClassDB::register_engine_class<MenuButton>();
	ClassDB::register_engine_class<Mesh>();
	ClassDB::register_engine_class<MeshConvexDecompositionSettings>();
	ClassDB::register_engine_class<MeshDataTool>();
	ClassDB::register_engine_class<MeshInstance2D>();
	ClassDB::register_engine_class<MeshInstance3D>();
	ClassDB::register_engine_class<MeshLibrary>();
	ClassDB::register_engine_class<MeshTexture>();
	ClassDB::register_engine_class<MethodTweener>();
	ClassDB::register_engine_class<MissingNode>();
	ClassDB::register_engine_class<MissingResource>();
	ClassDB::register_engine_class<MobileVRInterface>();
	ClassDB::register_engine_class<MovieWriter>();
	ClassDB::register_engine_class<MovieWriterMJPEG>();
	ClassDB::register_engine_class<MovieWriterPNGWAV>();
	ClassDB::register_engine_class<MultiMesh>();
	ClassDB::register_engine_class<MultiMeshInstance2D>();
	ClassDB::register_engine_class<MultiMeshInstance3D>();
	ClassDB::register_engine_class<MultiplayerAPI>();
	ClassDB::register_engine_class<MultiplayerAPIExtension>();
	ClassDB::register_engine_class<MultiplayerPeer>();
	ClassDB::register_engine_class<MultiplayerPeerExtension>();
	ClassDB::register_engine_class<MultiplayerSpawner>();
	ClassDB::register_engine_class<MultiplayerSynchronizer>();
	ClassDB::register_engine_class<Mutex>();
	ClassDB::register_engine_class<NavigationAgent2D>();
	ClassDB::register_engine_class<NavigationAgent3D>();
	ClassDB::register_engine_class<NavigationLink2D>();
	ClassDB::register_engine_class<NavigationLink3D>();
	ClassDB::register_engine_class<NavigationMesh>();
	ClassDB::register_engine_class<NavigationMeshGenerator>();
	ClassDB::register_engine_class<NavigationMeshSourceGeometryData3D>();
	ClassDB::register_engine_class<NavigationObstacle2D>();
	ClassDB::register_engine_class<NavigationObstacle3D>();
	ClassDB::register_engine_class<NavigationPathQueryParameters2D>();
	ClassDB::register_engine_class<NavigationPathQueryParameters3D>();
	ClassDB::register_engine_class<NavigationPathQueryResult2D>();
	ClassDB::register_engine_class<NavigationPathQueryResult3D>();
	ClassDB::register_engine_class<NavigationPolygon>();
	ClassDB::register_engine_class<NavigationRegion2D>();
	ClassDB::register_engine_class<NavigationRegion3D>();
	ClassDB::register_engine_class<NavigationServer2D>();
	ClassDB::register_engine_class<NavigationServer3D>();
	ClassDB::register_engine_class<NinePatchRect>();
	ClassDB::register_engine_class<Node>();
	ClassDB::register_engine_class<Node2D>();
	ClassDB::register_engine_class<Node3D>();
	ClassDB::register_engine_class<Node3DGizmo>();
	ClassDB::register_engine_class<Noise>();
	ClassDB::register_engine_class<NoiseTexture2D>();
	ClassDB::register_engine_class<NoiseTexture3D>();
	ClassDB::register_engine_class<ORMMaterial3D>();
	ClassDB::register_engine_class<OS>();
	ClassDB::register_engine_class<Object>();
	ClassDB::register_engine_class<Occluder3D>();
	ClassDB::register_engine_class<OccluderInstance3D>();
	ClassDB::register_engine_class<OccluderPolygon2D>();
	ClassDB::register_engine_class<OfflineMultiplayerPeer>();
	ClassDB::register_engine_class<OggPacketSequence>();
	ClassDB::register_engine_class<OggPacketSequencePlayback>();
	ClassDB::register_engine_class<OmniLight3D>();
	ClassDB::register_engine_class<OpenXRAction>();
	ClassDB::register_engine_class<OpenXRActionMap>();
	ClassDB::register_engine_class<OpenXRActionSet>();
	ClassDB::register_engine_class<OpenXRHand>();
	ClassDB::register_engine_class<OpenXRIPBinding>();
	ClassDB::register_engine_class<OpenXRInteractionProfile>();
	ClassDB::register_engine_class<OpenXRInteractionProfileMetadata>();
	ClassDB::register_engine_class<OpenXRInterface>();
	ClassDB::register_engine_class<OptimizedTranslation>();
	ClassDB::register_engine_class<OptionButton>();
	ClassDB::register_engine_class<PCKPacker>();
	ClassDB::register_engine_class<PackedDataContainer>();
	ClassDB::register_engine_class<PackedDataContainerRef>();
	ClassDB::register_engine_class<PackedScene>();
	ClassDB::register_engine_class<PacketPeer>();
	ClassDB::register_engine_class<PacketPeerDTLS>();
	ClassDB::register_engine_class<PacketPeerExtension>();
	ClassDB::register_engine_class<PacketPeerStream>();
	ClassDB::register_engine_class<PacketPeerUDP>();
	ClassDB::register_engine_class<Panel>();
	ClassDB::register_engine_class<PanelContainer>();
	ClassDB::register_engine_class<PanoramaSkyMaterial>();
	ClassDB::register_engine_class<ParallaxBackground>();
	ClassDB::register_engine_class<ParallaxLayer>();
	ClassDB::register_engine_class<ParticleProcessMaterial>();
	ClassDB::register_engine_class<Path2D>();
	ClassDB::register_engine_class<Path3D>();
	ClassDB::register_engine_class<PathFollow2D>();
	ClassDB::register_engine_class<PathFollow3D>();
	ClassDB::register_engine_class<Performance>();
	ClassDB::register_engine_class<PhysicalBone2D>();
	ClassDB::register_engine_class<PhysicalBone3D>();
	ClassDB::register_engine_class<PhysicalSkyMaterial>();
	ClassDB::register_engine_class<PhysicsBody2D>();
	ClassDB::register_engine_class<PhysicsBody3D>();
	ClassDB::register_engine_class<PhysicsDirectBodyState2D>();
	ClassDB::register_engine_class<PhysicsDirectBodyState2DExtension>();
	ClassDB::register_engine_class<PhysicsDirectBodyState3D>();
	ClassDB::register_engine_class<PhysicsDirectBodyState3DExtension>();
	ClassDB::register_engine_class<PhysicsDirectSpaceState2D>();
	ClassDB::register_engine_class<PhysicsDirectSpaceState2DExtension>();
	ClassDB::register_engine_class<PhysicsDirectSpaceState3D>();
	ClassDB::register_engine_class<PhysicsDirectSpaceState3DExtension>();
	ClassDB::register_engine_class<PhysicsMaterial>();
	ClassDB::register_engine_class<PhysicsPointQueryParameters2D>();
	ClassDB::register_engine_class<PhysicsPointQueryParameters3D>();
	ClassDB::register_engine_class<PhysicsRayQueryParameters2D>();
	ClassDB::register_engine_class<PhysicsRayQueryParameters3D>();
	ClassDB::register_engine_class<PhysicsServer2D>();
	ClassDB::register_engine_class<PhysicsServer2DExtension>();
	ClassDB::register_engine_class<PhysicsServer2DManager>();
	ClassDB::register_engine_class<PhysicsServer3D>();
	ClassDB::register_engine_class<PhysicsServer3DExtension>();
	ClassDB::register_engine_class<PhysicsServer3DManager>();
	ClassDB::register_engine_class<PhysicsServer3DRenderingServerHandler>();
	ClassDB::register_engine_class<PhysicsShapeQueryParameters2D>();
	ClassDB::register_engine_class<PhysicsShapeQueryParameters3D>();
	ClassDB::register_engine_class<PhysicsTestMotionParameters2D>();
	ClassDB::register_engine_class<PhysicsTestMotionParameters3D>();
	ClassDB::register_engine_class<PhysicsTestMotionResult2D>();
	ClassDB::register_engine_class<PhysicsTestMotionResult3D>();
	ClassDB::register_engine_class<PinJoint2D>();
	ClassDB::register_engine_class<PinJoint3D>();
	ClassDB::register_engine_class<PlaceholderCubemap>();
	ClassDB::register_engine_class<PlaceholderCubemapArray>();
	ClassDB::register_engine_class<PlaceholderMaterial>();
	ClassDB::register_engine_class<PlaceholderMesh>();
	ClassDB::register_engine_class<PlaceholderTexture2D>();
	ClassDB::register_engine_class<PlaceholderTexture2DArray>();
	ClassDB::register_engine_class<PlaceholderTexture3D>();
	ClassDB::register_engine_class<PlaceholderTextureLayered>();
	ClassDB::register_engine_class<PlaneMesh>();
	ClassDB::register_engine_class<PointLight2D>();
	ClassDB::register_engine_class<PointMesh>();
	ClassDB::register_engine_class<Polygon2D>();
	ClassDB::register_engine_class<PolygonOccluder3D>();
	ClassDB::register_engine_class<PolygonPathFinder>();
	ClassDB::register_engine_class<Popup>();
	ClassDB::register_engine_class<PopupMenu>();
	ClassDB::register_engine_class<PopupPanel>();
	ClassDB::register_engine_class<PortableCompressedTexture2D>();
	ClassDB::register_engine_class<PrimitiveMesh>();
	ClassDB::register_engine_class<PrismMesh>();
	ClassDB::register_engine_class<ProceduralSkyMaterial>();
	ClassDB::register_engine_class<ProgressBar>();
	ClassDB::register_engine_class<ProjectSettings>();
	ClassDB::register_engine_class<PropertyTweener>();
	ClassDB::register_engine_class<QuadMesh>();
	ClassDB::register_engine_class<QuadOccluder3D>();
	ClassDB::register_engine_class<RDAttachmentFormat>();
	ClassDB::register_engine_class<RDFramebufferPass>();
	ClassDB::register_engine_class<RDPipelineColorBlendState>();
	ClassDB::register_engine_class<RDPipelineColorBlendStateAttachment>();
	ClassDB::register_engine_class<RDPipelineDepthStencilState>();
	ClassDB::register_engine_class<RDPipelineMultisampleState>();
	ClassDB::register_engine_class<RDPipelineRasterizationState>();
	ClassDB::register_engine_class<RDPipelineSpecializationConstant>();
	ClassDB::register_engine_class<RDSamplerState>();
	ClassDB::register_engine_class<RDShaderFile>();
	ClassDB::register_engine_class<RDShaderSPIRV>();
	ClassDB::register_engine_class<RDShaderSource>();
	ClassDB::register_engine_class<RDTextureFormat>();
	ClassDB::register_engine_class<RDTextureView>();
	ClassDB::register_engine_class<RDUniform>();
	ClassDB::register_engine_class<RDVertexAttribute>();
	ClassDB::register_engine_class<RandomNumberGenerator>();
	ClassDB::register_engine_class<Range>();
	ClassDB::register_engine_class<RayCast2D>();
	ClassDB::register_engine_class<RayCast3D>();
	ClassDB::register_engine_class<RectangleShape2D>();
	ClassDB::register_engine_class<RefCounted>();
	ClassDB::register_engine_class<ReferenceRect>();
	ClassDB::register_engine_class<ReflectionProbe>();
	ClassDB::register_engine_class<RegEx>();
	ClassDB::register_engine_class<RegExMatch>();
	ClassDB::register_engine_class<RemoteTransform2D>();
	ClassDB::register_engine_class<RemoteTransform3D>();
	ClassDB::register_engine_class<RenderingDevice>();
	ClassDB::register_engine_class<RenderingServer>();
	ClassDB::register_engine_class<Resource>();
	ClassDB::register_engine_class<ResourceFormatImporterSaver>();
	ClassDB::register_engine_class<ResourceFormatLoader>();
	ClassDB::register_engine_class<ResourceFormatSaver>();
	ClassDB::register_engine_class<ResourceImporter>();
	ClassDB::register_engine_class<ResourceLoader>();
	ClassDB::register_engine_class<ResourcePreloader>();
	ClassDB::register_engine_class<ResourceSaver>();
	ClassDB::register_engine_class<ResourceUID>();
	ClassDB::register_engine_class<RibbonTrailMesh>();
	ClassDB::register_engine_class<RichTextEffect>();
	ClassDB::register_engine_class<RichTextLabel>();
	ClassDB::register_engine_class<RigidBody2D>();
	ClassDB::register_engine_class<RigidBody3D>();
	ClassDB::register_engine_class<RootMotionView>();
	ClassDB::register_engine_class<SceneMultiplayer>();
	ClassDB::register_engine_class<SceneReplicationConfig>();
	ClassDB::register_engine_class<SceneState>();
	ClassDB::register_engine_class<SceneTree>();
	ClassDB::register_engine_class<SceneTreeTimer>();
	ClassDB::register_engine_class<Script>();
	ClassDB::register_engine_class<ScriptCreateDialog>();
	ClassDB::register_engine_class<ScriptEditor>();
	ClassDB::register_engine_class<ScriptEditorBase>();
	ClassDB::register_engine_class<ScriptExtension>();
	ClassDB::register_engine_class<ScriptLanguage>();
	ClassDB::register_engine_class<ScriptLanguageExtension>();
	ClassDB::register_engine_class<ScrollBar>();
	ClassDB::register_engine_class<ScrollContainer>();
	ClassDB::register_engine_class<SegmentShape2D>();
	ClassDB::register_engine_class<Semaphore>();
	ClassDB::register_engine_class<SeparationRayShape2D>();
	ClassDB::register_engine_class<SeparationRayShape3D>();
	ClassDB::register_engine_class<Separator>();
	ClassDB::register_engine_class<Shader>();
	ClassDB::register_engine_class<ShaderGlobalsOverride>();
	ClassDB::register_engine_class<ShaderInclude>();
	ClassDB::register_engine_class<ShaderMaterial>();
	ClassDB::register_engine_class<Shape2D>();
	ClassDB::register_engine_class<Shape3D>();
	ClassDB::register_engine_class<ShapeCast2D>();
	ClassDB::register_engine_class<ShapeCast3D>();
	ClassDB::register_engine_class<Shortcut>();
	ClassDB::register_engine_class<Skeleton2D>();
	ClassDB::register_engine_class<Skeleton3D>();
	ClassDB::register_engine_class<SkeletonIK3D>();
	ClassDB::register_engine_class<SkeletonModification2D>();
	ClassDB::register_engine_class<SkeletonModification2DCCDIK>();
	ClassDB::register_engine_class<SkeletonModification2DFABRIK>();
	ClassDB::register_engine_class<SkeletonModification2DJiggle>();
	ClassDB::register_engine_class<SkeletonModification2DLookAt>();
	ClassDB::register_engine_class<SkeletonModification2DPhysicalBones>();
	ClassDB::register_engine_class<SkeletonModification2DStackHolder>();
	ClassDB::register_engine_class<SkeletonModification2DTwoBoneIK>();
	ClassDB::register_engine_class<SkeletonModificationStack2D>();
	ClassDB::register_engine_class<SkeletonProfile>();
	ClassDB::register_engine_class<SkeletonProfileHumanoid>();
	ClassDB::register_engine_class<Skin>();
	ClassDB::register_engine_class<SkinReference>();
	ClassDB::register_engine_class<Sky>();
	ClassDB::register_engine_class<Slider>();
	ClassDB::register_engine_class<SliderJoint3D>();
	ClassDB::register_engine_class<SoftBody3D>();
	ClassDB::register_engine_class<SphereMesh>();
	ClassDB::register_engine_class<SphereOccluder3D>();
	ClassDB::register_engine_class<SphereShape3D>();
	ClassDB::register_engine_class<SpinBox>();
	ClassDB::register_engine_class<SplitContainer>();
	ClassDB::register_engine_class<SpotLight3D>();
	ClassDB::register_engine_class<SpringArm3D>();
	ClassDB::register_engine_class<Sprite2D>();
	ClassDB::register_engine_class<Sprite3D>();
	ClassDB::register_engine_class<SpriteBase3D>();
	ClassDB::register_engine_class<SpriteFrames>();
	ClassDB::register_engine_class<StandardMaterial3D>();
	ClassDB::register_engine_class<StaticBody2D>();
	ClassDB::register_engine_class<StaticBody3D>();
	ClassDB::register_engine_class<StreamPeer>();
	ClassDB::register_engine_class<StreamPeerBuffer>();
	ClassDB::register_engine_class<StreamPeerExtension>();
	ClassDB::register_engine_class<StreamPeerGZIP>();
	ClassDB::register_engine_class<StreamPeerTCP>();
	ClassDB::register_engine_class<StreamPeerTLS>();
	ClassDB::register_engine_class<StyleBox>();
	ClassDB::register_engine_class<StyleBoxEmpty>();
	ClassDB::register_engine_class<StyleBoxFlat>();
	ClassDB::register_engine_class<StyleBoxLine>();
	ClassDB::register_engine_class<StyleBoxTexture>();
	ClassDB::register_engine_class<SubViewport>();
	ClassDB::register_engine_class<SubViewportContainer>();
	ClassDB::register_engine_class<SurfaceTool>();
	ClassDB::register_engine_class<SyntaxHighlighter>();
	ClassDB::register_engine_class<SystemFont>();
	ClassDB::register_engine_class<TCPServer>();
	ClassDB::register_engine_class<TLSOptions>();
	ClassDB::register_engine_class<TabBar>();
	ClassDB::register_engine_class<TabContainer>();
	ClassDB::register_engine_class<TextEdit>();
	ClassDB::register_engine_class<TextLine>();
	ClassDB::register_engine_class<TextMesh>();
	ClassDB::register_engine_class<TextParagraph>();
	ClassDB::register_engine_class<TextServer>();
	ClassDB::register_engine_class<TextServerAdvanced>();
	ClassDB::register_engine_class<TextServerDummy>();
	ClassDB::register_engine_class<TextServerExtension>();
	ClassDB::register_engine_class<TextServerManager>();
	ClassDB::register_engine_class<Texture>();
	ClassDB::register_engine_class<Texture2D>();
	ClassDB::register_engine_class<Texture2DArray>();
	ClassDB::register_engine_class<Texture3D>();
	ClassDB::register_engine_class<TextureButton>();
	ClassDB::register_engine_class<TextureLayered>();
	ClassDB::register_engine_class<TextureProgressBar>();
	ClassDB::register_engine_class<TextureRect>();
	ClassDB::register_engine_class<Theme>();
	ClassDB::register_engine_class<ThemeDB>();
	ClassDB::register_engine_class<Thread>();
	ClassDB::register_engine_class<TileData>();
	ClassDB::register_engine_class<TileMap>();
	ClassDB::register_engine_class<TileMapPattern>();
	ClassDB::register_engine_class<TileSet>();
	ClassDB::register_engine_class<TileSetAtlasSource>();
	ClassDB::register_engine_class<TileSetScenesCollectionSource>();
	ClassDB::register_engine_class<TileSetSource>();
	ClassDB::register_engine_class<Time>();
	ClassDB::register_engine_class<Timer>();
	ClassDB::register_engine_class<TorusMesh>();
	ClassDB::register_engine_class<TouchScreenButton>();
	ClassDB::register_engine_class<Translation>();
	ClassDB::register_engine_class<TranslationServer>();
	ClassDB::register_engine_class<Tree>();
	ClassDB::register_engine_class<TreeItem>();
	ClassDB::register_engine_class<TriangleMesh>();
	ClassDB::register_engine_class<TubeTrailMesh>();
	ClassDB::register_engine_class<Tween>();
	ClassDB::register_engine_class<Tweener>();
	ClassDB::register_engine_class<UDPServer>();
	ClassDB::register_engine_class<UPNP>();
	ClassDB::register_engine_class<UPNPDevice>();
	ClassDB::register_engine_class<UndoRedo>();
	ClassDB::register_engine_class<UniformSetCacheRD>();
	ClassDB::register_engine_class<VBoxContainer>();
	ClassDB::register_engine_class<VFlowContainer>();
	ClassDB::register_engine_class<VScrollBar>();
	ClassDB::register_engine_class<VSeparator>();
	ClassDB::register_engine_class<VSlider>();
	ClassDB::register_engine_class<VSplitContainer>();
	ClassDB::register_engine_class<VehicleBody3D>();
	ClassDB::register_engine_class<VehicleWheel3D>();
	ClassDB::register_engine_class<VideoStream>();
	ClassDB::register_engine_class<VideoStreamPlayback>();
	ClassDB::register_engine_class<VideoStreamPlayer>();
	ClassDB::register_engine_class<VideoStreamTheora>();
	ClassDB::register_engine_class<Viewport>();
	ClassDB::register_engine_class<ViewportTexture>();
	ClassDB::register_engine_class<VisibleOnScreenEnabler2D>();
	ClassDB::register_engine_class<VisibleOnScreenEnabler3D>();
	ClassDB::register_engine_class<VisibleOnScreenNotifier2D>();
	ClassDB::register_engine_class<VisibleOnScreenNotifier3D>();
	ClassDB::register_engine_class<VisualInstance3D>();
	ClassDB::register_engine_class<VisualShader>();
	ClassDB::register_engine_class<VisualShaderNode>();
	ClassDB::register_engine_class<VisualShaderNodeBillboard>();
	ClassDB::register_engine_class<VisualShaderNodeBooleanConstant>();
	ClassDB::register_engine_class<VisualShaderNodeBooleanParameter>();
	ClassDB::register_engine_class<VisualShaderNodeClamp>();
	ClassDB::register_engine_class<VisualShaderNodeColorConstant>();
	ClassDB::register_engine_class<VisualShaderNodeColorFunc>();
	ClassDB::register_engine_class<VisualShaderNodeColorOp>();
	ClassDB::register_engine_class<VisualShaderNodeColorParameter>();
	ClassDB::register_engine_class<VisualShaderNodeComment>();
	ClassDB::register_engine_class<VisualShaderNodeCompare>();
	ClassDB::register_engine_class<VisualShaderNodeConstant>();
	ClassDB::register_engine_class<VisualShaderNodeCubemap>();
	ClassDB::register_engine_class<VisualShaderNodeCubemapParameter>();
	ClassDB::register_engine_class<VisualShaderNodeCurveTexture>();
	ClassDB::register_engine_class<VisualShaderNodeCurveXYZTexture>();
	ClassDB::register_engine_class<VisualShaderNodeCustom>();
	ClassDB::register_engine_class<VisualShaderNodeDerivativeFunc>();
	ClassDB::register_engine_class<VisualShaderNodeDeterminant>();
	ClassDB::register_engine_class<VisualShaderNodeDistanceFade>();
	ClassDB::register_engine_class<VisualShaderNodeDotProduct>();
	ClassDB::register_engine_class<VisualShaderNodeExpression>();
	ClassDB::register_engine_class<VisualShaderNodeFaceForward>();
	ClassDB::register_engine_class<VisualShaderNodeFloatConstant>();
	ClassDB::register_engine_class<VisualShaderNodeFloatFunc>();
	ClassDB::register_engine_class<VisualShaderNodeFloatOp>();
	ClassDB::register_engine_class<VisualShaderNodeFloatParameter>();
	ClassDB::register_engine_class<VisualShaderNodeFresnel>();
	ClassDB::register_engine_class<VisualShaderNodeGlobalExpression>();
	ClassDB::register_engine_class<VisualShaderNodeGroupBase>();
	ClassDB::register_engine_class<VisualShaderNodeIf>();
	ClassDB::register_engine_class<VisualShaderNodeInput>();
	ClassDB::register_engine_class<VisualShaderNodeIntConstant>();
	ClassDB::register_engine_class<VisualShaderNodeIntFunc>();
	ClassDB::register_engine_class<VisualShaderNodeIntOp>();
	ClassDB::register_engine_class<VisualShaderNodeIntParameter>();
	ClassDB::register_engine_class<VisualShaderNodeIs>();
	ClassDB::register_engine_class<VisualShaderNodeLinearSceneDepth>();
	ClassDB::register_engine_class<VisualShaderNodeMix>();
	ClassDB::register_engine_class<VisualShaderNodeMultiplyAdd>();
	ClassDB::register_engine_class<VisualShaderNodeOuterProduct>();
	ClassDB::register_engine_class<VisualShaderNodeOutput>();
	ClassDB::register_engine_class<VisualShaderNodeParameter>();
	ClassDB::register_engine_class<VisualShaderNodeParameterRef>();
	ClassDB::register_engine_class<VisualShaderNodeParticleAccelerator>();
	ClassDB::register_engine_class<VisualShaderNodeParticleBoxEmitter>();
	ClassDB::register_engine_class<VisualShaderNodeParticleConeVelocity>();
	ClassDB::register_engine_class<VisualShaderNodeParticleEmit>();
	ClassDB::register_engine_class<VisualShaderNodeParticleEmitter>();
	ClassDB::register_engine_class<VisualShaderNodeParticleMeshEmitter>();
	ClassDB::register_engine_class<VisualShaderNodeParticleMultiplyByAxisAngle>();
	ClassDB::register_engine_class<VisualShaderNodeParticleOutput>();
	ClassDB::register_engine_class<VisualShaderNodeParticleRandomness>();
	ClassDB::register_engine_class<VisualShaderNodeParticleRingEmitter>();
	ClassDB::register_engine_class<VisualShaderNodeParticleSphereEmitter>();
	ClassDB::register_engine_class<VisualShaderNodeProximityFade>();
	ClassDB::register_engine_class<VisualShaderNodeRandomRange>();
	ClassDB::register_engine_class<VisualShaderNodeRemap>();
	ClassDB::register_engine_class<VisualShaderNodeResizableBase>();
	ClassDB::register_engine_class<VisualShaderNodeSDFRaymarch>();
	ClassDB::register_engine_class<VisualShaderNodeSDFToScreenUV>();
	ClassDB::register_engine_class<VisualShaderNodeSample3D>();
	ClassDB::register_engine_class<VisualShaderNodeScreenUVToSDF>();
	ClassDB::register_engine_class<VisualShaderNodeSmoothStep>();
	ClassDB::register_engine_class<VisualShaderNodeStep>();
	ClassDB::register_engine_class<VisualShaderNodeSwitch>();
	ClassDB::register_engine_class<VisualShaderNodeTexture>();
	ClassDB::register_engine_class<VisualShaderNodeTexture2DArray>();
	ClassDB::register_engine_class<VisualShaderNodeTexture2DArrayParameter>();
	ClassDB::register_engine_class<VisualShaderNodeTexture2DParameter>();
	ClassDB::register_engine_class<VisualShaderNodeTexture3D>();
	ClassDB::register_engine_class<VisualShaderNodeTexture3DParameter>();
	ClassDB::register_engine_class<VisualShaderNodeTextureParameter>();
	ClassDB::register_engine_class<VisualShaderNodeTextureParameterTriplanar>();
	ClassDB::register_engine_class<VisualShaderNodeTextureSDF>();
	ClassDB::register_engine_class<VisualShaderNodeTextureSDFNormal>();
	ClassDB::register_engine_class<VisualShaderNodeTransformCompose>();
	ClassDB::register_engine_class<VisualShaderNodeTransformConstant>();
	ClassDB::register_engine_class<VisualShaderNodeTransformDecompose>();
	ClassDB::register_engine_class<VisualShaderNodeTransformFunc>();
	ClassDB::register_engine_class<VisualShaderNodeTransformOp>();
	ClassDB::register_engine_class<VisualShaderNodeTransformParameter>();
	ClassDB::register_engine_class<VisualShaderNodeTransformVecMult>();
	ClassDB::register_engine_class<VisualShaderNodeUIntConstant>();
	ClassDB::register_engine_class<VisualShaderNodeUIntFunc>();
	ClassDB::register_engine_class<VisualShaderNodeUIntOp>();
	ClassDB::register_engine_class<VisualShaderNodeUIntParameter>();
	ClassDB::register_engine_class<VisualShaderNodeUVFunc>();
	ClassDB::register_engine_class<VisualShaderNodeUVPolarCoord>();
	ClassDB::register_engine_class<VisualShaderNodeVarying>();
	ClassDB::register_engine_class<VisualShaderNodeVaryingGetter>();
	ClassDB::register_engine_class<VisualShaderNodeVaryingSetter>();
	ClassDB::register_engine_class<VisualShaderNodeVec2Constant>();
	ClassDB::register_engine_class<VisualShaderNodeVec2Parameter>();
	ClassDB::register_engine_class<VisualShaderNodeVec3Constant>();
	ClassDB::register_engine_class<VisualShaderNodeVec3Parameter>();
	ClassDB::register_engine_class<VisualShaderNodeVec4Constant>();
	ClassDB::register_engine_class<VisualShaderNodeVec4Parameter>();
	ClassDB::register_engine_class<VisualShaderNodeVectorBase>();
	ClassDB::register_engine_class<VisualShaderNodeVectorCompose>();
	ClassDB::register_engine_class<VisualShaderNodeVectorDecompose>();
	ClassDB::register_engine_class<VisualShaderNodeVectorDistance>();
	ClassDB::register_engine_class<VisualShaderNodeVectorFunc>();
	ClassDB::register_engine_class<VisualShaderNodeVectorLen>();
	ClassDB::register_engine_class<VisualShaderNodeVectorOp>();
	ClassDB::register_engine_class<VisualShaderNodeVectorRefract>();
	ClassDB::register_engine_class<VoxelGI>();
	ClassDB::register_engine_class<VoxelGIData>();
	ClassDB::register_engine_class<WeakRef>();
	ClassDB::register_engine_class<WebRTCDataChannel>();
	ClassDB::register_engine_class<WebRTCDataChannelExtension>();
	ClassDB::register_engine_class<WebRTCMultiplayerPeer>();
	ClassDB::register_engine_class<WebRTCPeerConnection>();
	ClassDB::register_engine_class<WebRTCPeerConnectionExtension>();
	ClassDB::register_engine_class<WebSocketMultiplayerPeer>();
	ClassDB::register_engine_class<WebSocketPeer>();
	ClassDB::register_engine_class<WebXRInterface>();
	ClassDB::register_engine_class<Window>();
	ClassDB::register_engine_class<WorkerThreadPool>();
	ClassDB::register_engine_class<World2D>();
	ClassDB::register_engine_class<World3D>();
	ClassDB::register_engine_class<WorldBoundaryShape2D>();
	ClassDB::register_engine_class<WorldBoundaryShape3D>();
	ClassDB::register_engine_class<WorldEnvironment>();
	ClassDB::register_engine_class<X509Certificate>();
	ClassDB::register_engine_class<XMLParser>();
	ClassDB::register_engine_class<XRAnchor3D>();
	ClassDB::register_engine_class<XRCamera3D>();
	ClassDB::register_engine_class<XRController3D>();
	ClassDB::register_engine_class<XRInterface>();
	ClassDB::register_engine_class<XRInterfaceExtension>();
	ClassDB::register_engine_class<XRNode3D>();
	ClassDB::register_engine_class<XROrigin3D>();
	ClassDB::register_engine_class<XRPose>();
	ClassDB::register_engine_class<XRPositionalTracker>();
	ClassDB::register_engine_class<XRServer>();
	ClassDB::register_engine_class<ZIPPacker>();
	ClassDB::register_engine_class<ZIPReader>();
}

} // namespace godot 