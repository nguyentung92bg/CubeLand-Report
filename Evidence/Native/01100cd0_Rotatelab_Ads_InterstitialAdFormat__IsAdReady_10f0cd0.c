/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$IsAdReady
bool Rotatelab_Ads_InterstitialAdFormat__IsAdReady (Rotatelab_Ads_InterstitialAdFormat_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$IsAdReady
   bool Rotatelab_Ads_InterstitialAdFormat__IsAdReady (Rotatelab_Ads_InterstitialAdFormat_o* __this,
   const MethodInfo* method); */

int Rotatelab_Ads_InterstitialAdFormat__IsAdReady_10f0cd0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  float fVar10;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  
  pcVar7 = (char *)(_UNK_01100d30 + 0x1100ce4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100d34 + 0x1100cf8));
    *pcVar7 = '\x01';
  }
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01100d38 + 0x1100d0c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  cVar1 = *(char *)(iVar2 + 0xd);
  pcVar7 = (char *)(_UNK_011010e0 + 0x1100d80);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011010e4 + 0x1100d94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011010e8 + 0x1100da0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011010ec + 0x1100dac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011010f0 + 0x1100db8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011010f4 + 0x1100dc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011010f8 + 0x1100dd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011010fc + 0x1100ddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01101100 + 0x1100de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01101104 + 0x1100df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01101108 + 0x1100e00));
    *pcVar7 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (*(char *)(param_1 + 0x48) == '\0') {
      if (*(float *)(param_1 + 0x44) != _UNK_011010dc) {
        fVar5 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
        fVar10 = *(float *)(param_1 + 0x44);
        if (fVar10 <= fVar5) {
          puVar3 = *(undefined4 **)(_UNK_01101130 + 0x1100f64);
          iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          puVar9 = *(undefined4 **)(_UNK_01101134 + 0x1100f84);
          iVar8 = *(int *)(iVar2 + 0x50);
          iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar9);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar2 + 0x34) <= iVar8) {
            if (*(int *)(param_1 + 0x4c) == 0) {
              uVar4 = *(undefined4 *)(param_1 + 0x14);
              if (*(int *)(**(int **)(_UNK_01101140 + 0x1101080) + 0x74) == 0) {
                FUN_00ec3934();
              }
              iVar2 = MaxSdkAndroid__IsInterstitialReady_29b0930(uVar4,0);
            }
            else {
              iVar2 = Rotatelab_Ads_NeftaDualTrackLoader__IsAnyReady_10f114c();
            }
            if (iVar2 != 0) {
              return iVar2;
            }
            if (cVar1 == '\0') {
              return 0;
            }
            if (*(int *)(**(int **)(_UNK_01101144 + 0x11010c0) + 0x74) == 0) {
              FUN_00ec3934();
            }
            puVar3 = *(undefined4 **)(&UNK_011010dc + _UNK_01101148);
            goto LAB_01100ecc;
          }
          if (cVar1 == '\0') {
            return 0;
          }
          iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uStack_30 = *(undefined4 *)(iVar2 + 0x50);
          iVar8 = *(int *)(_UNK_01101138 + 0x1100fdc);
          uVar4 = FUN_00ec393c(*(undefined4 *)(iVar8 + 0x24),&uStack_30);
          iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar9);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uStack_34 = *(undefined4 *)(iVar2 + 0x34);
          uVar6 = FUN_00ec393c(*(undefined4 *)(iVar8 + 0x24),&uStack_34);
          uVar4 = System_String__Format_2a0c264
                            (**(undefined4 **)(_UNK_0110113c + 0x1101034),uVar4,uVar6,0);
        }
        else {
          if (cVar1 == '\0') {
            return 0;
          }
          fStack_2c = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
          fStack_2c = fVar10 - fStack_2c;
          uVar4 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01101124 + 0x1100f34) + 0x3c),
                               &fStack_2c);
          uVar4 = System_String__Format_29ffb6c
                            (**(undefined4 **)(_UNK_01101128 + 0x1100f50),uVar4,0);
        }
        if (*(int *)(**(int **)(_UNK_0110112c + 0x1101048) + 0x74) == 0) {
          FUN_00ec3934();
        }
        goto LAB_01100ed4;
      }
      if (cVar1 == '\0') {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_0110111c + 0x1100eb4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      puVar3 = *(undefined4 **)(_UNK_01101120 + 0x1100ed0);
    }
    else {
      if (cVar1 == '\0') {
        return 0;
      }
      if (*(int *)(**(int **)(_UNK_01101114 + 0x1100e6c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      puVar3 = *(undefined4 **)(_UNK_01101118 + 0x1100e88);
    }
  }
  else {
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(int *)(**(int **)(_UNK_0110110c + 0x1100e2c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    puVar3 = *(undefined4 **)(_UNK_01101110 + 0x1100e48);
  }
LAB_01100ecc:
  uVar4 = *puVar3;
LAB_01100ed4:
  UnityEngine_Debug__LogWarning_35b0090(uVar4,0);
  return 0;
}

