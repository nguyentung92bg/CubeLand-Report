/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$Show
void Rotatelab_Ads_RewardedAdFormat__Show (Rotatelab_Ads_RewardedAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029c13f8) */
/* WARNING: Removing unreachable block (ram,0x029c1410) */
/* WARNING: Removing unreachable block (ram,0x029c13ac) */
/* WARNING: Removing unreachable block (ram,0x029c13c4) */
/* WARNING: Removing unreachable block (ram,0x03599fcc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$Show
   void Rotatelab_Ads_RewardedAdFormat__Show (Rotatelab_Ads_RewardedAdFormat_o* __this, const
   MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat__Show_10f47b4(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  uint uVar8;
  int *piVar9;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar10;
  undefined4 *******pppppppuVar11;
  uint unaff_r7;
  undefined4 ******appppppuStack_48 [3];
  undefined1 uStack_39;
  undefined4 *******pppppppuStack_38;
  uint uStack_34;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar10 = (char *)(_UNK_01104874 + 0x11047c8);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01104878 + 0x11047dc));
    *pcVar10 = '\x01';
  }
  iVar1 = Rotatelab_Ads_RewardedAdFormat__IsAdReady_10f4734(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    piVar2 = (int *)(param_1 + 0x14);
  }
  else {
    iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__GetBestReadyTrack_10f29e4();
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x14) = 3;
    piVar2 = (int *)(iVar1 + 8);
  }
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    return;
  }
  uVar3 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  piVar2 = *(int **)(_UNK_0110487c + 0x1104844);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  if (*(int *)(*piVar2 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_029c147c + 0x29c1288);
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c1480 + 0x29c129c),0,0,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c1484 + 0x29c12a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c1488 + 0x29c12b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c148c + 0x29c12c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c1490 + 0x29c12cc));
    *pcVar10 = '\x01';
  }
  MaxSdkBase__ValidateAdUnitIdentifier_29afff4(iVar1,**(undefined4 **)(_UNK_029c1494 + 0x29c12e0));
  piVar2 = *(int **)(_UNK_029c1498 + 0x29c12f4);
  if (*(int *)(*piVar2 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = MaxSdkAndroid__IsRewardedAdReady_29b1100(iVar1);
  if (iVar4 != 0) {
    iVar4 = *piVar2;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar2;
    }
    iVar4 = **(int **)(iVar4 + 0x5c);
    piVar2 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_029c149c + 0x29c133c),3);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar1 != 0) &&
       (iVar5 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar5 == 0)) {
      uVar3 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar3,0);
    }
    if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[4] = iVar1;
    thunk_FUN_00ec5080(piVar2 + 4,iVar1);
    if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[5] = 0;
    thunk_FUN_00ec5080(piVar2 + 5,0);
    if ((uint)piVar2[3] < 3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar2[6] = 0;
    thunk_FUN_00ec5080(piVar2 + 6,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = UnityEngine_AndroidJNIHelper__GetMethodID_3577dcc
                      (*(undefined4 *)(*(int *)(iVar4 + 0xc) + 0xc),
                       **(undefined4 **)(_UNK_029c14a0 + 0x29c145c),piVar2,1);
    uStack_20 = uStack_14;
    uStack_24 = uStack_18;
    pcVar10 = (char *)(_UNK_0359a08c + 0x3599eb0);
    iStack_2c = **(int **)(_UNK_0359a090 + 0x3599eb8);
    if (*pcVar10 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a094 + 0x3599ed8));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a098 + 0x3599ee4));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a09c + 0x3599ef0));
      *pcVar10 = '\x01';
    }
    if (piVar2 != (int *)0x0) {
      unaff_r7 = piVar2[3];
    }
    pppppppuVar11 = (undefined4 *******)0x0;
    uStack_34 = 0;
    pppppppuStack_38 = (undefined4 *******)0x0;
    uStack_39 = 0;
    if (piVar2 != (int *)0x0 && unaff_r7 != 0) {
      if ((unaff_r7 & 0x1fffffff) != 0) {
        pppppppuVar11 = appppppuStack_48 + unaff_r7 * -2;
      }
      thunk_FUN_00f88e5c(pppppppuVar11);
      if (0x7fffffff < unaff_r7) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException_2b94878(0);
      }
      pppppppuStack_38 = pppppppuVar11;
      uStack_34 = unaff_r7;
      if (0 < (int)unaff_r7) {
        UnityEngine_AndroidJNISafe__PushLocalFrame_3582d60(unaff_r7);
        UnityEngine_AndroidJNIHelper__CreateJNIArgArray_35778f0(piVar2,pppppppuVar11,unaff_r7);
      }
    }
    else {
      uStack_34 = 0;
      unaff_r7 = 0;
      pppppppuStack_38 = (undefined4 *******)0x0;
    }
    appppppuStack_48[2] = (undefined4 ******)&uStack_39;
    appppppuStack_48[0] = (undefined4 ******)0x0;
    appppppuStack_48[1] = &pppppppuStack_38;
    if (*(int *)(iVar4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AndroidJNISafe__CallStaticVoidMethod_3583c18
              (*(undefined4 *)(*(int *)(iVar4 + 0xc) + 0xc),uVar3,pppppppuVar11,unaff_r7);
    iVar1 = *(int *)((uint)&pppppppuStack_38 | 4);
    uStack_39 = 0 < iVar1;
    if (0 < iVar1) {
      pcVar7 = *(code **)(_UNK_0359a0a0 + 0x3599f9c);
      if (pcVar7 == (code *)0x0) {
        pcVar7 = (code *)thunk_FUN_00ec3774(_UNK_0359a0a4 + 0x3599fac);
        *(code **)(_UNK_0359a0a8 + 0x3599fbc) = pcVar7;
      }
      (*pcVar7)(0);
    }
    if (**(int **)(_UNK_0359a0ac + 0x3599fe4) == iStack_2c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar3 = **(undefined4 **)(_UNK_029c14a4 + 0x29c1474);
  pcVar10 = (char *)(_UNK_029c0da0 + 0x29c0cec);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c0da4 + 0x29c0d00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c0da8 + 0x29c0d0c));
    *pcVar10 = '\x01';
  }
  pcVar10 = (char *)(_UNK_029c0dac + 0x29c0d20);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c0db0 + 0x29c0d34));
    *pcVar10 = '\x01';
  }
  if (*(char *)(*(int *)(**(int **)(_UNK_029c0db4 + 0x29c0d48) + 0x5c) + 2) != '\0') {
    return;
  }
  uVar3 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_029c0db8 + 0x29c0d6c),uVar3,0);
  if (*(int *)(**(int **)(_UNK_029c0dbc + 0x29c0d80) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_035c01b0 + 0x35c00a4);
  if (*pcVar10 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
    *pcVar10 = '\x01';
  }
  piVar2 = *(int **)(_UNK_035c01bc + 0x35c00d8);
  if (*(int *)(*piVar2 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_035c01c0 + 0x35c00f4);
  if (*pcVar10 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
    *pcVar10 = '\x01';
  }
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar2;
  }
  piVar2 = *(int **)(*(int *)(iVar1 + 0x5c) + 4);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar2;
  uVar8 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
        puVar6 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xd8);
        goto LAB_035c0194;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar6 = (undefined4 *)thunk_FUN_00efdb38(piVar2,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar6)(piVar2,2,uVar3,puVar6[1]);
  return;
}

