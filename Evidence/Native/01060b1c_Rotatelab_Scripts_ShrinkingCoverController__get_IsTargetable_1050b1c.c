/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$get_IsTargetable
bool Rotatelab_Scripts_ShrinkingCoverController__get_IsTargetable (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$get_IsTargetable
   bool Rotatelab_Scripts_ShrinkingCoverController__get_IsTargetable
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

bool Rotatelab_Scripts_ShrinkingCoverController__get_IsTargetable_1050b1c(int param_1)

{
  if (*(int *)(param_1 + 0x68) < 1) {
    return false;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    return *(char *)(param_1 + 0x20) != '\0';
  }
  return false;
}

