/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$DestroyExternally
void Rotatelab_Scripts_BaseTargetableController__DestroyExternally (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BaseTargetableController$$DestroyExternally
   void Rotatelab_Scripts_BaseTargetableController__DestroyExternally
   (Rotatelab_Scripts_BaseTargetableController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BaseTargetableController__DestroyExternally_ff5aec(int *param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((char)param_1[6] != '\0') {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x138);
  uVar1 = *(undefined4 *)(*param_1 + 0x13c);
  *(undefined2 *)(param_1 + 6) = 1;
                    /* WARNING: Could not recover jumptable at 0x01005b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1);
  return;
}

