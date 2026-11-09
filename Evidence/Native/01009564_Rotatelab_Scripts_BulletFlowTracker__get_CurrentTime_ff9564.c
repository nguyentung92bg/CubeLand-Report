/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$get_CurrentTime
float Rotatelab_Scripts_BulletFlowTracker__get_CurrentTime (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletFlowTracker$$get_CurrentTime
   float Rotatelab_Scripts_BulletFlowTracker__get_CurrentTime
   (Rotatelab_Scripts_BulletFlowTracker_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_BulletFlowTracker__get_CurrentTime_ff9564(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(char *)(param_1 + 0x1e) != '\0') {
    return *(undefined4 *)(param_1 + 0x20);
  }
  if (*(code **)(_UNK_03620938 + 0x362090c) == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_0362093c + 0x3620924);
    *(code **)(_UNK_03620940 + 0x3620930) = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x03620934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x03620910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(_UNK_03620938 + 0x362090c))();
  return uVar1;
}

