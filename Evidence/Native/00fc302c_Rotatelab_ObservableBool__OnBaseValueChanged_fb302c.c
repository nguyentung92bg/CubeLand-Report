/* IL2CPP: Rotatelab.ObservableBool$$OnBaseValueChanged
void Rotatelab_ObservableBool__OnBaseValueChanged (Rotatelab_ObservableBool_o* __this, int64_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableBool$$OnBaseValueChanged
   void Rotatelab_ObservableBool__OnBaseValueChanged (Rotatelab_ObservableBool_o* __this, int64_t
   value, const MethodInfo* method); */

void Rotatelab_ObservableBool__OnBaseValueChanged_fb302c
               (int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fc3064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),
             (int)-(param_4 + (uint)(param_3 != 0)) < 0 !=
             (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(param_3 != 0))),
             *(undefined4 *)(iVar1 + 0x14));
  return;
}

