/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$get_IsUsable
bool Rotatelab_Scripts_BlasterDockController__get_IsUsable (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterDockController$$get_IsUsable
   bool Rotatelab_Scripts_BlasterDockController__get_IsUsable
   (Rotatelab_Scripts_BlasterDockController_o* __this, const MethodInfo* method); */

uint Rotatelab_Scripts_BlasterDockController__get_IsUsable_100c698(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  pcVar3 = (char *)(_UNK_0101c738 + 0x101c6ac);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c73c + 0x101c6c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101c740 + 0x101c6cc));
    *pcVar3 = '\x01';
  }
  uVar1 = Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                    (param_1,**(undefined4 **)(_UNK_0101c744 + 0x101c6e0));
  if (*(int *)(**(int **)(_UNK_0101c748 + 0x101c6f8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = 0;
  iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar1,0,0);
  if (iVar2 != 0) {
    uVar4 = Rotatelab_Scripts_BlasterDockController__get_HasIvyLock_100c628(param_1);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}

