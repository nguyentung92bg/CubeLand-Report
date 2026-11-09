/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsTargetableValid
bool Rotatelab_Scripts_BlasterController__IsTargetableValid (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BaseTargetableController_o* targetable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$IsTargetableValid
   bool Rotatelab_Scripts_BlasterController__IsTargetableValid
   (Rotatelab_Scripts_BlasterController_o* __this, Rotatelab_Scripts_BaseTargetableController_o*
   targetable, const MethodInfo* method); */

bool Rotatelab_Scripts_BlasterController__IsTargetableValid_10369e0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01046ae0 + 0x10469f8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046ae4 + 0x1046a0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01046ae8 + 0x1046a18));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01046aec + 0x1046a2c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  bVar3 = false;
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_2,0,0);
  if (iVar1 == 0) {
    if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = (**(code **)(*param_2 + 0xf0))(param_2,*(undefined4 *)(*param_2 + 0xf4));
    if (iVar1 != 0) {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_01046af0 + 0x1046a8c) + 0xb8);
      if ((*(byte *)(*param_2 + 0xb8) < uVar2) ||
         (*(int *)(*(int *)(*param_2 + 100) + uVar2 * 4 + -4) !=
          **(int **)(_UNK_01046af0 + 0x1046a8c))) {
        bVar3 = true;
        if (*(int *)(param_1 + 0x10c) != 0x16) {
          bVar3 = param_2[5] == *(int *)(param_1 + 0x10c);
        }
      }
      else {
        bVar3 = true;
      }
    }
  }
  return bVar3;
}

