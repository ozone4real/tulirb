#ifndef TULIRB_H
#define TULIRB_H 1

#include "ruby.h"

#endif /* TULIRB_H */

#define TI_REAL double

#define TI_INDICATOR_COUNT 104 /* Total number of indicators. */

#define TI_OKAY 0
#define TI_INVALID_OPTION 1

#define TI_TYPE_OVERLAY 1     /* These have roughly the same range as the input data. */
#define TI_TYPE_INDICATOR 2   /* Everything else (e.g. oscillators). */
#define TI_TYPE_MATH 3        /* These aren't so good for plotting, but are useful with formulas. */
#define TI_TYPE_SIMPLE 4      /* These apply a simple operator (e.g. addition, sin, sqrt). */
#define TI_TYPE_COMPARATIVE 5 /* These are designed to take inputs from different securities. i.e. compare stock A to stock B.*/

#define TI_MAXINDPARAMS 10 /* No indicator will use more than this many inputs, options, or outputs. */

typedef int (*ti_indicator_start_function)(TI_REAL const *options);
typedef int (*ti_indicator_function)(int size,
                                     TI_REAL const *const *inputs,
                                     TI_REAL const *options,
                                     TI_REAL *const *outputs);

typedef struct ti_indicator_info
{
  char *name;
  char *full_name;
  ti_indicator_start_function start;
  ti_indicator_function indicator;
  int type, inputs, options, outputs;
  char *input_names[TI_MAXINDPARAMS];
  char *option_names[TI_MAXINDPARAMS];
  char *output_names[TI_MAXINDPARAMS];
} ti_indicator_info;

/*Complete array of all indicators. Last element is 0,0,0,0...*/
extern ti_indicator_info ti_indicators[];

/*
 *
 *
 *
 *
 *
 *        All indicators below, sorted alphabetically.
 *
 *
 *
 *
 *
 */

/* Vector Absolute Value */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: abs */
int ti_abs_start(TI_REAL const *options);
int ti_abs(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Arccosine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: acos */
int ti_acos_start(TI_REAL const *options);
int ti_acos(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Accumulation/Distribution Line */
/* Type: indicator */
/* Input arrays: 4    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close, volume */
/* Options: none */
/* Outputs: ad */
int ti_ad_start(TI_REAL const *options);
int ti_ad(int size,
          TI_REAL const *const *inputs,
          TI_REAL const *options,
          TI_REAL *const *outputs);

/* Vector Addition */
/* Type: simple */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: add */
int ti_add_start(TI_REAL const *options);
int ti_add(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Accumulation/Distribution Oscillator */
/* Type: indicator */
/* Input arrays: 4    Options: 2    Output arrays: 1 */
/* Inputs: high, low, close, volume */
/* Options: short period, long period */
/* Outputs: adosc */
int ti_adosc_start(TI_REAL const *options);
int ti_adosc(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Average Directional Movement Index */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: dx */
int ti_adx_start(TI_REAL const *options);
int ti_adx(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Average Directional Movement Rating */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: dx */
int ti_adxr_start(TI_REAL const *options);
int ti_adxr(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Awesome Oscillator */
/* Type: indicator */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: high, low */
/* Options: none */
/* Outputs: ao */
int ti_ao_start(TI_REAL const *options);
int ti_ao(int size,
          TI_REAL const *const *inputs,
          TI_REAL const *options,
          TI_REAL *const *outputs);

/* Absolute Price Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 2    Output arrays: 1 */
/* Inputs: real */
/* Options: short period, long period */
/* Outputs: apo */
int ti_apo_start(TI_REAL const *options);
int ti_apo(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Aroon */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 2 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: aroon_down, aroon_up */
int ti_aroon_start(TI_REAL const *options);
int ti_aroon(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Aroon Oscillator */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: aroonosc */
int ti_aroonosc_start(TI_REAL const *options);
int ti_aroonosc(int size,
                TI_REAL const *const *inputs,
                TI_REAL const *options,
                TI_REAL *const *outputs);

/* Vector Arcsine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: asin */
int ti_asin_start(TI_REAL const *options);
int ti_asin(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Vector Arctangent */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: atan */
int ti_atan_start(TI_REAL const *options);
int ti_atan(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Average True Range */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: atr */
int ti_atr_start(TI_REAL const *options);
int ti_atr(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Average Price */
/* Type: overlay */
/* Input arrays: 4    Options: 0    Output arrays: 1 */
/* Inputs: open, high, low, close */
/* Options: none */
/* Outputs: avgprice */
int ti_avgprice_start(TI_REAL const *options);
int ti_avgprice(int size,
                TI_REAL const *const *inputs,
                TI_REAL const *options,
                TI_REAL *const *outputs);

/* Bollinger Bands */
/* Type: overlay */
/* Input arrays: 1    Options: 2    Output arrays: 3 */
/* Inputs: real */
/* Options: period, stddev */
/* Outputs: bbands_lower, bbands_middle, bbands_upper */
int ti_bbands_start(TI_REAL const *options);
int ti_bbands(int size,
              TI_REAL const *const *inputs,
              TI_REAL const *options,
              TI_REAL *const *outputs);

/* Balance of Power */
/* Type: indicator */
/* Input arrays: 4    Options: 0    Output arrays: 1 */
/* Inputs: open, high, low, close */
/* Options: none */
/* Outputs: bop */
int ti_bop_start(TI_REAL const *options);
int ti_bop(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Commodity Channel Index */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: cci */
int ti_cci_start(TI_REAL const *options);
int ti_cci(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Ceiling */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: ceil */
int ti_ceil_start(TI_REAL const *options);
int ti_ceil(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Chande Momentum Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: cmo */
int ti_cmo_start(TI_REAL const *options);
int ti_cmo(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Cosine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: cos */
int ti_cos_start(TI_REAL const *options);
int ti_cos(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Hyperbolic Cosine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: cosh */
int ti_cosh_start(TI_REAL const *options);
int ti_cosh(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Crossany */
/* Type: math */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: crossany */
int ti_crossany_start(TI_REAL const *options);
int ti_crossany(int size,
                TI_REAL const *const *inputs,
                TI_REAL const *options,
                TI_REAL *const *outputs);

/* Crossover */
/* Type: math */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: crossover */
int ti_crossover_start(TI_REAL const *options);
int ti_crossover(int size,
                 TI_REAL const *const *inputs,
                 TI_REAL const *options,
                 TI_REAL *const *outputs);

/* Chaikins Volatility */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: cvi */
int ti_cvi_start(TI_REAL const *options);
int ti_cvi(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Linear Decay */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: decay */
int ti_decay_start(TI_REAL const *options);
int ti_decay(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Double Exponential Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: dema */
int ti_dema_start(TI_REAL const *options);
int ti_dema(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Directional Indicator */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 2 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: plus_di, minus_di */
int ti_di_start(TI_REAL const *options);
int ti_di(int size,
          TI_REAL const *const *inputs,
          TI_REAL const *options,
          TI_REAL *const *outputs);

/* Vector Division */
/* Type: simple */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: div */
int ti_div_start(TI_REAL const *options);
int ti_div(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Directional Movement */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 2 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: plus_dm, minus_dm */
int ti_dm_start(TI_REAL const *options);
int ti_dm(int size,
          TI_REAL const *const *inputs,
          TI_REAL const *options,
          TI_REAL *const *outputs);

/* Detrended Price Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: dpo */
int ti_dpo_start(TI_REAL const *options);
int ti_dpo(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Directional Movement Index */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: dx */
int ti_dx_start(TI_REAL const *options);
int ti_dx(int size,
          TI_REAL const *const *inputs,
          TI_REAL const *options,
          TI_REAL *const *outputs);

/* Exponential Decay */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: edecay */
int ti_edecay_start(TI_REAL const *options);
int ti_edecay(int size,
              TI_REAL const *const *inputs,
              TI_REAL const *options,
              TI_REAL *const *outputs);

/* Exponential Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: ema */
int ti_ema_start(TI_REAL const *options);
int ti_ema(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Ease of Movement */
/* Type: indicator */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, volume */
/* Options: none */
/* Outputs: emv */
int ti_emv_start(TI_REAL const *options);
int ti_emv(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Exponential */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: exp */
int ti_exp_start(TI_REAL const *options);
int ti_exp(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Fisher Transform */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 2 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: fisher, fisher_signal */
int ti_fisher_start(TI_REAL const *options);
int ti_fisher(int size,
              TI_REAL const *const *inputs,
              TI_REAL const *options,
              TI_REAL *const *outputs);

/* Vector Floor */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: floor */
int ti_floor_start(TI_REAL const *options);
int ti_floor(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Forecast Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: fosc */
int ti_fosc_start(TI_REAL const *options);
int ti_fosc(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Hull Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: hma */
int ti_hma_start(TI_REAL const *options);
int ti_hma(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Kaufman Adaptive Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: kama */
int ti_kama_start(TI_REAL const *options);
int ti_kama(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Klinger Volume Oscillator */
/* Type: indicator */
/* Input arrays: 4    Options: 2    Output arrays: 1 */
/* Inputs: high, low, close, volume */
/* Options: short period, long period */
/* Outputs: kvo */
int ti_kvo_start(TI_REAL const *options);
int ti_kvo(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Lag */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: lag */
int ti_lag_start(TI_REAL const *options);
int ti_lag(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Linear Regression */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: linreg */
int ti_linreg_start(TI_REAL const *options);
int ti_linreg(int size,
              TI_REAL const *const *inputs,
              TI_REAL const *options,
              TI_REAL *const *outputs);

/* Linear Regression Intercept */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: linregintercept */
int ti_linregintercept_start(TI_REAL const *options);
int ti_linregintercept(int size,
                       TI_REAL const *const *inputs,
                       TI_REAL const *options,
                       TI_REAL *const *outputs);

/* Linear Regression Slope */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: linregslope */
int ti_linregslope_start(TI_REAL const *options);
int ti_linregslope(int size,
                   TI_REAL const *const *inputs,
                   TI_REAL const *options,
                   TI_REAL *const *outputs);

/* Vector Natural Log */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: ln */
int ti_ln_start(TI_REAL const *options);
int ti_ln(int size,
          TI_REAL const *const *inputs,
          TI_REAL const *options,
          TI_REAL *const *outputs);

/* Vector Base-10 Log */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: log10 */
int ti_log10_start(TI_REAL const *options);
int ti_log10(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Moving Average Convergence/Divergence */
/* Type: indicator */
/* Input arrays: 1    Options: 3    Output arrays: 3 */
/* Inputs: real */
/* Options: short period, long period, signal period */
/* Outputs: macd, macd_signal, macd_histogram */
int ti_macd_start(TI_REAL const *options);
int ti_macd(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Market Facilitation Index */
/* Type: indicator */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, volume */
/* Options: none */
/* Outputs: marketfi */
int ti_marketfi_start(TI_REAL const *options);
int ti_marketfi(int size,
                TI_REAL const *const *inputs,
                TI_REAL const *options,
                TI_REAL *const *outputs);

/* Mass Index */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: high, low */
/* Options: period */
/* Outputs: mass */
int ti_mass_start(TI_REAL const *options);
int ti_mass(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Maximum In Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: max */
int ti_max_start(TI_REAL const *options);
int ti_max(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Mean Deviation Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: md */
int ti_md_start(TI_REAL const *options);
int ti_md(int size,
          TI_REAL const *const *inputs,
          TI_REAL const *options,
          TI_REAL *const *outputs);

/* Median Price */
/* Type: overlay */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: high, low */
/* Options: none */
/* Outputs: medprice */
int ti_medprice_start(TI_REAL const *options);
int ti_medprice(int size,
                TI_REAL const *const *inputs,
                TI_REAL const *options,
                TI_REAL *const *outputs);

/* Money Flow Index */
/* Type: indicator */
/* Input arrays: 4    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close, volume */
/* Options: period */
/* Outputs: mfi */
int ti_mfi_start(TI_REAL const *options);
int ti_mfi(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Minimum In Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: min */
int ti_min_start(TI_REAL const *options);
int ti_min(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Momentum */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: mom */
int ti_mom_start(TI_REAL const *options);
int ti_mom(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Mesa Sine Wave */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 2 */
/* Inputs: real */
/* Options: period */
/* Outputs: msw_sine, msw_lead */
int ti_msw_start(TI_REAL const *options);
int ti_msw(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Multiplication */
/* Type: simple */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: mul */
int ti_mul_start(TI_REAL const *options);
int ti_mul(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Normalized Average True Range */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: natr */
int ti_natr_start(TI_REAL const *options);
int ti_natr(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Negative Volume Index */
/* Type: indicator */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: close, volume */
/* Options: none */
/* Outputs: nvi */
int ti_nvi_start(TI_REAL const *options);
int ti_nvi(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* On Balance Volume */
/* Type: indicator */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: close, volume */
/* Options: none */
/* Outputs: obv */
int ti_obv_start(TI_REAL const *options);
int ti_obv(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Percentage Price Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 2    Output arrays: 1 */
/* Inputs: real */
/* Options: short period, long period */
/* Outputs: ppo */
int ti_ppo_start(TI_REAL const *options);
int ti_ppo(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Parabolic SAR */
/* Type: overlay */
/* Input arrays: 2    Options: 2    Output arrays: 1 */
/* Inputs: high, low */
/* Options: acceleration factor step, acceleration factor maximum */
/* Outputs: psar */
int ti_psar_start(TI_REAL const *options);
int ti_psar(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Positive Volume Index */
/* Type: indicator */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: close, volume */
/* Options: none */
/* Outputs: pvi */
int ti_pvi_start(TI_REAL const *options);
int ti_pvi(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Qstick */
/* Type: indicator */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: open, close */
/* Options: period */
/* Outputs: qstick */
int ti_qstick_start(TI_REAL const *options);
int ti_qstick(int size,
              TI_REAL const *const *inputs,
              TI_REAL const *options,
              TI_REAL *const *outputs);

/* Rate of Change */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: roc */
int ti_roc_start(TI_REAL const *options);
int ti_roc(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Rate of Change Ratio */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: rocr */
int ti_rocr_start(TI_REAL const *options);
int ti_rocr(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Vector Round */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: round */
int ti_round_start(TI_REAL const *options);
int ti_round(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Relative Strength Index */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: rsi */
int ti_rsi_start(TI_REAL const *options);
int ti_rsi(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Sine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: sin */
int ti_sin_start(TI_REAL const *options);
int ti_sin(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Hyperbolic Sine */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: sinh */
int ti_sinh_start(TI_REAL const *options);
int ti_sinh(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Simple Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: sma */
int ti_sma_start(TI_REAL const *options);
int ti_sma(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Square Root */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: sqrt */
int ti_sqrt_start(TI_REAL const *options);
int ti_sqrt(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Standard Deviation Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: stddev */
int ti_stddev_start(TI_REAL const *options);
int ti_stddev(int size,
              TI_REAL const *const *inputs,
              TI_REAL const *options,
              TI_REAL *const *outputs);

/* Standard Error Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: stderr */
int ti_stderr_start(TI_REAL const *options);
int ti_stderr(int size,
              TI_REAL const *const *inputs,
              TI_REAL const *options,
              TI_REAL *const *outputs);

/* Stochastic Oscillator */
/* Type: indicator */
/* Input arrays: 3    Options: 3    Output arrays: 2 */
/* Inputs: high, low, close */
/* Options: %k period, %k slowing period, %d period */
/* Outputs: stoch_k, stoch_d */
int ti_stoch_start(TI_REAL const *options);
int ti_stoch(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Stochastic RSI */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: stochrsi */
int ti_stochrsi_start(TI_REAL const *options);
int ti_stochrsi(int size,
                TI_REAL const *const *inputs,
                TI_REAL const *options,
                TI_REAL *const *outputs);

/* Vector Subtraction */
/* Type: simple */
/* Input arrays: 2    Options: 0    Output arrays: 1 */
/* Inputs: real, real */
/* Options: none */
/* Outputs: sub */
int ti_sub_start(TI_REAL const *options);
int ti_sub(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Sum Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: sum */
int ti_sum_start(TI_REAL const *options);
int ti_sum(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Tangent */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: tan */
int ti_tan_start(TI_REAL const *options);
int ti_tan(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vector Hyperbolic Tangent */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: tanh */
int ti_tanh_start(TI_REAL const *options);
int ti_tanh(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Triple Exponential Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: tema */
int ti_tema_start(TI_REAL const *options);
int ti_tema(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Vector Degree Conversion */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: degrees */
int ti_todeg_start(TI_REAL const *options);
int ti_todeg(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Vector Radian Conversion */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: radians */
int ti_torad_start(TI_REAL const *options);
int ti_torad(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* True Range */
/* Type: indicator */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: none */
/* Outputs: tr */
int ti_tr_start(TI_REAL const *options);
int ti_tr(int size,
          TI_REAL const *const *inputs,
          TI_REAL const *options,
          TI_REAL *const *outputs);

/* Triangular Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: trima */
int ti_trima_start(TI_REAL const *options);
int ti_trima(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Trix */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: trix */
int ti_trix_start(TI_REAL const *options);
int ti_trix(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Vector Truncate */
/* Type: simple */
/* Input arrays: 1    Options: 0    Output arrays: 1 */
/* Inputs: real */
/* Options: none */
/* Outputs: trunc */
int ti_trunc_start(TI_REAL const *options);
int ti_trunc(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Time Series Forecast */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: tsf */
int ti_tsf_start(TI_REAL const *options);
int ti_tsf(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Typical Price */
/* Type: overlay */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: none */
/* Outputs: typprice */
int ti_typprice_start(TI_REAL const *options);
int ti_typprice(int size,
                TI_REAL const *const *inputs,
                TI_REAL const *options,
                TI_REAL *const *outputs);

/* Ultimate Oscillator */
/* Type: indicator */
/* Input arrays: 3    Options: 3    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: short period, medium period, long period */
/* Outputs: ultosc */
int ti_ultosc_start(TI_REAL const *options);
int ti_ultosc(int size,
              TI_REAL const *const *inputs,
              TI_REAL const *options,
              TI_REAL *const *outputs);

/* Variance Over Period */
/* Type: math */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: var */
int ti_var_start(TI_REAL const *options);
int ti_var(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Vertical Horizontal Filter */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: vhf */
int ti_vhf_start(TI_REAL const *options);
int ti_vhf(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Variable Index Dynamic Average */
/* Type: overlay */
/* Input arrays: 1    Options: 3    Output arrays: 1 */
/* Inputs: real */
/* Options: short period, long period, alpha */
/* Outputs: vidya */
int ti_vidya_start(TI_REAL const *options);
int ti_vidya(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Annualized Historical Volatility */
/* Type: indicator */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: volatility */
int ti_volatility_start(TI_REAL const *options);
int ti_volatility(int size,
                  TI_REAL const *const *inputs,
                  TI_REAL const *options,
                  TI_REAL *const *outputs);

/* Volume Oscillator */
/* Type: indicator */
/* Input arrays: 1    Options: 2    Output arrays: 1 */
/* Inputs: volume */
/* Options: short period, long period */
/* Outputs: vosc */
int ti_vosc_start(TI_REAL const *options);
int ti_vosc(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Volume Weighted Moving Average */
/* Type: overlay */
/* Input arrays: 2    Options: 1    Output arrays: 1 */
/* Inputs: close, volume */
/* Options: period */
/* Outputs: vwma */
int ti_vwma_start(TI_REAL const *options);
int ti_vwma(int size,
            TI_REAL const *const *inputs,
            TI_REAL const *options,
            TI_REAL *const *outputs);

/* Williams Accumulation/Distribution */
/* Type: indicator */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: none */
/* Outputs: wad */
int ti_wad_start(TI_REAL const *options);
int ti_wad(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Weighted Close Price */
/* Type: overlay */
/* Input arrays: 3    Options: 0    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: none */
/* Outputs: wcprice */
int ti_wcprice_start(TI_REAL const *options);
int ti_wcprice(int size,
               TI_REAL const *const *inputs,
               TI_REAL const *options,
               TI_REAL *const *outputs);

/* Wilders Smoothing */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: wilders */
int ti_wilders_start(TI_REAL const *options);
int ti_wilders(int size,
               TI_REAL const *const *inputs,
               TI_REAL const *options,
               TI_REAL *const *outputs);

/* Williams %R */
/* Type: indicator */
/* Input arrays: 3    Options: 1    Output arrays: 1 */
/* Inputs: high, low, close */
/* Options: period */
/* Outputs: willr */
int ti_willr_start(TI_REAL const *options);
int ti_willr(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

/* Weighted Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: wma */
int ti_wma_start(TI_REAL const *options);
int ti_wma(int size,
           TI_REAL const *const *inputs,
           TI_REAL const *options,
           TI_REAL *const *outputs);

/* Zero-Lag Exponential Moving Average */
/* Type: overlay */
/* Input arrays: 1    Options: 1    Output arrays: 1 */
/* Inputs: real */
/* Options: period */
/* Outputs: zlema */
int ti_zlema_start(TI_REAL const *options);
int ti_zlema(int size,
             TI_REAL const *const *inputs,
             TI_REAL const *options,
             TI_REAL *const *outputs);

struct ti_indicator_info ti_indicators[] = {
    {"abs", "Vector Absolute Value", ti_abs_start, ti_abs, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"abs", 0}},
    {"acos", "Vector Arccosine", ti_acos_start, ti_acos, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"acos", 0}},
    {"ad", "Accumulation/Distribution Line", ti_ad_start, ti_ad, TI_TYPE_INDICATOR, 4, 0, 1, {"high", "low", "close", "volume", 0}, {"", 0}, {"ad", 0}},
    {"add", "Vector Addition", ti_add_start, ti_add, TI_TYPE_SIMPLE, 2, 0, 1, {"real", "real", 0}, {"", 0}, {"add", 0}},
    {"adosc", "Accumulation/Distribution Oscillator", ti_adosc_start, ti_adosc, TI_TYPE_INDICATOR, 4, 2, 1, {"high", "low", "close", "volume", 0}, {"short period", "long period", 0}, {"adosc", 0}},
    {"adx", "Average Directional Movement Index", ti_adx_start, ti_adx, TI_TYPE_INDICATOR, 3, 1, 1, {"high", "low", "close", 0}, {"period", 0}, {"dx", 0}},
    {"adxr", "Average Directional Movement Rating", ti_adxr_start, ti_adxr, TI_TYPE_INDICATOR, 3, 1, 1, {"high", "low", "close", 0}, {"period", 0}, {"dx", 0}},
    {"ao", "Awesome Oscillator", ti_ao_start, ti_ao, TI_TYPE_INDICATOR, 2, 0, 1, {"high", "low", 0}, {"", 0}, {"ao", 0}},
    {"apo", "Absolute Price Oscillator", ti_apo_start, ti_apo, TI_TYPE_INDICATOR, 1, 2, 1, {"real", 0}, {"short period", "long period", 0}, {"apo", 0}},
    {"aroon", "Aroon", ti_aroon_start, ti_aroon, TI_TYPE_INDICATOR, 2, 1, 2, {"high", "low", 0}, {"period", 0}, {"aroon_down", "aroon_up", 0}},
    {"aroonosc", "Aroon Oscillator", ti_aroonosc_start, ti_aroonosc, TI_TYPE_INDICATOR, 2, 1, 1, {"high", "low", 0}, {"period", 0}, {"aroonosc", 0}},
    {"asin", "Vector Arcsine", ti_asin_start, ti_asin, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"asin", 0}},
    {"atan", "Vector Arctangent", ti_atan_start, ti_atan, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"atan", 0}},
    {"atr", "Average True Range", ti_atr_start, ti_atr, TI_TYPE_INDICATOR, 3, 1, 1, {"high", "low", "close", 0}, {"period", 0}, {"atr", 0}},
    {"avgprice", "Average Price", ti_avgprice_start, ti_avgprice, TI_TYPE_OVERLAY, 4, 0, 1, {"open", "high", "low", "close", 0}, {"", 0}, {"avgprice", 0}},
    {"bbands", "Bollinger Bands", ti_bbands_start, ti_bbands, TI_TYPE_OVERLAY, 1, 2, 3, {"real", 0}, {"period", "stddev", 0}, {"bbands_lower", "bbands_middle", "bbands_upper", 0}},
    {"bop", "Balance of Power", ti_bop_start, ti_bop, TI_TYPE_INDICATOR, 4, 0, 1, {"open", "high", "low", "close", 0}, {"", 0}, {"bop", 0}},
    {"cci", "Commodity Channel Index", ti_cci_start, ti_cci, TI_TYPE_INDICATOR, 3, 1, 1, {"high", "low", "close", 0}, {"period", 0}, {"cci", 0}},
    {"ceil", "Vector Ceiling", ti_ceil_start, ti_ceil, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"ceil", 0}},
    {"cmo", "Chande Momentum Oscillator", ti_cmo_start, ti_cmo, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"cmo", 0}},
    {"cos", "Vector Cosine", ti_cos_start, ti_cos, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"cos", 0}},
    {"cosh", "Vector Hyperbolic Cosine", ti_cosh_start, ti_cosh, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"cosh", 0}},
    {"crossany", "Crossany", ti_crossany_start, ti_crossany, TI_TYPE_MATH, 2, 0, 1, {"real", "real", 0}, {"", 0}, {"crossany", 0}},
    {"crossover", "Crossover", ti_crossover_start, ti_crossover, TI_TYPE_MATH, 2, 0, 1, {"real", "real", 0}, {"", 0}, {"crossover", 0}},
    {"cvi", "Chaikins Volatility", ti_cvi_start, ti_cvi, TI_TYPE_INDICATOR, 2, 1, 1, {"high", "low", 0}, {"period", 0}, {"cvi", 0}},
    {"decay", "Linear Decay", ti_decay_start, ti_decay, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"decay", 0}},
    {"dema", "Double Exponential Moving Average", ti_dema_start, ti_dema, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"dema", 0}},
    {"di", "Directional Indicator", ti_di_start, ti_di, TI_TYPE_INDICATOR, 3, 1, 2, {"high", "low", "close", 0}, {"period", 0}, {"plus_di", "minus_di", 0}},
    {"div", "Vector Division", ti_div_start, ti_div, TI_TYPE_SIMPLE, 2, 0, 1, {"real", "real", 0}, {"", 0}, {"div", 0}},
    {"dm", "Directional Movement", ti_dm_start, ti_dm, TI_TYPE_INDICATOR, 2, 1, 2, {"high", "low", 0}, {"period", 0}, {"plus_dm", "minus_dm", 0}},
    {"dpo", "Detrended Price Oscillator", ti_dpo_start, ti_dpo, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"dpo", 0}},
    {"dx", "Directional Movement Index", ti_dx_start, ti_dx, TI_TYPE_INDICATOR, 3, 1, 1, {"high", "low", "close", 0}, {"period", 0}, {"dx", 0}},
    {"edecay", "Exponential Decay", ti_edecay_start, ti_edecay, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"edecay", 0}},
    {"ema", "Exponential Moving Average", ti_ema_start, ti_ema, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"ema", 0}},
    {"emv", "Ease of Movement", ti_emv_start, ti_emv, TI_TYPE_INDICATOR, 3, 0, 1, {"high", "low", "volume", 0}, {"", 0}, {"emv", 0}},
    {"exp", "Vector Exponential", ti_exp_start, ti_exp, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"exp", 0}},
    {"fisher", "Fisher Transform", ti_fisher_start, ti_fisher, TI_TYPE_INDICATOR, 2, 1, 2, {"high", "low", 0}, {"period", 0}, {"fisher", "fisher_signal", 0}},
    {"floor", "Vector Floor", ti_floor_start, ti_floor, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"floor", 0}},
    {"fosc", "Forecast Oscillator", ti_fosc_start, ti_fosc, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"fosc", 0}},
    {"hma", "Hull Moving Average", ti_hma_start, ti_hma, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"hma", 0}},
    {"kama", "Kaufman Adaptive Moving Average", ti_kama_start, ti_kama, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"kama", 0}},
    {"kvo", "Klinger Volume Oscillator", ti_kvo_start, ti_kvo, TI_TYPE_INDICATOR, 4, 2, 1, {"high", "low", "close", "volume", 0}, {"short period", "long period", 0}, {"kvo", 0}},
    {"lag", "Lag", ti_lag_start, ti_lag, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"lag", 0}},
    {"linreg", "Linear Regression", ti_linreg_start, ti_linreg, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"linreg", 0}},
    {"linregintercept", "Linear Regression Intercept", ti_linregintercept_start, ti_linregintercept, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"linregintercept", 0}},
    {"linregslope", "Linear Regression Slope", ti_linregslope_start, ti_linregslope, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"linregslope", 0}},
    {"ln", "Vector Natural Log", ti_ln_start, ti_ln, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"ln", 0}},
    {"log10", "Vector Base-10 Log", ti_log10_start, ti_log10, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"log10", 0}},
    {"macd", "Moving Average Convergence/Divergence", ti_macd_start, ti_macd, TI_TYPE_INDICATOR, 1, 3, 3, {"real", 0}, {"short period", "long period", "signal period", 0}, {"macd", "macd_signal", "macd_histogram", 0}},
    {"marketfi", "Market Facilitation Index", ti_marketfi_start, ti_marketfi, TI_TYPE_INDICATOR, 3, 0, 1, {"high", "low", "volume", 0}, {"", 0}, {"marketfi", 0}},
    {"mass", "Mass Index", ti_mass_start, ti_mass, TI_TYPE_INDICATOR, 2, 1, 1, {"high", "low", 0}, {"period", 0}, {"mass", 0}},
    {"max", "Maximum In Period", ti_max_start, ti_max, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"max", 0}},
    {"md", "Mean Deviation Over Period", ti_md_start, ti_md, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"md", 0}},
    {"medprice", "Median Price", ti_medprice_start, ti_medprice, TI_TYPE_OVERLAY, 2, 0, 1, {"high", "low", 0}, {"", 0}, {"medprice", 0}},
    {"mfi", "Money Flow Index", ti_mfi_start, ti_mfi, TI_TYPE_INDICATOR, 4, 1, 1, {"high", "low", "close", "volume", 0}, {"period", 0}, {"mfi", 0}},
    {"min", "Minimum In Period", ti_min_start, ti_min, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"min", 0}},
    {"mom", "Momentum", ti_mom_start, ti_mom, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"mom", 0}},
    {"msw", "Mesa Sine Wave", ti_msw_start, ti_msw, TI_TYPE_INDICATOR, 1, 1, 2, {"real", 0}, {"period", 0}, {"msw_sine", "msw_lead", 0}},
    {"mul", "Vector Multiplication", ti_mul_start, ti_mul, TI_TYPE_SIMPLE, 2, 0, 1, {"real", "real", 0}, {"", 0}, {"mul", 0}},
    {"natr", "Normalized Average True Range", ti_natr_start, ti_natr, TI_TYPE_INDICATOR, 3, 1, 1, {"high", "low", "close", 0}, {"period", 0}, {"natr", 0}},
    {"nvi", "Negative Volume Index", ti_nvi_start, ti_nvi, TI_TYPE_INDICATOR, 2, 0, 1, {"close", "volume", 0}, {"", 0}, {"nvi", 0}},
    {"obv", "On Balance Volume", ti_obv_start, ti_obv, TI_TYPE_INDICATOR, 2, 0, 1, {"close", "volume", 0}, {"", 0}, {"obv", 0}},
    {"ppo", "Percentage Price Oscillator", ti_ppo_start, ti_ppo, TI_TYPE_INDICATOR, 1, 2, 1, {"real", 0}, {"short period", "long period", 0}, {"ppo", 0}},
    {"psar", "Parabolic SAR", ti_psar_start, ti_psar, TI_TYPE_OVERLAY, 2, 2, 1, {"high", "low", 0}, {"acceleration factor step", "acceleration factor maximum", 0}, {"psar", 0}},
    {"pvi", "Positive Volume Index", ti_pvi_start, ti_pvi, TI_TYPE_INDICATOR, 2, 0, 1, {"close", "volume", 0}, {"", 0}, {"pvi", 0}},
    {"qstick", "Qstick", ti_qstick_start, ti_qstick, TI_TYPE_INDICATOR, 2, 1, 1, {"open", "close", 0}, {"period", 0}, {"qstick", 0}},
    {"roc", "Rate of Change", ti_roc_start, ti_roc, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"roc", 0}},
    {"rocr", "Rate of Change Ratio", ti_rocr_start, ti_rocr, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"rocr", 0}},
    {"round", "Vector Round", ti_round_start, ti_round, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"round", 0}},
    {"rsi", "Relative Strength Index", ti_rsi_start, ti_rsi, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"rsi", 0}},
    {"sin", "Vector Sine", ti_sin_start, ti_sin, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"sin", 0}},
    {"sinh", "Vector Hyperbolic Sine", ti_sinh_start, ti_sinh, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"sinh", 0}},
    {"sma", "Simple Moving Average", ti_sma_start, ti_sma, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"sma", 0}},
    {"sqrt", "Vector Square Root", ti_sqrt_start, ti_sqrt, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"sqrt", 0}},
    {"stddev", "Standard Deviation Over Period", ti_stddev_start, ti_stddev, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"stddev", 0}},
    {"stderr", "Standard Error Over Period", ti_stderr_start, ti_stderr, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"stderr", 0}},
    {"stoch", "Stochastic Oscillator", ti_stoch_start, ti_stoch, TI_TYPE_INDICATOR, 3, 3, 2, {"high", "low", "close", 0}, {"k period", "k slowing period", "d period", 0}, {"stoch_k", "stoch_d", 0}},
    {"stochrsi", "Stochastic RSI", ti_stochrsi_start, ti_stochrsi, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"stochrsi", 0}},
    {"sub", "Vector Subtraction", ti_sub_start, ti_sub, TI_TYPE_SIMPLE, 2, 0, 1, {"real", "real", 0}, {"", 0}, {"sub", 0}},
    {"sum", "Sum Over Period", ti_sum_start, ti_sum, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"sum", 0}},
    {"tan", "Vector Tangent", ti_tan_start, ti_tan, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"tan", 0}},
    {"tanh", "Vector Hyperbolic Tangent", ti_tanh_start, ti_tanh, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"tanh", 0}},
    {"tema", "Triple Exponential Moving Average", ti_tema_start, ti_tema, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"tema", 0}},
    {"todeg", "Vector Degree Conversion", ti_todeg_start, ti_todeg, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"degrees", 0}},
    {"torad", "Vector Radian Conversion", ti_torad_start, ti_torad, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"radians", 0}},
    {"tr", "True Range", ti_tr_start, ti_tr, TI_TYPE_INDICATOR, 3, 0, 1, {"high", "low", "close", 0}, {"", 0}, {"tr", 0}},
    {"trima", "Triangular Moving Average", ti_trima_start, ti_trima, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"trima", 0}},
    {"trix", "Trix", ti_trix_start, ti_trix, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"trix", 0}},
    {"trunc", "Vector Truncate", ti_trunc_start, ti_trunc, TI_TYPE_SIMPLE, 1, 0, 1, {"real", 0}, {"", 0}, {"trunc", 0}},
    {"tsf", "Time Series Forecast", ti_tsf_start, ti_tsf, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"tsf", 0}},
    {"typprice", "Typical Price", ti_typprice_start, ti_typprice, TI_TYPE_OVERLAY, 3, 0, 1, {"high", "low", "close", 0}, {"", 0}, {"typprice", 0}},
    {"ultosc", "Ultimate Oscillator", ti_ultosc_start, ti_ultosc, TI_TYPE_INDICATOR, 3, 3, 1, {"high", "low", "close", 0}, {"short period", "medium period", "long period", 0}, {"ultosc", 0}},
    {"var", "Variance Over Period", ti_var_start, ti_var, TI_TYPE_MATH, 1, 1, 1, {"real", 0}, {"period", 0}, {"var", 0}},
    {"vhf", "Vertical Horizontal Filter", ti_vhf_start, ti_vhf, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"vhf", 0}},
    {"vidya", "Variable Index Dynamic Average", ti_vidya_start, ti_vidya, TI_TYPE_OVERLAY, 1, 3, 1, {"real", 0}, {"short period", "long period", "alpha", 0}, {"vidya", 0}},
    {"volatility", "Annualized Historical Volatility", ti_volatility_start, ti_volatility, TI_TYPE_INDICATOR, 1, 1, 1, {"real", 0}, {"period", 0}, {"volatility", 0}},
    {"vosc", "Volume Oscillator", ti_vosc_start, ti_vosc, TI_TYPE_INDICATOR, 1, 2, 1, {"volume", 0}, {"short period", "long period", 0}, {"vosc", 0}},
    {"vwma", "Volume Weighted Moving Average", ti_vwma_start, ti_vwma, TI_TYPE_OVERLAY, 2, 1, 1, {"close", "volume", 0}, {"period", 0}, {"vwma", 0}},
    {"wad", "Williams Accumulation/Distribution", ti_wad_start, ti_wad, TI_TYPE_INDICATOR, 3, 0, 1, {"high", "low", "close", 0}, {"", 0}, {"wad", 0}},
    {"wcprice", "Weighted Close Price", ti_wcprice_start, ti_wcprice, TI_TYPE_OVERLAY, 3, 0, 1, {"high", "low", "close", 0}, {"", 0}, {"wcprice", 0}},
    {"wilders", "Wilders Smoothing", ti_wilders_start, ti_wilders, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"wilders", 0}},
    {"willr", "Williams %R", ti_willr_start, ti_willr, TI_TYPE_INDICATOR, 3, 1, 1, {"high", "low", "close", 0}, {"period", 0}, {"willr", 0}},
    {"wma", "Weighted Moving Average", ti_wma_start, ti_wma, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"wma", 0}},
    {"zlema", "Zero-Lag Exponential Moving Average", ti_zlema_start, ti_zlema, TI_TYPE_OVERLAY, 1, 1, 1, {"real", 0}, {"period", 0}, {"zlema", 0}},
    {0, 0, 0, 0, 0, 0, 0, 0, {0, 0}, {0, 0}, {0, 0}}};

const ti_indicator_info *ti_find_indicator(const char *name)
{
  int imin = 0;
  int imax = sizeof(ti_indicators) / sizeof(ti_indicator_info) - 2;
  while (imax >= imin)
  {
    const int i = (imin + ((imax - imin) / 2));
    const int c = strcmp(name, ti_indicators[i].name);
    if (c == 0)
    {
      return ti_indicators + i;
    }
    else if (c > 0)
    {
      imin = i + 1;
    }
    else
    {
      imax = i - 1;
    }
  }
  return 0;
}