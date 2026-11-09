/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$SetCollect
void Rotatelab_SeasonPass_SeasonPassRewardBase__SetCollect (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, bool isCollected, bool collectAnimated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassRewardBase$$SetCollect
   void Rotatelab_SeasonPass_SeasonPassRewardBase__SetCollect
   (Rotatelab_SeasonPass_SeasonPassRewardBase_o* __this, bool isCollected, bool collectAnimated,
   const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassRewardBase__SetCollect_10a111c
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_010b16ac + 0x10b113c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b16b0 + 0x10b1150));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b16b4 + 0x10b115c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b16b8 + 0x10b1168));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x14),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,*(char *)(param_1 + 0x2c) == '\0',0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
    pcVar5 = (char *)(_UNK_010b16bc + 0x10b1490);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b16c0 + 0x10b14a4));
      *pcVar5 = '\x01';
    }
    fVar13 = 1.0;
    if (*(char *)(param_1 + 0x2c) == '\0') {
      fVar13 = _UNK_010b16a8;
    }
    iVar3 = *(int *)(**(int **)(_UNK_010b16c4 + 0x10b14c8) + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar1,*(float *)(iVar3 + 0xc) * fVar13,*(float *)(iVar3 + 0x10) * fVar13,
               *(float *)(iVar3 + 0x14) * fVar13,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_UI_Graphic__get_canvasRenderer_371c574(*(int *)(param_1 + 0x10),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasRenderer__SetAlpha_39a59a0(iVar1,0x3f800000,0);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_UI_Graphic__get_canvasRenderer_371c574(*(int *)(param_1 + 0x10),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasRenderer__SetAlpha_39a59a0(iVar1,0x3f000000,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x18),1,0);
    iVar1 = *(int *)(param_1 + 0x18);
    if (param_3 != 0) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_GameObject__get_transform_3601c90(iVar1,0);
      pcVar5 = (char *)(_UNK_010b16d8 + 0x10b1214);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010b16dc + 0x10b1228));
        *pcVar5 = '\x01';
      }
      piVar7 = *(int **)(_UNK_010b16e0 + 0x10b123c);
      puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
      pcVar5 = (char *)(_UNK_010b16e4 + 0x10b124c);
      uVar12 = *puVar4;
      uVar9 = puVar4[1];
      uVar6 = puVar4[2];
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(piVar7);
        puVar4 = *(undefined4 **)(*piVar7 + 0x5c);
        *pcVar5 = '\x01';
      }
      uVar8 = puVar4[3];
      uVar10 = puVar4[4];
      uVar11 = puVar4[5];
      if (*(int *)(**(int **)(_UNK_010b16e8 + 0x10b1288) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Scale_2ce679c
                (&uStack_48,uVar2,uVar12,uVar9,uVar6,uVar8,uVar10,uVar11,0x3e4ccccd,0,0,0,0,0,1,0,0,
                 0,0,0);
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
      pcVar5 = (char *)(_UNK_010b16ec + 0x10b1328);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010b16f0 + 0x10b133c));
        *pcVar5 = '\x01';
      }
      iVar1 = *(int *)(**(int **)(_UNK_010b16f4 + 0x10b1364) + 0x5c);
      PrimeTween_Tween__PunchScale_2ceb894
                (&uStack_48,uVar2,*(float *)(iVar1 + 0xc) * 0.25,*(float *)(iVar1 + 0x10) * 0.25,
                 *(float *)(iVar1 + 0x14) * 0.25,0x3e19999a,0x41200000,1,0,0,1,0,0,0,0);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b16f8 + 0x10b13d8));
      System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010b16fc + 0x10b13f8),0);
      PrimeTween_Tween__OnComplete_2ceddf8(auStack_58,&uStack_38,uVar2,0,0);
      return;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_GameObject__get_transform_3601c90(iVar1,0);
    pcVar5 = (char *)(_UNK_010b16c8 + 0x10b15a8);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b16cc + 0x10b15bc));
      *pcVar5 = '\x01';
    }
    piVar7 = *(int **)(_UNK_010b16d0 + 0x10b15d4);
    iVar3 = *(int *)(*piVar7 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar1,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
               *(undefined4 *)(iVar3 + 0x14),0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b16d4 + 0x10b163c));
      *pcVar5 = '\x01';
    }
    iVar3 = *(int *)(*piVar7 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar1,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
               *(undefined4 *)(iVar3 + 0x14),0);
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x14),0);
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar5 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

