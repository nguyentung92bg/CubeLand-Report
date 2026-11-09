/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$HideInRegistration
void Rotatelab_CloudRush_CloudRushPlayerAvatarController__HideInRegistration (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$HideInRegistration
   void Rotatelab_CloudRush_CloudRushPlayerAvatarController__HideInRegistration
   (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushPlayerAvatarController__HideInRegistration_10e5d4c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [4];
  float fStack_24;
  
  pcVar3 = (char *)(_UNK_010f5e58 + 0x10f5d68);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5e5c + 0x10f5d7c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(auStack_28,*(int *)(param_1 + 0x10),0);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = **(int **)(_UNK_010f5e60 + 0x10f5db0);
  *(float *)(param_1 + 0x48) = fStack_24;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar4,fStack_24 + 30.0,0);
  iVar1 = *(int *)(param_1 + 0x10);
  pcVar3 = (char *)(_UNK_010f5e64 + 0x10f5df4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5e68 + 0x10f5e08));
    *pcVar3 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010f5e6c + 0x10f5e20) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  return;
}

