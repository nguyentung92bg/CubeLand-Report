/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_material
UnityEngine_Material_o* Rotatelab_UI_SlicedFilledImage__get_material (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$get_material
   UnityEngine_Material_o* Rotatelab_UI_SlicedFilledImage__get_material
   (Rotatelab_UI_SlicedFilledImage_o* __this, const MethodInfo* method); */

int Rotatelab_UI_SlicedFilledImage__get_material_1120c08(int *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  undefined4 extraout_r3_03;
  undefined4 unaff_r4;
  undefined4 uVar2;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  
  pcVar3 = (char *)(_UNK_01130d4c + 0x1130c1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130d50 + 0x1130c30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130d54 + 0x1130c3c));
    *pcVar3 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01130d58 + 0x1130c50);
  iVar4 = param_1[4];
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Inequality_36018e4(iVar4,0,0);
  if (iVar4 != 0) {
    return param_1[4];
  }
  uVar1 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Implicit_3607ff4(uVar1,0);
  if (iVar4 != 0) {
    iVar4 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_Sprite__get_associatedAlphaSplitTexture_35a373c(iVar4,0);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
    if (iVar4 != 0) {
      uVar1 = extraout_r3;
      if (*(int *)(**(int **)(_UNK_01130d5c + 0x1130d18) + 0x74) == 0) {
        FUN_00ec3934();
        uVar1 = extraout_r3_00;
      }
      pcVar3 = (char *)(_UNK_037322ac + 0x37321c4);
      if (*pcVar3 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_037322b0 + 0x37321d8));
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_037322b4 + 0x37321e4));
        *pcVar3 = '\x01';
        uVar1 = extraout_r3_01;
      }
      piVar5 = *(int **)(_UNK_037322b8 + 0x37321f8);
      iVar4 = *piVar5;
      if (*(int *)(iVar4 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar4 = *piVar5;
        uVar1 = extraout_r3_02;
      }
      uVar2 = **(undefined4 **)(iVar4 + 0x5c);
      if (*(int *)(**(int **)(_UNK_037322bc + 0x3732218) + 0x74) == 0) {
        thunk_FUN_00ec3934(**(int **)(_UNK_037322bc + 0x3732218));
        uVar1 = extraout_r3_03;
      }
      iVar4 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0,uVar1,unaff_r4,unaff_r5);
      if (iVar4 != 0) {
        uVar1 = UnityEngine_Canvas__GetETC1SupportedCanvasMaterial_39a8ff0(0);
        iVar4 = *piVar5;
        if (*(int *)(iVar4 + 0x74) == 0) {
          thunk_FUN_00ec3934();
          iVar4 = *piVar5;
        }
        **(undefined4 **)(iVar4 + 0x5c) = uVar1;
        thunk_FUN_00ec5080(*(undefined4 *)(*piVar5 + 0x5c),uVar1);
      }
      iVar4 = *piVar5;
      if (*(int *)(iVar4 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar4 = *piVar5;
      }
      return **(int **)(iVar4 + 0x5c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01130d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined4 *)(*param_1 + 0x1bc));
  return iVar4;
}

