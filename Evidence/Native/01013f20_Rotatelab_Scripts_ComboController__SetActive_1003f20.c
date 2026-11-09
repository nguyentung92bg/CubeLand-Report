/* IL2CPP: Rotatelab.Scripts.ComboController$$SetActive
void Rotatelab_Scripts_ComboController__SetActive (Rotatelab_Scripts_ComboController_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ComboController$$SetActive
   void Rotatelab_Scripts_ComboController__SetActive (Rotatelab_Scripts_ComboController_o* __this,
   bool isActive, const MethodInfo* method); */

void Rotatelab_Scripts_ComboController__SetActive_1003f20(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01013fd4 + 0x1013f38);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013fd8 + 0x1013f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01013fdc + 0x1013f58));
    *pcVar2 = '\x01';
  }
  if ((*(char *)(param_1 + 0x18) != '\0') == param_2) {
    return;
  }
  piVar3 = *(int **)(_UNK_01013fe0 + 0x1013f80);
  *(char *)(param_1 + 0x18) = (char)param_2;
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
    param_2 = 0;
    if (*(char *)(param_1 + 0x18) != '\0') {
      param_2 = 1;
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
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}

