const std = @import("std");

const c = @cImport({
    @cInclude("tree_sitter/parser.h");
});

const Token = enum(c.TSSymbol) {
    string_content,
    // ...

    fn toInt(t: Token) c.TSSymbol {
        return @enumToInt(t);
    }
};

const Scanner = extern struct {
    some_state: u32 = 0,

    fn fromVoidPointer(p: *anyopaque) *Scanner {
        return @ptrCast(*Scanner, @alignCast(@alignOf(Scanner), p));
    }
};

export fn tree_sitter_zigrush2022_external_scanner_create() ?*anyopaque {
    log("create", .{});
    const allocator = std.heap.c_allocator;
    const scanner = allocator.create(Scanner) catch unreachable;
    scanner.* = .{};
    return scanner;
}

export fn tree_sitter_zigrush2022_external_scanner_destroy(p: *anyopaque) void {
    log("destroy", .{});
    const scanner = Scanner.fromVoidPointer(p);
    const allocator = std.heap.c_allocator;
    allocator.destroy(scanner);
}

export fn tree_sitter_zigrush2022_external_scanner_serialize(
    p: *anyopaque,
    buf: [*]u8,
) c_uint {
    log("serialize", .{});
    const scanner = Scanner.fromVoidPointer(p);
    const bytes = std.mem.toBytes(scanner);
    if (bytes.len > c.TREE_SITTER_SERIALIZATION_BUFFER_SIZE) {
        return 0;
    }
    for (bytes) |b, i| {
        buf[i] = b;
    }
    log("  done", .{});
    return bytes.len;
}

export fn tree_sitter_zigrush2022_external_scanner_deserialize(
    p: *anyopaque,
    buf: ?[*]const u8,
    len: c_uint,
) void {
    log("deserialize", .{});
    if (buf == null) {
        return;
    }
    const scanner = Scanner.fromVoidPointer(p);
    const size = @sizeOf(Scanner);
    std.debug.assert(len >= size);
    const data_ptr = @ptrCast(*const [size]u8, buf.?);
    const deserialized = std.mem.bytesAsValue(Scanner, data_ptr);
    scanner.* = deserialized.*;
}

export fn tree_sitter_zigrush2022_external_scanner_scan(
    p: *anyopaque,
    lex: *c.TSLexer,
    valid_syms: [*]const c.bool,
) c.bool {
    log("scan", .{});

    const scanner = Scanner.fromVoidPointer(p);
    _ = scanner;

    if (valid_syms[Token.string_content.toInt()]) {
        var i: usize = 0;
        while (lex.lookahead != 0) : (i += 1) {
            const next_char = lex.lookahead;
            log("  iter {}: {u} ({})", .{ i, @intCast(u21, next_char), next_char });
            switch (next_char) {
                '"' => {
                    log("    found end of string", .{});
                    lex.result_symbol = Token.string_content.toInt();
                    return true;
                },
                else => lex.advance.?(lex, false),
            }
        }
    }
    return false;
}

fn log(comptime fmt: []const u8, args: anytype) void {
    // const f = std.io.getStdOut();
    // f.writer().print(fmt ++ "\n", args) catch std.os.exit(2);
    _ = fmt;
    _ = args;
}
