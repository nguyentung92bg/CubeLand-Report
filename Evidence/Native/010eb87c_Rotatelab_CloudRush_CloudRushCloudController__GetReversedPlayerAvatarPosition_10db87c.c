/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$GetReversedPlayerAvatarPosition
UnityEngine_Vector2_o Rotatelab_CloudRush_CloudRushCloudController__GetReversedPlayerAvatarPosition (Rotatelab_CloudRush_CloudRushCloudController_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$GetReversedPlayerAvatarPosition
   UnityEngine_Vector2_o
   Rotatelab_CloudRush_CloudRushCloudController__GetReversedPlayerAvatarPosition
   (Rotatelab_CloudRush_CloudRushCloudController_o* __this, int32_t index, const MethodInfo*
   method); */

void Rotatelab_CloudRush_CloudRushCloudController__GetReversedPlayerAvatarPosition_10db87c
               (undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint uStack_1c;
  
  pcVar4 = (char *)(_UNK_010eb9e0 + 0x10eb89c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb9e4 + 0x10eb8b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb9e8 + 0x10eb8bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb9ec + 0x10eb8c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb9f0 + 0x10eb8d4));
    *pcVar4 = '\x01';
  }
  if (-1 < (int)param_3) {
    if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)param_3 < *(int *)(*(int *)(param_2 + 0x10) + 0xc)) {
      iVar3 = *(int *)(param_2 + 0x10);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_Vector2___get_Item_26f9bfc
                (&uStack_28,iVar3,*(int *)(iVar3 + 0xc) + ~param_3,
                 **(undefined4 **)(_UNK_010eba0c + 0x10eb920));
      goto LAB_010eb9d4;
    }
  }
  uStack_1c = param_3;
  uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010eb9f4 + 0x10eb94c) + 0x24),&uStack_1c);
  uVar1 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_010eb9f8 + 0x10eb968),uVar1,0);
  if (*(int *)(**(int **)(_UNK_010eb9fc + 0x10eb97c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__LogWarning_35b0090(uVar1,0);
  pcVar4 = (char *)(_UNK_010eba00 + 0x10eb9a4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eba04 + 0x10eb9b8));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010eba08 + 0x10eb9cc) + 0x5c);
  uStack_28 = *puVar2;
  uStack_24 = puVar2[1];
LAB_010eb9d4:
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

