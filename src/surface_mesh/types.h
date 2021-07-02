//=============================================================================
// Copyright (C) 2013 Graphics & Geometry Group, Bielefeld University
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public License
// as published by the Free Software Foundation, version 2.
//
// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================


#ifndef GEOMETRY_KERNEL_SRC_TYPES_H_
#define GEOMETRY_KERNEL_SRC_TYPES_H_

#define SURFACE_MESH_VERSION 1.1
#define CGAL_DISABLE_ROUNDING_MATH_CHECK

//== INCLUDES =================================================================


#include <CGAL/Simple_cartesian.h>
#include <CGAL/Bbox_3.h>


//=============================================================================


namespace surface_mesh {


//=============================================================================

/// Objects live in 3D cartesian space (=kernel)
typedef CGAL::Simple_cartesian<double> Kernel;
typedef CGAL::Simple_cartesian<float> Kernelf;

/// Scalar type
typedef float Scalar;

/// Point type
typedef Kernel::Point_3 Point;
typedef Kernel::Point_2 Point_2;
typedef Kernel::Point_3 Point_3;

/// 2D vector type
typedef Kernel::Vector_2 Vec2;
typedef Kernelf::Vector_2 Vec2f;

/// 3D vector type
typedef Kernel::Vector_3 Vec3;
typedef Kernelf::Vector_3 Vec3f;

/// Segment type
typedef Kernel::Segment_3 Segment_3;

/// Normal type
typedef Kernel::Vector_3 Normal;

/// Bounding box type
typedef CGAL::Bbox_3 Bbox_3;

/// Color type
typedef Kernel::Vector_3 Color;

/// Texture coordinate type
typedef Kernel::Vector_3 Texture_coordinate;

typedef Kernel::Aff_transformation_3 Aff_transformation_3;

//=============================================================================
}  // namespace surface_mesh
//=============================================================================
#endif  // GEOMETRY_KERNEL_SRC_TYPES_H_
//============================================================================
