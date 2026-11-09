/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$HideNotification
void Rotatelab_SeasonPass_SeasonPassController__HideNotification (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$HideNotification
   void Rotatelab_SeasonPass_SeasonPassController__HideNotification
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__HideNotification_10a56b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x18);
  pcVar3 = (char *)(_UNK_010b5728 + 0x10b56c8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b572c + 0x10b56dc));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(**(int **)(_UNK_010b5730 + 0x10b56f4) + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar1,puVar1[1],puVar1[2],0);
  return;
}

