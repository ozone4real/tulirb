# frozen_string_literal: true

SAMPLE_DATA = [
  {
    name: "abs",
    inputs: [
      [
        -2.5,
        3.8,
        -1.2,
        5.5
      ]
    ],
    options: [],
    outputs: [
      [
        2.5,
        3.8,
        1.2,
        5.5
      ]
    ]
  },
  {
    name: "acos",
    inputs: [
      [
        0.75,
        -0.35,
        0.2
      ]
    ],
    options: [],
    outputs: [
      [
        0.7227342478134157,
        1.9283674304404068,
        1.3694384060045657
      ]
    ]
  },
  {
    name: "ad",
    inputs: [
      [
        125.4,
        126.8,
        124.6,
        128.2
      ],
      [
        124.5,
        125.2,
        123.8,
        126.5
      ],
      [
        126.7,
        128.3,
        125.9,
        129.6
      ],
      [
        250_000,
        280_000,
        240_000,
        320_000
      ]
    ],
    options: [],
    outputs: [
      [
        972_222.2222222161,
        1_777_222.222222223,
        2_797_222.2222222323,
        3_644_281.04575165
      ]
    ]
  },
  {
    name: "add",
    inputs: [
      [
        5,
        10,
        15
      ],
      [
        2,
        3,
        7
      ]
    ],
    options: [],
    outputs: [
      [
        7,
        13,
        22
      ]
    ]
  },
  {
    name: "adosc",
    inputs: [
      [
        125.4,
        126.8,
        124.6,
        128.2
      ],
      [
        124.5,
        125.2,
        123.8,
        126.5
      ],
      [
        126.7,
        128.3,
        125.9,
        129.6
      ],
      [
        250_000,
        280_000,
        240_000,
        320_000
      ]
    ],
    options: [
      2,
      3
    ],
    outputs: [
      [
        281_805.55555555783,
        353_653.32244008966
      ]
    ]
  },
  {
    name: "adx",
    inputs: [
      [
        345,
        30,
        35,
        40,
        25,
        20,
        101
      ],
      [
        18,
        22,
        20,
        24,
        25,
        91,
        721
      ],
      [
        40,
        45,
        50,
        35,
        30,
        50,
        19
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        100,
        100,
        100
      ]
    ]
  },
  {
    name: "adxr",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20,
        45,
        90,
        12,
        18,
        120
      ],
      [
        18,
        22,
        20,
        24,
        25,
        85,
        23,
        98,
        17,
        59
      ],
      [
        40,
        45,
        50,
        35,
        30,
        97,
        56,
        104,
        23,
        89
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        92.29434578485404,
        87.15724297475674,
        81.36880238589936,
        66.46372397701731
      ]
    ]
  },
  {
    name: "ao",
    inputs: [
      [
        0.7956324295773034,
        0.09751469654164457,
        0.5078523669712799,
        0.3788162851140101,
        0.7711631040328195,
        0.3821544997316604,
        0.8480231388569844,
        0.38425197965354174,
        0.48492871652937697,
        0.10937259039499125,
        0.7623469012314175,
        0.5221420567774294,
        0.7474783762069507,
        0.978966650457329,
        0.3118409375639035,
        0.641158343176944,
        0.4457426766188257,
        0.9828904177280442,
        0.09384715138168798,
        0.868058486104457,
        0.6508672300953378,
        0.13945179732185298,
        0.8812511032909426,
        0.26572428067178355,
        0.36487072974458556,
        0.6592280543503567,
        0.3668455432710461,
        0.9928386932702452,
        0.2992801709946382,
        0.6610488908407308,
        0.7796400902343561,
        0.046211261472126286,
        0.9298741204300677,
        0.33712358087488503
      ],
      [
        0.5542177922373622,
        0.559235270660452,
        0.6514254458850294,
        0.6768232568168796,
        0.03997137330166911,
        0.8179662163567367,
        0.3889172857262644,
        0.28095851089770996,
        0.4989493714577016,
        0.6775116025129763,
        0.7834171003296075,
        0.8138925401834352,
        0.08920253662792754,
        0.7907629068182174,
        0.19079242190040047,
        0.19368797963889006,
        0.5764873663795441,
        0.5248750258215755,
        0.09193997870578496,
        0.31244135547213425,
        0.9765988292679864,
        0.7939126690485866,
        0.5939024269068484,
        0.731095836670704,
        0.2879329702176555,
        0.7980824503108124,
        0.40675089073422654,
        0.5494839757305524,
        0.7699115624841542,
        0.9896706681820809,
        0.21597752973553697,
        0.19057159140768765,
        0.6009486280818672,
        0.323483494668499
      ]
    ],
    options: [],
    outputs: [
      [
        -0.02534260577031988
      ]
    ]
  },
  {
    name: "apo",
    inputs: [
      [
        120.45,
        121.8,
        119.5,
        122.3,
        124.6
      ]
    ],
    options: [
      12,
      26
    ],
    outputs: [
      [
        0.10769230769231797,
        0.0073635765943578235,
        0.15203635335129206,
        0.447127145928917
      ]
    ]
  },
  {
    name: "aroon",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20,
        15
      ],
      [
        15,
        18,
        22,
        25,
        30,
        35
      ]
    ],
    options: [
      5
    ],
    outputs: [
      [
        0
      ],
      [
        40
      ]
    ]
  },
  {
    name: "aroonosc",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20,
        15
      ],
      [
        15,
        18,
        22,
        25,
        30,
        35
      ]
    ],
    options: [
      5
    ],
    outputs: [
      [
        40
      ]
    ]
  },
  {
    name: "asin",
    inputs: [
      [
        0.75,
        -0.35,
        0.2
      ]
    ],
    options: [],
    outputs: [
      [
        0.848062078981481,
        -0.35757110364551026,
        0.2013579207903308
      ]
    ]
  },
  {
    name: "atan",
    inputs: [
      [
        0.75,
        -0.35,
        0.2
      ]
    ],
    options: [],
    outputs: [
      [
        0.6435011087932844,
        -0.33667481938672716,
        0.19739555984988078
      ]
    ]
  },
  {
    name: "atr",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        40,
        45,
        50,
        35,
        30
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        18.333333333333332,
        20.88888888888889,
        18.925925925925927
      ]
    ]
  },
  {
    name: "avgprice",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ],
      [
        2,
        2.5,
        1.8,
        2.2
      ],
      [
        0.9,
        1.2,
        0.8,
        1.5
      ],
      [
        1.8,
        2,
        1.5,
        1.9
      ]
    ],
    options: [],
    outputs: [
      [
        1.475,
        1.8,
        1.275,
        1.85
      ]
    ]
  },
  {
    name: "bbands",
    inputs: [
      [
        18,
        22,
        20,
        24,
        25,
        30,
        35,
        40,
        45,
        50
      ]
    ],
    options: [
      5,
      2
    ],
    outputs: [
      [
        16.67750061005372,
        17.459080181458944,
        16.415396011402258,
        18.70702683373523,
        20.85786437626905,
        25.85786437626905
      ],
      [
        21.8,
        24.200000000000003,
        26.8,
        30.8,
        35,
        40
      ],
      [
        26.92249938994628,
        30.94091981854106,
        37.18460398859774,
        42.89297316626477,
        49.14213562373095,
        54.14213562373095
      ]
    ]
  },
  {
    name: "bop",
    inputs: [
      [
        25.5,
        26.2,
        25,
        26.8
      ],
      [
        30.5,
        31,
        30.2,
        31.5
      ],
      [
        28,
        27.5,
        28.8,
        27.2
      ],
      [
        25,
        25.5,
        24.8,
        26
      ]
    ],
    options: [],
    outputs: [
      [
        -0.2,
        -0.1999999999999998,
        -0.1428571428571425,
        -0.1860465116279071
      ]
    ]
  },
  {
    name: "cci",
    inputs: [
      [
        50,
        55,
        60,
        45,
        40
      ],
      [
        38,
        42,
        40,
        45,
        50
      ],
      [
        60,
        55,
        50,
        65,
        70
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        100.00000000000003
      ]
    ]
  },
  {
    name: "ceil",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [],
    outputs: [
      [
        2,
        2,
        1,
        2
      ]
    ]
  },
  {
    name: "cmo",
    inputs: [
      [
        5,
        8,
        10,
        12,
        15
      ]
    ],
    options: [
      4
    ],
    outputs: [
      [
        100
      ]
    ]
  },
  {
    name: "cos",
    inputs: [
      [
        0.75,
        -0.35,
        0.2
      ]
    ],
    options: [],
    outputs: [
      [
        0.7316888688738209,
        0.9393727128473789,
        0.9800665778412416
      ]
    ]
  },
  {
    name: "cosh",
    inputs: [
      [
        0.75,
        -0.35,
        0.2
      ]
    ],
    options: [],
    outputs: [
      [
        1.2946832846768448,
        1.0618778191559852,
        1.020066755619076
      ]
    ]
  },
  {
    name: "crossany",
    inputs: [
      [
        1,
        0,
        1,
        1
      ],
      [
        0,
        1,
        1,
        0
      ]
    ],
    options: [],
    outputs: [
      [
        1,
        0,
        1
      ]
    ]
  },
  {
    name: "crossover",
    inputs: [
      [
        1,
        2,
        3,
        4
      ],
      [
        2,
        3,
        4,
        5
      ]
    ],
    options: [],
    outputs: [
      [
        0,
        0,
        0
      ]
    ]
  },
  {
    name: "cvi",
    inputs: [
      [
        50,
        55,
        60,
        45,
        40
      ],
      [
        60,
        55,
        50,
        65,
        70
      ]
    ],
    options: [
      3
    ],
    outputs: [
      []
    ]
  },
  {
    name: "decay",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.2,
        1.5,
        1.1666666666666667,
        1.8
      ]
    ]
  },
  {
    name: "dema",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      []
    ]
  },
  {
    name: "di",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        40,
        45,
        50,
        35,
        30
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        23.25581395348837,
        12.195121951219512,
        8.639308855291576
      ],
      [
        0,
        0,
        0
      ]
    ]
  },
  {
    name: "div",
    inputs: [
      [
        10,
        5,
        3,
        8
      ],
      [
        2,
        2,
        1,
        2
      ]
    ],
    options: [],
    outputs: [
      [
        5,
        2.5,
        3,
        4
      ]
    ]
  },
  {
    name: "dm",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        10,
        6.666666666666666,
        4.444444444444444
      ],
      [
        0,
        0,
        0
      ]
    ]
  },
  {
    name: "dpo",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        -0.03333333333333344,
        0.06666666666666687
      ]
    ]
  },
  {
    name: "dx",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        40,
        45,
        50,
        35,
        30
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        100,
        100,
        100
      ]
    ]
  },
  {
    name: "edecay",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ]
  },
  {
    name: "ema",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.2,
        1.35,
        1.175,
        1.4875
      ]
    ]
  },
  {
    name: "emv",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        50_000,
        75_000,
        100_000,
        80_000,
        60_000
      ]
    ],
    options: [],
    outputs: [
      [
        7.800000000000001,
        3,
        -0.6875,
        1.6666666666666667
      ]
    ]
  },
  {
    name: "exp",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [],
    outputs: [
      [
        3.3201169227365472,
        4.4816890703380645,
        2.718281828459045,
        6.0496474644129465
      ]
    ]
  },
  {
    name: "fisher",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ]
    ],
    options: [
      2
    ],
    outputs: [
      [
        0.34282825441539394,
        0.7913738721291064,
        0.43494409035688947,
        -0.09613083022119731
      ],
      [
        0,
        0.34282825441539394,
        0.7913738721291064,
        0.43494409035688947
      ]
    ]
  },
  {
    name: "floor",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [],
    outputs: [
      [
        1,
        1,
        1,
        1
      ]
    ]
  },
  {
    name: "fosc",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        -80,
        -16.666666666666643
      ]
    ]
  },
  {
    name: "hma",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.8,
        2.1166666666666667
      ]
    ]
  },
  {
    name: "kama",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1,
        1.0674297606659728
      ]
    ]
  },
  {
    name: "kvo",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        38,
        62,
        90,
        34,
        15
      ],
      [
        50_000,
        75_000,
        100_000,
        80_000,
        60_000
      ]
    ],
    options: [
      2,
      3
    ],
    outputs: [
      [
        0,
        135_185.18518518517,
        -1_278_880.0705467374,
        -1_506_915.0499706063
      ]
    ]
  },
  {
    name: "lag",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.2
      ]
    ]
  },
  {
    name: "linreg",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.133333333333333,
        1.5833333333333341
      ]
    ]
  },
  {
    name: "linregintercept",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.3333333333333335,
        1.2833333333333323
      ]
    ]
  },
  {
    name: "linregslope",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        -0.10000000000000023,
        0.15000000000000094
      ]
    ]
  },
  {
    name: "ln",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [],
    outputs: [
      [
        0.1823215567939546,
        0.4054651081081644,
        0,
        0.5877866649021191
      ]
    ]
  },
  {
    name: "log10",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [],
    outputs: [
      [
        0.07918124604762482,
        0.17609125905568124,
        0,
        0.25527250510330607
      ]
    ]
  },
  {
    name: "macd",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3,
      5,
      2
    ],
    outputs: [
      [],
      [],
      []
    ]
  },
  {
    name: "marketfi",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        50_000,
        75_000,
        100_000,
        80_000,
        60_000
      ]
    ],
    options: [],
    outputs: [
      [
        0.00024,
        0.00017333333333333334,
        0.0002,
        0.0000125,
        -0.00008333333333333333
      ]
    ]
  },
  {
    name: "mass",
    inputs: [
      [
        0.2394,
        0.3244494,
        0.22613407779909256,
        0.28320255696531704,
        0.7321415004889139,
        0.5101685722368793,
        0.9024735476425417,
        0.313608430423713,
        0.738865219126315,
        0.7036686610211152,
        0.1232982624010025,
        0.026722951269148365,
        0.10181489804726118,
        0.08993506069661306,
        0.2899531032848247,
        0.47648781751071423,
        0.7514625455628217,
        0.5539754146614232
      ],
      [
        0.77379809076386,
        0.7848880604223124,
        0.9301540987041416,
        0.427735919602662,
        0.01334365200886889,
        0.8625664526783071,
        0.8555801820215541,
        0.24128033125351123,
        0.34216127977646293,
        0.2572468842576635,
        0.3074789113907521,
        0.7659133300411504,
        0.29174889486169897,
        0.7007669464145442,
        0.7303081204081849,
        0.6896472642968396,
        0.392922,
        0.49292
      ]
    ],
    options: [
      2
    ],
    outputs: [
      [
        1.612058790933307
      ]
    ]
  },
  {
    name: "max",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.5,
        1.8
      ]
    ]
  },
  {
    name: "md",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.1777777777777778,
        0.288888888888889
      ]
    ]
  },
  {
    name: "medprice",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ]
    ],
    options: [],
    outputs: [
      [
        24,
        28.5,
        30,
        24.5,
        22.5
      ]
    ]
  },
  {
    name: "mfi",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        50_000,
        75_000,
        100_000,
        80_000,
        60_000
      ],
      [
        50_000,
        95_000,
        800_000,
        70_000,
        30_000
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        93.9606396057332,
        91.53282491419941
      ]
    ]
  },
  {
    name: "min",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1,
        1
      ]
    ]
  },
  {
    name: "mom",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.6000000000000001
      ]
    ]
  },
  {
    name: "msw",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.7857142849250032
      ],
      [
        0.9929927838775968
      ]
    ]
  },
  {
    name: "mul",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ],
      [
        2,
        3,
        4,
        5
      ]
    ],
    options: [],
    outputs: [
      [
        2.4,
        4.5,
        4,
        9
      ]
    ]
  },
  {
    name: "natr",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        1.2,
        1.5,
        1,
        1.8,
        95.7
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        2810,
        1485.185185185185,
        26.70381980726808
      ]
    ]
  },
  {
    name: "nvi",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ],
      [
        50_000,
        75_000,
        100_000,
        80_000
      ]
    ],
    options: [],
    outputs: [
      [
        1000,
        1000,
        1000,
        1800
      ]
    ]
  },
  {
    name: "obv",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ],
      [
        50_000,
        75_000,
        100_000,
        80_000
      ]
    ],
    options: [],
    outputs: [
      [
        0,
        75_000,
        -25_000,
        55_000
      ]
    ]
  },
  {
    name: "ppo",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3,
      5
    ],
    outputs: [
      [
        3.8461538461538494,
        -2.083333333333326,
        6.250000000000011
      ]
    ]
  },
  {
    name: "psar",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ]
    ],
    options: [
      0.3,
      0.4
    ],
    outputs: [
      [
        18,
        18,
        20,
        20
      ]
    ]
  },
  {
    name: "pvi",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ],
      [
        50_000,
        75_000,
        100_000,
        80_000
      ]
    ],
    options: [],
    outputs: [
      [
        1000,
        1250,
        833.3333333333334,
        833.3333333333334
      ]
    ]
  },
  {
    name: "qstick",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        -15,
        -11.333333333333332,
        -5.333333333333333
      ]
    ]
  },
  {
    name: "roc",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.5000000000000001
      ]
    ]
  },
  {
    name: "rocr",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.5
      ]
    ]
  },
  {
    name: "round",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [],
    outputs: [
      [
        1,
        2,
        1,
        2
      ]
    ]
  },
  {
    name: "rsi",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        68.75000000000001
      ]
    ]
  },
  {
    name: "sin",
    inputs: [
      [
        0.5,
        0.8,
        1,
        1.2
      ]
    ],
    options: [],
    outputs: [
      [
        0.479425538604203,
        0.7173560908995228,
        0.8414709848078965,
        0.9320390859672263
      ]
    ]
  },
  {
    name: "sinh",
    inputs: [
      [
        0.5,
        0.8,
        1,
        1.2
      ]
    ],
    options: [],
    outputs: [
      [
        0.5210953054937474,
        0.888105982187623,
        1.1752011936438014,
        1.5094613554121725
      ]
    ]
  },
  {
    name: "sma",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.2333333333333334,
        1.4333333333333331
      ]
    ]
  },
  {
    name: "sqrt",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [],
    outputs: [
      [
        1.0954451150103321,
        1.224744871391589,
        1,
        1.3416407864998738
      ]
    ]
  },
  {
    name: "stddev",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.2054804667656313,
        0.32998316455372306
      ]
    ]
  },
  {
    name: "stderr",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.1186342028003472,
        0.19051586888313662
      ]
    ]
  },
  {
    name: "stoch",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20,
        23,
        56,
        24,
        87
      ],
      [
        18,
        22,
        20,
        24,
        25,
        63,
        23,
        100,
        65
      ],
      [
        45,
        60,
        35,
        50,
        30,
        43,
        23,
        109,
        87
      ]
    ],
    options: [
      3,
      3,
      3
    ],
    outputs: [
      [
        650,
        720.2020202020201,
        120.20202020202017
      ],
      [
        480.80808080808083,
        690.0673400673401,
        496.80134680134677
      ]
    ]
  },
  {
    name: "stochrsi",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8,
        4.5,
        2.3,
        5.6,
        4.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0,
        0.6188859795552629,
        0.5532939268747544
      ]
    ]
  },
  {
    name: "sub",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ],
      [
        0.5,
        0.8,
        1,
        1.2
      ]
    ],
    options: [],
    outputs: [
      [
        0.7,
        0.7,
        0,
        0.6000000000000001
      ]
    ]
  },
  {
    name: "sum",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        3.7,
        4.3
      ]
    ]
  },
  {
    name: "tan",
    inputs: [
      [
        0.5,
        0.8,
        1,
        1.2
      ]
    ],
    options: [],
    outputs: [
      [
        0.5463024898437905,
        1.029638557050364,
        1.557407724654902,
        2.5721516221263183
      ]
    ]
  },
  {
    name: "tanh",
    inputs: [
      [
        0.5,
        0.8,
        1,
        1.2
      ]
    ],
    options: [],
    outputs: [
      [
        0.46211715726000974,
        0.664036770267849,
        0.7615941559557649,
        0.8336546070121552
      ]
    ]
  },
  {
    name: "tema",
    inputs: [
      [
        0.8797442207710318,
        0.5320835481520312,
        0.8465479518459532,
        0.6099466306519223,
        0.8820143314256847,
        0.8102345575625111,
        0.2943254272004665,
        0.0044616421850410815,
        0.234020434635124
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.3668432196157343,
        0.011520848287231544,
        0.1556736222630296
      ]
    ]
  },
  {
    name: "todeg",
    inputs: [
      [
        0.5,
        0.8,
        1,
        1.2
      ]
    ],
    options: [],
    outputs: [
      [
        28.64788975654116,
        45.836623610465864,
        57.29577951308232,
        68.75493541569878
      ]
    ]
  },
  {
    name: "torad",
    inputs: [
      [
        28.64788975654116,
        45.88465854046952,
        57.29577951308232,
        68.7549354153518
      ]
    ],
    options: [],
    outputs: [
      [
        0.5,
        0.800838367684529,
        1,
        1.199999999993944
      ]
    ]
  },
  {
    name: "tr",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        45,
        60,
        35,
        50,
        30
      ]
    ],
    options: [],
    outputs: [
      [
        12,
        23,
        40,
        11,
        30
      ]
    ]
  },
  {
    name: "trima",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.3,
        1.325
      ]
    ]
  },
  {
    name: "trix",
    inputs: [
      [
        1.3966500466384297,
        1.4256820636681309,
        1.7446925000006912,
        1.1514055605354987,
        1.6271639241370024,
        1.26142528144813,
        1.992250066605329,
        1.7999838982706726,
        1.8246775678021594
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        4.517382184240376,
        4.184470590184992
      ]
    ]
  },
  {
    name: "trunc",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [],
    outputs: [
      [
        1,
        1,
        1,
        1
      ]
    ]
  },
  {
    name: "tsf",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.0333333333333328,
        1.7333333333333352
      ]
    ]
  },
  {
    name: "typprice",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        1.2,
        1.5,
        1,
        1.8,
        3.9
      ]
    ],
    options: [],
    outputs: [
      [
        16.4,
        19.5,
        20.333333333333332,
        16.93333333333333,
        16.299999999999997
      ]
    ]
  },
  {
    name: "ultosc",
    inputs: [
      [
        0.4844607664924354,
        0.10245326013924771,
        0.38124593678999685,
        0.21441124085501784,
        0.31562298592684646,
        0.43799772134676873,
        0.3108574894422216,
        0.8341656961800061,
        0.4594018758921339,
        0.12870860794579708,
        0.007681304089770857,
        0.371192439676878,
        0.6133732086229318,
        0.2287549995113214,
        0.8784617334214211,
        0.47432851738091464
      ],
      [
        0.6712482823886683,
        0.2710839973791529,
        0.8824814710787547,
        0.7297129681982485,
        0.8438256429703093,
        0.9186045100858536,
        0.5211324316141838,
        0.8551113541934349,
        0.5972116420590263,
        0.702371801512179,
        0.592455521818951,
        0.5583263616547388,
        0.07770234261143649,
        0.286828928748165,
        0.925975456709008,
        0.9300742793820843
      ],
      [
        0.8747818823903043,
        0.5277228983673723,
        0.7305927940689151,
        0.5656354260510095,
        0.6187087286564563,
        0.21131908255605347,
        0.7773757470667043,
        0.3413690653755519,
        0.4674729402950214,
        0.44873253858000206,
        0.88980035952684,
        0.7896561907150282,
        0.18633206567843208,
        0.5489849797384977,
        0.9426998628567395,
        0.7736176713884332
      ]
    ],
    options: [
      5,
      9,
      14
    ],
    outputs: [
      [
        102.7665434184358,
        67.29715537999449
      ]
    ]
  },
  {
    name: "var",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.04222222222222172,
        0.10888888888888948
      ]
    ]
  },
  {
    name: "vhf",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        0.5
      ]
    ]
  },
  {
    name: "vidya",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3,
      6,
      0.2
    ],
    outputs: [
      []
    ]
  },
  {
    name: "volatility",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        7.345898326428308
      ]
    ]
  },
  {
    name: "vosc",
    inputs: [
      [
        45,
        60,
        35,
        50,
        30,
        93,
        13,
        14,
        20,
        10,
        39
      ]
    ],
    options: [
      3,
      6
    ],
    outputs: [
      [
        10.543130990415335,
        -3.2028469750889683,
        2.1276595744680913,
        -57.27272727272727,
        -51.111111111111114,
        -26.984126984126984
      ]
    ]
  },
  {
    name: "vwma",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ],
      [
        45,
        60,
        35,
        50
      ]
    ],
    options: [
      3
    ],
    outputs: [[1.2785714285714285, 1.4827586206896552]]
  },
  {
    name: "wad",
    inputs: [
      [
        30,
        35,
        40
      ],
      [
        18,
        22,
        20
      ],
      [
        1.2,
        1.5,
        1
      ]
    ],
    options: [],
    outputs: [
      [
        0.30000000000000004,
        -38.7
      ]
    ]
  },
  {
    name: "wcprice",
    inputs: [
      [
        30,
        35,
        40
      ],
      [
        18,
        22,
        20
      ],
      [
        1.2,
        1.5,
        1
      ]
    ],
    options: [],
    outputs: [
      [
        12.600000000000001,
        15,
        15.5
      ]
    ]
  },
  {
    name: "wilders",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.2333333333333334,
        1.4222222222222223
      ]
    ]
  },
  {
    name: "willr",
    inputs: [
      [
        30,
        35,
        40,
        25,
        20
      ],
      [
        18,
        22,
        20,
        24,
        25
      ],
      [
        1.2,
        1.5,
        1,
        1.8,
        1.9
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        -177.27272727272728,
        -191,
        -190.5
      ]
    ]
  },
  {
    name: "wma",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.2,
        1.4833333333333334
      ]
    ]
  },
  {
    name: "zlema",
    inputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ],
    options: [
      3
    ],
    outputs: [
      [
        1.2,
        1.5,
        1,
        1.8
      ]
    ]
  }
].freeze
