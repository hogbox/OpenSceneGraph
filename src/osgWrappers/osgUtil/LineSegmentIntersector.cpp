// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/.svn/text-base/Drawable.svn-base>
#include <osg/.svn/text-base/Node.svn-base>
#include <osg/Vec3d>
#include <osgUtil/.svn/text-base/IntersectionVisitor.svn-base>
#include <osgUtil/.svn/text-base/LineSegmentIntersector.svn-base>
#include <osgUtil/IntersectionVisitor>
#include <osgUtil/LineSegmentIntersector>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::multiset< osgUtil::LineSegmentIntersector::Intersection >, osgUtil::LineSegmentIntersector::Intersections);

BEGIN_OBJECT_REFLECTOR(osgUtil::LineSegmentIntersector)
	I_BaseType(osgUtil::Intersector);
	I_BaseType(osgUtil::Intersector);
	I_Constructor2(IN, const osg::Vec3d &, start, IN, const osg::Vec3d &, end,
	               ____LineSegmentIntersector__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "Construct a LineSegmentIntersector the runs between the secified start and end points in MODEL coordinates. ",
	               "");
	I_Constructor3(IN, osgUtil::Intersector::CoordinateFrame, cf, IN, const osg::Vec3d &, start, IN, const osg::Vec3d &, end,
	               ____LineSegmentIntersector__CoordinateFrame__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "Construct a LineSegmentIntersector the runs between the secified start and end points in the specified coordinate frame. ",
	               "");
	I_Constructor3(IN, osgUtil::Intersector::CoordinateFrame, cf, IN, double, x, IN, double, y,
	               ____LineSegmentIntersector__CoordinateFrame__double__double,
	               "Convinience constructor for supporting picking in WINDOW, or PROJECTION coorindates In WINDOW coordinates creates a start value of (x,y,0) and end value of (x,y,1). ",
	               "In PROJECTION coordinates (clip space cube) creates a start value of (x,y,-1) and end value of (x,y,1). In VIEW and MODEL coordinates creates a start value of (x,y,0) and end value of (x,y,1). ");
	I_Method1(void, insertIntersection, IN, const osgUtil::LineSegmentIntersector::Intersection &, intersection,
	          Properties::NON_VIRTUAL,
	          __void__insertIntersection__C5_Intersection_R1,
	          "",
	          "");
	I_Method0(osgUtil::LineSegmentIntersector::Intersections &, getIntersections,
	          Properties::NON_VIRTUAL,
	          __Intersections_R1__getIntersections,
	          "",
	          "");
	I_Method0(osgUtil::LineSegmentIntersector::Intersection, getFirstIntersection,
	          Properties::NON_VIRTUAL,
	          __Intersection__getFirstIntersection,
	          "",
	          "");
	I_Method1(osgUtil::Intersector *, clone, IN, osgUtil::IntersectionVisitor &, iv,
	          Properties::VIRTUAL,
	          __Intersector_P1__clone__osgUtil_IntersectionVisitor_R1,
	          "",
	          "");
	I_Method1(bool, enter, IN, const osg::Node &, node,
	          Properties::VIRTUAL,
	          __bool__enter__C5_osg_Node_R1,
	          "",
	          "");
	I_Method0(void, leave,
	          Properties::VIRTUAL,
	          __void__leave,
	          "",
	          "");
	I_Method2(void, intersect, IN, osgUtil::IntersectionVisitor &, iv, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __void__intersect__osgUtil_IntersectionVisitor_R1__osg_Drawable_P1,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(bool, containsIntersections,
	          Properties::VIRTUAL,
	          __bool__containsIntersections,
	          "",
	          "");
	I_Constructor2(IN, const osg::Vec3d &, start, IN, const osg::Vec3d &, end,
	               ____LineSegmentIntersector__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "Construct a LineSegmentIntersector the runs between the secified start and end points in MODEL coordinates. ",
	               "");
	I_Constructor3(IN, osgUtil::Intersector::CoordinateFrame, cf, IN, const osg::Vec3d &, start, IN, const osg::Vec3d &, end,
	               ____LineSegmentIntersector__CoordinateFrame__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "Construct a LineSegmentIntersector the runs between the secified start and end points in the specified coordinate frame. ",
	               "");
	I_Constructor3(IN, osgUtil::Intersector::CoordinateFrame, cf, IN, double, x, IN, double, y,
	               ____LineSegmentIntersector__CoordinateFrame__double__double,
	               "Convinience constructor for supporting picking in WINDOW, or PROJECTION coorindates In WINDOW coordinates creates a start value of (x,y,0) and end value of (x,y,1). ",
	               "In PROJECTION coordinates (clip space cube) creates a start value of (x,y,-1) and end value of (x,y,1). In VIEW and MODEL coordinates creates a start value of (x,y,0) and end value of (x,y,1). ");
	I_Method1(void, insertIntersection, IN, const osgUtil::LineSegmentIntersector::Intersection &, intersection,
	          Properties::NON_VIRTUAL,
	          __void__insertIntersection__C5_Intersection_R1,
	          "",
	          "");
	I_Method0(osgUtil::LineSegmentIntersector::Intersections &, getIntersections,
	          Properties::NON_VIRTUAL,
	          __Intersections_R1__getIntersections,
	          "",
	          "");
	I_Method0(osgUtil::LineSegmentIntersector::Intersection, getFirstIntersection,
	          Properties::NON_VIRTUAL,
	          __Intersection__getFirstIntersection,
	          "",
	          "");
	I_Method1(osgUtil::Intersector *, clone, IN, osgUtil::IntersectionVisitor &, iv,
	          Properties::VIRTUAL,
	          __Intersector_P1__clone__osgUtil_IntersectionVisitor_R1,
	          "",
	          "");
	I_Method1(bool, enter, IN, const osg::Node &, node,
	          Properties::VIRTUAL,
	          __bool__enter__C5_osg_Node_R1,
	          "",
	          "");
	I_Method0(void, leave,
	          Properties::VIRTUAL,
	          __void__leave,
	          "",
	          "");
	I_Method2(void, intersect, IN, osgUtil::IntersectionVisitor &, iv, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __void__intersect__osgUtil_IntersectionVisitor_R1__osg_Drawable_P1,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(bool, containsIntersections,
	          Properties::VIRTUAL,
	          __bool__containsIntersections,
	          "",
	          "");
	I_SimpleProperty(osgUtil::LineSegmentIntersector::Intersection, FirstIntersection, 
	                 __Intersection__getFirstIntersection, 
	                 0);
	I_SimpleProperty(osgUtil::LineSegmentIntersector::Intersections &, Intersections, 
	                 __Intersections_R1__getIntersections, 
	                 0);
END_REFLECTOR

TYPE_NAME_ALIAS(std::multiset< osgUtil::LineSegmentIntersector::Intersection >, osgUtil::LineSegmentIntersector::Intersections);

BEGIN_OBJECT_REFLECTOR(osgUtil::LineSegmentIntersector)
	I_BaseType(osgUtil::Intersector);
	I_BaseType(osgUtil::Intersector);
	I_Constructor2(IN, const osg::Vec3d &, start, IN, const osg::Vec3d &, end,
	               ____LineSegmentIntersector__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "Construct a LineSegmentIntersector the runs between the secified start and end points in MODEL coordinates. ",
	               "");
	I_Constructor3(IN, osgUtil::Intersector::CoordinateFrame, cf, IN, const osg::Vec3d &, start, IN, const osg::Vec3d &, end,
	               ____LineSegmentIntersector__CoordinateFrame__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "Construct a LineSegmentIntersector the runs between the secified start and end points in the specified coordinate frame. ",
	               "");
	I_Constructor3(IN, osgUtil::Intersector::CoordinateFrame, cf, IN, double, x, IN, double, y,
	               ____LineSegmentIntersector__CoordinateFrame__double__double,
	               "Convinience constructor for supporting picking in WINDOW, or PROJECTION coorindates In WINDOW coordinates creates a start value of (x,y,0) and end value of (x,y,1). ",
	               "In PROJECTION coordinates (clip space cube) creates a start value of (x,y,-1) and end value of (x,y,1). In VIEW and MODEL coordinates creates a start value of (x,y,0) and end value of (x,y,1). ");
	I_Method1(void, insertIntersection, IN, const osgUtil::LineSegmentIntersector::Intersection &, intersection,
	          Properties::NON_VIRTUAL,
	          __void__insertIntersection__C5_Intersection_R1,
	          "",
	          "");
	I_Method0(osgUtil::LineSegmentIntersector::Intersections &, getIntersections,
	          Properties::NON_VIRTUAL,
	          __Intersections_R1__getIntersections,
	          "",
	          "");
	I_Method0(osgUtil::LineSegmentIntersector::Intersection, getFirstIntersection,
	          Properties::NON_VIRTUAL,
	          __Intersection__getFirstIntersection,
	          "",
	          "");
	I_Method1(osgUtil::Intersector *, clone, IN, osgUtil::IntersectionVisitor &, iv,
	          Properties::VIRTUAL,
	          __Intersector_P1__clone__osgUtil_IntersectionVisitor_R1,
	          "",
	          "");
	I_Method1(bool, enter, IN, const osg::Node &, node,
	          Properties::VIRTUAL,
	          __bool__enter__C5_osg_Node_R1,
	          "",
	          "");
	I_Method0(void, leave,
	          Properties::VIRTUAL,
	          __void__leave,
	          "",
	          "");
	I_Method2(void, intersect, IN, osgUtil::IntersectionVisitor &, iv, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __void__intersect__osgUtil_IntersectionVisitor_R1__osg_Drawable_P1,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(bool, containsIntersections,
	          Properties::VIRTUAL,
	          __bool__containsIntersections,
	          "",
	          "");
	I_Constructor2(IN, const osg::Vec3d &, start, IN, const osg::Vec3d &, end,
	               ____LineSegmentIntersector__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "Construct a LineSegmentIntersector the runs between the secified start and end points in MODEL coordinates. ",
	               "");
	I_Constructor3(IN, osgUtil::Intersector::CoordinateFrame, cf, IN, const osg::Vec3d &, start, IN, const osg::Vec3d &, end,
	               ____LineSegmentIntersector__CoordinateFrame__C5_osg_Vec3d_R1__C5_osg_Vec3d_R1,
	               "Construct a LineSegmentIntersector the runs between the secified start and end points in the specified coordinate frame. ",
	               "");
	I_Constructor3(IN, osgUtil::Intersector::CoordinateFrame, cf, IN, double, x, IN, double, y,
	               ____LineSegmentIntersector__CoordinateFrame__double__double,
	               "Convinience constructor for supporting picking in WINDOW, or PROJECTION coorindates In WINDOW coordinates creates a start value of (x,y,0) and end value of (x,y,1). ",
	               "In PROJECTION coordinates (clip space cube) creates a start value of (x,y,-1) and end value of (x,y,1). In VIEW and MODEL coordinates creates a start value of (x,y,0) and end value of (x,y,1). ");
	I_Method1(void, insertIntersection, IN, const osgUtil::LineSegmentIntersector::Intersection &, intersection,
	          Properties::NON_VIRTUAL,
	          __void__insertIntersection__C5_Intersection_R1,
	          "",
	          "");
	I_Method0(osgUtil::LineSegmentIntersector::Intersections &, getIntersections,
	          Properties::NON_VIRTUAL,
	          __Intersections_R1__getIntersections,
	          "",
	          "");
	I_Method0(osgUtil::LineSegmentIntersector::Intersection, getFirstIntersection,
	          Properties::NON_VIRTUAL,
	          __Intersection__getFirstIntersection,
	          "",
	          "");
	I_Method1(osgUtil::Intersector *, clone, IN, osgUtil::IntersectionVisitor &, iv,
	          Properties::VIRTUAL,
	          __Intersector_P1__clone__osgUtil_IntersectionVisitor_R1,
	          "",
	          "");
	I_Method1(bool, enter, IN, const osg::Node &, node,
	          Properties::VIRTUAL,
	          __bool__enter__C5_osg_Node_R1,
	          "",
	          "");
	I_Method0(void, leave,
	          Properties::VIRTUAL,
	          __void__leave,
	          "",
	          "");
	I_Method2(void, intersect, IN, osgUtil::IntersectionVisitor &, iv, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __void__intersect__osgUtil_IntersectionVisitor_R1__osg_Drawable_P1,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(bool, containsIntersections,
	          Properties::VIRTUAL,
	          __bool__containsIntersections,
	          "",
	          "");
	I_SimpleProperty(osgUtil::LineSegmentIntersector::Intersection, FirstIntersection, 
	                 __Intersection__getFirstIntersection, 
	                 0);
	I_SimpleProperty(osgUtil::LineSegmentIntersector::Intersections &, Intersections, 
	                 __Intersections_R1__getIntersections, 
	                 0);
END_REFLECTOR

