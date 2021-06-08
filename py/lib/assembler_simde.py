from assembler import Assembler

class AssemblerSIMDe(Assembler):

    def __init__(self):
        Assembler.__init__(self)
        self.type = 'uint_fast32_t'
        self.const_type = 'const %s' % (self.type)

    def add_false(self):
        var  = 'c0'
        expr = '%s %s = 0;' % (self.const_type, var)

        return (var, expr)

    def add_true(self):
        var  = 'c1'
        expr = '%s %s = ~HEDLEY_STATIC_CAST(%s, 0);' % (self.const_type, var, self.type)

        return (var, expr)

    def add_and(self, var1, var2):
        var  = self.get_var()
        expr = '%s %s = %s & %s;' % (self.const_type, var, var1, var2)

        return (var, expr)

    def add_or(self, var1, var2):
        var  = self.get_var()
        expr = '%s %s = %s | %s;' % (self.const_type, var, var1, var2)

        return (var, expr)

    def add_xor(self, var1, var2):
        var  = self.get_var()
        expr = '%s %s = %s ^ %s;' % (self.const_type, var, var1, var2)

        return (var, expr)

    def add_negation(self, var1):
        var  = self.get_var()
        expr = '%s %s = ~%s;' % (self.const_type, var, var1)

        return (var, expr)

    def add_condition(self, cond, var1, var2):
        var  = self.get_var()
        expr = '%s %s = (%s & %s) | (~%s & %s);' % (self.const_type, var, cond, var1, cond, var2)

        return (var, expr)
