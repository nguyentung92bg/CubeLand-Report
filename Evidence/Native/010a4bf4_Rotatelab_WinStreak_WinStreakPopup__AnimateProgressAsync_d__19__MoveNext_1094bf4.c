/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup.<AnimateProgressAsync>d__19$$MoveNext
void Rotatelab_WinStreak_WinStreakPopup__AnimateProgressAsync_d__19__MoveNext (Rotatelab_WinStreak_WinStreakPopup__AnimateProgressAsync_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010a59fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup.<AnimateProgressAsync>d__19$$MoveNext
   void Rotatelab_WinStreak_WinStreakPopup__AnimateProgressAsync_d__19__MoveNext
   (Rotatelab_WinStreak_WinStreakPopup__AnimateProgressAsync_d__19_o __this, const MethodInfo*
   method); */

void Rotatelab_WinStreak_WinStreakPopup__AnimateProgressAsync_d__19__MoveNext_1094bf4(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint in_fpscr;
  int *piStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_7c;
  uint *puStack_78;
  uint **ppuStack_74;
  int aiStack_70 [2];
  int *piStack_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  int *piStack_38;
  uint uStack_34;
  uint uStack_2c;
  uint *puStack_28;
  
  pcVar6 = (char *)(_UNK_010a5bc4 + 0x10a4c10);
  puStack_28 = param_1;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5bc8 + 0x10a4c24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5bcc + 0x10a4c30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5bd0 + 0x10a4c3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5bd4 + 0x10a4c48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5bd8 + 0x10a4c54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5bdc + 0x10a4c60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5be0 + 0x10a4c6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5be4 + 0x10a4c78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5be8 + 0x10a4c84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5bec + 0x10a4c90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a5bf0 + 0x10a4c9c));
    *pcVar6 = '\x01';
  }
  uStack_2c = *param_1;
  uStack_64 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar8 = param_1[2];
  uStack_34 = 0;
  piStack_38 = (int *)0x0;
  uStack_48 = (ulonglong)uStack_64 << 0x20;
  uStack_40 = CONCAT44(uStack_5c,uStack_60);
  piStack_58 = (int *)0x0;
  piStack_68 = (int *)0x0;
  aiStack_70[1] = 0;
  uStack_54 = uStack_64;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  if (uStack_2c == 0) {
    piStack_38 = (int *)param_1[7];
    uStack_34 = param_1[8];
    *param_1 = 0xffffffff;
    param_1[7] = 0;
    param_1[8] = 0;
    uStack_2c = 0xffffffff;
LAB_010a4dd8:
    pcVar6 = (char *)(_UNK_010a5c24 + 0x10a4de4);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a5c28 + 0x10a4df8));
      *pcVar6 = '\x01';
    }
    piVar9 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar1 = *piStack_38;
      uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar11 = (int)(short)uStack_34;
      if (uVar10 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_010a5c2c + 0x10a4e1c)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
            goto LAB_010a509c;
          }
          uVar10 = uVar10 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_010a5c2c + 0x10a4e1c),2);
LAB_010a509c:
      (*(code *)*puVar4)(piVar9,iVar11,puVar4[1]);
    }
    iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                      (**(undefined4 **)(_UNK_010a5c30 + 0x10a50c0));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = Rotatelab_UI_UIInputBlocker__BlockInputWithinScope_112443c(iVar1,0);
    puStack_28[5] = uVar10;
    thunk_FUN_00ec5080();
  }
  else if (uStack_2c - 5 < 0xfffffffc) {
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puStack_28[3] = *(uint *)(iVar1 + 0x9c);
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = 0;
    puStack_28[4] = *(uint *)(iVar1 + 0xa0);
    while( true ) {
      if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(uVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(uVar8 + 0x28) + 0xc) <= (int)uVar10) break;
      iVar1 = *(int *)(uVar8 + 0x28);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar1 = *(int *)(iVar1 + uVar10 * 4 + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_WinStreak_Stage__InitializeLevel_1091208(iVar1,puStack_28[3]);
      uVar10 = uVar10 + 1;
    }
    uVar2 = Rotatelab_WinStreak_WinStreakPopup__GetLevelHeight_1094490(uVar8,puStack_28[3]);
    Rotatelab_WinStreak_WinStreakPopup__SetProgress_109463c(uVar8,uVar2);
    if (*(int *)(uVar8 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = VectorSignedToFloat(puStack_28[3],(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34
              (*(int *)(uVar8 + 0x40),**(undefined4 **)(_UNK_010a5bf4 + 0x10a4ea4),uVar2,0);
    if (puStack_28[3] == puStack_28[4]) goto LAB_010a5a5c;
    piVar9 = *(int **)(_UNK_010a5bf8 + 0x10a4ed0);
    uVar2 = *(undefined4 *)(uVar8 + 0x48);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar9;
    }
    puVar4 = *(undefined4 **)(iVar1 + 0x5c);
    iVar11 = puVar4[1];
    if (iVar11 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
      }
      uVar7 = *puVar4;
      iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a5bfc + 0x10a4f20));
      System_Func_object__bool____ctor_239b120
                (iVar11,uVar7,**(undefined4 **)(_UNK_010a5c00 + 0x10a4f34),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 4);
      *piVar9 = iVar11;
      thunk_FUN_00ec5080(piVar9,iVar11);
    }
    piVar9 = *(int **)(_UNK_010a5c04 + 0x10a4f64);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitWhile_object__164eb9c
              (&piStack_90,uVar2,iVar11,8,0,0,**(undefined4 **)(_UNK_010a5c08 + 0x10a4f80));
    thunk_FUN_00ec5080(&piStack_90,0);
    pcVar6 = (char *)(_UNK_010a5c0c + 0x10a4fd0);
    uStack_34 = uStack_8c;
    piStack_38 = piStack_90;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a5c10 + 0x10a4ff0));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_010a5c14 + 0x10a5018);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a5c18 + 0x10a502c));
      *pcVar6 = '\x01';
    }
    piVar9 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar1 = *piStack_38;
      uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar11 = (int)(short)uStack_34;
      if (uVar10 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_010a5c1c + 0x10a5050)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_010a54d8;
          }
          uVar10 = uVar10 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_010a5c1c + 0x10a5050),0);
LAB_010a54d8:
      iVar1 = (*(code *)*puVar4)(piVar9,iVar11,puVar4[1]);
      if (iVar1 == 0) {
        uStack_2c = 0;
        *puStack_28 = 0;
        puStack_28[7] = (uint)piStack_38;
        puStack_28[8] = uStack_34;
        thunk_FUN_00ec5080(puStack_28 + 7,0);
        func_0x010bd23c(puStack_28 + 1,&piStack_38,puStack_28,
                        **(undefined4 **)(_UNK_010a5c20 + 0x10a552c));
        return;
      }
    }
    goto LAB_010a4dd8;
  }
  ppuStack_74 = &puStack_28;
  puStack_78 = &uStack_2c;
  uStack_7c = 0;
  switch(uStack_2c) {
  case 1:
    piStack_38 = (int *)puStack_28[7];
    uStack_34 = puStack_28[8];
    puStack_28[7] = 0;
    puStack_28[8] = 0;
    uStack_2c = 0xffffffff;
    *puStack_28 = 0xffffffff;
LAB_010a5330:
    pcVar6 = (char *)(_UNK_010a5c50 + 0x10a533c);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a5c54 + 0x10a5350));
      *pcVar6 = '\x01';
    }
    piVar9 = piStack_38;
    if (piStack_38 != (int *)0x0) {
      iVar1 = *piStack_38;
      uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
      iVar11 = (int)(short)uStack_34;
      if (uVar10 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_010a5c58 + 0x10a5374)) {
            puVar4 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xd0);
            goto LAB_010a53c0;
          }
          uVar10 = uVar10 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_010a5c58 + 0x10a5374),2);
LAB_010a53c0:
      (*(code *)*puVar4)(piVar9,iVar11,puVar4[1]);
    }
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_WinStreak_WinStreakPopup__get_Data_1093a68();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc(iVar1,puStack_28[3]);
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_WinStreak_WinStreakPopup__get_Data_1093a68();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc(iVar1,puStack_28[4]);
    puStack_28[6] = uVar3;
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = *(int *)(iVar1 + 0xa4) + 1;
    if ((int)uVar3 < (int)uVar10) {
      uVar3 = uVar10;
    }
    while( true ) {
      puStack_28[9] = uVar3;
      uVar10 = puStack_28[3];
      if ((int)puStack_28[6] <= (int)uVar3) break;
      if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(uVar8 + 0x28);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar1 = *(int *)(iVar1 + uVar3 * 4 + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_WinStreak_WinStreakPopup__AnimateProgress_1094244
                (&piStack_90,uVar8,uVar10,*(undefined4 *)(iVar1 + 8));
      piStack_58 = piStack_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_4c = uStack_84;
      if (*(int *)(**(int **)(_UNK_010a5c5c + 0x10a5658) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__GetAwaiter_2ce3a94(&piStack_90,&piStack_58,0);
      uStack_48 = CONCAT44(uStack_8c,piStack_90);
      uStack_40 = CONCAT44(uStack_84,uStack_88);
      iVar1 = PrimeTween_Tween_TweenAwaiter__get_IsCompleted_2cee2c8(&uStack_48,0);
      if (iVar1 == 0) {
        uStack_2c = 2;
        *puStack_28 = 2;
        puStack_28[10] = (uint)uStack_48;
        puStack_28[0xb] = uStack_48._4_4_;
        puStack_28[0xc] = (uint)uStack_40;
        puStack_28[0xd] = uStack_40._4_4_;
        thunk_FUN_00ec5080(puStack_28 + 0xc,0);
        iVar1 = 10;
        func_0x010bd35c(puStack_28 + 1,&uStack_48,puStack_28,
                        **(undefined4 **)(_UNK_010a5c60 + 0x10a5910));
        goto LAB_010a596c;
      }
code_r0x010a56a0:
      PrimeTween_Tween_TweenAwaiter__GetResult_2cee6d4(&uStack_48,0);
      if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(uVar8 + 0x28);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) <= puStack_28[9]) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar1 = *(int *)(iVar1 + puStack_28[9] * 4 + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_WinStreak_Stage__CollectReward_1091478(&piStack_90,iVar1);
      piStack_68 = piStack_90;
      uStack_64 = uStack_8c;
      uStack_60 = uStack_88;
      uStack_5c = uStack_84;
      PrimeTween_Sequence__GetAwaiter_2ceec54(&piStack_90,&piStack_68,0);
      uStack_48 = CONCAT44(uStack_8c,piStack_90);
      uStack_40 = CONCAT44(uStack_84,uStack_88);
      iVar1 = PrimeTween_Tween_TweenAwaiter__get_IsCompleted_2cee2c8(&uStack_48,0);
      if (iVar1 == 0) {
        uStack_2c = 3;
        *puStack_28 = 3;
        puStack_28[10] = (uint)uStack_48;
        puStack_28[0xb] = uStack_48._4_4_;
        puStack_28[0xc] = (uint)uStack_40;
        puStack_28[0xd] = uStack_40._4_4_;
        thunk_FUN_00ec5080(puStack_28 + 0xc,0);
        iVar1 = 10;
        func_0x010bd35c(puStack_28 + 1,&uStack_48,puStack_28,
                        **(undefined4 **)(_UNK_010a5c64 + 0x10a58c4));
        goto LAB_010a596c;
      }
code_r0x010a5740:
      PrimeTween_Tween_TweenAwaiter__GetResult_2cee6d4(&uStack_48,0);
      if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(uVar8 + 0x28);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar1 + 0xc) <= puStack_28[9]) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar1 = *(int *)(iVar1 + puStack_28[9] * 4 + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(iVar1 + 0x40);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puStack_28[3] = *(uint *)(iVar1 + 8);
      uVar3 = puStack_28[9] + 1;
    }
    if (uVar10 == puStack_28[4]) goto LAB_010a585c;
    if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_WinStreak_WinStreakPopup__AnimateProgress_1094244
              (&piStack_90,uVar8,uVar10,puStack_28[4]);
    piStack_58 = piStack_90;
    uStack_54 = uStack_8c;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    if (*(int *)(**(int **)(_UNK_010a5c68 + 0x10a5808) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__GetAwaiter_2ce3a94(&piStack_90,&piStack_58,0);
    uStack_48 = CONCAT44(uStack_8c,piStack_90);
    uStack_40 = CONCAT44(uStack_84,uStack_88);
    iVar1 = PrimeTween_Tween_TweenAwaiter__get_IsCompleted_2cee2c8(&uStack_48,0);
    if (iVar1 != 0) goto code_r0x010a5850;
    uStack_2c = 4;
    *puStack_28 = 4;
    puStack_28[10] = (uint)uStack_48;
    puStack_28[0xb] = uStack_48._4_4_;
    puStack_28[0xc] = (uint)uStack_40;
    puStack_28[0xd] = uStack_40._4_4_;
    thunk_FUN_00ec5080(puStack_28 + 0xc,0);
    iVar1 = 10;
    func_0x010bd35c(puStack_28 + 1,&uStack_48,puStack_28,
                    **(undefined4 **)(_UNK_010a5c6c + 0x10a595c));
    break;
  case 2:
    uStack_48 = *(longlong *)(puStack_28 + 10);
    uStack_40 = *(undefined8 *)(puStack_28 + 0xc);
    puStack_28[10] = 0;
    puStack_28[0xb] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28[0xc] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puStack_28[0xd] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_2c = 0xffffffff;
    *puStack_28 = 0xffffffff;
    goto code_r0x010a56a0;
  case 3:
    uStack_48 = *(longlong *)(puStack_28 + 10);
    uStack_40 = *(undefined8 *)(puStack_28 + 0xc);
    puStack_28[10] = 0;
    puStack_28[0xb] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28[0xc] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puStack_28[0xd] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_2c = 0xffffffff;
    *puStack_28 = 0xffffffff;
    goto code_r0x010a5740;
  case 4:
    uStack_48 = *(longlong *)(puStack_28 + 10);
    uStack_40 = *(undefined8 *)(puStack_28 + 0xc);
    puStack_28[10] = 0;
    puStack_28[0xb] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    puStack_28[0xc] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    puStack_28[0xd] = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_2c = 0xffffffff;
    *puStack_28 = 0xffffffff;
code_r0x010a5850:
    PrimeTween_Tween_TweenAwaiter__GetResult_2cee6d4(&uStack_48,0);
LAB_010a585c:
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(uint *)(iVar1 + 0x9c) = puStack_28[4];
    iVar1 = 7;
    break;
  default:
    piVar9 = *(int **)(_UNK_010a5c34 + 0x10a51e4);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__Delay_32169f8(&piStack_90,300,0,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_90,0);
    pcVar6 = (char *)(_UNK_010a5c38 + 0x10a5244);
    uStack_34 = uStack_8c;
    piStack_38 = piStack_90;
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a5c3c + 0x10a5264));
      *pcVar6 = '\x01';
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar6 = (char *)(_UNK_010a5c40 + 0x10a528c);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a5c44 + 0x10a52a0));
      *pcVar6 = '\x01';
    }
    piVar9 = piStack_38;
    if (piStack_38 == (int *)0x0) goto LAB_010a5330;
    iVar1 = *piStack_38;
    uVar10 = (uint)*(ushort *)(iVar1 + 0xb6);
    iVar11 = (int)(short)uStack_34;
    if (uVar10 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_010a5c48 + 0x10a52c4)) {
          puVar4 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_010a5310;
        }
        uVar10 = uVar10 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_010a5c48 + 0x10a52c4),0);
LAB_010a5310:
    iVar1 = (*(code *)*puVar4)(piVar9,iVar11,puVar4[1]);
    if (iVar1 != 0) goto LAB_010a5330;
    uStack_2c = 1;
    *puStack_28 = 1;
    puStack_28[7] = (uint)piStack_38;
    puStack_28[8] = uStack_34;
    thunk_FUN_00ec5080(puStack_28 + 7,0);
    iVar1 = 10;
    func_0x010bd23c(puStack_28 + 1,&piStack_38,puStack_28,
                    **(undefined4 **)(_UNK_010a5c4c + 0x10a54b8));
  }
LAB_010a596c:
  if ((0x7fffffff < uStack_2c) && (piVar9 = (int *)(*ppuStack_74)[5], piVar9 != (int *)0x0)) {
    iVar11 = *piVar9;
    uVar8 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar8 != 0) {
      piVar5 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_010a5c70 + 0x10a599c)) {
          puVar4 = (undefined4 *)(iVar11 + *piVar5 * 8 + 0xc0);
          goto LAB_010a59e4;
        }
        uVar8 = uVar8 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_010a5c70 + 0x10a599c),0);
LAB_010a59e4:
    (*(code *)*puVar4)(piVar9,puVar4[1]);
  }
  if (iVar1 != 7) {
    if (iVar1 != 0) {
      return;
    }
    iVar1 = aiStack_70[aiStack_70[1] + -1];
    *puStack_28 = 0xfffffffe;
    puStack_28[5] = 0;
    thunk_FUN_00ec5080();
    func_0x00fcede8(puStack_28 + 1,iVar1,0);
    return;
  }
LAB_010a5a5c:
  *puStack_28 = 0xfffffffe;
  puStack_28[5] = 0;
  thunk_FUN_00ec5080();
  func_0x00fcef34(puStack_28 + 1,0);
  return;
}

