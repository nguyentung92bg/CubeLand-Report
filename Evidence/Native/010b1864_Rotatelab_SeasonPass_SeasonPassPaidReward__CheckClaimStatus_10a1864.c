/* IL2CPP: Rotatelab.SeasonPass.SeasonPassPaidReward$$CheckClaimStatus
void Rotatelab_SeasonPass_SeasonPassPaidReward__CheckClaimStatus (Rotatelab_SeasonPass_SeasonPassPaidReward_o* __this, bool collectAnimated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassPaidReward$$CheckClaimStatus
   void Rotatelab_SeasonPass_SeasonPassPaidReward__CheckClaimStatus
   (Rotatelab_SeasonPass_SeasonPassPaidReward_o* __this, bool collectAnimated, const MethodInfo*
   method); */

void Rotatelab_SeasonPass_SeasonPassPaidReward__CheckClaimStatus_10a1864(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar6;
  char *pcVar7;
  byte bVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_010b19c4 + 0x10b187c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b19c8 + 0x10b1890));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b19cc + 0x10b189c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b19d0 + 0x10b18a8));
    *pcVar7 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b19d4 + 0x10b18bc));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(iVar3 + 0x4c),*(undefined4 *)(param_1 + 0x24),
                     **(undefined4 **)(_UNK_010b19d8 + 0x10b18f4));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  cVar1 = *(char *)(iVar4 + 9);
  bVar8 = 0;
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar4 + 0x30),0);
  if (iVar4 != 0) {
    iVar3 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (*(undefined4 *)(iVar3 + 0x34),**(undefined4 **)(_UNK_010b19dc + 0x10b194c));
    bVar8 = 0;
    if (*(int *)(param_1 + 0x24) < iVar3) {
      bVar8 = 1;
    }
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,cVar1 == '\0' & bVar8,0);
  pcVar7 = (char *)(_UNK_010b16ac + 0x10b113c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b16b0 + 0x10b1150));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b16b4 + 0x10b115c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b16b8 + 0x10b1168));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if ((cVar1 != '\0' & bVar8) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x14),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar3,*(char *)(param_1 + 0x2c) == '\0',0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
    pcVar7 = (char *)(_UNK_010b16bc + 0x10b1490);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b16c0 + 0x10b14a4));
      *pcVar7 = '\x01';
    }
    fVar15 = 1.0;
    if (*(char *)(param_1 + 0x2c) == '\0') {
      fVar15 = _UNK_010b16a8;
    }
    iVar4 = *(int *)(**(int **)(_UNK_010b16c4 + 0x10b14c8) + 0x5c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar3,*(float *)(iVar4 + 0xc) * fVar15,*(float *)(iVar4 + 0x10) * fVar15,
               *(float *)(iVar4 + 0x14) * fVar15,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_UI_Graphic__get_canvasRenderer_371c574(*(int *)(param_1 + 0x10),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasRenderer__SetAlpha_39a59a0(iVar3,0x3f800000,0);
    iVar3 = *(int *)(param_1 + 0x18);
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_UI_Graphic__get_canvasRenderer_371c574(*(int *)(param_1 + 0x10),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasRenderer__SetAlpha_39a59a0(iVar3,0x3f000000,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x18),1,0);
    iVar3 = *(int *)(param_1 + 0x18);
    if (param_2 != 0) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_GameObject__get_transform_3601c90(iVar3,0);
      pcVar7 = (char *)(_UNK_010b16d8 + 0x10b1214);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010b16dc + 0x10b1228));
        *pcVar7 = '\x01';
      }
      piVar9 = *(int **)(_UNK_010b16e0 + 0x10b123c);
      puVar5 = *(undefined4 **)(*piVar9 + 0x5c);
      pcVar7 = (char *)(_UNK_010b16e4 + 0x10b124c);
      uVar14 = *puVar5;
      uVar11 = puVar5[1];
      uVar6 = puVar5[2];
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(piVar9);
        puVar5 = *(undefined4 **)(*piVar9 + 0x5c);
        *pcVar7 = '\x01';
      }
      uVar10 = puVar5[3];
      uVar12 = puVar5[4];
      uVar13 = puVar5[5];
      if (*(int *)(**(int **)(_UNK_010b16e8 + 0x10b1288) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Scale_2ce679c
                (&uStack_48,uVar2,uVar14,uVar11,uVar6,uVar10,uVar12,uVar13,0x3e4ccccd,0,0,0,0,0,1,0,
                 0,0,0,0);
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
      pcVar7 = (char *)(_UNK_010b16ec + 0x10b1328);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010b16f0 + 0x10b133c));
        *pcVar7 = '\x01';
      }
      iVar3 = *(int *)(**(int **)(_UNK_010b16f4 + 0x10b1364) + 0x5c);
      PrimeTween_Tween__PunchScale_2ceb894
                (&uStack_48,uVar2,*(float *)(iVar3 + 0xc) * 0.25,*(float *)(iVar3 + 0x10) * 0.25,
                 *(float *)(iVar3 + 0x14) * 0.25,0x3e19999a,0x41200000,1,0,0,1,0,0,0,0);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b16f8 + 0x10b13d8));
      System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010b16fc + 0x10b13f8),0);
      PrimeTween_Tween__OnComplete_2ceddf8(auStack_58,&uStack_38,uVar2,0,0);
      return;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_GameObject__get_transform_3601c90(iVar3,0);
    pcVar7 = (char *)(_UNK_010b16c8 + 0x10b15a8);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b16cc + 0x10b15bc));
      *pcVar7 = '\x01';
    }
    piVar9 = *(int **)(_UNK_010b16d0 + 0x10b15d4);
    iVar4 = *(int *)(*piVar9 + 0x5c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar3,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),
               *(undefined4 *)(iVar4 + 0x14),0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b16d4 + 0x10b163c));
      *pcVar7 = '\x01';
    }
    iVar4 = *(int *)(*piVar9 + 0x5c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar3,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),
               *(undefined4 *)(iVar4 + 0x14),0);
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x14),0);
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar7 = '\x01';
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

