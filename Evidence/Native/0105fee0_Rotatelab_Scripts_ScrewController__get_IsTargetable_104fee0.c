/* IL2CPP: Rotatelab.Scripts.ScrewController$$get_IsTargetable
bool Rotatelab_Scripts_ScrewController__get_IsTargetable (Rotatelab_Scripts_ScrewController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ScrewController$$get_IsTargetable
   bool Rotatelab_Scripts_ScrewController__get_IsTargetable (Rotatelab_Scripts_ScrewController_o*
   __this, const MethodInfo* method); */

bool Rotatelab_Scripts_ScrewController__get_IsTargetable_104fee0(int param_1)

{
  if (*(int *)(param_1 + 0x54) < 1) {
    return false;
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    return *(char *)(param_1 + 0x20) != '\0';
  }
  return false;
}

