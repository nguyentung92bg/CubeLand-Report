/* IL2CPP: Rotatelab.Scripts.DockManager$$OnBoosterUsed
void Rotatelab_Scripts_DockManager__OnBoosterUsed (Rotatelab_Scripts_DockManager_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$OnBoosterUsed
   void Rotatelab_Scripts_DockManager__OnBoosterUsed (Rotatelab_Scripts_DockManager_o* __this,
   int32_t boosterType, const MethodInfo* method); */

void Rotatelab_Scripts_DockManager__OnBoosterUsed_1007da4(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int *piVar11;
  undefined1 auStack_38 [28];
  
  if (param_2 == 9) {
    Rotatelab_Scripts_DockManager__AddExtraSlot_1007dd0(param_1);
  }
  pcVar3 = (char *)(_UNK_0101891c + 0x10185e0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018920 + 0x10185f4),param_2,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018924 + 0x1018600));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018928 + 0x101860c));
    *pcVar3 = '\x01';
  }
  switch(param_2 - 1U) {
  case 0:
  case 3:
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    pcVar3 = &UNK_0101864c + _UNK_01018950;
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(&UNK_01018664 + _UNK_01018954));
      *pcVar3 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(&UNK_01018678 + _UNK_01018958) + 0x5c);
    uVar4 = puVar2[2];
    uVar8 = *puVar2;
    uVar9 = puVar2[1];
    if (*(int *)(**(int **)(&UNK_01018684 + _UNK_0101895c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__LocalPosition_2ce550c
              (auStack_38,uVar6,uVar8,uVar9,uVar4,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
    break;
  case 1:
    goto code_r0x01018700;
  case 2:
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    pcVar3 = &UNK_01018764 + _UNK_0101892c;
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(&UNK_01018778 + _UNK_01018930));
      *pcVar3 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(&UNK_01018790 + _UNK_01018934) + 0x5c);
    uVar8 = *puVar2;
    uVar4 = puVar2[1];
    uVar9 = puVar2[2];
    if (*(int *)(**(int **)(&UNK_0101879c + _UNK_01018938) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar10 = 0;
    PrimeTween_Tween__LocalPosition_2ce550c
              (auStack_38,uVar6,uVar8,uVar4,uVar9,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
    pcVar3 = &UNK_01018818 + _UNK_0101893c;
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(&UNK_0101882c + _UNK_01018940));
      *pcVar3 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(&UNK_0101883c + _UNK_01018944) + 0x5c);
    Rotatelab_Scripts_DockManager__RestorePilotBlasterDocks_1008974
              (param_1,*puVar2,puVar2[1],puVar2[2],0x3e19999a);
    iVar5 = *(int *)(param_1 + 0x44);
    puVar2 = *(undefined4 **)(&UNK_01018868 + _UNK_01018948);
    piVar11 = *(int **)(&UNK_01018870 + _UNK_0101894c);
    while( true ) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar10) break;
      if (*(uint *)(iVar5 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar7 = *(int *)(iVar5 + 0x10 + uVar10 * 4);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                        (iVar7,*puVar2);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
      if (iVar1 != 0) {
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar7 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                          (iVar7,*puVar2);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Scripts_BlasterController__SetEndlessScaleAnimationEnabled_1034e24(iVar7,0,0);
      }
      uVar10 = uVar10 + 1;
    }
    break;
  default:
    goto LAB_0101874c;
  }
  if (param_2 - 1U < 2) {
code_r0x01018700:
    pcVar3 = &UNK_0101870c + _UNK_01018960;
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(&UNK_01018720 + _UNK_01018964));
      *pcVar3 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(&UNK_01018734 + _UNK_01018968) + 0x5c);
    Rotatelab_Scripts_DockManager__RestorePilotBlasterDocks_1008974
              (param_1,*puVar2,puVar2[1],puVar2[2],0x3e800000);
  }
LAB_0101874c:
  return;
}

