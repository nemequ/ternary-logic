SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x00_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t c0 = simde_vdupq_n_s32(0);
    return c0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x01_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x02_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, A);
    const simde_int32x4_t t1 = simde_vbicq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x03_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, A);
    const simde_int32x4_t t1 = simde_vmvnq_s32(t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x04_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x05_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(C, A);
    const simde_int32x4_t t1 = simde_vmvnq_s32(t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x06_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x07_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x08_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    const simde_int32x4_t t1 = simde_vandq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x09_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x0a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x0b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t0 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t1 = simde_vorrq_s32(t0, C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, A);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x0c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x0d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t0 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t1 = simde_vorrq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, A);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x0e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x0f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vmvnq_s32(A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x10_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x11_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(C, B);
    const simde_int32x4_t t1 = simde_vmvnq_s32(t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x12_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x13_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x14_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, B);
    const simde_int32x4_t t1 = simde_vbicq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x15_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    const simde_int32x4_t t1 = simde_vorrq_s32(C, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x16_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, t0);
    const simde_int32x4_t t2 = simde_veorq_s32(B, C);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, A);
    const simde_int32x4_t t4 = simde_vorrq_s32(t1, t3);
    return t4;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x17_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, A);
    const simde_int32x4_t t3 = simde_vornq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x18_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_vandq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x19_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(B, t1);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x1a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x1b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, A);
    const simde_int32x4_t t1 = simde_vmvnq_s32(B);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, C);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x1c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x1d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    const simde_int32x4_t t1 = simde_vmvnq_s32(C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, B);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x1e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x1f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x20_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t1 = simde_vandq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x21_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x22_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, B);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x23_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, A);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, B);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x24_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vandq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x25_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x26_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x27_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, B);
    const simde_int32x4_t t1 = simde_vmvnq_s32(A);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, C);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x28_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, A);
    const simde_int32x4_t t1 = simde_vandq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x29_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, A);
    const simde_int32x4_t t1 = simde_vandq_s32(C, t0);
    const simde_int32x4_t t2 = simde_vorrq_s32(B, A);
    const simde_int32x4_t t3 = simde_vmvnq_s32(t2);
    const simde_int32x4_t t4 = simde_vbicq_s32(t3, C);
    const simde_int32x4_t t5 = simde_vorrq_s32(t1, t4);
    return t5;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x2a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    const simde_int32x4_t t1 = simde_vbicq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x2b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    const simde_int32x4_t t1 = simde_vbicq_s32(C, t0);
    const simde_int32x4_t t2 = simde_vorrq_s32(B, A);
    const simde_int32x4_t t3 = simde_vmvnq_s32(t2);
    const simde_int32x4_t t4 = simde_vbicq_s32(t3, C);
    const simde_int32x4_t t5 = simde_vorrq_s32(t1, t4);
    return t5;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x2c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_vandq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x2d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vornq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x2e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, B);
    const simde_int32x4_t t2 = simde_veorq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x2f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, B);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x30_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x31_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t2 = simde_vornq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x32_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x33_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vmvnq_s32(B);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x34_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x35_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t1 = simde_vmvnq_s32(C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, A);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x36_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x37_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_vandq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x38_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_vandq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x39_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t0 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, t0);
    const simde_int32x4_t t2 = simde_veorq_s32(B, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x3a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t1 = simde_vbicq_s32(C, A);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x3b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(t0, A);
    const simde_int32x4_t t2 = simde_vornq_s32(t1, B);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x3c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x3d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_vornq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x3e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, A);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x3f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    const simde_int32x4_t t1 = simde_vmvnq_s32(t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x40_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t1 = simde_vandq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x41_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, A);
    const simde_int32x4_t t1 = simde_vorrq_s32(C, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x42_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vandq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x43_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x44_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x45_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, A);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, C);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x46_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x47_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t1 = simde_vmvnq_s32(A);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, B);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x48_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vandq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x49_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vandq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t3 = simde_vmvnq_s32(t2);
    const simde_int32x4_t t4 = simde_vbicq_s32(t3, B);
    const simde_int32x4_t t5 = simde_vorrq_s32(t1, t4);
    return t5;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x4a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_vandq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x4b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vornq_s32(C, B);
    const simde_int32x4_t t1 = simde_veorq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x4c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x4d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t3 = simde_vmvnq_s32(t2);
    const simde_int32x4_t t4 = simde_vbicq_s32(t3, B);
    const simde_int32x4_t t5 = simde_vorrq_s32(t1, t4);
    return t5;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x4e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, A);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x4f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x50_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x51_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t2 = simde_vornq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x52_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x53_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t1 = simde_vmvnq_s32(B);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, A);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x54_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, B);
    const simde_int32x4_t t1 = simde_vbicq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x55_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vmvnq_s32(C);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x56_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, A);
    const simde_int32x4_t t1 = simde_veorq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x57_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, A);
    const simde_int32x4_t t1 = simde_vandq_s32(C, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x58_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_vandq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x59_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t0 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, t0);
    const simde_int32x4_t t2 = simde_veorq_s32(C, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x5a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(C, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x5b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t1 = simde_vornq_s32(C, B);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, A);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x5c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, A);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x5d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x5e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x5f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(C, A);
    const simde_int32x4_t t1 = simde_vmvnq_s32(t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x60_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x61_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t3 = simde_vmvnq_s32(t2);
    const simde_int32x4_t t4 = simde_vbicq_s32(t3, A);
    const simde_int32x4_t t5 = simde_vorrq_s32(t1, t4);
    return t5;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x62_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vandq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x63_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t0 = simde_veorq_s32(A, c1);
    const simde_int32x4_t t1 = simde_vorrq_s32(t0, C);
    const simde_int32x4_t t2 = simde_veorq_s32(B, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x64_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vandq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x65_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t0 = simde_veorq_s32(A, c1);
    const simde_int32x4_t t1 = simde_vorrq_s32(t0, B);
    const simde_int32x4_t t2 = simde_veorq_s32(C, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x66_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(C, B);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x67_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vornq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x68_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vandq_s32(B, C);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, A);
    const simde_int32x4_t t4 = simde_vorrq_s32(t1, t3);
    return t4;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x69_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x6a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    const simde_int32x4_t t1 = simde_veorq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x6b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, A);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(A, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(B, C);
    const simde_int32x4_t t3 = simde_veorq_s32(t1, t2);
    const simde_int32x4_t t4 = simde_vorrq_s32(t0, t3);
    return t4;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x6c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x6d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(A, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(B, C);
    const simde_int32x4_t t3 = simde_veorq_s32(t1, t2);
    const simde_int32x4_t t4 = simde_vorrq_s32(t0, t3);
    return t4;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x6e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x6f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(A, c1);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x70_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x71_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vandq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vornq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x72_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, B);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x73_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x74_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x75_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x76_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x77_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(C, B);
    const simde_int32x4_t t1 = simde_vmvnq_s32(t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x78_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x79_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, C);
    const simde_int32x4_t t3 = simde_veorq_s32(t1, t2);
    const simde_int32x4_t t4 = simde_vorrq_s32(t0, t3);
    return t4;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x7a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x7b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x7c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x7d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x7e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x7f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_vandq_s32(t0, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t2 = simde_veorq_s32(t1, c1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x80_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x81_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x82_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, A);
    const simde_int32x4_t t1 = simde_vbicq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x83_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(A, c1);
    const simde_int32x4_t t2 = simde_vorrq_s32(t1, C);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x84_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x85_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_vorrq_s32(B, t1);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x86_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_veorq_s32(C, t1);
    const simde_int32x4_t t3 = simde_vandq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x87_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x88_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(C, B);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x89_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(A, c1);
    const simde_int32x4_t t2 = simde_vorrq_s32(t1, B);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x8a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t1 = simde_vbicq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x8b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_vmvnq_s32(A);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, B);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x8c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x8d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(C, B);
    const simde_int32x4_t t1 = simde_vmvnq_s32(A);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, C);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x8e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, A);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x8f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x90_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x91_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_vorrq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x92_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_veorq_s32(C, t1);
    const simde_int32x4_t t3 = simde_vandq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x93_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x94_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_veorq_s32(B, t1);
    const simde_int32x4_t t3 = simde_vandq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x95_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    const simde_int32x4_t t1 = simde_veorq_s32(C, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x96_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x97_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vandq_s32(B, C);
    const simde_int32x4_t t3 = simde_vmvnq_s32(t2);
    const simde_int32x4_t t4 = simde_vbicq_s32(t3, A);
    const simde_int32x4_t t5 = simde_vorrq_s32(t1, t4);
    return t5;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x98_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, B);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x99_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(C, B);
    const simde_int32x4_t t1 = simde_vmvnq_s32(t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x9a_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x9b_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, A);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(B, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x9c_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x9d_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(B, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x9e_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_veorq_s32(C, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0x9f_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa0_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(C, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa1_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_vorrq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa2_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    const simde_int32x4_t t1 = simde_vbicq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa3_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vmvnq_s32(B);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, A);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa4_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, B);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa5_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(C, A);
    const simde_int32x4_t t1 = simde_vmvnq_s32(t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa6_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    const simde_int32x4_t t1 = simde_veorq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa7_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa8_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, B);
    const simde_int32x4_t t1 = simde_vandq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xa9_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, A);
    const simde_int32x4_t t1 = simde_veorq_s32(C, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xaa_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    return C;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xab_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, A);
    const simde_int32x4_t t1 = simde_vornq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xac_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, A);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xad_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xae_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, A);
    const simde_int32x4_t t1 = simde_vorrq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xaf_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vornq_s32(C, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb0_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb1_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(C, A);
    const simde_int32x4_t t1 = simde_vmvnq_s32(B);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, C);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb2_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vandq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, B);
    const simde_int32x4_t t4 = simde_vorrq_s32(t1, t3);
    return t4;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb3_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb4_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb5_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb6_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_veorq_s32(C, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb7_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vandq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb8_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xb9_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t2 = simde_vornq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xba_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, B);
    const simde_int32x4_t t1 = simde_vorrq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xbb_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vornq_s32(C, B);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xbc_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, B);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xbd_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xbe_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, A);
    const simde_int32x4_t t1 = simde_vorrq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xbf_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    const simde_int32x4_t t1 = simde_vornq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc0_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc1_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_vorrq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vbicq_s32(t2, t0);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc2_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, B);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc3_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, A);
    const simde_int32x4_t t1 = simde_vmvnq_s32(t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc4_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, A);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc5_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_vmvnq_s32(C);
    const simde_int32x4_t t2 = simde_vbicq_s32(t1, A);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc6_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, A);
    const simde_int32x4_t t1 = simde_veorq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc7_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc8_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_vandq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xc9_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xca_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_vbicq_s32(C, A);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xcb_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xcc_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    return B;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xcd_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, C);
    const simde_int32x4_t t1 = simde_vornq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xce_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, A);
    const simde_int32x4_t t1 = simde_vorrq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xcf_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vornq_s32(B, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd0_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, B);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd1_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, B);
    const simde_int32x4_t t2 = simde_vornq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd2_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, B);
    const simde_int32x4_t t1 = simde_veorq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd3_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd4_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vbicq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd5_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd6_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_veorq_s32(B, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd7_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, A);
    const simde_int32x4_t t1 = simde_vandq_s32(C, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd8_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(C, B);
    const simde_int32x4_t t1 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xd9_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, B);
    const simde_int32x4_t t2 = simde_vornq_s32(t1, t0);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xda_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(A, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xdb_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xdc_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(A, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(t0, B);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xdd_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vornq_s32(B, C);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xde_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xdf_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vornq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe0_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vandq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe1_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(A, t0);
    const simde_int32x4_t t2 = simde_vmvnq_s32(t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe2_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    const simde_int32x4_t t1 = simde_vbicq_s32(C, B);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe3_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(B, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe4_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(C, A);
    const simde_int32x4_t t1 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe5_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    const simde_int32x4_t t1 = simde_veorq_s32(C, c1);
    const simde_int32x4_t t2 = simde_veorq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe6_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, B);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vorrq_s32(t0, t1);
    return t2;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe7_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vmvnq_s32(A);
    const simde_int32x4_t t2 = simde_veorq_s32(t1, C);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe8_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_vandq_s32(A, t1);
    const simde_int32x4_t t3 = simde_vorrq_s32(t0, t2);
    return t3;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xe9_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vmvnq_s32(A);
    const simde_int32x4_t t1 = simde_veorq_s32(B, C);
    const simde_int32x4_t t2 = simde_veorq_s32(t0, t1);
    const simde_int32x4_t t3 = simde_vandq_s32(A, B);
    const simde_int32x4_t t4 = simde_vorrq_s32(t2, t3);
    return t4;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xea_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, A);
    const simde_int32x4_t t1 = simde_vorrq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xeb_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, A);
    const simde_int32x4_t t1 = simde_vornq_s32(C, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xec_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(A, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xed_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(A, C);
    const simde_int32x4_t t1 = simde_vornq_s32(B, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xee_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(C, B);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xef_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf0_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    return A;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf1_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vornq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf2_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(C, B);
    const simde_int32x4_t t1 = simde_vorrq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf3_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vornq_s32(A, B);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf4_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vbicq_s32(B, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(t0, A);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf5_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vornq_s32(A, C);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf6_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf7_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_vornq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf8_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vandq_s32(B, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xf9_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_veorq_s32(B, C);
    const simde_int32x4_t t1 = simde_vornq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xfa_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(C, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xfb_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vornq_s32(C, B);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xfc_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, A);
    return t0;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xfd_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(A, B);
    const simde_int32x4_t t1 = simde_vornq_s32(t0, C);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xfe_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t t0 = simde_vorrq_s32(B, C);
    const simde_int32x4_t t1 = simde_vorrq_s32(A, t0);
    return t1;
}

SIMDE_FUNCTION_ATTRIBUTES
simde_int32x4_t
simde_x_ternarylogic_0xff_impl_(simde_int32x4_t A, simde_int32x4_t B, simde_int32x4_t C) {
    const simde_int32x4_t c1 = simde_vdupq_n_s32(-1);
    return c1;
}
