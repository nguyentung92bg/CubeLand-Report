/* IL2CPP: Rotatelab.CloudRush.CloudRushManager.<UpdateProgressionCoroutine>d__51$$MoveNext
bool Rotatelab_CloudRush_CloudRushManager__UpdateProgressionCoroutine_d__51__MoveNext (Rotatelab_CloudRush_CloudRushManager__UpdateProgressionCoroutine_d__51_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager.<UpdateProgressionCoroutine>d__51$$MoveNext
   bool Rotatelab_CloudRush_CloudRushManager__UpdateProgressionCoroutine_d__51__MoveNext
   (Rotatelab_CloudRush_CloudRushManager__UpdateProgressionCoroutine_d__51_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_CloudRush_CloudRushManager__UpdateProgressionCoroutine_d__51__MoveNext_10e3d84
          (int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar3 = (char *)(_UNK_010f4980 + 0x10f3da4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4984 + 0x10f3db8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4988 + 0x10f3dc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f498c + 0x10f3dd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4990 + 0x10f3ddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4994 + 0x10f3de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4998 + 0x10f3df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f499c + 0x10f3e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f49a0 + 0x10f3e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f49a4 + 0x10f3e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f49a8 + 0x10f3e24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f49ac + 0x10f3e30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f49b0 + 0x10f3e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f49b4 + 0x10f3e48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f49b8 + 0x10f3e54));
    *pcVar3 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar6 = *(int *)(param_1 + 0x10);
  uVar7 = 0;
  uStack_48 = 0;
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    puVar4 = *(undefined4 **)(&UNK_010f3eb8 + _UNK_010f49bc);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushController__ClearPendingProgression_10dd534();
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(iVar6 + 0x40),0,0);
    iVar2 = *(int *)(iVar6 + 0x44);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,iVar1 - 1U < 2,0);
    Rotatelab_CloudRush_CloudRushManager__HidePlayerAvatars_10e1334(iVar6);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    if (iVar1 == 3) {
      uVar7 = *(undefined4 *)(iVar6 + 0x50);
      if (*(int *)(**(int **)(&UNK_010f3f74 + _UNK_010f49c0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar7,0xc433c70a,0);
      Rotatelab_Extensions__SetSizeDeltaY_fc2054(*(undefined4 *)(iVar6 + 0x50),0x43e90f5c,0);
      if (*(int *)(iVar6 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar6 + 0x58),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
      if (*(int *)(iVar6 + 0x48) != 0) {
        iVar1 = UnityEngine_GameObject__get_gameObject_3602cac(*(int *)(iVar6 + 0x48),0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
        if (*(int *)(iVar6 + 0x5c) != 0) {
          iVar6 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar6 + 0x5c),0);
          if (iVar6 != 0) {
            UnityEngine_GameObject__SetActive_3602038(iVar6,1,0);
            if (*(int *)(**(int **)(&UNK_010f4074 + _UNK_010f49c4) + 0x74) == 0) {
              FUN_00ec3934();
            }
            uVar7 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e4ccccd,0);
            *(undefined4 *)(param_1 + 0xc) = uVar7;
            thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
            *(undefined4 *)(param_1 + 8) = 1;
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    if (iVar1 == 1) {
      iVar6 = *(int *)(iVar6 + 0x58);
      puVar4 = *(undefined4 **)(&UNK_010f48a0 + _UNK_010f49d8);
code_r0x010f4908:
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      TMPro_TMP_Text__SetText_34ffb2c(iVar6,*puVar4,0);
    }
    else {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
      if (iVar1 == 2) {
        iVar6 = *(int *)(iVar6 + 0x58);
        puVar4 = *(undefined4 **)(&UNK_010f490c + _UNK_010f49dc);
        goto code_r0x010f4908;
      }
    }
    if (*(int *)(**(int **)(&UNK_010f4930 + _UNK_010f49e0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e4ccccd,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
    uVar7 = 4;
    break;
  case 1:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(iVar6 + 0xa0);
    uVar9 = *(undefined4 *)(iVar6 + 0xa8);
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010f41f4 + _UNK_010f49c8));
    System_Action_float____ctor_1f12930
              (uVar7,iVar6,**(undefined4 **)(&UNK_010f421c + _UNK_010f49cc),0);
    if (*(int *)(**(int **)(&UNK_010f4230 + _UNK_010f49d0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
    PrimeTween_Tween__Custom_2ce885c(&uStack_58,uVar8,uVar9,0x3f000000,uVar7,0,0,0,0,0,1,0,0,0,0,0);
    Rotatelab_CloudRush_CloudRushManager__ShowPlayerAvatars_10e0810(iVar6);
    if (*(int *)(**(int **)(&UNK_010f42ac + _UNK_010f49d4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e99999a,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
    uVar7 = 2;
    goto code_r0x010f4790;
  case 2:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine_10e164c(iVar6);
    uVar7 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar6,uVar7,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
    uVar7 = 3;
    break;
  case 3:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar6 + 0x9c) = 0;
    if (*(int *)(iVar6 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(iVar6 + 0x40),1,0);
    goto code_r0x010f4864;
  case 4:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushManager__ShowPlayerAvatars_10e0810(iVar6);
    if (*(int *)(**(int **)(&UNK_010f40d4 + _UNK_010f49e4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e99999a,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
    uVar7 = 5;
    break;
  case 5:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    PrimeTween_Sequence__Create_2cef1e0(&uStack_58,1,0,1,0,0,0);
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar6 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(iVar6 + 0x60),0);
    if (*(int *)(**(int **)(&UNK_010f4358 + _UNK_010f49e8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(&uStack_68,uVar7,0x3f933333,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_68,&uStack_48,uStack_68,uStack_64,uStack_60,uStack_5c,0);
    puVar4 = *(undefined4 **)(&UNK_010f43e8 + _UNK_010f49ec);
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uVar7 = thunk_FUN_00f00cdc(*puVar4);
    System_Action___ctor_2b10bac(uVar7,iVar6,**(undefined4 **)(&UNK_010f4408 + _UNK_010f49f0),0);
    PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_78,&uStack_48,uVar7,0,0);
    uStack_48 = uStack_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_88,&uStack_48,0x3dcccccd,0);
    uStack_48 = uStack_88;
    uStack_44 = uStack_84;
    uStack_40 = uStack_80;
    uStack_3c = uStack_7c;
    if (*(int *)(iVar6 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(iVar6 + 0x60),0);
    PrimeTween_Tween__Scale_2ce4684(&uStack_98,uVar7,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_98,&uStack_48,uStack_98,uStack_94,uStack_90,uStack_8c,0);
    uStack_48 = uStack_98;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uVar7 = thunk_FUN_00f00cdc(*puVar4);
    System_Action___ctor_2b10bac(uVar7,iVar6,**(undefined4 **)(&UNK_010f4508 + _UNK_010f49f4),0);
    PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_a8,&uStack_48,uVar7,0,0);
    uStack_48 = uStack_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    if (*(int *)(iVar6 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(iVar6 + 100),0);
    PrimeTween_Tween__Scale_2ce4684(&uStack_b8,uVar7,0x3f933333,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_b8,&uStack_48,uStack_b8,uStack_b4,uStack_b0,uStack_ac,0);
    uVar8 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xa0),(byte)(in_fpscr >> 0x16) & 3);
    uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xa8),(byte)(in_fpscr >> 0x16) & 3);
    uStack_48 = uStack_b8;
    uStack_44 = uStack_b4;
    uStack_40 = uStack_b0;
    uStack_3c = uStack_ac;
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(&UNK_010f45e0 + _UNK_010f49f8));
    System_Action_float____ctor_1f12930
              (uVar7,iVar6,**(undefined4 **)(&UNK_010f4600 + _UNK_010f49fc),0);
    PrimeTween_Tween__Custom_2ce885c(&uStack_c8,uVar8,uVar9,0x3f000000,uVar7,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_c8,&uStack_48,uStack_c8,uStack_c4,uStack_c0,uStack_bc,0);
    uStack_48 = uStack_c8;
    uStack_44 = uStack_c4;
    uStack_40 = uStack_c0;
    uStack_3c = uStack_bc;
    if (*(int *)(iVar6 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(iVar6 + 100),0);
    PrimeTween_Tween__Scale_2ce4684(&uStack_d8,uVar7,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Chain_2cee04c
              (&uStack_d8,&uStack_48,uStack_d8,uStack_d4,uStack_d0,uStack_cc,0);
    uStack_48 = uStack_d8;
    uStack_44 = uStack_d4;
    uStack_40 = uStack_d0;
    uStack_3c = uStack_cc;
    uVar7 = thunk_FUN_00f00cdc(*puVar4);
    System_Action___ctor_2b10bac(uVar7,iVar6,**(undefined4 **)(&UNK_010f4728 + _UNK_010f4a00),0);
    PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_e8,&uStack_48,uVar7,0,0);
    *(undefined4 *)(param_1 + 0x18) = uStack_e8;
    *(undefined4 *)(param_1 + 0x1c) = uStack_e4;
    *(undefined4 *)(param_1 + 0x20) = uStack_e0;
    *(undefined4 *)(param_1 + 0x24) = uStack_dc;
    thunk_FUN_00ec5080(param_1 + 0x20,0);
    uVar7 = Rotatelab_CloudRush_CloudRushManager__MoveNextCoroutine_10e164c(iVar6);
    uVar7 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar6,uVar7,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
    uVar7 = 6;
code_r0x010f4790:
    *(undefined4 *)(param_1 + 8) = uVar7;
    return 1;
  case 6:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar7 = PrimeTween_Sequence__ToYieldInstruction_2ceec78(param_1 + 0x18,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    thunk_FUN_00ec5080();
    *(undefined4 *)(param_1 + 8) = 7;
    return 1;
  case 7:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar4 = *(undefined4 **)(&UNK_010f4190 + _UNK_010f4a04);
    *(undefined4 *)(iVar6 + 0x9c) = *(undefined4 *)(iVar6 + 0xa4);
    *(undefined4 *)(iVar6 + 0xa0) = *(undefined4 *)(iVar6 + 0xa8);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    if (iVar1 == 1) {
      if (*(int *)(iVar6 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(*(int *)(iVar6 + 0x40),1,0);
    }
    else {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
      if (iVar1 == 2) {
        if (*(int *)(iVar6 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_UI_PopupController__Hide_1124930(*(int *)(iVar6 + 0x3c),0);
        piVar5 = *(int **)(&UNK_010f481c + _UNK_010f4a08);
        *(undefined1 *)(iVar6 + 0xb5) = 0;
        iVar1 = *piVar5;
        iVar2 = *(int *)(iVar1 + 0x74);
        *(undefined1 *)(iVar6 + 0x7c) = 1;
        if (iVar2 == 0) {
          FUN_00ec3934();
          iVar1 = *piVar5;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x1a0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
      }
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
    ;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8)
    ;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
    ;
code_r0x010f4864:
    Rotatelab_CloudRush_CloudRushManager__UpdateOfferButtonBackgroundImage_10e04a8(iVar6);
  default:
    goto LAB_010f496c;
  }
  *(undefined4 *)(param_1 + 8) = uVar7;
  uVar7 = 1;
LAB_010f496c:
  return uVar7;
}

