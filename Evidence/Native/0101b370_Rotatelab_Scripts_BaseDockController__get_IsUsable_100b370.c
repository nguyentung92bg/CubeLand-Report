/* IL2CPP: Rotatelab.Scripts.BaseDockController$$get_IsUsable
bool Rotatelab_Scripts_BaseDockController__get_IsUsable (Rotatelab_Scripts_BaseDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BaseDockController$$get_IsUsable
   bool Rotatelab_Scripts_BaseDockController__get_IsUsable (Rotatelab_Scripts_BaseDockController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BaseDockController__get_IsUsable_100b370(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0101b3d4 + 0x101b384);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101b3d8 + 0x101b398));
    *pcVar2 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_0101b3dc + 0x101b3ac) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__op_Equality_36033f4(uVar1,0,0);
  return;
}

