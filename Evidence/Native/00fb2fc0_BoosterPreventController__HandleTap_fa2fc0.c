/* IL2CPP: BoosterPreventController$$HandleTap
void BoosterPreventController__HandleTap (BoosterPreventController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterPreventController$$HandleTap
   void BoosterPreventController__HandleTap (BoosterPreventController_o* __this, const MethodInfo*
   method); */

void BoosterPreventController__HandleTap_fa2fc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  int aiStack_64 [3];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar4 = (char *)(_UNK_00fb3234 + 0xfb2fe0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb3238 + 0xfb2ff4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb323c + 0xfb3000));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb3240 + 0xfb300c));
    *pcVar4 = '\x01';
  }
  aiStack_64[2] = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  aiStack_64[0] = 0;
  aiStack_64[1] = 0;
  uStack_50 = 0;
  uStack_44 = 0;
  iStack_68 = 0;
  uStack_4c = aiStack_64[2];
  uStack_48 = uStack_58;
  uStack_40 = aiStack_64[2];
  uStack_3c = uStack_58;
  uStack_38 = uStack_54;
  iVar1 = UnityEngine_Camera__get_main_35aede4(0);
  UnityEngine_Input__get_mousePosition_368b588(&uStack_80,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__ScreenPointToRay_35aedac(&uStack_80,iVar1,uStack_80,uStack_7c,uStack_78,0);
  iVar1 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Camera__get_farClipPlane_35abc24(iVar1,0);
  if (*(int *)(**(int **)(_UNK_00fb3244 + 0xfb30d0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Physics__Raycast_3692cac
                    (uStack_80,uStack_7c,uStack_78,uStack_74,uStack_70,uStack_6c,aiStack_64 + 1,
                     uVar2,0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x3c) == 3) {
      iVar1 = UnityEngine_RaycastHit__get_transform_36961e0(aiStack_64 + 1,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__TryGetComponent_object__14402fc
                        (iVar1,&iStack_68,**(undefined4 **)(_UNK_00fb324c + 0xfb31bc));
      if (iVar1 != 0) {
        if (iStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int **)(iStack_68 + 0xbc) != (int *)0x0) {
          iVar1 = **(int **)(iStack_68 + 0xbc);
          uVar3 = (uint)*(byte *)(**(int **)(_UNK_00fb3250 + 0xfb31f4) + 0xb8);
          if ((uVar3 <= *(byte *)(iVar1 + 0xb8)) &&
             (*(int *)(*(int *)(iVar1 + 100) + uVar3 * 4 + -4) ==
              **(int **)(_UNK_00fb3250 + 0xfb31f4))) {
            return;
          }
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x3c) != 1) {
        return;
      }
      iVar1 = UnityEngine_RaycastHit__get_transform_36961e0(aiStack_64 + 1,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__TryGetComponent_object__14402fc
                        (iVar1,aiStack_64,**(undefined4 **)(_UNK_00fb3248 + 0xfb3158));
      if (iVar1 == 0) {
        return;
      }
      if (aiStack_64[0] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(aiStack_64[0] + 0xc0) == '\0') {
        return;
      }
    }
  }
  BoosterPreventController__OnCancelButtonClicked_fa3254(param_1);
  return;
}

