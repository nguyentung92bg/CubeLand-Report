/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<>c__DisplayClass29_0$$<LoadTrack>b__0
void Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass29_0___LoadTrack_b__0 (Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass29_0_o* __this, NeftaCustomAdapter_Insights_o* insights, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<>c__DisplayClass29_0$$<LoadTrack>b__0
   void Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass29_0___LoadTrack_b__0
   (Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass29_0_o* __this,
   NeftaCustomAdapter_Insights_o* insights, const MethodInfo* method); */

void Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass29_0___LoadTrack_b__0_10f2e48
               (int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pcVar5 = (char *)(_UNK_01103180 + 0x1102e64);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103184 + 0x1102e78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103188 + 0x1102e84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110318c + 0x1102e90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103190 + 0x1102e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103194 + 0x1102ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103198 + 0x1102eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110319c + 0x1102ec0));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 == 0) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_011031a0 + 0x1102fc4));
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__RetryOptimizedCoroutine_10f2cb4
                      (*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
      uVar7 = thunk_FUN_00f00cdc();
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar7,uVar4,0);
    }
    else {
      iVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar2 != 0) {
        pcVar5 = (char *)(iRam036143f4 + 0x3614380);
        if (*pcVar5 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
          *pcVar5 = '\x01';
        }
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(iVar3 + 8);
        if (iVar3 != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
            *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar3,iVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar7 = thunk_FUN_00f00cdc();
      uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar7,uVar4,0);
    }
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar7,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar6 = (int *)(*(int *)(param_1 + 0xc) + 0x18);
  *piVar6 = iVar3;
  thunk_FUN_00ec5080(piVar6,iVar3);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(iVar3 + 0x18);
  uVar8 = *(undefined4 *)(iVar3 + 8);
  if (*(int *)(**(int **)(_UNK_011031a4 + 0x1102f40) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar10 = 0;
  uVar9 = 0xbff00000;
  NeftaCustomAdapter_NeftaAdapterEvents__OnExternalMediationRequest_2c2cd78(uVar4,uVar8,uVar7);
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (0.0 <= *(double *)(iVar3 + 0x18)) {
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x18);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(**(int **)(_UNK_011031ac + 0x1103040) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
    uVar4 = System_Double__ToString_2b51d18(iVar3 + 0x18,uVar4,0);
  }
  else {
    uVar4 = **(undefined4 **)(_UNK_011031a8 + 0x1102fb4);
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(iVar3 + 0xc))
            (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(*(int *)(param_1 + 0xc) + 8),
             **(undefined4 **)(_UNK_011031b4 + 0x11030b8),
             **(undefined4 **)(_UNK_011031b0 + 0x11030ac),*(undefined4 *)(iVar3 + 0x14),uVar9,uVar10
            );
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(iVar3 + 0xc))
            (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(*(int *)(param_1 + 0xc) + 8),
             **(undefined4 **)(_UNK_011031b8 + 0x1103114),uVar4,*(undefined4 *)(iVar3 + 0x14));
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01103178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 0xc))
            (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(*(int *)(param_1 + 0xc) + 8),
             *(undefined4 *)(iVar3 + 0x14));
  return;
}

