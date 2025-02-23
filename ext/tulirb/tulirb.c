#include "tulirb.h"

#ifdef TULIRB_SANITIZE
#define TULIRB_MALLOC(size) malloc(size)
#define TULIRB_FREE(ptr) free(ptr)
#else
#define TULIRB_MALLOC(size) xmalloc(size)
#define TULIRB_FREE(ptr) xfree(ptr)
#endif

static inline void xfree_ptr_arr(TI_REAL **, size_t);

static inline VALUE ti_wrapper(VALUE inputs, VALUE opts, const char *indicator_name)
{
  Check_Type(inputs, T_ARRAY);
  Check_Type(opts, T_ARRAY);
  const ti_indicator_info *indicator = ti_find_indicator(indicator_name);

  if (RARRAY_LEN(inputs) != indicator->inputs)
  {
    rb_raise(rb_eArgError, "Invalid inputs size, expected: %i inputs", indicator->inputs);
  }

  if (RARRAY_LEN(opts) != indicator->options)
  {
    rb_raise(rb_eArgError, "Invalid options size, expected: %i options", indicator->options);
  }

  TI_REAL *options = (TI_REAL *)TULIRB_MALLOC(sizeof(TI_REAL[RARRAY_LEN(opts)]));

  for (int i = 0; i < RARRAY_LEN(opts); i++)
    options[i] = NUM2DBL(rb_ary_entry(opts, i));

  const int start = indicator->start(options);

  const int size = RARRAY_LEN(rb_ary_entry(inputs, 0));
  const int output_length = size - start;

  if (output_length < 0)
    return Qnil;

  TI_REAL **c_inputs = TULIRB_MALLOC(indicator->inputs * sizeof(TI_REAL *));
  for (int i = 0; i < indicator->inputs; i++)
  {
    TI_REAL *c_entry = TULIRB_MALLOC(sizeof(TI_REAL[size]));
    VALUE entry = rb_ary_entry(inputs, i);
    for (int j = 0; j < size; j++)
    {
      c_entry[j] = NUM2DBL(rb_ary_entry(entry, j));
    }
    c_inputs[i] = c_entry;
  }

  TI_REAL **outputs = TULIRB_MALLOC(indicator->outputs * sizeof(TI_REAL *));
  for (int i = 0; i < indicator->outputs; i++)
    outputs[i] = TULIRB_MALLOC(sizeof(TI_REAL[output_length]));

  int error = indicator->indicator(size, (const TI_REAL *const *)c_inputs, options, outputs);

  xfree_ptr_arr(c_inputs, indicator->inputs);
  TULIRB_FREE(options);

  if (error == TI_INVALID_OPTION)
  {
    xfree_ptr_arr(outputs, indicator->outputs);
    rb_raise(rb_eArgError, "The combination of option values is invalid");
  }

  VALUE ret = rb_ary_new_capa(indicator->outputs);
  for (int i = 0; i < indicator->outputs; i++)
  {
    VALUE output = rb_ary_new_capa(output_length);
    for (int j = 0; j < output_length; j++)
    {
      rb_ary_push(output, DBL2NUM(outputs[i][j]));
    }
    rb_ary_push(ret, output);
  }

  xfree_ptr_arr(outputs, indicator->outputs);
  return ret;
}

static inline void xfree_ptr_arr(TI_REAL **ptr, size_t size)
{
  for (size_t i = 0; i < size; i++)
    TULIRB_FREE(ptr[i]);
  TULIRB_FREE(ptr);
}

// Alphabetical order

static VALUE rb_tulip_abs(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "abs");
}

static VALUE rb_tulip_acos(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "acos");
}

static VALUE rb_tulip_ad(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "ad");
}

static VALUE rb_tulip_add(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "add");
}

static VALUE rb_tulip_adosc(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "adosc");
}

static VALUE rb_tulip_adx(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "adx");
}

static VALUE rb_tulip_adxr(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "adxr");
}

static VALUE rb_tulip_ao(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "ao");
}

static VALUE rb_tulip_apo(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "apo");
}

static VALUE rb_tulip_aroon(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "aroon");
}

static VALUE rb_tulip_aroonosc(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "aroonosc");
}

static VALUE rb_tulip_asin(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "asin");
}

static VALUE rb_tulip_atan(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "atan");
}

static VALUE rb_tulip_atr(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "atr");
}

static VALUE rb_tulip_avgprice(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "avgprice");
}

static VALUE rb_tulip_bbands(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "bbands");
}

static VALUE rb_tulip_bop(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "bop");
}

static VALUE rb_tulip_cci(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "cci");
}

static VALUE rb_tulip_ceil(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "ceil");
}

static VALUE rb_tulip_cmo(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "cmo");
}

static VALUE rb_tulip_cos(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "cos");
}

static VALUE rb_tulip_cosh(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "cosh");
}

static VALUE rb_tulip_crossany(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "crossany");
}

static VALUE rb_tulip_crossover(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "crossover");
}

static VALUE rb_tulip_cvi(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "cvi");
}

static VALUE rb_tulip_decay(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "decay");
}

static VALUE rb_tulip_dema(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "dema");
}

static VALUE rb_tulip_di(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "di");
}

static VALUE rb_tulip_div(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "div");
}

static VALUE rb_tulip_dm(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "dm");
}

static VALUE rb_tulip_dpo(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "dpo");
}

static VALUE rb_tulip_dx(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "dx");
}

static VALUE rb_tulip_edecay(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "edecay");
}

static VALUE rb_tulip_ema(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "ema");
}

static VALUE rb_tulip_emv(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "emv");
}

static VALUE rb_tulip_exp(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "exp");
}

static VALUE rb_tulip_fisher(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "fisher");
}

static VALUE rb_tulip_floor(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "floor");
}

static VALUE rb_tulip_fosc(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "fosc");
}

static VALUE rb_tulip_hma(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "hma");
}

static VALUE rb_tulip_kama(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "kama");
}

static VALUE rb_tulip_kvo(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "kvo");
}

static VALUE rb_tulip_lag(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "lag");
}

static VALUE rb_tulip_linreg(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "linreg");
}

static VALUE rb_tulip_linregintercept(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "linregintercept");
}

static VALUE rb_tulip_linregslope(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "linregslope");
}

static VALUE rb_tulip_ln(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "ln");
}

static VALUE rb_tulip_log10(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "log10");
}

static VALUE rb_tulip_macd(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "macd");
}

static VALUE rb_tulip_marketfi(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "marketfi");
}

static VALUE rb_tulip_mass(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "mass");
}

static VALUE rb_tulip_max(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "max");
}

static VALUE rb_tulip_md(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "md");
}

static VALUE rb_tulip_medprice(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "medprice");
}

static VALUE rb_tulip_mfi(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "mfi");
}

static VALUE rb_tulip_min(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "min");
}

static VALUE rb_tulip_mom(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "mom");
}

static VALUE rb_tulip_msw(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "msw");
}

static VALUE rb_tulip_mul(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "mul");
}

static VALUE rb_tulip_natr(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "natr");
}

static VALUE rb_tulip_nvi(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "nvi");
}

static VALUE rb_tulip_obv(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "obv");
}

static VALUE rb_tulip_ppo(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "ppo");
}

static VALUE rb_tulip_psar(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "psar");
}

static VALUE rb_tulip_pvi(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "pvi");
}

static VALUE rb_tulip_qstick(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "qstick");
}

static VALUE rb_tulip_roc(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "roc");
}

static VALUE rb_tulip_rocr(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "rocr");
}

static VALUE rb_tulip_round(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "round");
}

static VALUE rb_tulip_rsi(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "rsi");
}

static VALUE rb_tulip_sin(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "sin");
}

static VALUE rb_tulip_sinh(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "sinh");
}

static VALUE rb_tulip_sma(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "sma");
}

static VALUE rb_tulip_sqrt(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "sqrt");
}

static VALUE rb_tulip_stddev(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "stddev");
}

static VALUE rb_tulip_stderr(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "stderr");
}

static VALUE rb_tulip_stoch(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "stoch");
}

static VALUE rb_tulip_stochrsi(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "stochrsi");
}

static VALUE rb_tulip_sub(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "sub");
}

static VALUE rb_tulip_sum(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "sum");
}

static VALUE rb_tulip_tan(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "tan");
}

static VALUE rb_tulip_tanh(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "tanh");
}

static VALUE rb_tulip_tema(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "tema");
}

static VALUE rb_tulip_todeg(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "todeg");
}

static VALUE rb_tulip_torad(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "torad");
}

static VALUE rb_tulip_tr(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "tr");
}

static VALUE rb_tulip_trima(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "trima");
}

static VALUE rb_tulip_trix(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "trix");
}

static VALUE rb_tulip_trunc(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "trunc");
}

static VALUE rb_tulip_tsf(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "tsf");
}

static VALUE rb_tulip_typprice(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "typprice");
}

static VALUE rb_tulip_ultosc(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "ultosc");
}

static VALUE rb_tulip_var(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "var");
}

static VALUE rb_tulip_vhf(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "vhf");
}

static VALUE rb_tulip_vidya(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "vidya");
}

static VALUE rb_tulip_volatility(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "volatility");
}

static VALUE rb_tulip_vosc(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "vosc");
}

static VALUE rb_tulip_vwma(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "vwma");
}

static VALUE rb_tulip_wad(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "wad");
}

static VALUE rb_tulip_wcprice(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "wcprice");
}

static VALUE rb_tulip_wilders(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "wilders");
}

static VALUE rb_tulip_willr(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "willr");
}

static VALUE rb_tulip_wma(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "wma");
}

static VALUE rb_tulip_zlema(VALUE self, VALUE inputs, VALUE opts)
{
  return ti_wrapper(inputs, opts, "zlema");
}

static inline VALUE parameterize(char *str)
{
  return rb_funcall(rb_str_new2(str), rb_intern("gsub"), 2, rb_str_new2(" "), rb_str_new2("_"));
}

static inline VALUE rb_indicators_info(void)
{
  VALUE ret = rb_hash_new();
  for (size_t i = 0; i < TI_INDICATOR_COUNT; i++)
  {
    VALUE indicators_hash = rb_hash_new();
    const ti_indicator_info indicator = ti_indicators[i];
    VALUE opts_ary = rb_ary_new();
    VALUE input_names_ary = rb_ary_new();

    rb_hash_aset(indicators_hash, ID2SYM(rb_intern("full_name")), rb_str_new2(indicator.full_name));
    rb_hash_aset(indicators_hash, ID2SYM(rb_intern("inputs")), INT2NUM(indicator.inputs));
    rb_hash_aset(indicators_hash, ID2SYM(rb_intern("outputs")), INT2NUM(indicator.outputs));
    rb_hash_aset(indicators_hash, ID2SYM(rb_intern("options")), opts_ary);
    rb_hash_aset(indicators_hash, ID2SYM(rb_intern("input_names")), input_names_ary);
    for (int i = 0; i < indicator.options; i++)
    {
      rb_ary_push(opts_ary, parameterize(indicator.option_names[i]));
    };
    for (int i = 0; i < indicator.inputs; i++)
    {
      rb_ary_push(input_names_ary, parameterize(indicator.input_names[i]));
    };
    rb_hash_aset(ret, ID2SYM(rb_intern(indicator.name)), indicators_hash);
  }
  return rb_obj_freeze(ret);
};

void Init_tulirb(void)
{
  VALUE rb_mTulirb;
  VALUE rb_mTulirbExt;

  rb_mTulirb = rb_define_module("Tulirb");
  rb_define_const(rb_mTulirb, "INDICATORS_INFO", rb_indicators_info());
  rb_mTulirbExt = rb_define_module_under(rb_mTulirb, "Ext");

  rb_define_module_function(rb_mTulirbExt, "abs", rb_tulip_abs, 2);
  rb_define_module_function(rb_mTulirbExt, "acos", rb_tulip_acos, 2);
  rb_define_module_function(rb_mTulirbExt, "ad", rb_tulip_ad, 2);
  rb_define_module_function(rb_mTulirbExt, "add", rb_tulip_add, 2);
  rb_define_module_function(rb_mTulirbExt, "adosc", rb_tulip_adosc, 2);
  rb_define_module_function(rb_mTulirbExt, "adx", rb_tulip_adx, 2);
  rb_define_module_function(rb_mTulirbExt, "adxr", rb_tulip_adxr, 2);
  rb_define_module_function(rb_mTulirbExt, "ao", rb_tulip_ao, 2);
  rb_define_module_function(rb_mTulirbExt, "apo", rb_tulip_apo, 2);
  rb_define_module_function(rb_mTulirbExt, "aroon", rb_tulip_aroon, 2);
  rb_define_module_function(rb_mTulirbExt, "aroonosc", rb_tulip_aroonosc, 2);
  rb_define_module_function(rb_mTulirbExt, "asin", rb_tulip_asin, 2);
  rb_define_module_function(rb_mTulirbExt, "atan", rb_tulip_atan, 2);
  rb_define_module_function(rb_mTulirbExt, "atr", rb_tulip_atr, 2);
  rb_define_module_function(rb_mTulirbExt, "avgprice", rb_tulip_avgprice, 2);
  rb_define_module_function(rb_mTulirbExt, "bbands", rb_tulip_bbands, 2);
  rb_define_module_function(rb_mTulirbExt, "bop", rb_tulip_bop, 2);
  rb_define_module_function(rb_mTulirbExt, "cci", rb_tulip_cci, 2);
  rb_define_module_function(rb_mTulirbExt, "ceil", rb_tulip_ceil, 2);
  rb_define_module_function(rb_mTulirbExt, "cmo", rb_tulip_cmo, 2);
  rb_define_module_function(rb_mTulirbExt, "cos", rb_tulip_cos, 2);
  rb_define_module_function(rb_mTulirbExt, "cosh", rb_tulip_cosh, 2);
  rb_define_module_function(rb_mTulirbExt, "crossany", rb_tulip_crossany, 2);
  rb_define_module_function(rb_mTulirbExt, "crossover", rb_tulip_crossover, 2);
  rb_define_module_function(rb_mTulirbExt, "cvi", rb_tulip_cvi, 2);
  rb_define_module_function(rb_mTulirbExt, "decay", rb_tulip_decay, 2);
  rb_define_module_function(rb_mTulirbExt, "dema", rb_tulip_dema, 2);
  rb_define_module_function(rb_mTulirbExt, "di", rb_tulip_di, 2);
  rb_define_module_function(rb_mTulirbExt, "div", rb_tulip_div, 2);
  rb_define_module_function(rb_mTulirbExt, "dm", rb_tulip_dm, 2);
  rb_define_module_function(rb_mTulirbExt, "dpo", rb_tulip_dpo, 2);
  rb_define_module_function(rb_mTulirbExt, "dx", rb_tulip_dx, 2);
  rb_define_module_function(rb_mTulirbExt, "edecay", rb_tulip_edecay, 2);
  rb_define_module_function(rb_mTulirbExt, "ema", rb_tulip_ema, 2);
  rb_define_module_function(rb_mTulirbExt, "emv", rb_tulip_emv, 2);
  rb_define_module_function(rb_mTulirbExt, "exp", rb_tulip_exp, 2);
  rb_define_module_function(rb_mTulirbExt, "fisher", rb_tulip_fisher, 2);
  rb_define_module_function(rb_mTulirbExt, "floor", rb_tulip_floor, 2);
  rb_define_module_function(rb_mTulirbExt, "fosc", rb_tulip_fosc, 2);
  rb_define_module_function(rb_mTulirbExt, "hma", rb_tulip_hma, 2);
  rb_define_module_function(rb_mTulirbExt, "kama", rb_tulip_kama, 2);
  rb_define_module_function(rb_mTulirbExt, "kvo", rb_tulip_kvo, 2);
  rb_define_module_function(rb_mTulirbExt, "lag", rb_tulip_lag, 2);
  rb_define_module_function(rb_mTulirbExt, "linreg", rb_tulip_linreg, 2);
  rb_define_module_function(rb_mTulirbExt, "linregintercept", rb_tulip_linregintercept, 2);
  rb_define_module_function(rb_mTulirbExt, "linregslope", rb_tulip_linregslope, 2);
  rb_define_module_function(rb_mTulirbExt, "ln", rb_tulip_ln, 2);
  rb_define_module_function(rb_mTulirbExt, "log10", rb_tulip_log10, 2);
  rb_define_module_function(rb_mTulirbExt, "macd", rb_tulip_macd, 2);
  rb_define_module_function(rb_mTulirbExt, "marketfi", rb_tulip_marketfi, 2);
  rb_define_module_function(rb_mTulirbExt, "mass", rb_tulip_mass, 2);
  rb_define_module_function(rb_mTulirbExt, "max", rb_tulip_max, 2);
  rb_define_module_function(rb_mTulirbExt, "md", rb_tulip_md, 2);
  rb_define_module_function(rb_mTulirbExt, "medprice", rb_tulip_medprice, 2);
  rb_define_module_function(rb_mTulirbExt, "mfi", rb_tulip_mfi, 2);
  rb_define_module_function(rb_mTulirbExt, "min", rb_tulip_min, 2);
  rb_define_module_function(rb_mTulirbExt, "mom", rb_tulip_mom, 2);
  rb_define_module_function(rb_mTulirbExt, "msw", rb_tulip_msw, 2);
  rb_define_module_function(rb_mTulirbExt, "mul", rb_tulip_mul, 2);
  rb_define_module_function(rb_mTulirbExt, "natr", rb_tulip_natr, 2);
  rb_define_module_function(rb_mTulirbExt, "nvi", rb_tulip_nvi, 2);
  rb_define_module_function(rb_mTulirbExt, "obv", rb_tulip_obv, 2);
  rb_define_module_function(rb_mTulirbExt, "ppo", rb_tulip_ppo, 2);
  rb_define_module_function(rb_mTulirbExt, "psar", rb_tulip_psar, 2);
  rb_define_module_function(rb_mTulirbExt, "pvi", rb_tulip_pvi, 2);
  rb_define_module_function(rb_mTulirbExt, "qstick", rb_tulip_qstick, 2);
  rb_define_module_function(rb_mTulirbExt, "roc", rb_tulip_roc, 2);
  rb_define_module_function(rb_mTulirbExt, "rocr", rb_tulip_rocr, 2);
  rb_define_module_function(rb_mTulirbExt, "round", rb_tulip_round, 2);
  rb_define_module_function(rb_mTulirbExt, "rsi", rb_tulip_rsi, 2);
  rb_define_module_function(rb_mTulirbExt, "sin", rb_tulip_sin, 2);
  rb_define_module_function(rb_mTulirbExt, "sinh", rb_tulip_sinh, 2);
  rb_define_module_function(rb_mTulirbExt, "sma", rb_tulip_sma, 2);
  rb_define_module_function(rb_mTulirbExt, "sqrt", rb_tulip_sqrt, 2);
  rb_define_module_function(rb_mTulirbExt, "stddev", rb_tulip_stddev, 2);
  rb_define_module_function(rb_mTulirbExt, "stderr", rb_tulip_stderr, 2);
  rb_define_module_function(rb_mTulirbExt, "stoch", rb_tulip_stoch, 2);
  rb_define_module_function(rb_mTulirbExt, "stochrsi", rb_tulip_stochrsi, 2);
  rb_define_module_function(rb_mTulirbExt, "sub", rb_tulip_sub, 2);
  rb_define_module_function(rb_mTulirbExt, "sum", rb_tulip_sum, 2);
  rb_define_module_function(rb_mTulirbExt, "tan", rb_tulip_tan, 2);
  rb_define_module_function(rb_mTulirbExt, "tanh", rb_tulip_tanh, 2);
  rb_define_module_function(rb_mTulirbExt, "tema", rb_tulip_tema, 2);
  rb_define_module_function(rb_mTulirbExt, "todeg", rb_tulip_todeg, 2);
  rb_define_module_function(rb_mTulirbExt, "torad", rb_tulip_torad, 2);
  rb_define_module_function(rb_mTulirbExt, "tr", rb_tulip_tr, 2);
  rb_define_module_function(rb_mTulirbExt, "trima", rb_tulip_trima, 2);
  rb_define_module_function(rb_mTulirbExt, "trix", rb_tulip_trix, 2);
  rb_define_module_function(rb_mTulirbExt, "trunc", rb_tulip_trunc, 2);
  rb_define_module_function(rb_mTulirbExt, "tsf", rb_tulip_tsf, 2);
  rb_define_module_function(rb_mTulirbExt, "typprice", rb_tulip_typprice, 2);
  rb_define_module_function(rb_mTulirbExt, "ultosc", rb_tulip_ultosc, 2);
  rb_define_module_function(rb_mTulirbExt, "var", rb_tulip_var, 2);
  rb_define_module_function(rb_mTulirbExt, "vhf", rb_tulip_vhf, 2);
  rb_define_module_function(rb_mTulirbExt, "vidya", rb_tulip_vidya, 2);
  rb_define_module_function(rb_mTulirbExt, "volatility", rb_tulip_volatility, 2);
  rb_define_module_function(rb_mTulirbExt, "vosc", rb_tulip_vosc, 2);
  rb_define_module_function(rb_mTulirbExt, "vwma", rb_tulip_vwma, 2);
  rb_define_module_function(rb_mTulirbExt, "wad", rb_tulip_wad, 2);
  rb_define_module_function(rb_mTulirbExt, "wcprice", rb_tulip_wcprice, 2);
  rb_define_module_function(rb_mTulirbExt, "wilders", rb_tulip_wilders, 2);
  rb_define_module_function(rb_mTulirbExt, "willr", rb_tulip_willr, 2);
  rb_define_module_function(rb_mTulirbExt, "wma", rb_tulip_wma, 2);
  rb_define_module_function(rb_mTulirbExt, "zlema", rb_tulip_zlema, 2);
}
