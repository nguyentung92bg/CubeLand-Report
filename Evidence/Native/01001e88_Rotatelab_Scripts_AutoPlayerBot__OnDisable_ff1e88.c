/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$OnDisable
void Rotatelab_Scripts_AutoPlayerBot__OnDisable (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$OnDisable
   void Rotatelab_Scripts_AutoPlayerBot__OnDisable (Rotatelab_Scripts_AutoPlayerBot_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__OnDisable_ff1e88(int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  pcVar7 = (char *)(_UNK_01002048 + 0x1001e9c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100204c + 0x1001eb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002050 + 0x1001ebc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002054 + 0x1001ec8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002058 + 0x1001ed4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100205c + 0x1001ee0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002060 + 0x1001eec));
    *pcVar7 = '\x01';
  }
  piVar9 = *(int **)(_UNK_01002064 + 0x1001f00);
  iVar4 = *piVar9;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar9;
  }
  puVar12 = *(undefined4 **)(_UNK_01002068 + 0x1001f24);
  uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x74);
  uVar5 = thunk_FUN_00f00cdc(*puVar12);
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_0100206c + 0x1001f44),0);
  uVar5 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar8,uVar5,0);
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x74) = uVar5;
  thunk_FUN_00ec5080();
  uVar8 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x7c);
  uVar5 = thunk_FUN_00f00cdc(*puVar12);
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_01002070 + 0x1001f9c),0);
  uVar5 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar8,uVar5,0);
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x7c) = uVar5;
  thunk_FUN_00ec5080();
  piVar9 = *(int **)(_UNK_01002074 + 0x1001fd4);
  iVar4 = *piVar9;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar9;
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xc);
  uVar5 = thunk_FUN_00f00cdc(*puVar12);
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_01002078 + 0x1002010),0);
  uVar5 = Rotatelab_GameAction__op_Subtraction_fc0098(uVar8,uVar5,0);
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xc) = uVar5;
  thunk_FUN_00ec5080();
  iVar4 = *(int *)(param_1 + 0x40);
  if (iVar4 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,iVar4,0);
    *(undefined4 *)(param_1 + 0x40) = 0;
    thunk_FUN_00ec5080((int *)(param_1 + 0x40),0);
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(iVar4 + 0x10);
  iVar4 = *(int *)(iVar4 + 0x14);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar4,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar7 = '\x01';
  }
  piVar13 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar14 = piVar9 + 0x20;
  iVar10 = *piVar14;
  if (*(int *)(*piVar13 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar10,0,0);
  if (iVar10 == 0) {
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar4,0,0);
    if (iVar10 == 0) {
      return;
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar4,0);
    if (*(int *)(**(int **)(_UNK_03726bf0 + 0x3726980) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar7 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar7 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar7 = '\x01';
    }
    pfVar6 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar6[1];
    fStack_40 = fStack_40 - *pfVar6;
    *(bool *)(piVar9 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar3 = 0;
    uVar5 = UnityEngine_Sprite__get_texture_35a2e9c(iVar4,0);
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Equality_36033f4(uVar5,0,0);
    if (iVar10 != 0) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar4,0);
      bVar3 = iVar10 == 0;
    }
  }
  else {
    iVar10 = *piVar14;
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar10,iVar4,0);
    if (iVar10 == 0) {
      return;
    }
    if (*piVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,*piVar14,0);
    fVar2 = fStack_3c;
    fVar1 = fStack_40;
    piVar11 = *(int **)(_UNK_03726be0 + 0x37268b0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Implicit_3607ff4(iVar4,0);
    if (iVar10 == 0) {
      pcVar7 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar7 = '\x01';
      }
      pfVar6 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
      fStack_40 = *pfVar6;
      fStack_3c = pfVar6[1];
    }
    else {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar4,0);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
    }
    *(bool *)(piVar9 + 9) = fVar1 == fStack_40 && fVar2 == fStack_3c;
    if (piVar9[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = 0;
    uVar5 = UnityEngine_Sprite__get_texture_35a2e9c(piVar9[0x20],0);
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Implicit_3607ff4(iVar4,0);
    if (iVar10 != 0) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = UnityEngine_Sprite__get_texture_35a2e9c(iVar4,0);
    }
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    bVar3 = 0;
    iVar10 = UnityEngine_Object__op_Equality_36033f4(uVar5,uVar8,0);
    if (iVar10 != 0) {
      bVar3 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar9,iVar4);
      bVar3 = bVar3 ^ 1;
    }
  }
  piVar9[0x20] = iVar4;
  *(byte *)((int)piVar9 + 0x25) = bVar3;
  thunk_FUN_00ec5080(piVar14,iVar4);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar9);
  (**(code **)(*piVar9 + 400))(piVar9,*(undefined4 *)(*piVar9 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar9);
  return;
}

