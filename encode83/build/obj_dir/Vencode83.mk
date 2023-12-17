# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vencode83.mk

default: /home/robot/ysyx-workbench/nvboard/encode83/build/encode83

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /home/robot/verilator_learning/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vencode83
# Module prefix (from --prefix)
VM_MODPREFIX = Vencode83
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-MMD \
	-O3 \
	-I/usr/local/include/SDL2 \
	-D_REENTRANT \
	-I/home/robot/ysyx-workbench/nvboard/include \
	-DTOP_NAME="Vencode83" \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	/home/robot/ysyx-workbench/nvboard/build/nvboard.a \
	-L/usr/local/lib \
	-Wl,-rpath,/usr/local/lib \
	-Wl,--enable-new-dtags \
	-lSDL2 \
	-lSDL2_image \
	-lSDL2 \
	-lSDL2_image \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	auto_bind \
	encode83 \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/robot/ysyx-workbench/nvboard/encode83/build \
	/home/robot/ysyx-workbench/nvboard/encode83/csrc \


### Default rules...
# Include list of all generated classes
include Vencode83_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

auto_bind.o: /home/robot/ysyx-workbench/nvboard/encode83/build/auto_bind.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
encode83.o: /home/robot/ysyx-workbench/nvboard/encode83/csrc/encode83.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/robot/ysyx-workbench/nvboard/encode83/build/encode83: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-