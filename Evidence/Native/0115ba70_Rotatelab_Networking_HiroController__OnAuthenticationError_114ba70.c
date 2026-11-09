/* IL2CPP: Rotatelab.Networking.HiroController$$OnAuthenticationError
void Rotatelab_Networking_HiroController__OnAuthenticationError (Rotatelab_Networking_HiroController_o* __this, System_Exception_o* e, int32_t attempt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$OnAuthenticationError
   void Rotatelab_Networking_HiroController__OnAuthenticationError
   (Rotatelab_Networking_HiroController_o* __this, System_Exception_o* e, int32_t attempt, const
   MethodInfo* method); */

void Rotatelab_Networking_HiroController__OnAuthenticationError_114ba70(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  
  pcVar3 = (char *)(_UNK_0115bbc4 + 0x115ba88);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115bbc8 + 0x115ba9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115bbcc + 0x115baa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115bbd0 + 0x115bab4));
    *pcVar3 = '\x01';
  }
  if (param_2 != (int *)0x0) {
    if (*param_2 == **(int **)(_UNK_0115bbd4 + 0x115bad0)) {
      iVar2 = param_2[0x12];
      iVar1 = param_2[0x13];
      bVar4 = iVar2 == 0x191 && iVar1 == 0;
      if (iVar2 != 0x191 || iVar1 != 0) {
        bVar4 = iVar2 == 0x194 && iVar1 == 0;
      }
      if ((bVar4) || (param_2[0x14] == 0x10)) {
        if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Save_SavedValue_object___ResetValue_1a8bd54
                  (*(int *)(param_1 + 0x34),**(undefined4 **)(_UNK_0115bbd8 + 0x115bb30));
        iVar1 = *(int *)(param_1 + 0x38);
        goto LAB_0115bb90;
      }
    }
    if (*param_2 == **(int **)(_UNK_0115bbdc + 0x115bae8)) {
      iVar1 = param_2[0x12];
      iVar2 = param_2[0x13];
      bVar4 = iVar1 == 0x191 && iVar2 == 0;
      if (iVar1 != 0x191 || iVar2 != 0) {
        bVar4 = iVar1 == 0x194 && iVar2 == 0;
      }
      if ((!bVar4) && (param_2[0x14] != 0x10)) {
        return;
      }
      if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Save_SavedValue_object___ResetValue_1a8bd54
                (*(int *)(param_1 + 0x3c),**(undefined4 **)(_UNK_0115bbe0 + 0x115bb84));
      iVar1 = *(int *)(param_1 + 0x40);
LAB_0115bb90:
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_PlayerPrefs__DeleteKey_35f76ec(*(undefined4 *)(iVar1 + 8),0);
      *(undefined1 *)(iVar1 + 0x1c) = 0;
      return;
    }
  }
  return;
}

