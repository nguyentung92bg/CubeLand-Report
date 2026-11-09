/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$ShouldUseSimpleBox
bool Rotatelab_Scripts_MergedBlockController__ShouldUseSimpleBox (Rotatelab_Scripts_MergedBlockController_o* __this, UnityEngine_Vector3Int_array* positions, UnityEngine_Bounds_o bounds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MergedBlockController$$ShouldUseSimpleBox
   bool Rotatelab_Scripts_MergedBlockController__ShouldUseSimpleBox
   (Rotatelab_Scripts_MergedBlockController_o* __this, UnityEngine_Vector3Int_array* positions,
   UnityEngine_Bounds_o bounds, const MethodInfo* method); */

int Rotatelab_Scripts_MergedBlockController__ShouldUseSimpleBox_10192f0
              (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,float param_6,float param_7,float param_8)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  uint uVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  fStack_4c = param_6;
  fStack_48 = param_7;
  fStack_44 = param_8;
  pcVar3 = (char *)(_UNK_010294d8 + 0x1029330);
  uStack_50 = param_5;
  uStack_58 = param_3;
  uStack_54 = param_4;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010294dc + 0x102935c));
    *pcVar3 = '\x01';
  }
  fVar8 = (param_8 + param_8) * (param_7 + param_7) * (param_6 + param_6);
  if (*(int *)(**(int **)(_UNK_010294e0 + 0x1029374) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar7 = (double)fVar8;
  dVar9 = (double)modf(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),&uStack_40);
  if (NAN(fVar8)) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(dVar9 == -0.5) << 0x1e;
    if (!SUB41(uVar6 >> 0x1e,0)) {
      dVar7 = (double)ceil(SUB84(dVar7 + -0.5,0),(int)((ulonglong)(dVar7 + -0.5) >> 0x20));
      goto LAB_01029410;
    }
    dVar7 = -1.0;
  }
  else {
    uVar6 = in_fpscr & 0xfffffff | (uint)(dVar9 == 0.5) << 0x1e;
    if (!SUB41(uVar6 >> 0x1e,0)) {
      dVar7 = (double)floor(SUB84(dVar7 + 0.5,0),(int)((ulonglong)(dVar7 + 0.5) >> 0x20));
      goto LAB_01029410;
    }
    dVar7 = 1.0;
  }
  dVar9 = (double)CONCAT44(uStack_3c,uStack_40);
  uVar1 = FUN_00f88224(uStack_40,uStack_3c);
  dVar7 = dVar9 + dVar7;
  if ((uVar1 & 1) == 0) {
    dVar7 = dVar9;
  }
LAB_01029410:
  uVar1 = (uint)(longlong)dVar7;
  uVar6 = uVar6 & 0xfffffff | (uint)(dVar7 == _UNK_010294d0) << 0x1e;
  uVar4 = uVar1;
  if (SUB41(uVar6 >> 0x1e,0)) {
    uVar4 = 0x80000000;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = 0;
  if (*(uint *)(param_2 + 0xc) == uVar4) {
    if ((int)uVar4 < 1) {
      iVar2 = 1;
    }
    else {
      puVar5 = (undefined4 *)(param_2 + 0x10);
      uVar4 = 0;
      do {
        if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924(iVar2);
        }
        uStack_40 = VectorSignedToFloat(*puVar5,(byte)(uVar6 >> 0x16) & 3);
        uStack_3c = VectorSignedToFloat(puVar5[1],(byte)(uVar6 >> 0x16) & 3);
        uStack_38 = VectorSignedToFloat(puVar5[2],(byte)(uVar6 >> 0x16) & 3);
        iVar2 = UnityEngine_Bounds__Internal_Contains_35b7064(&uStack_58,&uStack_40,0);
        if (iVar2 == 0) {
          return 0;
        }
        uVar1 = *(uint *)(param_2 + 0xc);
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 3;
      } while ((int)uVar4 < (int)uVar1);
    }
  }
  return iVar2;
}

