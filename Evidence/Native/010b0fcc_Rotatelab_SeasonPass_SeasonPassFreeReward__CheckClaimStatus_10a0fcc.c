/* IL2CPP: Rotatelab.SeasonPass.SeasonPassFreeReward$$CheckClaimStatus
void Rotatelab_SeasonPass_SeasonPassFreeReward__CheckClaimStatus (Rotatelab_SeasonPass_SeasonPassFreeReward_o* __this, bool collectAnimated, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassFreeReward$$CheckClaimStatus
   void Rotatelab_SeasonPass_SeasonPassFreeReward__CheckClaimStatus
   (Rotatelab_SeasonPass_SeasonPassFreeReward_o* __this, bool collectAnimated, const MethodInfo*
   method); */

void Rotatelab_SeasonPass_SeasonPassFreeReward__CheckClaimStatus_10a0fcc(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_010b1100 + 0x10b0fe4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1104 + 0x10b0ff8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b1108 + 0x10b1004));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b110c + 0x10b1010));
    *pcVar8 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b1110 + 0x10b1024));
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
                     **(undefined4 **)(_UNK_010b1114 + 0x10b105c));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  cVar1 = *(char *)(iVar4 + 8);
  iVar3 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(iVar3 + 0x34),**(undefined4 **)(_UNK_010b1118 + 0x10b1080));
  iVar4 = *(int *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar2 = iVar4 < iVar3;
  UnityEngine_GameObject__SetActive_3602038(iVar5,cVar1 == '\0' && bVar2,0);
  pcVar8 = (char *)(_UNK_010b16ac + 0x10b113c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b16b0 + 0x10b1150));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b16b4 + 0x10b115c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b16b8 + 0x10b1168));
    *pcVar8 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (cVar1 == '\0' || !bVar2) {
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
    pcVar8 = (char *)(_UNK_010b16bc + 0x10b1490);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b16c0 + 0x10b14a4));
      *pcVar8 = '\x01';
    }
    fVar16 = 1.0;
    if (*(char *)(param_1 + 0x2c) == '\0') {
      fVar16 = _UNK_010b16a8;
    }
    iVar4 = *(int *)(**(int **)(_UNK_010b16c4 + 0x10b14c8) + 0x5c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar3,*(float *)(iVar4 + 0xc) * fVar16,*(float *)(iVar4 + 0x10) * fVar16,
               *(float *)(iVar4 + 0x14) * fVar16,0);
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
      uVar6 = UnityEngine_GameObject__get_transform_3601c90(iVar3,0);
      pcVar8 = (char *)(_UNK_010b16d8 + 0x10b1214);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010b16dc + 0x10b1228));
        *pcVar8 = '\x01';
      }
      piVar10 = *(int **)(_UNK_010b16e0 + 0x10b123c);
      puVar7 = *(undefined4 **)(*piVar10 + 0x5c);
      pcVar8 = (char *)(_UNK_010b16e4 + 0x10b124c);
      uVar15 = *puVar7;
      uVar12 = puVar7[1];
      uVar9 = puVar7[2];
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(piVar10);
        puVar7 = *(undefined4 **)(*piVar10 + 0x5c);
        *pcVar8 = '\x01';
      }
      uVar11 = puVar7[3];
      uVar13 = puVar7[4];
      uVar14 = puVar7[5];
      if (*(int *)(**(int **)(_UNK_010b16e8 + 0x10b1288) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Scale_2ce679c
                (&uStack_48,uVar6,uVar15,uVar12,uVar9,uVar11,uVar13,uVar14,0x3e4ccccd,0,0,0,0,0,1,0,
                 0,0,0,0);
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
      pcVar8 = (char *)(_UNK_010b16ec + 0x10b1328);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010b16f0 + 0x10b133c));
        *pcVar8 = '\x01';
      }
      iVar3 = *(int *)(**(int **)(_UNK_010b16f4 + 0x10b1364) + 0x5c);
      PrimeTween_Tween__PunchScale_2ceb894
                (&uStack_48,uVar6,*(float *)(iVar3 + 0xc) * 0.25,*(float *)(iVar3 + 0x10) * 0.25,
                 *(float *)(iVar3 + 0x14) * 0.25,0x3e19999a,0x41200000,1,0,0,1,0,0,0,0);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b16f8 + 0x10b13d8));
      System_Action___ctor_2b10bac(uVar6,param_1,**(undefined4 **)(_UNK_010b16fc + 0x10b13f8),0);
      PrimeTween_Tween__OnComplete_2ceddf8(auStack_58,&uStack_38,uVar6,0,0);
      return;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_GameObject__get_transform_3601c90(iVar3,0);
    pcVar8 = (char *)(_UNK_010b16c8 + 0x10b15a8);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b16cc + 0x10b15bc));
      *pcVar8 = '\x01';
    }
    piVar10 = *(int **)(_UNK_010b16d0 + 0x10b15d4);
    iVar4 = *(int *)(*piVar10 + 0x5c);
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
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b16d4 + 0x10b163c));
      *pcVar8 = '\x01';
    }
    iVar4 = *(int *)(*piVar10 + 0x5c);
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
  pcVar8 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar8 = '\x01';
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

