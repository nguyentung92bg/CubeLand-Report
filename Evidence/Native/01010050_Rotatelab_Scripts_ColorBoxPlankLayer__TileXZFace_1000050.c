/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$TileXZFace
void Rotatelab_Scripts_ColorBoxPlankLayer__TileXZFace (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, UnityEngine_Vector3_o c, int32_t normalDir, float worldY, float xStart, int32_t xCount, float zStart, int32_t zCount, float uniformScale, System_Collections_Generic_List_Transform__o* faceList, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$TileXZFace
   void Rotatelab_Scripts_ColorBoxPlankLayer__TileXZFace (Rotatelab_Scripts_ColorBoxPlankLayer_o*
   __this, UnityEngine_Vector3_o c, int32_t normalDir, float worldY, float xStart, int32_t xCount,
   float zStart, int32_t zCount, float uniformScale, System_Collections_Generic_List_Transform__o*
   faceList, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__TileXZFace_1000050
               (undefined4 param_1,float param_2,undefined4 param_3,float param_4,int param_5,
               undefined4 param_6,float param_7,int param_8,float param_9,int param_10,
               undefined4 param_11,undefined4 param_12)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  int iStack_80;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  if (param_5 < 1) {
    uStack_5c = 0;
    uStack_60 = 0x40490fdb;
    uStack_58 = 0;
    UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&uStack_70,&uStack_60,0);
    uVar3 = uStack_70;
    uVar5 = uStack_6c;
    uVar6 = uStack_68;
    uVar7 = uStack_64;
  }
  else {
    pcVar4 = (char *)(_UNK_01010224 + 0x1010088);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01010228 + 0x101009c));
      *pcVar4 = '\x01';
    }
    puVar1 = *(undefined4 **)(**(int **)(_UNK_0101022c + 0x10100b0) + 0x5c);
    uVar3 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
  }
  if (1 < param_10 + 1) {
    iVar8 = param_8 + 3;
    iStack_80 = 0;
    do {
      if (3 < iVar8) {
        iVar9 = 0;
        iVar10 = param_10 + -2;
        if (iStack_80 * 2 < param_10 + -2) {
          iVar10 = iStack_80 << 1;
        }
        fVar11 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x16) & 3);
        iVar10 = (int)(iVar8 + ((uint)(iVar8 >> 0x1f) >> 0x1e)) >> 2;
        do {
          iVar2 = param_8 + -4;
          if (iVar9 < param_8 + -4) {
            iVar2 = iVar9;
          }
          fVar12 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
          Rotatelab_Scripts_ColorBoxPlankLayer__SpawnPlank_1000580
                    (param_1,param_2 + param_7 + fVar12 + 2.0,param_6,
                     param_4 + param_9 + fVar11 + 1.0,uVar3,uVar5,uVar6,uVar7,param_11,param_12);
          iVar9 = iVar9 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      iStack_80 = iStack_80 + 1;
    } while (iStack_80 != (param_10 + 1) / 2);
  }
  return;
}

