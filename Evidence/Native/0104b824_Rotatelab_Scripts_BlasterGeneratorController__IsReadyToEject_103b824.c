/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$IsReadyToEject
bool Rotatelab_Scripts_BlasterGeneratorController__IsReadyToEject (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterGeneratorController$$IsReadyToEject
   bool Rotatelab_Scripts_BlasterGeneratorController__IsReadyToEject
   (Rotatelab_Scripts_BlasterGeneratorController_o* __this, const MethodInfo* method); */

uint Rotatelab_Scripts_BlasterGeneratorController__IsReadyToEject_103b824(int param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_0104b8b0 + 0x104b838);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0104b8b4 + 0x104b84c));
    *pcVar3 = '\x01';
  }
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  if (*(int *)(**(int **)(_UNK_0104b8b8 + 0x104b860) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
  if (uVar1 == 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    iVar2 = *(int *)(param_1 + 0x60);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20) = uVar4;
  }
  return uVar1 ^ 1;
}

