const std = @import("std");
const Builder = std.build.Builder;

pub fn build(b: *Builder) void {
    const mode = b.standardReleaseOptions();

    const lib = b.addStaticLibrary("scanner", "scanner.zig");
    lib.setBuildMode(mode);
    lib.ofmt = .c; // Only generate C files
    lib.setOutputDir("src");
    lib.addIncludePath("src");
    lib.linkLibC();
    lib.install();
}
