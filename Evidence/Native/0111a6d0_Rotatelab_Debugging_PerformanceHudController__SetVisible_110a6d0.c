/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$SetVisible
void Rotatelab_Debugging_PerformanceHudController__SetVisible (Rotatelab_Debugging_PerformanceHudController_o* __this, bool isOn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$SetVisible
   void Rotatelab_Debugging_PerformanceHudController__SetVisible
   (Rotatelab_Debugging_PerformanceHudController_o* __this, bool isOn, const MethodInfo* method); */

void Rotatelab_Debugging_PerformanceHudController__SetVisible_110a6d0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_0111a78c + 0x111a6e8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a790 + 0x111a6fc));
    *pcVar3 = '\x01';
  }
  if (*(byte *)(param_1 + 0x40) != param_2) {
    piVar1 = *(int **)(_UNK_0111a794 + 0x111a71c);
    uVar4 = *(undefined4 *)(param_1 + 0x10);
    *(char *)(param_1 + 0x40) = (char)param_2;
    if (*(int *)(*piVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x10),param_2,0);
    }
    if (param_2 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

