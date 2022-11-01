#include <zig.h>
typedef struct {
 zig_u8 const * ptr;
 zig_usize len;
} zig_L_u8;
typedef struct {
 zig_usize field_0;
 zig_u8 field_1;
} zig_T_tuple_7busize_2c_20u1_7d;
typedef struct zig_S_builtin_StackTrace zig_S_builtin_StackTrace;
typedef struct {
 zig_usize payload;
 zig_bool is_null;
} zig_Q_usize;
typedef struct {
 zig_u32 payload;
 zig_bool is_null;
} zig_Q_u29;
typedef struct {
 zig_u16 error;
 zig_usize payload;
} zig_E_usize;
typedef zig_u8 zig_A_u8_8[zig_as_u64(8)];
typedef struct zig_S_scanner_Scanner zig_S_scanner_Scanner;
typedef struct {
 zig_S_scanner_Scanner * ptr;
 zig_usize len;
} zig_M_scanner_Scanner;
typedef struct {
 zig_u16 error;
 zig_M_scanner_Scanner payload;
} zig_E__5b_5dscanner_Scanner;
typedef struct zig_S_mem_Allocator zig_S_mem_Allocator;
typedef struct zig_S_mem_Allocator_VTable zig_S_mem_Allocator_VTable;
struct zig_S_mem_Allocator {
 zig_void * ptr;
 zig_S_mem_Allocator_VTable const * vtable;
};
typedef struct {
 zig_u8 * ptr;
 zig_usize len;
} zig_M_u8;
typedef struct {
 zig_u16 error;
 zig_M_u8 payload;
} zig_E__5b_5du8;
typedef zig_E__5b_5du8 (*zig_F_fn_28_2aanyopaque_2c_20usize_2c_20u29_2c_20u29_2c_20usize_29_20error_7bOutOfMemory_7d_21_5b_5du8)(zig_void * , zig_usize , zig_u32 , zig_u32 , zig_usize );
typedef zig_Q_usize (*zig_F_fn_28_2aanyopaque_2c_20_5b_5du8_2c_20u29_2c_20usize_2c_20u29_2c_20usize_29_20_3fusize)(zig_void * , zig_M_u8 , zig_u32 , zig_usize , zig_u32 , zig_usize );
typedef zig_void (*zig_F_fn_28_2aanyopaque_2c_20_5b_5du8_2c_20u29_2c_20usize_29_20void)(zig_void * , zig_M_u8 , zig_u32 , zig_usize );
struct zig_S_mem_Allocator_VTable {
 zig_F_fn_28_2aanyopaque_2c_20usize_2c_20u29_2c_20u29_2c_20usize_29_20error_7bOutOfMemory_7d_21_5b_5du8 alloc;
 zig_F_fn_28_2aanyopaque_2c_20_5b_5du8_2c_20u29_2c_20usize_2c_20u29_2c_20usize_29_20_3fusize resize;
 zig_F_fn_28_2aanyopaque_2c_20_5b_5du8_2c_20u29_2c_20usize_29_20void free;
};
struct zig_S_scanner_Scanner {
 zig_u32 some_state;
};
typedef struct {
 zig_u32 field_0;
 zig_u8 field_1;
} zig_T_tuple_7bu29_2c_20u1_7d;
typedef struct {
 zig_usize field_0;
 zig_u32 field_1;
 zig_i32 field_2;
} zig_T_tuple_7busize_2c_20u21_2c_20i32_7d;
typedef zig_u8 zig_A_u8_4[zig_as_u64(4)];
typedef struct {
 zig_u8 array[zig_as_u64(8)];
} zig_T_struct_7barray_3a_20_5b8_5du8_7d;
typedef struct zig_S_target_Target_Os zig_S_target_Target_Os;
typedef struct zig_S_target_Target_Os_VersionRange zig_S_target_Target_Os_VersionRange;
typedef struct zig_S_builtin_Version_Range zig_S_builtin_Version_Range;
typedef struct zig_S_builtin_Version zig_S_builtin_Version;
struct zig_S_builtin_Version {
 zig_u32 major;
 zig_u32 minor;
 zig_u32 patch;
};
struct zig_S_builtin_Version_Range {
 zig_S_builtin_Version min;
 zig_S_builtin_Version max;
};
typedef struct zig_S_target_Target_Os_LinuxVersionRange zig_S_target_Target_Os_LinuxVersionRange;
struct zig_S_target_Target_Os_LinuxVersionRange {
 zig_S_builtin_Version_Range range;
 zig_S_builtin_Version glibc;
};
typedef struct zig_S_target_Target_Os_WindowsVersion_Range zig_S_target_Target_Os_WindowsVersion_Range;
struct zig_S_target_Target_Os_WindowsVersion_Range {
 zig_u32 min;
 zig_u32 max;
};
struct zig_S_target_Target_Os_VersionRange {
 zig_u8 tag;
 union {
  zig_S_builtin_Version_Range semver;
  zig_S_target_Target_Os_LinuxVersionRange linux;
  zig_S_target_Target_Os_WindowsVersion_Range windows;
 } payload;
};
struct zig_S_target_Target_Os {
 zig_u8 tag;
 zig_S_target_Target_Os_VersionRange version_range;
};
typedef struct zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer;
typedef zig_void (*zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_2c_20bool_29_20callconv_28_C_29_20void)(zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * , zig_bool );
typedef zig_void (*zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_29_20callconv_28_C_29_20void)(zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * );
typedef zig_u32 (*zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_29_20callconv_28_C_29_20u32)(zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * );
typedef zig_bool (*zig_F_fn_28_5b_2ac_5dconst_20_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_29_20callconv_28_C_29_20bool)(zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer const * );
struct zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer {
 zig_i32 lookahead;
 zig_u16 result_symbol;
 zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_2c_20bool_29_20callconv_28_C_29_20void advance;
 zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_29_20callconv_28_C_29_20void mark_end;
 zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_29_20callconv_28_C_29_20u32 get_column;
 zig_F_fn_28_5b_2ac_5dconst_20_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_29_20callconv_28_C_29_20bool is_at_included_range_start;
 zig_F_fn_28_5b_2ac_5dconst_20_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_29_20callconv_28_C_29_20bool eof;
};
typedef struct {
 zig_u16 error;
 zig_S_scanner_Scanner * payload;
} zig_E__2ascanner_Scanner;
enum {
 zig_error__28no_20error_29 = 0u,
 zig_error_OutOfMemory = 1u,
 zig_error_Overflow = 2u,
};
static zig_u8 const zig_errorName__28no_20error_29[zig_as_u64(11)] = {zig_as_u8(40),zig_as_u8(110),zig_as_u8(111),zig_as_u8(32),zig_as_u8(101),zig_as_u8(114),zig_as_u8(114),zig_as_u8(111),zig_as_u8(114),zig_as_u8(41),zig_as_u8(0)};
static zig_u8 const zig_errorName_OutOfMemory[zig_as_u64(12)] = {zig_as_u8(79),zig_as_u8(117),zig_as_u8(116),zig_as_u8(79),zig_as_u8(102),zig_as_u8(77),zig_as_u8(101),zig_as_u8(109),zig_as_u8(111),zig_as_u8(114),zig_as_u8(121),zig_as_u8(0)};
static zig_u8 const zig_errorName_Overflow[zig_as_u64(9)] = {zig_as_u8(79),zig_as_u8(118),zig_as_u8(101),zig_as_u8(114),zig_as_u8(102),zig_as_u8(108),zig_as_u8(111),zig_as_u8(119),zig_as_u8(0)};
static zig_L_u8 const zig_errorName[zig_as_u64(3)] = {{zig_errorName__28no_20error_29, zig_as_u64(10)},{zig_errorName_OutOfMemory, zig_as_u64(11)},{zig_errorName_Overflow, zig_as_u64(8)}};
static zig_u8 mem_alignBackwardGeneric__anon_2946__anon_2948[zig_as_u64(16)];
static zig_u8 math_cast__anon_2938__anon_2947[zig_as_u64(27)];
static zig_u8 mem_asBytes__anon_2919__anon_2945[zig_as_u64(19)];
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2943[zig_as_u64(33)];
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2942[zig_as_u64(19)];
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2941[zig_as_u64(30)];
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2940[zig_as_u64(23)];
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2939[zig_as_u64(23)];
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2937[zig_as_u64(33)];
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2936[zig_as_u64(16)];
static zig_u8 heap_CAllocator_alignedFree__anon_2930[zig_as_u64(30)];
static zig_u8 mem_alignBackwardAnyAlign__anon_2929[zig_as_u64(16)];
static zig_u8 mem_alignBackwardAnyAlign__anon_2928[zig_as_u64(16)];
static zig_u8 heap_CAllocator_alignedAllocSize__anon_2927[zig_as_u64(30)];
static zig_u8 heap_CAllocator_alignedAlloc__anon_2926[zig_as_u64(30)];
static zig_u8 math_isPowerOfTwo__anon_2914__anon_2923[zig_as_u64(16)];
static zig_u8 debug_assert__anon_2922[zig_as_u64(24)];
static zig_u8 mem_Allocator_destroy__anon_2391__anon_2918[zig_as_u64(30)];
static zig_u8 scanner_Scanner_fromVoidPointer__anon_2917[zig_as_u64(19)];
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_scan__anon_2667[zig_as_u64(16)];
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_scan__anon_2666[zig_as_u64(25)];
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_scan__anon_2661[zig_as_u64(27)];
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_deserialize__anon_2492[zig_as_u64(25)];
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_serialize__anon_2395[zig_as_u64(16)];
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_create__anon_2387[zig_as_u64(30)];
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_create__anon_2382[zig_as_u64(24)];
static zig_usize mem_alignBackwardGeneric__anon_2946(zig_usize const a0, zig_usize const a1);
static zig_Q_u29 math_cast__anon_2938(zig_usize const a0);
static zig_E_usize math_mul__anon_2934(zig_usize const a0, zig_usize const a1);
zig_extern_c zig_void free(zig_void * const a0);
static zig_usize mem_alignBackward(zig_usize const a0, zig_usize const a1);
zig_extern_c zig_usize malloc_usable_size(zig_void const * const a0);
zig_extern_c zig_c_int posix_memalign(zig_void * * const a0, zig_usize const a1, zig_usize const a2);
static zig_usize math_max__anon_2925(zig_usize const a0);
static zig_bool heap_CAllocator_supports_posix_memalign;
static zig_A_u8_8 const * mem_asBytes__anon_2919(zig_S_scanner_Scanner * const * const a0);
static zig_E__5b_5dscanner_Scanner mem_Allocator_allocAdvancedWithRetAddr__anon_2916(zig_S_mem_Allocator const a0, zig_usize const a1, zig_u8 const a2, zig_usize const a3);
static zig_void heap_CAllocator_alignedFree(zig_u8 * const a0);
static zig_usize mem_alignBackwardAnyAlign(zig_usize const a0, zig_usize const a1);
static zig_usize mem_alignAllocLen(zig_usize const a0, zig_usize const a1, zig_u32 const a2);
static zig_usize heap_CAllocator_alignedAllocSize(zig_u8 * const a0);
static zig_bool heap_CAllocator_usingnamespace_0__struct_2374_supports_malloc_size;
static zig_u8 * heap_CAllocator_alignedAlloc(zig_usize const a0, zig_usize const a1);
static zig_bool math_isPowerOfTwo__anon_2914(zig_u32 const a0);
static zig_bool builtin_link_libc;
static zig_void scanner_log__anon_2664(zig_void);
static zig_void scanner_log__anon_2662(zig_T_tuple_7busize_2c_20u21_2c_20i32_7d const a0);
static zig_u16 scanner_Token_toInt(zig_u16 const a0);
static zig_void scanner_log__anon_2656(zig_void);
static zig_S_scanner_Scanner const * mem_bytesAsValue__anon_2493(zig_A_u8_4 const * const a0);
static zig_void debug_assert(zig_bool const a0);
static zig_void scanner_log__anon_2399(zig_void);
static zig_void scanner_log__anon_2397(zig_void);
static zig_c_int _home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
static zig_T_struct_7barray_3a_20_5b8_5du8_7d mem_toBytes__anon_2394(zig_S_scanner_Scanner * const a0);
static zig_void scanner_log__anon_2393(zig_void);
static zig_void mem_Allocator_destroy__anon_2391(zig_S_mem_Allocator const a0, zig_S_scanner_Scanner * const a1);
static zig_S_scanner_Scanner * scanner_Scanner_fromVoidPointer(zig_void * const a0);
static zig_void scanner_log__anon_2389(zig_void);
static zig_u64 builtin_zig_backend;
static zig_cold zig_noreturn builtin_default_panic(zig_L_u8 const a0, zig_S_builtin_StackTrace * const a1, zig_Q_usize const a2);
static zig_E__5b_5du8 heap_CAllocator_alloc(zig_void * const a0, zig_usize const a1, zig_u32 const a2, zig_u32 const a3, zig_usize const a4);
static zig_Q_usize heap_CAllocator_resize(zig_void * const a0, zig_M_u8 const a1, zig_u32 const a2, zig_usize const a3, zig_u32 const a4, zig_usize const a5);
static zig_void heap_CAllocator_free(zig_void * const a0, zig_M_u8 const a1, zig_u32 const a2, zig_usize const a3);
static zig_S_mem_Allocator_VTable heap_c_allocator_vtable;
static zig_S_mem_Allocator heap_c_allocator;
static zig_u8 builtin_abi;
static zig_u8 c_linux_native_abi;
static zig_S_target_Target_Os builtin_os;
static zig_void scanner_log__anon_1454(zig_void);
zig_extern_c zig_bool tree_sitter_zigrush2022_external_scanner_scan(zig_void * const a0, zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * const a1, zig_bool const * const a2);
zig_extern_c zig_void tree_sitter_zigrush2022_external_scanner_deserialize(zig_void * const a0, zig_u8 const * const a1, zig_c_uint const a2);
zig_extern_c zig_c_uint tree_sitter_zigrush2022_external_scanner_serialize(zig_void * const a0, zig_u8 * const a1);
zig_extern_c zig_void tree_sitter_zigrush2022_external_scanner_destroy(zig_void * const a0);
static zig_E__2ascanner_Scanner mem_Allocator_create__anon_2381(zig_S_mem_Allocator const a0);
zig_extern_c zig_void * tree_sitter_zigrush2022_external_scanner_create(zig_void);
static zig_u8 builtin_output_mode;
static zig_u8 builtin_link_mode;
static zig_u64 builtin_zig_backend = zig_as_u64(3);
static zig_u8 builtin_output_mode = 1;
static zig_u8 builtin_link_mode = 0;

zig_void * tree_sitter_zigrush2022_external_scanner_create(zig_void) {
 /* file:2:5 */
 /* file:2:8 */
 scanner_log__anon_1454();
 /* file:3:5 */
 /* var:allocator */
 /* file:4:5 */
 zig_S_scanner_Scanner * t0;
 {
  /* file:4:37 */
  zig_E__2ascanner_Scanner const t1 = mem_Allocator_create__anon_2381((zig_S_mem_Allocator ){((zig_void * )zig_as_u64(0xaaaaaaaaaaaaaaaa)),(zig_S_mem_Allocator_VTable const * )((zig_S_mem_Allocator_VTable const * )&heap_c_allocator_vtable)});
  zig_bool const t2 = t1.error == zig_error__28no_20error_29;
  if (t2) {
   zig_S_scanner_Scanner * const t3 = t1.payload;
   t0 = t3;
   goto zig_block_0;
  } else {
   /* file:4:53 */
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&scanner_tree_sitter_zigrush2022_external_scanner_create__anon_2382), zig_as_u64(24)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_0:;
 /* var:scanner */
 /* file:5:5 */
 (*t0) = (zig_S_scanner_Scanner ){zig_as_u32(0)};
 /* file:6:5 */
 zig_usize const t4 = (zig_usize )t0;
 zig_bool const t5 = t4 != zig_as_u64(0);
 {
  if (t5) {
   goto zig_block_1;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&scanner_tree_sitter_zigrush2022_external_scanner_create__anon_2387), zig_as_u64(30)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_1:;
 zig_void * const t6 = (zig_void * )t0;
 /* file:6:5 */
 return t6;
}

zig_void tree_sitter_zigrush2022_external_scanner_destroy(zig_void * const a0) {
 /* file:2:5 */
 /* file:2:8 */
 scanner_log__anon_2389();
 /* file:3:5 */
 /* file:3:44 */
 zig_S_scanner_Scanner * const t0 = scanner_Scanner_fromVoidPointer(a0);
 /* var:scanner */
 /* file:4:5 */
 /* var:allocator */
 /* file:5:5 */
 /* file:5:22 */
 mem_Allocator_destroy__anon_2391((zig_S_mem_Allocator ){((zig_void * )zig_as_u64(0xaaaaaaaaaaaaaaaa)),(zig_S_mem_Allocator_VTable const * )((zig_S_mem_Allocator_VTable const * )&heap_c_allocator_vtable)}, t0);
 return;
}

zig_c_uint tree_sitter_zigrush2022_external_scanner_serialize(zig_void * const a0, zig_u8 * const a1) {
 /* file:5:5 */
 /* file:5:8 */
 scanner_log__anon_2393();
 /* file:6:5 */
 /* file:6:44 */
 zig_S_scanner_Scanner * const t0 = scanner_Scanner_fromVoidPointer(a0);
 /* var:scanner */
 /* file:7:5 */
 /* file:7:34 */
 zig_T_struct_7barray_3a_20_5b8_5du8_7d const t1 = mem_toBytes__anon_2394(t0);
 zig_u8 t2[zig_as_u64(8)];
 memcpy(t2, t1.array, sizeof(zig_u8 [zig_as_u64(8)]));
 /* var:bytes */
 /* file:8:9 */
 /* file:11:10 */
 zig_usize t3;
 t3 = zig_as_u64(0);
 {
  while (zig_true) {
   {
    zig_usize const t4 = t3;
    zig_u64 t5;
    memcpy(&t5, &t4, sizeof(zig_u64 ));
    zig_bool const t6 = t5 < zig_as_u64(8);
    if (t6) {
     zig_bool const t7 = t4 < zig_as_u64(8);
     {
      if (t7) {
       goto zig_block_2;
      } else {
       zig_breakpoint();
       zig_unreachable();
      }
     }
     zig_block_2:;
     zig_u8 const t8 = t2[t4];
     /* var:b */
     /* var:i */
     /* file:12:9 */
     zig_u8 * t9;
     t9 = a1;
     zig_u8 * const * const t10 = (zig_u8 * const * )&t9;
     zig_usize const t11 = t3;
     zig_u8 * const t12 = (*t10);
     zig_u8 * const t13 = &(t12)[t11];
     (*t13) = t8;
     goto zig_block_1;
    } else {
     goto zig_block_0;
    }
   }
   zig_block_1:;
   zig_usize const t14 = t3;
   zig_T_tuple_7busize_2c_20u1_7d t15;
   t15.field_1 = zig_addo_u64(&t15.field_0, t14, zig_as_u64(1), zig_as_u8(64));
   zig_u8 const t16 = t15.field_1;
   zig_bool const t17 = t16 == zig_as_u8(0);
   {
    if (t17) {
     goto zig_block_3;
    } else {
     builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&scanner_tree_sitter_zigrush2022_external_scanner_serialize__anon_2395), zig_as_u64(16)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
    }
   }
   zig_block_3:;
   zig_usize const t18 = t15.field_0;
   t3 = t18;
  }
 }
 zig_block_0:;
 /* file:14:5 */
 /* file:14:8 */
 scanner_log__anon_2397();
 /* file:15:5 */
 /* file:15:5 */
 return 8u;
}

zig_void tree_sitter_zigrush2022_external_scanner_deserialize(zig_void * const a0, zig_u8 const * const a1, zig_c_uint const a2) {
 /* file:6:5 */
 /* file:6:8 */
 scanner_log__anon_2399();
 /* file:7:9 */
 {
  zig_bool const t0 = a1 == ((zig_u8 const * )NULL);
  if (t0) {
   /* file:8:9 */
   return;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:10:5 */
 /* file:10:44 */
 zig_S_scanner_Scanner * const t1 = scanner_Scanner_fromVoidPointer(a0);
 /* var:scanner */
 /* file:11:5 */
 /* file:12:5 */
 /* file:12:21 */
 zig_u32 t2;
 memcpy(&t2, &a2, sizeof(zig_u32 ));
 zig_bool const t3 = t2 >= zig_as_u32(4);
 debug_assert(t3);
 /* file:13:5 */
 zig_bool const t4 = a1 != ((zig_u8 const * )NULL);
 {
  if (t4) {
   goto zig_block_1;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&scanner_tree_sitter_zigrush2022_external_scanner_deserialize__anon_2492), zig_as_u64(25)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_1:;
 zig_A_u8_4 const * const t5 = (zig_A_u8_4 const * )a1;
 /* var:data_ptr */
 /* file:14:5 */
 /* file:14:46 */
 zig_S_scanner_Scanner const * const t6 = mem_bytesAsValue__anon_2493(t5);
 /* var:deserialized */
 /* file:15:5 */
 zig_S_scanner_Scanner const t7 = (*t6);
 (*t1) = t7;
 return;
}

zig_bool tree_sitter_zigrush2022_external_scanner_scan(zig_void * const a0, zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * const a1, zig_bool const * const a2) {
 /* file:6:5 */
 /* file:6:8 */
 scanner_log__anon_2656();
 /* file:8:5 */
 /* file:8:44 */
 zig_S_scanner_Scanner * const t0 = scanner_Scanner_fromVoidPointer(a0);
 /* var:scanner */
 /* file:9:5 */
 /* file:11:9 */
 {
  /* file:11:46 */
  zig_u16 const t1 = scanner_Token_toInt(0);
  zig_usize const t2 = (zig_usize )t1;
  zig_bool const t3 = a2[t2];
  if (t3) {
   /* file:12:9 */
   zig_usize t4;
   t4 = zig_as_u64(0);
   /* var:i */
   {
    while (zig_true) {
     {
      /* file:13:16 */
      zig_i32 * const t5 = (zig_i32 * )&a1->lookahead;
      zig_i32 const t6 = (*t5);
      zig_bool const t7 = t6 != zig_as_i32(0);
      if (t7) {
       /* file:13:47 */
       /* file:14:13 */
       zig_i32 * const t8 = (zig_i32 * )&a1->lookahead;
       zig_i32 const t9 = (*t8);
       /* var:next_char */
       /* file:15:13 */
       /* file:15:16 */
       zig_usize const t10 = t4;
       zig_i32 const t11 = zig_subw_i32(zig_as_i32(2097151), t9, zig_as_u8(32));
       zig_u32 t12;
       memcpy(&t12, &t11, sizeof(zig_u32 ));
       zig_bool const t13 = t12 <= zig_as_u32(2097151);
       {
        if (t13) {
         goto zig_block_3;
        } else {
         builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&scanner_tree_sitter_zigrush2022_external_scanner_scan__anon_2661), zig_as_u64(27)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
        }
       }
       zig_block_3:;
       zig_u32 const t14 = (zig_u32 )t9;
       zig_T_tuple_7busize_2c_20u21_2c_20i32_7d const t15 = {t10, t14, t9};
       scanner_log__anon_2662(t15);
       /* file:16:13 */
       {
        switch (t9) {
         case zig_as_i32(34): {
          /* file:18:21 */
          /* file:18:24 */
          scanner_log__anon_2664();
          /* file:19:21 */
          zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * t16;
          t16 = a1;
          zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * const * const t17 = (zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * const * )&t16;
          zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * const t18 = (*t17);
          zig_u16 * const t19 = (zig_u16 * )&t18->result_symbol;
          /* file:19:67 */
          zig_u16 const t20 = scanner_Token_toInt(0);
          (*t19) = t20;
          /* file:20:21 */
          /* file:20:21 */
          return zig_true;
         }
         default: {
          zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_2c_20bool_29_20callconv_28_C_29_20void * const t21 = (zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_2c_20bool_29_20callconv_28_C_29_20void * )&a1->advance;
          zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_2c_20bool_29_20callconv_28_C_29_20void const t22 = (*t21);
          zig_bool const t23 = t22 != ((zig_F_fn_28_5b_2ac_5d_home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer_2c_20bool_29_20callconv_28_C_29_20void )NULL);
          {
           if (t23) {
            goto zig_block_5;
           } else {
            builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&scanner_tree_sitter_zigrush2022_external_scanner_scan__anon_2666), zig_as_u64(25)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
           }
          }
          zig_block_5:;
          /* file:22:38 */
          zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * const t24 = (zig_S__home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_struct_TSLexer * )a1;
          t22(t24, zig_false);
          goto zig_block_4;
         }
        }
       }
       zig_block_4:;
       /* file:13:39 */
       zig_usize const t25 = t4;
       zig_T_tuple_7busize_2c_20u1_7d t26;
       t26.field_1 = zig_addo_u64(&t26.field_0, t25, zig_as_u64(1), zig_as_u8(64));
       zig_u8 const t27 = t26.field_1;
       zig_bool const t28 = t27 == zig_as_u8(0);
       {
        if (t28) {
         goto zig_block_6;
        } else {
         builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&scanner_tree_sitter_zigrush2022_external_scanner_scan__anon_2667), zig_as_u64(16)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
        }
       }
       zig_block_6:;
       zig_usize const t29 = t26.field_0;
       t4 = t29;
       goto zig_block_2;
      } else {
       goto zig_block_1;
      }
     }
     zig_block_2:;
    }
   }
   zig_block_1:;
   goto zig_block_0;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:26:5 */
 /* file:26:5 */
 return zig_false;
}

static zig_void scanner_log__anon_1454(zig_void) {
 /* file:4:5 */
 /* file:5:5 */
 return;
}
static zig_S_target_Target_Os builtin_os = {8,{.tag = 2, .payload = {.linux = {{{zig_as_u32(6),zig_as_u32(0),zig_as_u32(2)},{zig_as_u32(6),zig_as_u32(0),zig_as_u32(2)}},{zig_as_u32(2),zig_as_u32(36),zig_as_u32(0)}}}}};
static zig_u8 builtin_abi = 1;
static zig_u8 c_linux_native_abi = 1;

static zig_E__5b_5du8 heap_CAllocator_alloc(zig_void * const a0, zig_usize const a1, zig_u32 const a2, zig_u32 const a3, zig_usize const a4) {
 /* file:8:9 */
 /* file:9:9 */
 /* file:9:15 */
 zig_u64 t0;
 memcpy(&t0, &a1, sizeof(zig_u64 ));
 zig_bool const t1 = t0 > zig_as_u64(0);
 debug_assert(t1);
 /* file:10:9 */
 /* file:10:15 */
 /* file:10:37 */
 zig_bool const t2 = math_isPowerOfTwo__anon_2914(a2);
 debug_assert(t2);
 /* file:12:9 */
 zig_u8 * t3;
 zig_u8 * t4;
 {
  /* file:12:31 */
  zig_usize const t5 = (zig_usize )a2;
  zig_u8 * const t6 = heap_CAllocator_alignedAlloc(a1, t5);
  zig_bool const t7 = t6 != ((zig_u8 * )NULL);
  if (t7) {
   t4 = t6;
   goto zig_block_0;
  } else {
   /* file:12:55 */
   /* file:12:55 */
   return (zig_E__5b_5du8 ){ .payload = {(zig_u8 * )zig_as_u64(0xaaaaaaaaaaaaaaaa), zig_as_u64(0xaaaaaaaaaaaaaaaa)}, .error = zig_error_OutOfMemory };
  }
 }
 zig_block_0:;
 zig_u8 * * const t8 = (zig_u8 * * )&t3;
 (*t8) = t4;
 /* var:ptr */
 /* file:13:13 */
 {
  zig_bool const t9 = a3 == zig_as_u32(0);
  if (t9) {
   /* file:14:13 */
   zig_u8 * const t10 = t3;
   zig_u8 * const t11 = (zig_u8 * )(((uintptr_t)t10) + (zig_as_u64(0)*sizeof(zig_u8 )));
   zig_bool const t12 = zig_as_u64(0) <= a1;
   {
    if (t12) {
     goto zig_block_2;
    } else {
     zig_breakpoint();
     zig_unreachable();
    }
   }
   zig_block_2:;
   zig_M_u8 const t13 = {(zig_u8 * )t11, a1};
   zig_E__5b_5du8 const t14 = { .payload = t13, .error = zig_error__28no_20error_29 };
   /* file:14:13 */
   return t14;
  } else {
   goto zig_block_1;
  }
 }
 zig_block_1:;
 /* file:16:9 */
 /* file:17:17 */
 /* file:18:17 */
 /* file:18:43 */
 zig_u8 * const t15 = t3;
 zig_usize const t16 = heap_CAllocator_alignedAllocSize(t15);
 /* var:s */
 /* file:19:17 */
 /* file:19:23 */
 zig_u64 t17;
 memcpy(&t17, &t16, sizeof(zig_u64 ));
 zig_u64 t18;
 memcpy(&t18, &a1, sizeof(zig_u64 ));
 zig_bool const t19 = t17 >= t18;
 debug_assert(t19);
 /* file:20:17 */
 /* var:full_len */
 /* file:24:9 */
 /* file:24:48 */
 zig_usize const t20 = (zig_usize )a3;
 zig_usize const t21 = mem_alignBackwardAnyAlign(t16, t20);
 zig_u8 * const t22 = t3;
 zig_u8 * const t23 = (zig_u8 * )(((uintptr_t)t22) + (zig_as_u64(0)*sizeof(zig_u8 )));
 zig_bool const t24 = zig_as_u64(0) <= t21;
 {
  if (t24) {
   goto zig_block_3;
  } else {
   zig_breakpoint();
   zig_unreachable();
  }
 }
 zig_block_3:;
 zig_M_u8 const t25 = {(zig_u8 * )t23, t21};
 zig_E__5b_5du8 const t26 = { .payload = t25, .error = zig_error__28no_20error_29 };
 /* file:24:9 */
 return t26;
}

static zig_Q_usize heap_CAllocator_resize(zig_void * const a0, zig_M_u8 const a1, zig_u32 const a2, zig_usize const a3, zig_u32 const a4, zig_usize const a5) {
 /* file:9:9 */
 /* file:10:9 */
 /* file:11:13 */
 {
  zig_usize const t0 = a1.len;
  zig_u64 t1;
  memcpy(&t1, &a3, sizeof(zig_u64 ));
  zig_u64 t2;
  memcpy(&t2, &t0, sizeof(zig_u64 ));
  zig_bool const t3 = t1 <= t2;
  if (t3) {
   /* file:12:13 */
   zig_Q_usize t4;
   /* file:12:37 */
   zig_usize const t5 = a1.len;
   zig_usize const t6 = mem_alignAllocLen(t5, a3, a4);
   zig_Q_usize const t7 = { .payload = t6, .is_null = zig_false };
   t4 = t7;
   /* file:12:13 */
   return t4;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:14:13 */
 /* file:15:13 */
 /* file:15:46 */
 zig_u8 * const t8 = a1.ptr;
 zig_usize const t9 = heap_CAllocator_alignedAllocSize(t8);
 /* var:full_len */
 /* file:16:17 */
 {
  zig_u64 t10;
  memcpy(&t10, &a3, sizeof(zig_u64 ));
  zig_u64 t11;
  memcpy(&t11, &t9, sizeof(zig_u64 ));
  zig_bool const t12 = t10 <= t11;
  if (t12) {
   /* file:17:17 */
   zig_Q_usize t13;
   /* file:17:41 */
   zig_usize const t14 = mem_alignAllocLen(t9, a3, a4);
   zig_Q_usize const t15 = { .payload = t14, .is_null = zig_false };
   t13 = t15;
   /* file:17:17 */
   return t13;
  } else {
   goto zig_block_1;
  }
 }
 zig_block_1:;
 /* file:20:9 */
 /* file:20:9 */
 return (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true };
}

static zig_void heap_CAllocator_free(zig_void * const a0, zig_M_u8 const a1, zig_u32 const a2, zig_usize const a3) {
 /* file:7:9 */
 /* file:8:9 */
 /* file:9:9 */
 /* file:9:20 */
 zig_u8 * const t0 = a1.ptr;
 heap_CAllocator_alignedFree(t0);
 return;
}
static zig_S_mem_Allocator_VTable heap_c_allocator_vtable = {(zig_F_fn_28_2aanyopaque_2c_20usize_2c_20u29_2c_20u29_2c_20usize_29_20error_7bOutOfMemory_7d_21_5b_5du8 )&heap_CAllocator_alloc,(zig_F_fn_28_2aanyopaque_2c_20_5b_5du8_2c_20u29_2c_20usize_2c_20u29_2c_20usize_29_20_3fusize )&heap_CAllocator_resize,(zig_F_fn_28_2aanyopaque_2c_20_5b_5du8_2c_20u29_2c_20usize_29_20void )&heap_CAllocator_free};
static zig_S_mem_Allocator heap_c_allocator = {((zig_void * )zig_as_u64(0xaaaaaaaaaaaaaaaa)),(zig_S_mem_Allocator_VTable const * )((zig_S_mem_Allocator_VTable const * )&heap_c_allocator_vtable)};

static zig_E__2ascanner_Scanner mem_Allocator_create__anon_2381(zig_S_mem_Allocator const a0) {
 /* file:2:9 */
 /* file:3:5 */
 /* file:3:19 */
 zig_S_mem_Allocator t0;
 t0 = a0;
 zig_S_mem_Allocator const * const t1 = (zig_S_mem_Allocator const * )&t0;
 zig_S_mem_Allocator const t2 = (*t1);
 /* file:3:52 */
 zig_usize const t3 = (zig_usize )zig_return_address();
 zig_E__5b_5dscanner_Scanner const t4 = mem_Allocator_allocAdvancedWithRetAddr__anon_2916(t2, zig_as_u64(1), 0, t3);
 if (t4.error){
  zig_u16 const t5 = t4.error;
  /* file:3:19 */
  zig_E__2ascanner_Scanner const t6 = { .payload = ((zig_S_scanner_Scanner * )zig_as_u64(0xaaaaaaaaaaaaaaaa)), .error = t5 };
  return t6;
 }
 zig_M_scanner_Scanner const t7 = t4.payload;
 zig_M_scanner_Scanner t8;
 t8 = t7;
 zig_M_scanner_Scanner const * const t9 = (zig_M_scanner_Scanner const * )&t8;
 /* var:slice */
 /* file:4:5 */
 zig_M_scanner_Scanner const t10 = (*t9);
 zig_usize const t11 = t10.len;
 zig_bool const t12 = zig_as_u64(0) < t11;
 {
  if (t12) {
   goto zig_block_0;
  } else {
   zig_breakpoint();
   zig_unreachable();
  }
 }
 zig_block_0:;
 zig_S_scanner_Scanner * const t13 = &t10.ptr[zig_as_u64(0)];
 zig_E__2ascanner_Scanner const t14 = { .payload = t13, .error = zig_error__28no_20error_29 };
 /* file:4:5 */
 return t14;
}

static zig_cold zig_noreturn builtin_default_panic(zig_L_u8 const a0, zig_S_builtin_StackTrace * const a1, zig_Q_usize const a2) {
 /* file:2:5 */
 /* file:6:9 */
 while (zig_true) {
  /* file:15:16 */
  /* file:15:22 */
  /* file:16:13 */
  zig_breakpoint();
 }
}

static zig_void scanner_log__anon_2389(zig_void) {
 /* file:4:5 */
 /* file:5:5 */
 return;
}

static zig_S_scanner_Scanner * scanner_Scanner_fromVoidPointer(zig_void * const a0) {
 /* file:2:9 */
 zig_usize const t0 = (zig_usize )a0;
 zig_usize const t1 = t0 & zig_as_u64(3);
 zig_bool const t2 = t1 == zig_as_u64(0);
 {
  if (t2) {
   goto zig_block_0;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&scanner_Scanner_fromVoidPointer__anon_2917), zig_as_u64(19)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_0:;
 zig_void * const t3 = (zig_void * )a0;
 zig_S_scanner_Scanner * const t4 = (zig_S_scanner_Scanner * )t3;
 /* file:2:9 */
 return t4;
}

static zig_void mem_Allocator_destroy__anon_2391(zig_S_mem_Allocator const a0, zig_S_scanner_Scanner * const a1) {
 /* file:2:5 */
 /* var:info */
 /* file:3:5 */
 /* file:4:9 */
 /* file:5:5 */
 zig_usize const t0 = (zig_usize )a1;
 zig_bool const t1 = t0 != zig_as_u64(0);
 {
  if (t1) {
   goto zig_block_0;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_Allocator_destroy__anon_2391__anon_2918), zig_as_u64(30)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_0:;
 zig_u8 * t2;
 memcpy(&t2, &t0, sizeof(zig_u8 * ));
 zig_u8 * t3;
 t3 = t2;
 zig_u8 * const * const t4 = (zig_u8 * const * )&t3;
 /* var:non_const_ptr */
 /* file:6:5 */
 zig_S_mem_Allocator t5;
 t5 = a0;
 zig_S_mem_Allocator const * const t6 = (zig_S_mem_Allocator const * )&t5;
 zig_S_mem_Allocator const t7 = (*t6);
 /* file:6:17 */
 zig_u8 * const t8 = (*t4);
 zig_u8 * const t9 = (zig_u8 * )(((uintptr_t)t8) + (zig_as_u64(0)*sizeof(zig_u8 )));
 zig_A_u8_4 * const t10 = (zig_A_u8_4 * )t9;
 zig_usize const t11 = (zig_usize )zig_return_address();
 zig_M_u8 const t12 = { .ptr = &((*t10))[zig_as_u64(0)], .len = zig_as_u64(4) };
 /* dbg func:rawFree */
 /* var:self */
 /* var:buf */
 /* var:buf_align */
 /* var:ret_addr */
 /* file:2:5 */
 zig_S_mem_Allocator t13;
 t13 = t7;
 zig_S_mem_Allocator const * const t14 = (zig_S_mem_Allocator const * )&t13;
 zig_S_mem_Allocator_VTable const * const * const t15 = (zig_S_mem_Allocator_VTable const * const * )&t14->vtable;
 zig_S_mem_Allocator_VTable const * const t16 = (*t15);
 zig_F_fn_28_2aanyopaque_2c_20_5b_5du8_2c_20u29_2c_20usize_29_20void const * const t17 = (zig_F_fn_28_2aanyopaque_2c_20_5b_5du8_2c_20u29_2c_20usize_29_20void const * )&t16->free;
 zig_F_fn_28_2aanyopaque_2c_20_5b_5du8_2c_20u29_2c_20usize_29_20void const t18 = (*t17);
 /* file:2:28 */
 zig_void * const t19 = t7.ptr;
 t18(t19, t12, zig_as_u32(4), t11);
 /* file:2:5 */
 /* dbg func:destroy__anon_2391 */
 return;
}

static zig_void scanner_log__anon_2393(zig_void) {
 /* file:4:5 */
 /* file:5:5 */
 return;
}

static zig_T_struct_7barray_3a_20_5b8_5du8_7d mem_toBytes__anon_2394(zig_S_scanner_Scanner * const a0) {
 /* file:2:5 */
 /* file:2:19 */
 zig_S_scanner_Scanner * t0;
 t0 = a0;
 zig_S_scanner_Scanner * const * const t1 = (zig_S_scanner_Scanner * const * )&t0;
 zig_A_u8_8 const * const t2 = mem_asBytes__anon_2919(t1);
 zig_u8 t3[zig_as_u64(8)];
 memcpy(t3, t2, sizeof(zig_u8 [zig_as_u64(8)]));
 /* file:2:5 */
 zig_T_struct_7barray_3a_20_5b8_5du8_7d t4;
 memcpy(t4.array, t3, sizeof(zig_u8 [zig_as_u64(8)]));
 return t4;
}
static zig_c_int _home_hryx_src_hryx_tree_2dsitter_2dzigrush2022_zig_2dcache_o_4a60f7187bd510da2c01504add1c0cb5_cimport_TREE_SITTER_SERIALIZATION_BUFFER_SIZE = 1024;

static zig_void scanner_log__anon_2397(zig_void) {
 /* file:4:5 */
 /* file:5:5 */
 return;
}

static zig_void scanner_log__anon_2399(zig_void) {
 /* file:4:5 */
 /* file:5:5 */
 return;
}

static zig_void debug_assert(zig_bool const a0) {
 /* file:2:9 */
 {
  zig_bool const t0 = !a0;
  if (t0) {
   /* file:2:14 */
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&debug_assert__anon_2922), zig_as_u64(24)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 return;
}

static zig_S_scanner_Scanner const * mem_bytesAsValue__anon_2493(zig_A_u8_4 const * const a0) {
 /* file:2:5 */
 /* file:2:43 */
 zig_S_scanner_Scanner const * const t0 = (zig_S_scanner_Scanner const * )a0;
 /* file:2:5 */
 return t0;
}

static zig_void scanner_log__anon_2656(zig_void) {
 /* file:4:5 */
 /* file:5:5 */
 return;
}

static zig_u16 scanner_Token_toInt(zig_u16 const a0) {
 /* file:2:9 */
 zig_u16 t0;
 memcpy(&t0, &a0, sizeof(zig_u16 ));
 /* file:2:9 */
 return t0;
}

static zig_void scanner_log__anon_2662(zig_T_tuple_7busize_2c_20u21_2c_20i32_7d const a0) {
 /* file:4:5 */
 /* file:5:5 */
 return;
}

static zig_void scanner_log__anon_2664(zig_void) {
 /* file:4:5 */
 /* file:5:5 */
 return;
}
static zig_bool builtin_link_libc = zig_true;

static zig_bool math_isPowerOfTwo__anon_2914(zig_u32 const a0) {
 /* file:2:5 */
 /* file:2:11 */
 zig_bool const t0 = a0 != zig_as_u32(0);
 debug_assert(t0);
 /* file:3:5 */
 zig_T_tuple_7bu29_2c_20u1_7d t1;
 t1.field_1 = zig_subo_u32(&t1.field_0, a0, zig_as_u32(1), zig_as_u8(29));
 zig_u8 const t2 = t1.field_1;
 zig_bool const t3 = t2 == zig_as_u8(0);
 {
  if (t3) {
   goto zig_block_0;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&math_isPowerOfTwo__anon_2914__anon_2923), zig_as_u64(16)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_0:;
 zig_u32 const t4 = t1.field_0;
 zig_u32 const t5 = a0 & t4;
 zig_bool const t6 = t5 == zig_as_u32(0);
 /* file:3:5 */
 return t6;
}

static zig_u8 * heap_CAllocator_alignedAlloc(zig_usize const a0, zig_usize const a1) {
 /* file:2:13 */
 /* file:5:13 */
 /* file:5:47 */
 zig_usize const t0 = math_max__anon_2925(a1);
 /* var:eff_alignment */
 /* file:7:13 */
 zig_void * t1;
 memset(&t1, zig_as_u8(0xaa), sizeof(zig_void * ));
 /* var:aligned_ptr */
 /* file:8:17 */
 {
  /* file:8:33 */
  zig_c_int const t2 = posix_memalign(&t1, t0, a0);
  zig_i32 t3;
  memcpy(&t3, &t2, sizeof(zig_i32 ));
  zig_bool const t4 = t3 != zig_as_i32(0);
  if (t4) {
   /* file:9:17 */
   /* file:9:17 */
   return ((zig_u8 * )NULL);
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:11:13 */
 zig_void * const t5 = t1;
 zig_usize const t6 = (zig_usize )t5;
 zig_bool const t7 = t6 != zig_as_u64(0);
 {
  if (t7) {
   goto zig_block_1;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&heap_CAllocator_alignedAlloc__anon_2926), zig_as_u64(30)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_1:;
 zig_u8 * const t8 = (zig_u8 * )t5;
 zig_u8 * const t9 = (zig_u8 * )t8;
 /* file:11:13 */
 return t9;
}
static zig_bool heap_CAllocator_usingnamespace_0__struct_2374_supports_malloc_size = zig_true;

static zig_usize heap_CAllocator_alignedAllocSize(zig_u8 * const a0) {
 /* file:2:13 */
 /* file:3:13 */
 zig_usize t0;
 /* file:3:42 */
 zig_usize const t1 = (zig_usize )a0;
 zig_bool const t2 = t1 != zig_as_u64(0);
 {
  if (t2) {
   goto zig_block_0;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&heap_CAllocator_alignedAllocSize__anon_2927), zig_as_u64(30)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_0:;
 zig_void const * const t3 = (zig_void const * )a0;
 zig_usize const t4 = malloc_usable_size(t3);
 t0 = t4;
 /* file:3:13 */
 return t0;
}

static zig_usize mem_alignBackwardAnyAlign(zig_usize const a0, zig_usize const a1) {
 /* file:2:9 */
 {
  zig_u8 const t0 = zig_popcount_u64(a1, zig_as_u8(64));
  zig_bool const t1 = t0 == zig_as_u8(1);
  if (t1) {
   /* file:3:9 */
   zig_usize t2;
   /* file:3:29 */
   zig_usize const t3 = mem_alignBackward(a0, a1);
   t2 = t3;
   /* file:3:9 */
   return t2;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:4:5 */
 /* file:4:11 */
 zig_u64 t4;
 memcpy(&t4, &a1, sizeof(zig_u64 ));
 zig_bool const t5 = t4 != zig_as_u64(0);
 debug_assert(t5);
 /* file:5:5 */
 zig_bool const t6 = a1 != zig_as_u64(0);
 {
  if (t6) {
   goto zig_block_1;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_alignBackwardAnyAlign__anon_2928), zig_as_u64(16)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_1:;
 zig_usize const t7 = zig_mod_u64(a0, a1);
 zig_T_tuple_7busize_2c_20u1_7d t8;
 t8.field_1 = zig_subo_u64(&t8.field_0, a0, t7, zig_as_u8(64));
 zig_u8 const t9 = t8.field_1;
 zig_bool const t10 = t9 == zig_as_u8(0);
 {
  if (t10) {
   goto zig_block_2;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_alignBackwardAnyAlign__anon_2929), zig_as_u64(16)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_2:;
 zig_usize const t11 = t8.field_0;
 /* file:5:5 */
 return t11;
}

static zig_usize mem_alignAllocLen(zig_usize const a0, zig_usize const a1, zig_u32 const a2) {
 /* file:2:5 */
 /* file:2:11 */
 zig_u64 t0;
 memcpy(&t0, &a1, sizeof(zig_u64 ));
 zig_bool const t1 = t0 > zig_as_u64(0);
 debug_assert(t1);
 /* file:3:5 */
 /* file:3:11 */
 zig_u64 t2;
 memcpy(&t2, &a1, sizeof(zig_u64 ));
 zig_u64 const t3 = (zig_u64 )a2;
 zig_bool const t4 = t2 >= t3;
 debug_assert(t4);
 /* file:4:5 */
 /* file:4:11 */
 zig_u64 t5;
 memcpy(&t5, &a0, sizeof(zig_u64 ));
 zig_u64 t6;
 memcpy(&t6, &a1, sizeof(zig_u64 ));
 zig_bool const t7 = t5 >= t6;
 debug_assert(t7);
 /* file:5:9 */
 {
  zig_bool const t8 = a2 == zig_as_u32(0);
  if (t8) {
   /* file:6:9 */
   /* file:6:9 */
   return a1;
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:7:5 */
 /* file:7:43 */
 zig_usize const t9 = (zig_usize )a2;
 zig_usize const t10 = mem_alignBackwardAnyAlign(a0, t9);
 /* var:adjusted */
 /* file:8:5 */
 /* file:8:11 */
 zig_u64 t11;
 memcpy(&t11, &t10, sizeof(zig_u64 ));
 zig_u64 t12;
 memcpy(&t12, &a1, sizeof(zig_u64 ));
 zig_bool const t13 = t11 >= t12;
 debug_assert(t13);
 /* file:9:5 */
 /* file:9:5 */
 return t10;
}

static zig_void heap_CAllocator_alignedFree(zig_u8 * const a0) {
 /* file:2:13 */
 /* file:3:13 */
 /* file:3:26 */
 zig_usize const t0 = (zig_usize )a0;
 zig_bool const t1 = t0 != zig_as_u64(0);
 {
  if (t1) {
   goto zig_block_0;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&heap_CAllocator_alignedFree__anon_2930), zig_as_u64(30)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_0:;
 zig_void * const t2 = (zig_void * )a0;
 free(t2);
 /* file:3:13 */
 return;
}

static zig_E__5b_5dscanner_Scanner mem_Allocator_allocAdvancedWithRetAddr__anon_2916(zig_S_mem_Allocator const a0, zig_usize const a1, zig_u8 const a2, zig_usize const a3) {
 /* file:10:5 */
 /* file:10:19 */
 /* file:15:9 */
 {
  zig_u64 t0;
  memcpy(&t0, &a1, sizeof(zig_u64 ));
  zig_bool const t1 = t0 == zig_as_u64(0);
  if (t1) {
   /* file:16:9 */
   /* file:16:51 */
   /* file:16:67 */
   /* var:ptr */
   /* file:17:9 */
   /* file:17:9 */
   return (zig_E__5b_5dscanner_Scanner ){ .payload = {((zig_S_scanner_Scanner * )zig_as_u64(0xfffffffffffffffc)), zig_as_u64(0)}, .error = zig_error__28no_20error_29 };
  } else {
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:20:5 */
 zig_usize t2;
 {
  /* file:20:32 */
  zig_E_usize const t3 = math_mul__anon_2934(zig_as_u64(4), a1);
  zig_bool const t4 = t3.error == zig_error__28no_20error_29;
  if (t4) {
   zig_usize const t5 = t3.payload;
   t2 = t5;
   goto zig_block_1;
  } else {
   /* file:20:61 */
   /* file:20:61 */
   return (zig_E__5b_5dscanner_Scanner ){ .payload = {(zig_S_scanner_Scanner * )zig_as_u64(0xaaaaaaaaaaaaaaaa), zig_as_u64(0xaaaaaaaaaaaaaaaa)}, .error = zig_error_OutOfMemory };
  }
 }
 zig_block_1:;
 /* var:byte_count */
 /* file:24:5 */
 /* file:24:34 */
 zig_bool const t6 = a1 != zig_as_u64(0);
 {
  if (t6) {
   goto zig_block_2;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2936), zig_as_u64(16)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_2:;
 zig_usize const t7 = t2 / a1;
 zig_usize const t8 = t2 % a1;
 zig_bool const t9 = t8 == zig_as_u64(0);
 {
  if (t9) {
   goto zig_block_3;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2937), zig_as_u64(33)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_3:;
 /* var:size_of_T */
 /* file:25:5 */
 zig_u32 t10;
 {
  switch (a2) {
   case 0: {
    t10 = zig_as_u32(0);
    goto zig_block_4;
   }
   case 1: {
    zig_u32 t11;
    {
     /* file:27:31 */
     zig_Q_u29 const t12 = math_cast__anon_2938(t7);
     zig_bool const t13 = t12.is_null != zig_true;
     if (t13) {
      zig_u32 const t14 = (t12).payload;
      t11 = t14;
      goto zig_block_5;
     } else {
      t11 = zig_as_u32(0);
      goto zig_block_5;
     }
    }
    zig_block_5:;
    t10 = t11;
    goto zig_block_4;
   }
   default: {
    builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2939), zig_as_u64(23)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
   }
  }
 }
 zig_block_4:;
 /* var:len_align */
 /* file:29:5 */
 /* file:29:24 */
 zig_S_mem_Allocator t15;
 t15 = a0;
 zig_S_mem_Allocator const * const t16 = (zig_S_mem_Allocator const * )&t15;
 zig_S_mem_Allocator const t17 = (*t16);
 /* file:29:41 */
 /* dbg func:rawAlloc */
 /* var:self */
 /* var:len */
 /* var:ptr_align */
 /* var:len_align */
 /* var:ret_addr */
 /* file:2:5 */
 zig_E__5b_5du8 t18;
 zig_S_mem_Allocator t19;
 t19 = t17;
 zig_S_mem_Allocator const * const t20 = (zig_S_mem_Allocator const * )&t19;
 zig_S_mem_Allocator_VTable const * const * const t21 = (zig_S_mem_Allocator_VTable const * const * )&t20->vtable;
 zig_S_mem_Allocator_VTable const * const t22 = (*t21);
 zig_F_fn_28_2aanyopaque_2c_20usize_2c_20u29_2c_20u29_2c_20usize_29_20error_7bOutOfMemory_7d_21_5b_5du8 const * const t23 = (zig_F_fn_28_2aanyopaque_2c_20usize_2c_20u29_2c_20u29_2c_20usize_29_20error_7bOutOfMemory_7d_21_5b_5du8 const * )&t22->alloc;
 zig_F_fn_28_2aanyopaque_2c_20usize_2c_20u29_2c_20u29_2c_20usize_29_20error_7bOutOfMemory_7d_21_5b_5du8 const t24 = (*t23);
 /* file:2:29 */
 zig_void * const t25 = t17.ptr;
 zig_E__5b_5du8 const t26 = t24(t25, t2, zig_as_u32(4), t10, a3);
 t18 = t26;
 /* file:2:5 */
 zig_E__5b_5du8 const t27 = t18;
 /* dbg func:allocAdvancedWithRetAddr__anon_2916 */
 if (t27.error){
  zig_u16 const t28 = t27.error;
  /* file:29:24 */
  zig_E__5b_5dscanner_Scanner const t29 = { .payload = {(zig_S_scanner_Scanner * )zig_as_u64(0xaaaaaaaaaaaaaaaa), zig_as_u64(0xaaaaaaaaaaaaaaaa)}, .error = t28 };
  return t29;
 }
 zig_M_u8 const t30 = t27.payload;
 /* var:byte_slice */
 /* file:30:5 */
 {
  switch (a2) {
   case 0: {
    /* file:31:25 */
    zig_usize const t31 = t30.len;
    zig_u64 t32;
    memcpy(&t32, &t31, sizeof(zig_u64 ));
    zig_u64 t33;
    memcpy(&t33, &t2, sizeof(zig_u64 ));
    zig_bool const t34 = t32 == t33;
    debug_assert(t34);
    goto zig_block_6;
   }
   case 1: {
    /* file:32:28 */
    zig_usize const t35 = t30.len;
    zig_u64 t36;
    memcpy(&t36, &t35, sizeof(zig_u64 ));
    zig_u64 t37;
    memcpy(&t37, &t2, sizeof(zig_u64 ));
    zig_bool const t38 = t36 >= t37;
    debug_assert(t38);
    goto zig_block_6;
   }
   default: {
    builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2940), zig_as_u64(23)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
   }
  }
 }
 zig_block_6:;
 /* file:35:5 */
 zig_u8 * const t39 = t30.ptr;
 zig_usize const t40 = t30.len;
 memset(t39, zig_as_u8(0xaa), t40);
 /* file:36:9 */
 /* file:38:9 */
 zig_u8 * const t41 = t30.ptr;
 zig_usize const t42 = (zig_usize )t41;
 zig_bool const t43 = t42 != zig_as_u64(0);
 {
  if (t43) {
   goto zig_block_7;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2941), zig_as_u64(30)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_7:;
 zig_usize const t44 = t42 & zig_as_u64(3);
 zig_bool const t45 = t44 == zig_as_u64(0);
 {
  if (t45) {
   goto zig_block_8;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2942), zig_as_u64(19)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_8:;
 zig_S_scanner_Scanner * t46;
 memcpy(&t46, &t42, sizeof(zig_S_scanner_Scanner * ));
 zig_S_scanner_Scanner * t47;
 t47 = t46;
 zig_S_scanner_Scanner * const * const t48 = (zig_S_scanner_Scanner * const * )&t47;
 zig_usize const t49 = t30.len;
 zig_usize const t50 = t49 / zig_as_u64(4);
 zig_usize const t51 = t49 % zig_as_u64(4);
 zig_bool const t52 = t51 == zig_as_u64(0);
 {
  if (t52) {
   goto zig_block_9;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2943), zig_as_u64(33)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_9:;
 zig_S_scanner_Scanner * const t53 = (*t48);
 zig_S_scanner_Scanner * const t54 = (zig_S_scanner_Scanner * )(((uintptr_t)t53) + (zig_as_u64(0)*sizeof(zig_S_scanner_Scanner )));
 zig_bool const t55 = zig_as_u64(0) <= t50;
 {
  if (t55) {
   goto zig_block_10;
  } else {
   zig_breakpoint();
   zig_unreachable();
  }
 }
 zig_block_10:;
 zig_M_scanner_Scanner const t56 = {(zig_S_scanner_Scanner * )t54, t50};
 zig_E__5b_5dscanner_Scanner const t57 = { .payload = t56, .error = zig_error__28no_20error_29 };
 /* file:38:9 */
 return t57;
}

static zig_A_u8_8 const * mem_asBytes__anon_2919(zig_S_scanner_Scanner * const * const a0) {
 /* file:2:5 */
 /* file:3:5 */
 /* file:3:32 */
 /* file:4:5 */
 /* file:4:49 */
 zig_usize const t0 = (zig_usize )a0;
 zig_usize const t1 = t0 & zig_as_u64(7);
 zig_bool const t2 = t1 == zig_as_u64(0);
 {
  if (t2) {
   goto zig_block_0;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_asBytes__anon_2919__anon_2945), zig_as_u64(19)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_0:;
 zig_S_scanner_Scanner * const * const t3 = (zig_S_scanner_Scanner * const * )a0;
 zig_A_u8_8 const * const t4 = (zig_A_u8_8 const * )t3;
 /* file:4:5 */
 return t4;
}
static zig_bool heap_CAllocator_supports_posix_memalign = zig_true;

static zig_usize math_max__anon_2925(zig_usize const a0) {
 /* file:2:5 */
 zig_usize t0;
 {
  /* file:2:16 */
  zig_u64 t1;
  memcpy(&t1, &a0, sizeof(zig_u64 ));
  zig_bool const t2 = t1 > zig_as_u64(8);
  if (t2) {
   t0 = a0;
   goto zig_block_0;
  } else {
   t0 = zig_as_u64(8);
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:2:5 */
 return t0;
}

static zig_usize mem_alignBackward(zig_usize const a0, zig_usize const a1) {
 /* file:2:5 */
 zig_usize t0;
 /* file:2:32 */
 zig_usize const t1 = mem_alignBackwardGeneric__anon_2946(a0, a1);
 t0 = t1;
 /* file:2:5 */
 return t0;
}

static zig_E_usize math_mul__anon_2934(zig_usize const a0, zig_usize const a1) {
 /* file:2:5 */
 zig_usize t0;
 memset(&t0, zig_as_u8(0xaa), sizeof(zig_usize ));
 /* var:answer */
 /* file:3:5 */
 zig_E_usize t1;
 {
  /* file:3:16 */
  zig_T_tuple_7busize_2c_20u1_7d t2;
  t2.field_1 = zig_mulo_u64(&t2.field_0, a0, a1, zig_as_u8(64));
  zig_usize const t3 = t2.field_0;
  t0 = t3;
  zig_u8 const t4 = t2.field_1;
  zig_bool const t5 = t4 != zig_as_u8(0);
  if (t5) {
   t1 = (zig_E_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .error = zig_error_Overflow };
   goto zig_block_0;
  } else {
   zig_usize const t6 = t0;
   zig_E_usize const t7 = { .payload = t6, .error = zig_error__28no_20error_29 };
   t1 = t7;
   goto zig_block_0;
  }
 }
 zig_block_0:;
 /* file:3:5 */
 return t1;
}

static zig_Q_u29 math_cast__anon_2938(zig_usize const a0) {
 /* file:2:5 */
 /* file:2:20 */
 /* file:3:5 */
 /* var:is_comptime */
 /* file:4:5 */
 /* file:4:20 */
 /* file:5:9 */
 /* file:5:31 */
 /* file:5:52 */
 /* file:5:71 */
 zig_u64 t0;
 memcpy(&t0, &a0, sizeof(zig_u64 ));
 zig_bool const t1 = t0 > zig_as_u64(536870911);
 if (t1) {
  /* file:6:9 */
  /* file:6:9 */
  return (zig_Q_u29 ){ .payload = zig_as_u32(0xaaaaaaa), .is_null = zig_true };
 } else {
  /* file:7:16 */
  /* file:7:38 */
  /* file:7:59 */
  /* file:10:9 */
  zig_usize const t2 = zig_subw_u64(zig_as_u64(536870911), a0, zig_as_u8(64));
  zig_bool const t3 = t2 <= zig_as_u64(536870911);
  {
   if (t3) {
    goto zig_block_0;
   } else {
    builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&math_cast__anon_2938__anon_2947), zig_as_u64(27)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
   }
  }
  zig_block_0:;
  zig_u32 const t4 = (zig_u32 )a0;
  zig_Q_u29 const t5 = { .payload = t4, .is_null = zig_false };
  /* file:10:9 */
  return t5;
 }
}

static zig_usize mem_alignBackwardGeneric__anon_2946(zig_usize const a0, zig_usize const a1) {
 /* file:2:5 */
 /* file:2:11 */
 zig_u8 const t0 = zig_popcount_u64(a1, zig_as_u8(64));
 zig_bool const t1 = t0 == zig_as_u8(1);
 debug_assert(t1);
 /* file:6:5 */
 zig_T_tuple_7busize_2c_20u1_7d t2;
 t2.field_1 = zig_subo_u64(&t2.field_0, a1, zig_as_u64(1), zig_as_u8(64));
 zig_u8 const t3 = t2.field_1;
 zig_bool const t4 = t3 == zig_as_u8(0);
 {
  if (t4) {
   goto zig_block_0;
  } else {
   builtin_default_panic((zig_L_u8 ){(zig_u8 const * )((zig_u8 const * )&mem_alignBackwardGeneric__anon_2946__anon_2948), zig_as_u64(16)}, ((zig_S_builtin_StackTrace * )NULL), (zig_Q_usize ){ .payload = zig_as_u64(0xaaaaaaaaaaaaaaaa), .is_null = zig_true });
  }
 }
 zig_block_0:;
 zig_usize const t5 = t2.field_0;
 zig_usize const t6 = ~t5;
 zig_usize const t7 = a0 & t6;
 /* file:6:5 */
 return t7;
}
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_create__anon_2382[zig_as_u64(24)] = {zig_as_u8(114),zig_as_u8(101),zig_as_u8(97),zig_as_u8(99),zig_as_u8(104),zig_as_u8(101),zig_as_u8(100),zig_as_u8(32),zig_as_u8(117),zig_as_u8(110),zig_as_u8(114),zig_as_u8(101),zig_as_u8(97),zig_as_u8(99),zig_as_u8(104),zig_as_u8(97),zig_as_u8(98),zig_as_u8(108),zig_as_u8(101),zig_as_u8(32),zig_as_u8(99),zig_as_u8(111),zig_as_u8(100),zig_as_u8(101)};
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_create__anon_2387[zig_as_u64(30)] = {zig_as_u8(99),zig_as_u8(97),zig_as_u8(115),zig_as_u8(116),zig_as_u8(32),zig_as_u8(99),zig_as_u8(97),zig_as_u8(117),zig_as_u8(115),zig_as_u8(101),zig_as_u8(115),zig_as_u8(32),zig_as_u8(112),zig_as_u8(111),zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(116),zig_as_u8(111),zig_as_u8(32),zig_as_u8(98),zig_as_u8(101),zig_as_u8(32),zig_as_u8(110),zig_as_u8(117),zig_as_u8(108),zig_as_u8(108)};
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_serialize__anon_2395[zig_as_u64(16)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(103),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(111),zig_as_u8(118),zig_as_u8(101),zig_as_u8(114),zig_as_u8(102),zig_as_u8(108),zig_as_u8(111),zig_as_u8(119)};
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_deserialize__anon_2492[zig_as_u64(25)] = {zig_as_u8(97),zig_as_u8(116),zig_as_u8(116),zig_as_u8(101),zig_as_u8(109),zig_as_u8(112),zig_as_u8(116),zig_as_u8(32),zig_as_u8(116),zig_as_u8(111),zig_as_u8(32),zig_as_u8(117),zig_as_u8(115),zig_as_u8(101),zig_as_u8(32),zig_as_u8(110),zig_as_u8(117),zig_as_u8(108),zig_as_u8(108),zig_as_u8(32),zig_as_u8(118),zig_as_u8(97),zig_as_u8(108),zig_as_u8(117),zig_as_u8(101)};
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_scan__anon_2661[zig_as_u64(27)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(103),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(99),zig_as_u8(97),zig_as_u8(115),zig_as_u8(116),zig_as_u8(32),zig_as_u8(116),zig_as_u8(114),zig_as_u8(117),zig_as_u8(110),zig_as_u8(99),zig_as_u8(97),zig_as_u8(116),zig_as_u8(101),zig_as_u8(100),zig_as_u8(32),zig_as_u8(98),zig_as_u8(105),zig_as_u8(116),zig_as_u8(115)};
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_scan__anon_2666[zig_as_u64(25)] = {zig_as_u8(97),zig_as_u8(116),zig_as_u8(116),zig_as_u8(101),zig_as_u8(109),zig_as_u8(112),zig_as_u8(116),zig_as_u8(32),zig_as_u8(116),zig_as_u8(111),zig_as_u8(32),zig_as_u8(117),zig_as_u8(115),zig_as_u8(101),zig_as_u8(32),zig_as_u8(110),zig_as_u8(117),zig_as_u8(108),zig_as_u8(108),zig_as_u8(32),zig_as_u8(118),zig_as_u8(97),zig_as_u8(108),zig_as_u8(117),zig_as_u8(101)};
static zig_u8 scanner_tree_sitter_zigrush2022_external_scanner_scan__anon_2667[zig_as_u64(16)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(103),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(111),zig_as_u8(118),zig_as_u8(101),zig_as_u8(114),zig_as_u8(102),zig_as_u8(108),zig_as_u8(111),zig_as_u8(119)};
static zig_u8 scanner_Scanner_fromVoidPointer__anon_2917[zig_as_u64(19)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(99),zig_as_u8(111),zig_as_u8(114),zig_as_u8(114),zig_as_u8(101),zig_as_u8(99),zig_as_u8(116),zig_as_u8(32),zig_as_u8(97),zig_as_u8(108),zig_as_u8(105),zig_as_u8(103),zig_as_u8(110),zig_as_u8(109),zig_as_u8(101),zig_as_u8(110),zig_as_u8(116)};
static zig_u8 mem_Allocator_destroy__anon_2391__anon_2918[zig_as_u64(30)] = {zig_as_u8(99),zig_as_u8(97),zig_as_u8(115),zig_as_u8(116),zig_as_u8(32),zig_as_u8(99),zig_as_u8(97),zig_as_u8(117),zig_as_u8(115),zig_as_u8(101),zig_as_u8(115),zig_as_u8(32),zig_as_u8(112),zig_as_u8(111),zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(116),zig_as_u8(111),zig_as_u8(32),zig_as_u8(98),zig_as_u8(101),zig_as_u8(32),zig_as_u8(110),zig_as_u8(117),zig_as_u8(108),zig_as_u8(108)};
static zig_u8 debug_assert__anon_2922[zig_as_u64(24)] = {zig_as_u8(114),zig_as_u8(101),zig_as_u8(97),zig_as_u8(99),zig_as_u8(104),zig_as_u8(101),zig_as_u8(100),zig_as_u8(32),zig_as_u8(117),zig_as_u8(110),zig_as_u8(114),zig_as_u8(101),zig_as_u8(97),zig_as_u8(99),zig_as_u8(104),zig_as_u8(97),zig_as_u8(98),zig_as_u8(108),zig_as_u8(101),zig_as_u8(32),zig_as_u8(99),zig_as_u8(111),zig_as_u8(100),zig_as_u8(101)};
static zig_u8 math_isPowerOfTwo__anon_2914__anon_2923[zig_as_u64(16)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(103),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(111),zig_as_u8(118),zig_as_u8(101),zig_as_u8(114),zig_as_u8(102),zig_as_u8(108),zig_as_u8(111),zig_as_u8(119)};
static zig_u8 heap_CAllocator_alignedAlloc__anon_2926[zig_as_u64(30)] = {zig_as_u8(99),zig_as_u8(97),zig_as_u8(115),zig_as_u8(116),zig_as_u8(32),zig_as_u8(99),zig_as_u8(97),zig_as_u8(117),zig_as_u8(115),zig_as_u8(101),zig_as_u8(115),zig_as_u8(32),zig_as_u8(112),zig_as_u8(111),zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(116),zig_as_u8(111),zig_as_u8(32),zig_as_u8(98),zig_as_u8(101),zig_as_u8(32),zig_as_u8(110),zig_as_u8(117),zig_as_u8(108),zig_as_u8(108)};
static zig_u8 heap_CAllocator_alignedAllocSize__anon_2927[zig_as_u64(30)] = {zig_as_u8(99),zig_as_u8(97),zig_as_u8(115),zig_as_u8(116),zig_as_u8(32),zig_as_u8(99),zig_as_u8(97),zig_as_u8(117),zig_as_u8(115),zig_as_u8(101),zig_as_u8(115),zig_as_u8(32),zig_as_u8(112),zig_as_u8(111),zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(116),zig_as_u8(111),zig_as_u8(32),zig_as_u8(98),zig_as_u8(101),zig_as_u8(32),zig_as_u8(110),zig_as_u8(117),zig_as_u8(108),zig_as_u8(108)};
static zig_u8 mem_alignBackwardAnyAlign__anon_2928[zig_as_u64(16)] = {zig_as_u8(100),zig_as_u8(105),zig_as_u8(118),zig_as_u8(105),zig_as_u8(115),zig_as_u8(105),zig_as_u8(111),zig_as_u8(110),zig_as_u8(32),zig_as_u8(98),zig_as_u8(121),zig_as_u8(32),zig_as_u8(122),zig_as_u8(101),zig_as_u8(114),zig_as_u8(111)};
static zig_u8 mem_alignBackwardAnyAlign__anon_2929[zig_as_u64(16)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(103),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(111),zig_as_u8(118),zig_as_u8(101),zig_as_u8(114),zig_as_u8(102),zig_as_u8(108),zig_as_u8(111),zig_as_u8(119)};
static zig_u8 heap_CAllocator_alignedFree__anon_2930[zig_as_u64(30)] = {zig_as_u8(99),zig_as_u8(97),zig_as_u8(115),zig_as_u8(116),zig_as_u8(32),zig_as_u8(99),zig_as_u8(97),zig_as_u8(117),zig_as_u8(115),zig_as_u8(101),zig_as_u8(115),zig_as_u8(32),zig_as_u8(112),zig_as_u8(111),zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(116),zig_as_u8(111),zig_as_u8(32),zig_as_u8(98),zig_as_u8(101),zig_as_u8(32),zig_as_u8(110),zig_as_u8(117),zig_as_u8(108),zig_as_u8(108)};
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2936[zig_as_u64(16)] = {zig_as_u8(100),zig_as_u8(105),zig_as_u8(118),zig_as_u8(105),zig_as_u8(115),zig_as_u8(105),zig_as_u8(111),zig_as_u8(110),zig_as_u8(32),zig_as_u8(98),zig_as_u8(121),zig_as_u8(32),zig_as_u8(122),zig_as_u8(101),zig_as_u8(114),zig_as_u8(111)};
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2937[zig_as_u64(33)] = {zig_as_u8(101),zig_as_u8(120),zig_as_u8(97),zig_as_u8(99),zig_as_u8(116),zig_as_u8(32),zig_as_u8(100),zig_as_u8(105),zig_as_u8(118),zig_as_u8(105),zig_as_u8(115),zig_as_u8(105),zig_as_u8(111),zig_as_u8(110),zig_as_u8(32),zig_as_u8(112),zig_as_u8(114),zig_as_u8(111),zig_as_u8(100),zig_as_u8(117),zig_as_u8(99),zig_as_u8(101),zig_as_u8(100),zig_as_u8(32),zig_as_u8(114),zig_as_u8(101),zig_as_u8(109),zig_as_u8(97),zig_as_u8(105),zig_as_u8(110),zig_as_u8(100),zig_as_u8(101),zig_as_u8(114)};
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2939[zig_as_u64(23)] = {zig_as_u8(115),zig_as_u8(119),zig_as_u8(105),zig_as_u8(116),zig_as_u8(99),zig_as_u8(104),zig_as_u8(32),zig_as_u8(111),zig_as_u8(110),zig_as_u8(32),zig_as_u8(99),zig_as_u8(111),zig_as_u8(114),zig_as_u8(114),zig_as_u8(117),zig_as_u8(112),zig_as_u8(116),zig_as_u8(32),zig_as_u8(118),zig_as_u8(97),zig_as_u8(108),zig_as_u8(117),zig_as_u8(101)};
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2940[zig_as_u64(23)] = {zig_as_u8(115),zig_as_u8(119),zig_as_u8(105),zig_as_u8(116),zig_as_u8(99),zig_as_u8(104),zig_as_u8(32),zig_as_u8(111),zig_as_u8(110),zig_as_u8(32),zig_as_u8(99),zig_as_u8(111),zig_as_u8(114),zig_as_u8(114),zig_as_u8(117),zig_as_u8(112),zig_as_u8(116),zig_as_u8(32),zig_as_u8(118),zig_as_u8(97),zig_as_u8(108),zig_as_u8(117),zig_as_u8(101)};
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2941[zig_as_u64(30)] = {zig_as_u8(99),zig_as_u8(97),zig_as_u8(115),zig_as_u8(116),zig_as_u8(32),zig_as_u8(99),zig_as_u8(97),zig_as_u8(117),zig_as_u8(115),zig_as_u8(101),zig_as_u8(115),zig_as_u8(32),zig_as_u8(112),zig_as_u8(111),zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(116),zig_as_u8(111),zig_as_u8(32),zig_as_u8(98),zig_as_u8(101),zig_as_u8(32),zig_as_u8(110),zig_as_u8(117),zig_as_u8(108),zig_as_u8(108)};
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2942[zig_as_u64(19)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(99),zig_as_u8(111),zig_as_u8(114),zig_as_u8(114),zig_as_u8(101),zig_as_u8(99),zig_as_u8(116),zig_as_u8(32),zig_as_u8(97),zig_as_u8(108),zig_as_u8(105),zig_as_u8(103),zig_as_u8(110),zig_as_u8(109),zig_as_u8(101),zig_as_u8(110),zig_as_u8(116)};
static zig_u8 mem_Allocator_allocAdvancedWithRetAddr__anon_2916__anon_2943[zig_as_u64(33)] = {zig_as_u8(101),zig_as_u8(120),zig_as_u8(97),zig_as_u8(99),zig_as_u8(116),zig_as_u8(32),zig_as_u8(100),zig_as_u8(105),zig_as_u8(118),zig_as_u8(105),zig_as_u8(115),zig_as_u8(105),zig_as_u8(111),zig_as_u8(110),zig_as_u8(32),zig_as_u8(112),zig_as_u8(114),zig_as_u8(111),zig_as_u8(100),zig_as_u8(117),zig_as_u8(99),zig_as_u8(101),zig_as_u8(100),zig_as_u8(32),zig_as_u8(114),zig_as_u8(101),zig_as_u8(109),zig_as_u8(97),zig_as_u8(105),zig_as_u8(110),zig_as_u8(100),zig_as_u8(101),zig_as_u8(114)};
static zig_u8 mem_asBytes__anon_2919__anon_2945[zig_as_u64(19)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(99),zig_as_u8(111),zig_as_u8(114),zig_as_u8(114),zig_as_u8(101),zig_as_u8(99),zig_as_u8(116),zig_as_u8(32),zig_as_u8(97),zig_as_u8(108),zig_as_u8(105),zig_as_u8(103),zig_as_u8(110),zig_as_u8(109),zig_as_u8(101),zig_as_u8(110),zig_as_u8(116)};
static zig_u8 math_cast__anon_2938__anon_2947[zig_as_u64(27)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(103),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(99),zig_as_u8(97),zig_as_u8(115),zig_as_u8(116),zig_as_u8(32),zig_as_u8(116),zig_as_u8(114),zig_as_u8(117),zig_as_u8(110),zig_as_u8(99),zig_as_u8(97),zig_as_u8(116),zig_as_u8(101),zig_as_u8(100),zig_as_u8(32),zig_as_u8(98),zig_as_u8(105),zig_as_u8(116),zig_as_u8(115)};
static zig_u8 mem_alignBackwardGeneric__anon_2946__anon_2948[zig_as_u64(16)] = {zig_as_u8(105),zig_as_u8(110),zig_as_u8(116),zig_as_u8(101),zig_as_u8(103),zig_as_u8(101),zig_as_u8(114),zig_as_u8(32),zig_as_u8(111),zig_as_u8(118),zig_as_u8(101),zig_as_u8(114),zig_as_u8(102),zig_as_u8(108),zig_as_u8(111),zig_as_u8(119)};
