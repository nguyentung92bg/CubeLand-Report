/* IL2CPP: Rotatelab.Scripts.BombController$$get_IsTargetable
bool Rotatelab_Scripts_BombController__get_IsTargetable (Rotatelab_Scripts_BombController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BombController$$get_IsTargetable
   bool Rotatelab_Scripts_BombController__get_IsTargetable (Rotatelab_Scripts_BombController_o*
   __this, const MethodInfo* method); */

undefined1 Rotatelab_Scripts_BombController__get_IsTargetable_ff64fc(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    if (*(char *)(param_1 + 0x19) == '\0') {
      return 0;
    }
    uVar1 = 0;
    if (*(char *)(param_1 + 0x20) != '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

