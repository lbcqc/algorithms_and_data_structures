cmake_minimum_required(VERSION 2.8.2)

project(algorithms_and_data_structures)

# CTest
enable_testing()

# CPack set(CPACK_GENERATOR "DEB")
set(CPACK_GENERATOR "RPM")
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "Howar Li")
set(CPACK_PACKAGE_VERSION 1.0.0)
include(CPack)

# install
set(CMAKE_INSTALL_PREFIX /usr/local/${PROJECT_NAME})

# uninstall
add_custom_command(OUTPUT uninstall_cmd 
	COMMAND 
		xargs rm -f < install_manifest.txt
)
add_custom_target(uninstall DEPENDS uninstall_cmd)

# Source
add_subdirectory(3rd_party)
add_subdirectory(graph)
