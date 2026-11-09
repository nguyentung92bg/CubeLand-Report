/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController.<FindPlayersCoroutine>d__16$$MoveNext
bool Rotatelab_CloudRush_CloudRushRegistrationController__FindPlayersCoroutine_d__16__MoveNext (Rotatelab_CloudRush_CloudRushRegistrationController__FindPlayersCoroutine_d__16_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010f6dc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController.<FindPlayersCoroutine>d__16$$MoveNext
   bool Rotatelab_CloudRush_CloudRushRegistrationController__FindPlayersCoroutine_d__16__MoveNext
   (Rotatelab_CloudRush_CloudRushRegistrationController__FindPlayersCoroutine_d__16_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_CloudRush_CloudRushRegistrationController__FindPlayersCoroutine_d__16__MoveNext_10e6af4
          (int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 uVar9;
  
  pcVar4 = (char *)(_UNK_010f6e54 + 0x10f6b0c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6e58 + 0x10f6b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6e5c + 0x10f6b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6e60 + 0x10f6b38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6e64 + 0x10f6b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6e68 + 0x10f6b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6e6c + 0x10f6b5c));
    *pcVar4 = '\x01';
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (iVar7 != 0) {
        uVar9 = *(undefined4 *)(iVar7 + 0x20);
        if (*(int *)(**(int **)(_UNK_010f6e70 + 0x10f6ba8) + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar9 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(uVar9,0);
        *(undefined4 *)(param_1 + 0xc) = uVar9;
        thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar9);
        *(undefined4 *)(param_1 + 8) = 1;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar9 = UnityEngine_Time__get_time_3610900(0);
    *(undefined4 *)(param_1 + 0x14) = uVar9;
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = Rotatelab_CloudRush_CloudRushRegistrationController__ShowPlayerAvatarsCoroutine_10e657c
                      (iVar7,uVar9);
    UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar7,uVar9,0);
    fVar8 = *(float *)(iVar7 + 0x24);
    if (*(int *)(iVar7 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(iVar7 + 0x18),0);
    uVar9 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar9,0x3f8ccccd,fVar8 / 9.0,0);
    DG_Tweening_TweenSettingsExtensions__SetLoops_object__15da2dc
              (uVar9,10,1,**(undefined4 **)(_UNK_010f6e74 + 0x10f6cd0));
  }
  piVar5 = (int *)(iVar7 + 0x34);
  if (*piVar5 < 100) {
    uVar6 = 1;
    iVar2 = UnityEngine_Random__Range_35f8b14(1,*(int *)(iVar7 + 0x2c) + 1,0);
    iVar1 = 100 - *piVar5;
    if (iVar2 < iVar1) {
      iVar1 = iVar2;
    }
    *piVar5 = iVar1 + *piVar5;
    Rotatelab_CloudRush_CloudRushRegistrationController__SetPlayerCountText_10e64bc(iVar7);
    iVar1 = *piVar5;
    if (iVar1 == 100) {
      if (*(int *)(iVar7 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(*(int *)(iVar7 + 0x1c),0);
      iVar1 = *piVar5;
    }
    fVar8 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine_10e6410
                      (iVar7,*(undefined4 *)(param_1 + 0x14),fVar8 / _UNK_010f6e50);
    *(undefined4 *)(param_1 + 0xc) = uVar9;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar9);
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010f6e78 + 0x10f6d98));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushController__set_CloudRushCurrentState_10dc1e0(iVar1,1);
    if (*(int *)(iVar7 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = 0;
    uVar9 = UnityEngine_Component__get_transform_35fe190(*(int *)(iVar7 + 0x14),0);
    uVar9 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar9,0x3f800000,0x3e19999a,0);
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f6e7c + 0x10f6e08));
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar3,iVar7,**(undefined4 **)(_UNK_010f6e80 + 0x10f6e24),0);
    DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
              (uVar9,uVar3,**(undefined4 **)(_UNK_010f6e84 + 0x10f6e3c));
  }
  return uVar6;
}

