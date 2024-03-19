cmake_minimum_required(VERSION 3.20)

project(RayTracing)

add_executable(Ray 
	"src/RayTracing.cpp"
	"src/Vec3.cpp" 
	"src/Color.h"
 "src/Ray.cpp" "src/Ray.h")
