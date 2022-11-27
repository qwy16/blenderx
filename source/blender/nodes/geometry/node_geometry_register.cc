/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "NOD_register.hh"

#include "node_geometry_register.hh"

void register_geometry_nodes()
{
  register_node_tree_type_geo();

  register_node_type_geo_group();

  register_node_type_geo_accumulate_field();
  register_node_type_geo_attribute_capture();
  register_node_type_geo_attribute_domain_size();
  register_node_type_geo_attribute_statistic();
  register_node_type_geo_boolean();
  register_node_type_geo_bounding_box();
  register_node_type_geo_collection_info();
  register_node_type_geo_convex_hull();
  register_node_type_geo_curve_endpoint_selection();
  register_node_type_geo_curve_fill();
  register_node_type_geo_curve_fillet();
  register_node_type_geo_curve_handle_type_selection();
  register_node_type_geo_curve_length();
  register_node_type_geo_curve_primitive_arc();
  register_node_type_geo_curve_primitive_bezier_segment();
  register_node_type_geo_curve_primitive_circle();
  register_node_type_geo_curve_primitive_line();
  register_node_type_geo_curve_primitive_quadratic_bezier();
  register_node_type_geo_curve_primitive_quadrilateral();
  register_node_type_geo_curve_primitive_spiral();
  register_node_type_geo_curve_primitive_star();
  register_node_type_geo_curve_resample();
  register_node_type_geo_curve_reverse();
  register_node_type_geo_curve_sample();
  register_node_type_geo_curve_set_handle_type();
  register_node_type_geo_curve_spline_parameter();
  register_node_type_geo_curve_spline_type();
  register_node_type_geo_curve_subdivide();
  register_node_type_geo_curve_to_mesh();
  register_node_type_geo_curve_to_points();
  register_node_type_geo_curve_topology_curve_of_point();
  register_node_type_geo_curve_topology_points_of_curve();
  register_node_type_geo_curve_trim();
  register_node_type_geo_deform_curves_on_surface();
  register_node_type_geo_delete_geometry();
  register_node_type_geo_distribute_points_in_volume();
  register_node_type_geo_distribute_points_on_faces();
  register_node_type_geo_dual_mesh();
  register_node_type_geo_duplicate_elements();
  register_node_type_geo_edge_paths_to_curves();
  register_node_type_geo_edge_paths_to_selection();
  register_node_type_geo_edge_split();
  register_node_type_geo_extrude_mesh();
  register_node_type_geo_field_at_index();
  register_node_type_geo_flip_faces();
  register_node_type_geo_geometry_to_instance();
  register_node_type_geo_image_info();
  register_node_type_geo_image_texture();
  register_node_type_geo_input_curve_handles();
  register_node_type_geo_input_curve_tilt();
  register_node_type_geo_input_id();
  register_node_type_geo_input_index();
  register_node_type_geo_input_instance_rotation();
  register_node_type_geo_input_instance_scale();
  register_node_type_geo_input_material_index();
  register_node_type_geo_input_material();
  register_node_type_geo_input_mesh_edge_angle();
  register_node_type_geo_input_mesh_edge_neighbors();
  register_node_type_geo_input_mesh_edge_vertices();
  register_node_type_geo_input_mesh_face_area();
  register_node_type_geo_input_mesh_face_is_planar();
  register_node_type_geo_input_mesh_face_neighbors();
  register_node_type_geo_input_mesh_island();
  register_node_type_geo_input_mesh_vertex_neighbors();
  register_node_type_geo_input_named_attribute();
  register_node_type_geo_input_normal();
  register_node_type_geo_input_position();
  register_node_type_geo_input_radius();
  register_node_type_geo_input_scene_time();
  register_node_type_geo_input_shade_smooth();
  register_node_type_geo_input_shortest_edge_paths();
  register_node_type_geo_input_spline_cyclic();
  register_node_type_geo_input_spline_length();
  register_node_type_geo_input_spline_resolution();
  register_node_type_geo_input_tangent();
  register_node_type_geo_instance_on_points();
  register_node_type_geo_instances_to_points();
  register_node_type_geo_interpolate_domain();
  register_node_type_geo_is_viewport();
  register_node_type_geo_join_geometry();
  register_node_type_geo_material_replace();
  register_node_type_geo_material_selection();
  register_node_type_geo_merge_by_distance();
  register_node_type_geo_mesh_face_set_boundaries();
  register_node_type_geo_mesh_primitive_circle();
  register_node_type_geo_mesh_primitive_cone();
  register_node_type_geo_mesh_primitive_cube();
  register_node_type_geo_mesh_primitive_cylinder();
  register_node_type_geo_mesh_primitive_grid();
  register_node_type_geo_mesh_primitive_ico_sphere();
  register_node_type_geo_mesh_primitive_line();
  register_node_type_geo_mesh_primitive_uv_sphere();
  register_node_type_geo_mesh_subdivide();
  register_node_type_geo_mesh_to_curve();
  register_node_type_geo_mesh_to_points();
  register_node_type_geo_mesh_to_volume();
  register_node_type_geo_mesh_topology_corners_of_face();
  register_node_type_geo_mesh_topology_corners_of_vertex();
  register_node_type_geo_mesh_topology_edges_of_corner();
  register_node_type_geo_mesh_topology_edges_of_vertex();
  register_node_type_geo_mesh_topology_face_of_corner();
  register_node_type_geo_mesh_topology_offset_corner_in_face();
  register_node_type_geo_mesh_topology_vertex_of_corner();
  register_node_type_geo_object_info();
  register_node_type_geo_offset_point_in_curve();
  register_node_type_geo_points_to_vertices();
  register_node_type_geo_points_to_volume();
  register_node_type_geo_points();
  register_node_type_geo_proximity();
  register_node_type_geo_raycast();
  register_node_type_geo_realize_instances();
  register_node_type_geo_remove_attribute();
  register_node_type_geo_rotate_instances();
  register_node_type_geo_sample_index();
  register_node_type_geo_sample_nearest_surface();
  register_node_type_geo_sample_nearest();
  register_node_type_geo_sample_uv_surface();
  register_node_type_geo_scale_elements();
  register_node_type_geo_scale_instances();
  register_node_type_geo_self_object();
  register_node_type_geo_separate_components();
  register_node_type_geo_separate_geometry();
  register_node_type_geo_set_curve_handles();
  register_node_type_geo_set_curve_normal();
  register_node_type_geo_set_curve_radius();
  register_node_type_geo_set_curve_tilt();
  register_node_type_geo_set_id();
  register_node_type_geo_set_material_index();
  register_node_type_geo_set_material();
  register_node_type_geo_set_point_radius();
  register_node_type_geo_set_position();
  register_node_type_geo_set_shade_smooth();
  register_node_type_geo_set_spline_cyclic();
  register_node_type_geo_set_spline_resolution();
  register_node_type_geo_store_named_attribute();
  register_node_type_geo_string_join();
  register_node_type_geo_string_to_curves();
  register_node_type_geo_subdivision_surface();
  register_node_type_geo_switch();
  register_node_type_geo_transform_geometry();
  register_node_type_geo_translate_instances();
  register_node_type_geo_triangulate();
  register_node_type_geo_uv_pack_islands();
  register_node_type_geo_uv_unwrap();
  register_node_type_geo_viewer();
  register_node_type_geo_volume_cube();
  register_node_type_geo_volume_to_mesh();
}
