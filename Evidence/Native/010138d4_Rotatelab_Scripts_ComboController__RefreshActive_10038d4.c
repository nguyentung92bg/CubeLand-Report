/* IL2CPP: Rotatelab.Scripts.ComboController$$RefreshActive
void Rotatelab_Scripts_ComboController__RefreshActive (Rotatelab_Scripts_ComboController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboController$$RefreshActive
   void Rotatelab_Scripts_ComboController__RefreshActive (Rotatelab_Scripts_ComboController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ComboController__RefreshActive_10038d4(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  bool bVar5;
  
  pcVar3 = (char *)(_UNK_010139e8 + 0x10138e8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010139ec + 0x10138fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010139f0 + 0x1013908));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010139f4 + 0x1013914));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010139f8 + 0x1013928));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (*(int *)(**(int **)(_UNK_010139fc + 0x1013948) + 0x74) == 0) {
    FUN_00ec3934();
  }
  bVar5 = false;
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar1,0,0);
  if (iVar2 != 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x10) == 1) {
      if (*(char *)(param_1 + 0x24) == '\0') {
        iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                          (**(undefined4 **)(_UNK_01013a00 + 0x10139a8));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        bVar5 = *(char *)(iVar1 + 0xc) != '\0';
      }
      goto LAB_010139d8;
    }
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
LAB_010139d8:
  pcVar3 = (char *)(_UNK_01013fd4 + 0x1013f38);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013fd8 + 0x1013f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013fdc + 0x1013f58));
    *pcVar3 = '\x01';
  }
  if ((*(char *)(param_1 + 0x18) != '\0') == bVar5) {
    return;
  }
  piVar4 = *(int **)(_UNK_01013fe0 + 0x1013f80);
  *(bool *)(param_1 + 0x18) = bVar5;
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
    bVar5 = false;
    if (*(char *)(param_1 + 0x18) != '\0') {
      bVar5 = true;
    }
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x58);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),bVar5,*(undefined4 *)(iVar1 + 0x14));
  return;
}

