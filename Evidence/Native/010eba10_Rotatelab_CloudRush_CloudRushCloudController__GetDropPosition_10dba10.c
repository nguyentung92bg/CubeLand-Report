/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$GetDropPosition
UnityEngine_Vector2_o Rotatelab_CloudRush_CloudRushCloudController__GetDropPosition (Rotatelab_CloudRush_CloudRushCloudController_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$GetDropPosition
   UnityEngine_Vector2_o Rotatelab_CloudRush_CloudRushCloudController__GetDropPosition
   (Rotatelab_CloudRush_CloudRushCloudController_o* __this, int32_t index, const MethodInfo*
   method); */

void Rotatelab_CloudRush_CloudRushCloudController__GetDropPosition_10dba10
               (undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_010ebb6c + 0x10eba30);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebb70 + 0x10eba44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebb74 + 0x10eba50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebb78 + 0x10eba5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebb7c + 0x10eba68));
    *pcVar3 = '\x01';
  }
  if (-1 < param_3) {
    if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (param_3 < *(int *)(*(int *)(param_2 + 0x14) + 0xc)) {
      if (*(int *)(param_2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_Vector2___get_Item_26f9bfc
                (&uStack_28,*(int *)(param_2 + 0x14),param_3,
                 **(undefined4 **)(_UNK_010ebb98 + 0x10ebab8));
      goto LAB_010ebb60;
    }
  }
  iStack_1c = param_3;
  uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010ebb80 + 0x10ebad8) + 0x24),&iStack_1c);
  uVar1 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_010ebb84 + 0x10ebaf4),uVar1,0);
  if (*(int *)(**(int **)(_UNK_010ebb88 + 0x10ebb08) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__LogWarning_35b0090(uVar1,0);
  pcVar3 = (char *)(_UNK_010ebb8c + 0x10ebb30);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ebb90 + 0x10ebb44));
    *pcVar3 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010ebb94 + 0x10ebb58) + 0x5c);
  uStack_28 = *puVar2;
  uStack_24 = puVar2[1];
LAB_010ebb60:
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

