/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$LoadAd
void Rotatelab_Ads_BannerAdFormat__LoadAd (Rotatelab_Ads_BannerAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03599fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.BannerAdFormat$$LoadAd
   void Rotatelab_Ads_BannerAdFormat__LoadAd (Rotatelab_Ads_BannerAdFormat_o* __this, const
   MethodInfo* method); */

void Rotatelab_Ads_BannerAdFormat__LoadAd_10eec8c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 unaff_r4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *****pppppuVar8;
  uint unaff_r7;
  undefined4 ****appppuStack_48 [3];
  undefined1 uStack_39;
  undefined4 ***pppuStack_38;
  uint uStack_34;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_18;
  
  pcVar5 = (char *)(_UNK_010fed04 + 0x10feca0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fed08 + 0x10fecb4));
    *pcVar5 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_010fed0c + 0x10fecc8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  MaxSdkAndroid__StopBannerAutoRefresh_29b03f0(uVar6,0);
  MaxSdkAndroid__LoadBanner_29b0150(*(undefined4 *)(param_1 + 0x14),0);
  iVar1 = *(int *)(param_1 + 0x14);
  pcVar5 = (char *)(_UNK_029c03cc + 0x29c02b4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c03d0 + 0x29c02c8),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c03d4 + 0x29c02d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c03d8 + 0x29c02e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c03dc + 0x29c02ec));
    *pcVar5 = '\x01';
  }
  MaxSdkBase__ValidateAdUnitIdentifier_29afff4(iVar1,**(undefined4 **)(_UNK_029c03e0 + 0x29c0300));
  piVar7 = *(int **)(_UNK_029c03e4 + 0x29c0314);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  piVar7 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_029c03e8 + 0x29c0338),1);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar1 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar7 + 0x20)), iVar3 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if (piVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar7[4] = iVar1;
  thunk_FUN_00ec5080(piVar7 + 4,iVar1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0xc) != 0) {
    uStack_18 = unaff_r4;
    uVar6 = UnityEngine_AndroidJNIHelper__GetMethodID_3577dcc
                      (*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc),
                       **(undefined4 **)(_UNK_029c03ec + 0x29c03c0),piVar7,1);
    uStack_24 = uStack_18;
    pcVar5 = (char *)(_UNK_0359a08c + 0x3599eb0);
    iStack_2c = **(int **)(_UNK_0359a090 + 0x3599eb8);
    if (*pcVar5 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a094 + 0x3599ed8));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a098 + 0x3599ee4));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a09c + 0x3599ef0));
      *pcVar5 = '\x01';
    }
    if (piVar7 != (int *)0x0) {
      unaff_r7 = piVar7[3];
    }
    pppppuVar8 = (undefined4 *****)0x0;
    uStack_34 = 0;
    pppuStack_38 = (undefined4 ***)0x0;
    uStack_39 = 0;
    if (piVar7 != (int *)0x0 && unaff_r7 != 0) {
      if ((unaff_r7 & 0x1fffffff) != 0) {
        pppppuVar8 = appppuStack_48 + unaff_r7 * -2;
      }
      thunk_FUN_00f88e5c(pppppuVar8);
      if (0x7fffffff < unaff_r7) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException_2b94878(0);
      }
      pppuStack_38 = pppppuVar8;
      uStack_34 = unaff_r7;
      if (0 < (int)unaff_r7) {
        UnityEngine_AndroidJNISafe__PushLocalFrame_3582d60(unaff_r7);
        UnityEngine_AndroidJNIHelper__CreateJNIArgArray_35778f0(piVar7,pppppuVar8,unaff_r7);
      }
    }
    else {
      uStack_34 = 0;
      unaff_r7 = 0;
      pppuStack_38 = (undefined4 *****)0x0;
    }
    appppuStack_48[2] = (undefined4 ****)&uStack_39;
    appppuStack_48[0] = (undefined4 ****)0x0;
    appppuStack_48[1] = &pppuStack_38;
    if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AndroidJNISafe__CallStaticVoidMethod_3583c18
              (*(undefined4 *)(*(int *)(iVar2 + 0xc) + 0xc),uVar6,pppppuVar8,unaff_r7);
    iVar1 = *(int *)((uint)&pppuStack_38 | 4);
    uStack_39 = 0 < iVar1;
    if (0 < iVar1) {
      pcVar4 = *(code **)(_UNK_0359a0a0 + 0x3599f9c);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)thunk_FUN_00ec3774(_UNK_0359a0a4 + 0x3599fac);
        *(code **)(_UNK_0359a0a8 + 0x3599fbc) = pcVar4;
      }
      (*pcVar4)(0);
    }
    if (**(int **)(_UNK_0359a0ac + 0x3599fe4) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

