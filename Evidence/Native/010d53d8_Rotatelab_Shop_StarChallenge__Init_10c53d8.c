/* IL2CPP: Rotatelab.Shop.StarChallenge$$Init
void Rotatelab_Shop_StarChallenge__Init (Rotatelab_Shop_StarChallenge_o* __this, Rotatelab_Shop_StarChallengeSO_StarChallenges_o* data, int32_t order, UnityEngine_RectTransform_o* targetRect, int32_t totalChallengeCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallenge$$Init
   void Rotatelab_Shop_StarChallenge__Init (Rotatelab_Shop_StarChallenge_o* __this,
   Rotatelab_Shop_StarChallengeSO_StarChallenges_o* data, int32_t order,
   UnityEngine_RectTransform_o* targetRect, int32_t totalChallengeCount, const MethodInfo* method);
    */

void Rotatelab_Shop_StarChallenge__Init_10c53d8
               (int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [2];
  int iStack_2c;
  
  iStack_2c = 0;
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  auStack_34[0] = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(int *)(param_1 + 0x34) = param_2;
  uStack_40 = 0;
  thunk_FUN_00ec5080();
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(int *)(param_1 + 0x38) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x30),param_4);
  iStack_2c = param_3 + 1;
  piVar7 = *(int **)(param_1 + 0x14);
  uVar2 = System_Int32__ToString_2b6b9ec(&iStack_2c,0);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar2,*(undefined4 *)(*piVar7 + 0x2b4));
  if (param_3 != 0) {
    iVar3 = param_5 + -1;
  }
  if (param_3 == 0 || iVar3 == param_3) {
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__get_anchoredPosition_3613500(&fStack_48,iVar3,0);
    fVar1 = fStack_48;
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__get_sizeDelta_3613710(&fStack_48,*(int *)(param_1 + 0x28),0);
    fVar8 = -4.0;
    if (param_3 == 0) {
      fVar8 = 4.0;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar3,fVar1,fStack_48 / fVar8,0);
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__get_sizeDelta_3613710(&fStack_48,iVar3,0);
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__get_sizeDelta_3613710(&fStack_48,*(int *)(param_1 + 0x28),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_sizeDelta_3613820(iVar3,fStack_48 * 0.5,uStack_44,0);
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x20),*(int *)(iVar3 + 8) == 1,0);
  iVar6 = *(int *)(param_1 + 0x1c);
  if (*(int *)(iVar3 + 8) == 1) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = UnityEngine_Component__get_transform_35fe190(iVar6,0);
    pcVar5 = (char *)(_UNK_010d585c + 0x10d55ec);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d5860 + 0x10d5600));
      *pcVar5 = '\x01';
    }
    iVar4 = *(int *)(**(int **)(_UNK_010d5864 + 0x10d561c) + 0x5c);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar6,*(float *)(iVar4 + 0xc) * _UNK_010d5858,
               *(float *)(iVar4 + 0x10) * _UNK_010d5858,*(float *)(iVar4 + 0x14) * _UNK_010d5858,0);
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (*(int *)(param_1 + 0x1c),*(undefined4 *)(iVar3 + 0x10),0);
    piVar7 = *(int **)(param_1 + 0x18);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar7 + 0x2b0))
              (piVar7,**(undefined4 **)(*(int *)(*(int *)(_UNK_010d5868 + 0x10d5698) + 0x48) + 0x5c)
               ,*(undefined4 *)(*piVar7 + 0x2b4));
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    auStack_34[0] = *(undefined4 *)(iVar3 + 0x14);
    uStack_40 = 0;
    iVar3 = *(int *)(param_1 + 0x20);
    thunk_FUN_00ec5080(auStack_34);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Selectable__set_spriteState_39bff3c
              (iVar3,uStack_40,uStack_3c,uStack_38,auStack_34[0],0);
  }
  else {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = UnityEngine_Component__get_transform_35fe190(iVar6,0);
    pcVar5 = (char *)(_UNK_010d586c + 0x10d5754);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d5870 + 0x10d5768));
      *pcVar5 = '\x01';
    }
    iVar4 = *(int *)(**(int **)(_UNK_010d5874 + 0x10d5784) + 0x5c);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar6,*(float *)(iVar4 + 0xc) * _UNK_010d5854,
               *(float *)(iVar4 + 0x10) * _UNK_010d5854,*(float *)(iVar4 + 0x14) * _UNK_010d5854,0);
    if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (*(int *)(param_1 + 0x1c),*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x10),0);
    piVar7 = *(int **)(param_1 + 0x18);
    if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar7 + 0x2b0))
              (piVar7,*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x20),*(undefined4 *)(*piVar7 + 0x2b4)
              );
  }
  Rotatelab_Shop_StarChallenge__CheckCompleteStatus_10c5878(param_1);
  return;
}

