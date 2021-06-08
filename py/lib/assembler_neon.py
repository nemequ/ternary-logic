from assembler import Assembler

class AssemblerNEON(Assembler):

    def __init__(self):
        Assembler.__init__(self)
        self.type = 'simde_int32x4_t'
        self.const_type = 'const %s' % (self.type)

    def add_false(self):
        var  = 'c0'
        expr = '%s %s = simde_vdupq_n_s32(0);' % (self.const_type, var)

        return (var, expr)

    def add_true(self):
        var  = 'c1'
        expr = '%s %s = simde_vdupq_n_s32(-1);' % (self.const_type, var)

        return (var, expr)

    def add_and(self, var1, var2):
        var  = self.get_var()
        expr = '%s %s = simde_vandq_s32(%s, %s);' % (self.const_type, var, var1, var2)

        return (var, expr)

    def add_or(self, var1, var2):
        var  = self.get_var()
        expr = '%s %s = simde_vorrq_s32(%s, %s);' % (self.const_type, var, var1, var2)

        return (var, expr)

    def add_notor(self, var1, var2):
        var  = self.get_var()
        expr = '%s %s = simde_vornq_s32(%s, %s);' % (self.const_type, var, var2, var1)

        return (var, expr)

    def add_xor(self, var1, var2):
        var  = self.get_var()
        expr = '%s %s = simde_veorq_s32(%s, %s);' % (self.const_type, var, var1, var2)

        return (var, expr)

    def add_notand(self, var1, var2):
        var  = self.get_var()
        expr = '%s %s = simde_vbicq_s32(%s, %s);' % (self.const_type, var, var2, var1)

        return (var, expr)

    def add_condition(self, cond, var1, var2):
        var  = self.get_var()
        expr = '%s %s = simde_vbslq_s32(simde_vreinterpretq_u32_s32(%s), %s, %s);' % (self.const_type, var, cond, var1, var2)

        return (var, expr)

    def add_negation(self, var1):
        var  = self.get_var()
        expr = '%s %s = simde_vmvnq_s32(%s);' % (self.const_type, var, var1)

        return (var, expr)
