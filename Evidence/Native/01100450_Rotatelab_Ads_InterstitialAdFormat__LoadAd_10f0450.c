/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$LoadAd
void Rotatelab_Ads_InterstitialAdFormat__LoadAd (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03599fcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$LoadAd
   void Rotatelab_Ads_InterstitialAdFormat__LoadAd (Rotatelab_Ads_InterstitialAdFormat_o* __this,
   const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__LoadAd_10f0450(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  int extraout_r2;
  undefined4 unaff_r4;
  char *pcVar6;
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
  
  pcVar6 = (char *)(_UNK_011004f8 + 0x1100464);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011004fc + 0x1100478));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__Load_10f0504();
    iVar2 = 0;
    iVar3 = extraout_r2;
    if (iVar1 != 0) {
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = iVar1;
    }
    if (iVar1 != 0 && iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x011004f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0xc))
                (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar3 + 8),iVar3,
                 *(undefined4 *)(iVar2 + 0x14));
      return;
    }
    return;
  }
  Rotatelab_Ads_AdFormat__ReportNeftaRequest_10edeb8(param_1);
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_01100500 + 0x11004bc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar6 = (char *)(_UNK_029c090c + 0x29c07f4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c0910 + 0x29c0808),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c0914 + 0x29c0814));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c0918 + 0x29c0820));
    FUN_00ec37c0(*(undefined4 *)(_UNK_029c091c + 0x29c082c));
    *pcVar6 = '\x01';
  }
  MaxSdkBase__ValidateAdUnitIdentifier_29afff4(iVar2,**(undefined4 **)(_UNK_029c0920 + 0x29c0840));
  piVar7 = *(int **)(_UNK_029c0924 + 0x29c0854);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  iVar3 = **(int **)(iVar3 + 0x5c);
  piVar7 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_029c0928 + 0x29c0878),1);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar1 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar7 + 0x20)), iVar1 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if (piVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar7[4] = iVar2;
  thunk_FUN_00ec5080(piVar7 + 4,iVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0xc) != 0) {
    uStack_18 = unaff_r4;
    uVar4 = UnityEngine_AndroidJNIHelper__GetMethodID_3577dcc
                      (*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0xc),
                       **(undefined4 **)(_UNK_029c092c + 0x29c0900),piVar7,1);
    uStack_24 = uStack_18;
    pcVar6 = (char *)(_UNK_0359a08c + 0x3599eb0);
    iStack_2c = **(int **)(_UNK_0359a090 + 0x3599eb8);
    if (*pcVar6 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a094 + 0x3599ed8));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a098 + 0x3599ee4));
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0359a09c + 0x3599ef0));
      *pcVar6 = '\x01';
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
    if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_AndroidJNISafe__CallStaticVoidMethod_3583c18
              (*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0xc),uVar4,pppppuVar8,unaff_r7);
    iVar2 = *(int *)((uint)&pppuStack_38 | 4);
    uStack_39 = 0 < iVar2;
    if (0 < iVar2) {
      pcVar5 = *(code **)(_UNK_0359a0a0 + 0x3599f9c);
      if (pcVar5 == (code *)0x0) {
        pcVar5 = (code *)thunk_FUN_00ec3774(_UNK_0359a0a4 + 0x3599fac);
        *(code **)(_UNK_0359a0a8 + 0x3599fbc) = pcVar5;
      }
      (*pcVar5)(0);
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

