/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$TileXYFace
void Rotatelab_Scripts_ColorBoxPlankLayer__TileXYFace (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, UnityEngine_Vector3_o c, int32_t normalDir, float worldZ, float xStart, int32_t xCount, float yStart, int32_t yCount, float uniformScale, System_Collections_Generic_List_Transform__o* faceList, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$TileXYFace
   void Rotatelab_Scripts_ColorBoxPlankLayer__TileXYFace (Rotatelab_Scripts_ColorBoxPlankLayer_o*
   __this, UnityEngine_Vector3_o c, int32_t normalDir, float worldZ, float xStart, int32_t xCount,
   float yStart, int32_t yCount, float uniformScale, System_Collections_Generic_List_Transform__o*
   faceList, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__TileXYFace_10003d4
               (undefined4 param_1,float param_2,float param_3,undefined4 param_4,int param_5,
               undefined4 param_6,float param_7,int param_8,float param_9,int param_10,
               undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  int iStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint auStack_60 [4];
  
  auStack_60[0] = 0xfdb;
  if (0 < param_5) {
    auStack_60[0] = 0x3fc90fdb;
  }
  auStack_60[1] = 0;
  if (param_5 < 1) {
    auStack_60[0] = auStack_60[0] & 0xffff | 0xbfc90000;
  }
  auStack_60[2] = 0;
  UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&uStack_70,auStack_60,0);
  if (1 < param_10 + 1) {
    iVar2 = param_8 + 3;
    iStack_80 = 0;
    do {
      if (3 < iVar2) {
        iVar3 = 0;
        iVar4 = param_10 + -2;
        if (iStack_80 * 2 < param_10 + -2) {
          iVar4 = iStack_80 << 1;
        }
        fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
        iVar4 = (int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1e)) >> 2;
        do {
          iVar1 = param_8 + -4;
          if (iVar3 < param_8 + -4) {
            iVar1 = iVar3;
          }
          fVar6 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
          Rotatelab_Scripts_ColorBoxPlankLayer__SpawnPlank_1000580
                    (param_1,param_2 + param_7 + fVar6 + 2.0,param_3 + param_9 + fVar5 + 1.0,param_6
                     ,uStack_70,uStack_6c,uStack_68,uStack_64,param_11,param_12);
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iStack_80 = iStack_80 + 1;
    } while (iStack_80 != (param_10 + 1) / 2);
  }
  return;
}

