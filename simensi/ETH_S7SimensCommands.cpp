#include"ETH_S7SimensCommands.h"
ETH_S7SimensCommands::ETH_S7SimensCommands() {
    static  byte FIRST_HAND_SHAKE[] = { 0x03, 0x00, 0x00, 0x16,0x11, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0xc1, 0x02, 0x04, 0x00, 0xc2, 0x02, 0x0d, 0x04, 0xc0, 0x01, 0x0a };
    static  byte SECOND_HAND_SHAKE[] = { 0x03, 0x00, 0x00, 0x19, 0x02, 0xf0, 0x80, 0x32, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x08, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x64, 0x00, 0x64, 0x03, 0xc0 };
    static  byte THIRD_HAND_SHAKE[] = { 0x03, 0x00, 0x00, 0x1d, 0x02, 0xf0, 0x80, 0x32, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0c, 0x00, 0x00, 0x04, 0x01, 0x12, 0x08, 0x82, 0x01, 0x00, 0x14, 0x00, 0x01, 0x3b, 0x01, 0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };
    static  byte CNC_ID[] = {
            0x03, 0x00, 0x00, 0x1d,    //12+17=29
            0x02, 0xf0, 0x80, 0x32, 0x01,
            0x00, 0x00, 0x00, 0x11,
            0x00, 0x0c,  //10+2
            0x00, 0x00,
            0x04,
            0x01,
            0x12,0x08,0x82,0x01,0x00,0xa7,0x00,0x01,0x7f,0x01,
            0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };
    static  byte CNC_TYPE[] = {
          0x03, 0x00, 0x00, 0x1d,    //12+17=29
          0x02, 0xf0, 0x80, 0x32, 0x01,
          0x00, 0x00, 0x00, 0x11,
          0x00, 0x0c,  //10+2
          0x00, 0x00,
          0x04,
          0x01,
          0x12, 0x08, 0x82, 0x01, 0x46, 0x78, 0x00, 0x04, 0x1a, 0x01,
          0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };
    static  byte READ_VAR_INFO[] =
    {
          0x03, 0x00, 0x00, 0x1d,    //12+17=29
          0x02, 0xf0, 0x80, 0x32, 0x01,
          0x00, 0x00, 0x00, 0x11,
          0x00, 0x0c,  //10+2
          0x00, 0x00,
          0x04,
          0x01,
          0x12, 0x08, 0x82, 0x01, 0x46, 0x78, 0x00, 0x04, 0x1a, 0x01,
          0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };
    static  byte MANUACTURE_DATE[] = {

          0x03, 0x00, 0x00, 0x1d,    //12+17=29
          0x02, 0xf0, 0x80, 0x32, 0x01,
          0x00, 0x00, 0x00, 0x11,
          0x00, 0x0c,  //10+2
          0x00, 0x00,
          0x04,
          0x01,
          0x12, 0x08, 0x82, 0x01, 0x46, 0x78, 0x00, 0x04, 0x1a, 0x01,
          0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };
    static  byte CNC_MODE[] = { 0x03, 0x00, 0x00, 0x27,    //22+17=39
        0x02, 0xf0, 0x80, 0x32, 0x01,
        0x00, 0x00, 0x00, 0x14,
        0x00, 0x16,  //20+2
        0x00, 0x00,
        0x04,
        0x02,
        0x12, 0x08, 0x82, 0x21, 0x00, 0x03, 0x00, 0x01, 0x7f, 0x01,
        0x12, 0x08, 0x82, 0x41, 0x00, 0x0c, 0x00, 0x01, 0x7f, 0x01,
        0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };
    static  byte CNC_STATUS[] = {
      0x03,0x00,0x00,0x1d,
      0x02,0xf0,0x80,0x32,0x01,
      0x00,0x00,0x00,0x11,//程序状态
       0x00,0x0c,
      0x00,0x00,
      0x04,
      0x01,
      0x12,0x08,0x82,0x41,0x00,0x6e,0x00,0x01,0x7f,0x01,
      0x03,0x00,0x00,0x07,0x02,0xf0,0x00 };
    static  byte CNC_PRODUCTS[] = {
      0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,        // NCK_ADDRESS1
      0x12, 0x08, 0x82, 0x41, 0x00, 0x79, 0x00, 0x01, 0x7f, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00//实际工件数

    };
    static  byte CNC_SET_PRODUCTS[] = {
      0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x00, 0x77, 0x00, 0x01, 0x7f, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00

    };
    static  byte CNC_FEEDSETSPEED[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x00, 0x02, 0x00, 0x01, 0x7f, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };  //FSET};
    static  byte CNC_FEEDACTSPEED[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,

      0x12,0x08,0x82,0x41,0x00,0x01,0x00,0x01,0x7f,0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };//FACT};
    static  byte CNC_FEEDRATE[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x00, 0x03, 0x00, 0x01, 0x7f, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };
    static  byte CNC_SPINDLESETSPEED[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x01, 0x00, 0x03, 0x00, 0x03, 0x72, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };
    static  byte CNC_SPINDLEACTSPEED[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x00, 0x02, 0x00, 0x01, 0x72, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };
    static  byte CNC_SPINDRATE[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12,0x08,0x82,0x01,0x00,0x04,0x00,0x03,0x72,0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };
    //循环时间
    static  byte RUN_TIME[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12,0x08,0x82,0x41,0x00,0x09,0x00,0x01,0x3b,0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };
    //剩余时间
    static  byte REMAIN_TIME[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x01, 0x2a, 0x00, 0x01, 0x7f, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };
    static  byte  PROGRAM_NAME[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12,0x08,0x82,0x41,0x00,0x03,0x00,0x01,0x7d,0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };
    ///当前加工程序内容
    static  byte PROGRAM_CONTENT[] = { 0x03,0x00,0x00,0x1d,
      0x02,0xf0,0x80,0x32,0x01,
      0x00,0x00,0x00,0x11,
      0x00,0x0c,
      0x00,0x00,
      0x04,
      0x01,
      0x12,0x08,0x82,0x41,0x00,0x04,0x00,0x02,0x7d,0x01,
      0x03,0x00,0x00,0x07,0x02,0xf0,0x00 };
    // 刀具号
    static  byte TOOL_NUMBER[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
          0x02, 0xf0, 0x80, 0x32, 0x01,
          0x00, 0x00, 0x00, 0x14,
          0x00, 0x0c,  //10+2
          0x00, 0x00,
          0x04,
          0x01,
        //0x12, 0x08, 0x82, 0x41, 0x00, 0x17, 0x00, 0x01, 0x7f, 0x01,//828d刀具号
        0x12, 0x08, 0x82, 0x41, 0x00, 0x21, 0x00, 0x01, 0x7f, 0x01,//840dsl自定义刀具号
        0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    /// <summary>
    /// 刀具半径D
    /// </summary>
    static  byte TOOL_D_NUMBER[] =
    {
    0x03, 0x00, 0x00, 0x1d,    //12+17=29
    0x02, 0xf0, 0x80, 0x32, 0x01,
    0x00, 0x00, 0x00, 0x14,
    0x00, 0x0c,  //10+2
    0x00, 0x00,
    0x04,
    0x01,
    // 0x12, 0x08, 0x82, 0x41, 0x00, 0x18, 0x00, 0x01, 0x7f, 0x01,
     0x12, 0x08, 0x82, 0x41, 0x00, 0x23, 0x00, 0x01, 0x7f, 0x01,
     0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };

    //刀具长度H
    static  byte TOOL_H_NUMBER[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x01, 0xb6, 0x00, 0x01, 0x7f, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    //长度补偿X
    static  byte TOOL_X_LENGTH[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x21,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x00, 0x71, 0x00, 0x01, 0x7f, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    //长度补偿Z
    static  byte TOOL_Z_LENGTH[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
        //0x12, 0x08, 0x82, 0x41, 0x00, 0x73, 0x00, 0x01, 0x7f, 0x01,
        0x12, 0x08, 0x82, 0x81, 0x00, 0x11, 0x00, 0x01, 0x14, 0x23,

        0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    //刀具磨损半径
    static  byte TOOL_RADIU[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12,0x08,0x82,0x41,0x00,0x00,0x00,0x01,0x7f,0x01,

        // 0x12, 0x08, 0x82, 0x41, 0x00, 0x17, 0x00, 0x01, 0x7f, 0x01,
         0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    //刀沿位置EDG
    static  byte TOOL_EDG[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x00, 0x02, 0x00, 0x02, 0x14, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    static  byte posflag[] = { 0x01, 0x02, 0x03, 0x04, 0x05 };

    //机械坐标MECPOS
    static  byte MACHINE_POS[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x00, 0x02, 0x00,  0x01, 0x74, 0x01,
        //0x12, 0x08, 0x82, 0x41, 0x00, 0x02, 0x00, 0x02, 0x74, 0x01,
        //0x12, 0x08, 0x82, 0x41, 0x00, 0x02, 0x00, 0x03, 0x74, 0x01,
        0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    //相对坐标，工件坐标
    static  byte RELATIVELY_POS[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x11,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x00, 0x19, 0x00, 0x01, 0x70, 0x01,
        //0x12, 0x08, 0x82, 0x41, 0x00, 0x19, 0x00, 0x02, 0x70, 0x01,
        //0x12, 0x08, 0x82, 0x41, 0x00, 0x19, 0x00, 0x03, 0x70, 0x01,
        0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    //剩余坐标
    static  byte REMAIN_POS[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0x41, 0x00, 0x03, 0x00, 0x01, 0x74, 0x01,  //DIS1
      //0x12, 0x08, 0x82, 0x41, 0x00, 0x03, 0x00, 0x02, 0x74, 0x01,
      //0x12, 0x08, 0x82, 0x41, 0x00, 0x03, 0x00, 0x03, 0x74, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    /// <summary>
    /// 轴名称
    /// </summary>
    static  byte AXIS_NAME[] = { 0x03,0x00,0x00,0x1d,
       0x02,0xf0,0x80,0x32,0x01,
       0x00,0x00,0x00,0x30,
       0x00,0x0c,
       0x00, 0x00,
       0x04,
       0x01,
       0x12,0x08,0x82,0x41, 0x4e,0x70, 0x00,0x01, 0x1a,0x05,////读4个数据 };
       0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    /// <summary>
    /// 母线电压26
    /// </summary>
    static  byte DRIVE_VOLTAGE[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0xa1, 0x00, 0x1a, 0x00, 0x01, 0x82, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    /// <summary>
    /// 实际电流30
    /// </summary>
    static  byte DRIVER_CURRENT[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0xa1, 0x00, 0x1e, 0x00, 0x01, 0x82, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };


    static  byte CNC_SPLOAD[] = { 0x03,0x00,0x00,0x1d,
                0x02,0xf0,0x80,0x32,0x01,
                0x00,0x00,0x00,0x14, //主轴负载
                0x00,0x0c,
                0x00,0x00,
                0x04,
                0x01,
                0x12,0x08,0x82,0x01,0x00,0x10,0x00,0x03,0x72,0x01,
                0x03,0x00,0x00,0x07,0x02,0xf0,0x00 };

    /// <summary>
    /// 电机功率32
    /// </summary>
    static  byte DRIVER_LOAD1[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
          0x02, 0xf0, 0x80, 0x32, 0x01,
          0x00, 0x00, 0x00, 0x15,
          0x00, 0x0c,  //10+2
          0x00, 0x00,
          0x04,
          0x01,
          0x12, 0x08, 0x82, 0xa2, 0x00, 0x20, 0x00, 0x01, 0x82, 0x01, //0xa2为X轴  0x1a为编号
          0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    static  byte DRIVER_LOAD2[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x16,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0xa2, 0x00, 0x1d, 0x00, 0x01, 0x82, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    static  byte DRIVER_LOAD3[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x17,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0xa2, 0x00, 0x1e, 0x00, 0x01, 0x82, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    static  byte DRIVER_LOAD4[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x18,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0xa2, 0x00, 0x1f, 0x00, 0x01, 0x82, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    /// <summary>
    /// 电机温度37
    /// </summary>
    static  byte DRIVER_TEMPER[] = { 0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0xa1, 0x00, 0x25, 0x00, 0x01, 0x82, 0x01,
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    //主轴电机温度
    static  byte CNC_SPMotorTemperature[] = {
          0x03,0x00,0x00,0x1d,
          0x02,0xf0,0x80,0x32,0x01,
          0x00,0x00,0x00,0x11,
          0x00,0x0c,
          0x00,0x00,
          0x04,
          0x01,0x12,0x08,0x82,0xa1,0x00,0x23,0x00,0x01,0x82,0x01,
          0x03,0x00,0x00,0x07,0x02,0xf0,0x00 };


    static  byte CNC_ALARM_NUM[] = { 0x03,0x00,0x00, 0x1d,                     //all length=10+19=29
          0x02,0xf0,0x80,0x32,
          0x01,
          0x00,0x00,0x00,0x0c,
          0x00,0x0c,                 //LENGTH=10+2
          0x00,0x00,
          0x04,
          0x01,
         0x12,0x08,0x82,0x01,0x00,0x07,0x00,0x01,0x7f,0x01,
         0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };//报警个数

    /// <summary>
 /// 报警信息
 /// </summary>
    static  byte CNC_ALARM[] = { 0x03,0x00,0x00,
  0x27,                     //all length=20+19=39
  0x02,0xf0,0x80,0x32,
  0x01,
  0x00,0x00,0x00,0x0d,
  0x00,0x16,                 //LENGTH=20+2
  0x00,0x00,
  0x04,
  0x02,

  0x12,0x08,0x82,0x01,
  0x00,0x01,
  0x00,0x01,    //第几个报警
  0x77,0x01,   //报警号   

  0x12,0x08,0x82,0x01,0x00,0x04,0x00,0x01,0x77,0x01,   //报警时间

    };

    //CNC当前报警
    static  byte CNC_Alarm_NUM[] = {
          0x03,0x00,0x00,
          0x1d,
          0x02,0xf0,0x80,0x32,
          0x01,
          0x00,0x00,0x00,0x11,
          0x00,0x0c,0x00,0x00,0x04,0x01,0x12,
          0x08,0x82,0x00,0x00,0x00,0x00,0x01,
          0x75,0x01,0x03,0x00,0x00,0x07,0x02,0xf0,0x00 };

    /// <summary>
    /// T工件坐标系
    /// </summary>
    static  byte CNC_T_WORK_SYSTEM[] = { 0x03,0x00,0x00,0x31,          //169=15*10+19
      0x02,0xf0,0x80,0x32, 0x01,
      0x00,0x00,0x00,0x02,
      0x00,0x20,                                       //9*16+8=152=15*10+2
      0x00,0x00,
      0x04,
      0x03,
      0x12,0x08,0x82,0x41,0x00,0x01,0x00,0x04,0x12,0x01,
      0x12,0x08,0x82,0x41,0x00,0x01,0x00,0x05,0x12,0x01,
      0x12,0x08,0x82,0x41,0x00,0x01,0x00,0x06,0x12,0x01
    };


    /// <summary>
    /// M工件坐标系
    /// </summary>
    static  byte CNC_M_WORK_SYSTEM[] = { 0x03,0x00,0x00,0x31,          //169=15*10+19
      0x02,0xf0,0x80,0x32, 0x01,
      0x00,0x00,0x00,0x02,
      0x00,0x20,                                       //9*16+8=152=15*10+2
      0x00,0x00,
      0x04,
      0x03,
      0x12,0x08,0x82,0x41,0x00,0x01,0x00,0x04,0x12,0x01,
      0x12,0x08,0x82,0x41,0x00,0x01,0x00,0x05,0x12,0x01,
      0x12,0x08,0x82,0x41,0x00,0x01,0x00,0x06,0x12,0x01
    };

    /// <summary>
    /// 读取r变量
    /// </summary>
    static  byte CNC_READ_R[] = {
    0x03, 0x00, 0x00, 0x1d,    //12+17=29
    0x02, 0xf0, 0x80, 0x32, 0x01,
    0x00, 0x00, 0x00, 0x10,
    0x00, 0x0c,  //10+2
    0x00, 0x00,
    0x04,
    0x01,
    0x12,0x08,0x82,0x41, 0x00,0x01,0x01,0x2c,       // 后两位为R10=b-1=10
    0x15,0x01,
    0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00 };

    /// <summary>
    /// 写R变量
    /// </summary>
    static  byte CNC_WRITE_R[] = { 0x03,0x00,0x00,0x29,
  0x02,0xf0,0x80,0x32,0x01,
  0x00,0x00,0x00,0x12,
  0x00,0x0c,0x00,0x0c,0x05,0x01,
  0x12,0x08,0x82,0x41,0x00,0x01,
  0x00,0x02,     //R1
  0x15,0x01,
  0x00,0x09,
  0x00,0x08,
  0x00,0x00,0x00,0x00,0x44,0xf4,0x20,0x41//double对应的byte
    };

    /// <summary>
    /// 读取R驱动器地址
    /// </summary>
    static  byte R_Driver[] = {
      0x03, 0x00, 0x00, 0x1d,    //12+17=29
      0x02, 0xf0, 0x80, 0x32, 0x01,
      0x00, 0x00, 0x00, 0x14,
      0x00, 0x0c,  //10+2
      0x00, 0x00,
      0x04,
      0x01,
      0x12, 0x08, 0x82, 0xa1, 0x00, 0x25, 0x00, 0x01, 0x82, 0x01,//倒数第三位R驱动器下标，如R37[1],0x03=R37[2];倒数第五位为地址，如25为十进制37，第七位为轴，依次递增切换轴
      0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };
    static byte DRIVER_SPLOAD[] = 
    {
        0x03, 0x00, 0x00, 0x1d,    //12+17=29
            0x02, 0xf0, 0x80, 0x32, 0x01,
            0x00, 0x00, 0x00, 0x15,
            0x00, 0x0c,  //10+2
            0x00, 0x00,
            0x04,
            0x01,
            0x12, 0x08, 0x82, 0xa1, 0x00, 0x21, 0x00, 0x01, 0x82, 0x01,
            0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };

    static byte DRIVER_SPLOAD2[] = 
    {
        0x03, 0x00, 0x00, 0x1d,    //12+17=29
            0x02, 0xf0, 0x80, 0x32, 0x01,
            0x00, 0x00, 0x00, 0x15,
            0x00, 0x0c,  //10+2
            0x00, 0x00,
            0x04,
            0x01,
            0x12, 0x08, 0x82, 0xa2, 0x00, 0x21, 0x00, 0x01, 0x82, 0x01,
            0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };

    static byte CurrentPro[] = {
         0x03,0x00,0x00,0x1d,
             0x02,0xf0,0x80,0x32,0x01,
             0x00,0x00,0x00,0x50,
             0x00,0x0c,
             0x00,0x00,
             0x04,
             0x01,
             0x12,0x08,0x82,0x41, 0x00,0x1f,       //1e  可以
             0x00,0x01,
             0x7d,0x01,
             0x03, 0x00, 0x00, 0x07, 0x02, 0xf0, 0x00
    };
}


byte* ETH_S7SimensCommands::getCommands(byte* cmdName)
{
    string value; value.clear();
    for (size_t i = 0; i < sizeof(cmdName); i++)
    {
        value += std::to_string(cmdName[i]);
    }
     
    if (value == "FIRST_HAND_SHAKE")
    {
        return FIRST_HAND_SHAKE;
    }
    else if (value == "SECOND_HAND_SHAKE")
    {
        return SECOND_HAND_SHAKE;
    }
    else if (value == "THIRD_HAND_SHAKE")
    {
        return THIRD_HAND_SHAKE;
    }
    else if (value == "CNC_ID") {
        return CNC_ID;

    }
    else if (value == "CNC_TYPE") {
        return CNC_TYPE;
    }
    else if (value == "READ_VAR_INFO") {
        return READ_VAR_INFO;
    }
    else if (value == "MANUFACTURE_DATE")
    {
        return MANUFACTURE_DATE;
    }
    else if (value == "CNC_MODE") {
        return CNC_MODE;
    }
    else if (value == "CNC_STATUS") {
        return CNC_STATUS;
    }
    else if (value == "CNC_PRODUCTS") {
        return CNC_PRODUCTS;

    }
    else if (value == "CNC_SET_PRODUCTS") {

        return CNC_SET_PRODUCTS;
    }
    else if (value == "CNC_FEEDSETSPEED") {
        return CNC_FEEDSETSPEED;
    }
    else if (value == "CNC_FEEDACTSPEED") {
        return CNC_FEEDACTSPEED;
    }
    else if (value == "CNC_FEEDRATE") {
        return CNC_FEEDRATE;
    }
    else if (value == "CNC_SPINDLESETSPEED") {
        return CNC_SPINDLESETSPEED;
    }
    else if (value == "CNC_SPINDLEACTSPEED") {
        return CNC_SPINDLEACTSPEED;
    }
    else if (value == "CNC_SPINDRATE") {
        return CNC_SPINDRATE;
    }
    else if (value == "RUN_TIME") {
        return RUN_TIME;
    }
    else if (value == "REMAIN_TIME") {
        return REMAIN_TIME;
    }
    else if (value == "PROGRAM_NAME") {
        return PROGRAM_NAME;
    }
    else if (value == "PROGRAM_CONTENT") {
        return PROGRAM_CONTENT;
    }
    else if (value == "TOOL_NUMBER") {
        return TOOL_NUMBER;

    }
    else if (value == "TOOL_D_NUMBER") {
        return TOOL_D_NUMBER;

    }
    else if (value == "TOOL_H_NUMBER") {
        return TOOL_H_NUMBER;

    }
    else if (value == "TOOL_X_LENGTH") {
        return TOOL_X_LENGTH;

    }
    else if (value == "TOOL_Z_LENGTH") {
        return TOOL_Z_LENGTH;

    }
    else if (value == "TOOL_RADIU") {
        return TOOL_RADIU;

    }
    else if (value == "TOOL_EDG") {
        return TOOL_EDG;

    }
    else if (value == "posflag") {
        return posflag;

    }
    else if (value == "MACHINE_POS") {
        return MACHINE_POS;

    }
    else if (value == "RELATIVELY_POS") {
        return RELATIVELY_POS;

    }
    else if (value == "REMAIN_POS") {
        return REMAIN_POS;

    }
    else if (value == "AXIS_NAME") {
        return AXIS_NAME;

    }
    else if (value == "DRIVE_VOLTAGE") {
        return DRIVE_VOLTAGE;

    }
    else if (value == "DRIVER_CURRENT") {
        return DRIVER_CURRENT;

    }
    else if (value == "CNC_SPLOAD") {
        return CNC_SPLOAD;

    }
    else if (value == "DRIVER_LOAD1") {
        return DRIVER_LOAD1;

    }
    else if (value == "DRIVER_LOAD2") {
        return DRIVER_LOAD2;

    }
    else if (value == "DRIVER_LOAD3") {
        return DRIVER_LOAD3;

    }
    else if (value == "DRIVER_LOAD4") {
        return DRIVER_LOAD4;

    }
    else if (value == "DRIVER_TEMPER") {
        return DRIVER_TEMPER;

    }
    else if (value == "CNC_SPMotorTemperature") {
        return CNC_SPMotorTemperature;

    }
    else if (value == "CNC_ALARM_NUM") {
        return CNC_ALARM_NUM;

    }
    else if (value == "CNC_Alarm") {
        return CNC_ALARM;

    }
    else if (value == "CNC_T_WORK_SYSTEM") {
        return CNC_T_WORK_SYSTEM;

    }
    else if (value == "CNC_M_WORK_SYSTEM") {
        return CNC_M_WORK_SYSTEM;
    }
    else if (value == "CNC_READ_R") {
        return CNC_READ_R;
    }
    else if (value == "CNC_WRITE_R") {
        return CNC_WRITE_R;
    }
    else if (value == "R_Driver") {
        return R_Driver;
    }
    else
    {
        cout << "Error!!! Didnt find the Command you want.\n";
        return NULL;
    }
}

ETH_S7SimensCommands::~ETH_S7SimensCommands()
{
}